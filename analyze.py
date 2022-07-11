from fileinput import filename
from itertools import cycle
from math import ceil
from os import error
import matplotlib.pyplot as plt
import re
import os
from nbformat import read
import numpy as np
from numpy.core.defchararray import startswith
from numpy.lib.function_base import append
from psutil import boot_time

import ant_bench
import bitfusion_bench

#checks for correct input format
# if (len(sys.argv)!=2): 
#     sys.exit("The format is 'python analyze_gpgpusim_output.py <filename>'")
# metric_name=sys.argv[1]
metric_name="ipc"

def get_file_path():
    read_path = r"output/"
    return read_path

def read_file():
    files=[]
    for it in os.listdir(get_file_path()):
        #if(it.startswith(filename)):
        files.append(it)
    return files
def conv2gemm(module, tot_list):
    conv_list = ""
    tot_final_list = []
    batch_size = 64
    for item in module:
        for it in item:
            conv_list += str(it)
        leng = len(item)
        if (item[leng - 1] == 0):
            stride = item[3][0]
            padding = item[4][0]
            img_row = item[0][2]
            img_col = item[0][3]
            kernel_size = item[1][2]
            bit = item[5]
            channel = item[0][1]
            im2col_row = ((img_row + 2 * padding) - (kernel_size - 1)) / stride
            im2col_col = ((img_col + 2 * padding) - (kernel_size - 1)) / stride
            m = im2col_row * im2col_col * batch_size
            n = item[1][0]
            k = kernel_size * kernel_size * channel
        elif (item[leng - 1] == 1):
            m = item[0][0] * batch_size
            n = item[1][0]
            k = item[0][1]
            bit = item[5]
        k = k / (16 / bit)
        k = ceil(k)
        while(m % 8 != 0):
            m = m + 1
        while(n % 8 != 0):
            n = n + 1
        while(k % 8 != 0):
            k = k + 1
        gemm_size = []
        gemm_size.append(m)
        gemm_size.append(n)
        gemm_size.append(k)

        tot_list[conv_list] = gemm_size
        conv_list = ""
def process_result(mode, file):
    res_data = {}
    pattern_cycle = re.compile("gpu_tot_sim_cycle = (\d+)")
    pattern_inst=re.compile("gpu_tot_sim_insn = (\d+)")
    pattern_l2cache_access = re.compile("L2_total_cache_accesses = (\d+)")
    pattern_l2cache_miss = re.compile("L2_total_cache_misses = (\d+)")
    pattern_l2bw = re.compile("L2_BW_total")
    pattern_dram_stall = re.compile("gpu_stall_dramfull = (\d+)")
    for i, line in enumerate(open(get_file_path() + file)):
        for match in re.finditer(pattern_cycle, line):
            tmp = list(match.group(1))
            tmp = float(''.join(tmp))
            res["cycle"] = tmp
        for match in re.finditer(pattern_inst, line):
            tmp = list(match.group(1))
            tmp = float(''.join(tmp))
            res["inst"] = tmp
        for match in re.finditer(pattern_l2cache_access, line):
            tmp = list(match.group(1))
            tmp = float(''.join(tmp))
            res["l2cache_access"] = tmp
        for match in re.finditer(pattern_l2cache_miss, line):
            tmp = list(match.group(1))
            tmp = float(''.join(tmp))
            res["l2cache_miss"] = tmp
        for match in re.finditer(pattern_l2bw, line):
            tmp = list(match.group(1))
            tmp = float(''.join(tmp))
            res["l2_bw"] = tmp
        for match in re.finditer(pattern_dram_stall, line):
            tmp = list(match.group(1))
            tmp = float(''.join(tmp))
            res["dram_stall"] = tmp
    return res_data

def show_graph():
    ant_tot_list = {}
    conv2gemm(ant_bench.vgg16, ant_tot_list)
    conv2gemm(ant_bench.cola, ant_tot_list)
    # print(ant_tot_list)
    bitfusion_tot_list = {}
    conv2gemm(bitfusion_bench.vgg16, bitfusion_tot_list)
    files = read_file()
    res_data = process_result("ant", file)
    print(res_data)
res=show_graph()
