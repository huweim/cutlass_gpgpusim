from fileinput import filename
from math import ceil
from os import error
from types import resolve_bases
import matplotlib.pyplot as plt
import re
import os
from nbformat import read
import numpy as np
from numpy.core.defchararray import startswith
from numpy.lib.function_base import append
from psutil import boot_time


def get_file_path(path):
    read_path = os.getcwd() + "/" + path
    return read_path



def conv2gemm(file, path):
    m_size = re.compile("(\d+)")
    m = 0
    conv_list = []
    tot_list = []
    tot_final_list = []
    for i,line in enumerate(open(get_file_path(path) + file,  "r" )):
        m = 0
        n = 0
        k = 0
        channel = 0
        bit = 0
        batch_size = 64
        for match in re.finditer(m_size, line):
            tmp = list(match.group(1))
            tmp = int(''.join(tmp))
            conv_list.append(tmp)
        leng = len(conv_list)
        if(leng > 0 and conv_list[leng - 1] == 0):
            # conv op
            stride = conv_list[12]
            padding = conv_list[14]
            img_row = conv_list[2]
            img_col = conv_list[3]
            kernel_size = conv_list[6]
            bit = conv_list[leng - 2]
            channel = conv_list[1]
            # in this case, row = col
            im2col_row = ((img_row + 2 * padding) - (kernel_size - 1)) / stride
            im2col_col = ((img_col + 2 * padding) - (kernel_size - 1)) / stride
            m = im2col_row * im2col_col * batch_size
            k = kernel_size * kernel_size * channel
            # n: number of output
            n = conv_list[4]
        elif(leng > 0 and conv_list[leng - 1] == 1):
            m = conv_list[0] * batch_size
            k = conv_list[1]
            n = conv_list[2]
            bit = conv_list[leng - 2]
            channel = 1
        if( leng > 5):
            t = 16 / bit
            m = ceil(m)
            n = ceil(n)
            k = k / t
            k = ceil(k)
            while(m % 8 != 0):
                m = m + 1
            while(k % 8 != 0):
                k = k + 1
            while(n % 8 != 0):
                n = n + 1
            gemm_size = []
            gemm_size.append(m)
            gemm_size.append(k)
            gemm_size.append(n)
            tot_list.append(gemm_size)
            ff = open(get_file_path(path) + "res_tmp.csv",  "a")
            wr_line = "m = " + str(m) + " k = " + str(k) + " n = " + str(n) + "\n"
            ff.write(wr_line)
            ff.close()
        
        conv_list.clear()
    for item in tot_list:
        if not item in tot_final_list:
            tot_final_list.append(item)
    ff = open(get_file_path(path) + "res_tmp.csv",  "a")
    ff.write("\n\n")
    for item in tot_final_list:
        wr_line = str(item[0]) + " " + str(item[1]) + " " + str(item[2]) + "\n"
        ff.write(wr_line)
    ff.close()

    ff = open(get_file_path(path) + "res_tmp.csv",  "a")
    ff.write("\n\n")
    if(file == "ant_bench.py"):
        i = 46
    else:
        i = 147
    for item in tot_final_list:
        wr_line = "  #ifdef WMMA_" + str(i) + "\n" + "  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,\n"+ "                                        cutlass::MatrixLayout::kColumnMajor,\n"+ "                                        cutlass::Shape<64, 128, 128> >\n" + "      WmmaGemmTraits" + str(i) + ";\n" + "  run_gemm<WmmaGemmTraits" + str(i) + ">(" + str(item[0]) +", " + str(item[2]) + ", " + str(item[1]) + ");\n  #endif\n" 
        i = i + 1 
        ff.write(wr_line)
    ff.close()

    ff = open(get_file_path(path) + "res_tmp.csv",  "a")
    ff.write("\n\n")
    if(file == "ant_bench.py"):
        i = 46
    else:
        i = 147
    for item in tot_final_list:
        str_m = str(item[0])
        str_n = str(item[2])
        str_k = str(item[1])
        m_n_k = str_m + "_" + str_n + "_" + str_k
        wr_line = "make CFLAGS=-DWMMA_" + str(i) + "\n" + "mkdir ./test/" + m_n_k + "\n" + "cp ./cutlass-test ./gpgpusim.config ./config_volta_islip.icnt ./test/" + m_n_k + "\n"  + "./test/" + m_n_k + "/cutlass-test >> ./output/" + m_n_k + ".log &\n" + "make clean\n"
        # wr_line = "make CFLAGS=-DWMMA_" + str(i) + "\n" + "./cutlass-test >> ./output/" + str(item[0]) + "_" + str(item[2]) + "_" + str(item[1]) + ".log &\n" + "make clean\n"

        i = i + 1 
        ff.write(wr_line)
    ff.close()
    return m

def process():
    # conv2gemm("ant_bench.py", '')
    conv2gemm("bitfusion_bench.py", '')


    # print(m)

res=process()


