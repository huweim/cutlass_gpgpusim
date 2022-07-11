from fileinput import filename
from itertools import cycle
from math import ceil
from os import error
from types import resolve_bases
import matplotlib.pyplot as plt
import re
import os
import sys
from nbformat import read
import numpy as np
from numpy.core.defchararray import startswith
from numpy.lib.function_base import append
from psutil import boot_time
from torch import ge

import ant_bench
import bitfusion_bench

def get_file_path(mode):
    if(mode == "ant"):
        read_path = r"d:/ShanghaiTech/2021-Fall/Note_Archive/Research/Intern/test_ANT/output_ant/"
    elif(mode == "bitfusion"):
        read_path = r"d:/ShanghaiTech/2021-Fall/Note_Archive/Research/Intern/test_ANT/output_bitfusion/"
    else:
        sys.exit("wrong mode")
    return read_path
def get_write_file_path():
    read_path = r"d:/ShanghaiTech/2021-Fall/Note_Archive/Research/Intern/test_ANT/write/"
    return read_path

def read_file(mode):
    files=[]
    for it in os.listdir(get_file_path(mode)):
        #if(it.startswith(filename)):
        files.append(it)
    return files
def conv2gemm(module, tot_list):
    conv_list = ""
    batch_size = 64
    for item in module:
        for it in item:
            conv_list += str(it) + ' '
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
        m = ceil(m)
        n = ceil(n)
        k = ceil(k)
        while(m % 8 != 0):
            m = m + 1
        while(n % 8 != 0):
            n = n + 1
        while(k % 8 != 0):
            k = k + 1
        gemm_size = []
        gemm_size.append(int(m))
        gemm_size.append(int(n))
        gemm_size.append(int(k))

        tot_list[conv_list] = gemm_size
        conv_list = ""
def process_result(mode, file):
    res_data = {}
    pattern_cycle = re.compile("gpu_sim_cycle = (\d+)")
    pattern_inst=re.compile("gpu_sim_insn = (\d+)")
    pattern_l1d_cache_access = re.compile("L1D_total_cache_accesses = (\d+)")
    pattern_l1c_cache_access = re.compile("L1C_total_cache_accesses = (\d+)")
    pattern_l2cache_access = re.compile("L2_total_cache_accesses = (\d+)")
    pattern_dram_read = re.compile("gpgpu_n_mem_read_global = (\d+)")
    pattern_dram_write = re.compile("gpgpu_n_mem_write_global = (\d+)")
    pattern_fp_access = re.compile("Total FP Acesses=(\d+)")
    pattern_sp_access = re.compile("Total SP Acesses=(\d+)")
    pattern_reg_read = re.compile("Total REG Reads=(\d+)")
    pattern_reg_write = re.compile("Total REG Writes=(\d+)")
    pattern_shared_mem_access = re.compile("!!!Total Shared memory access: (\d+)")

    res_data["cycle"] = 0
    res_data["inst"] = 0
    res_data["l1d_cache_access"] = 0
    res_data["l1c_cache_access"] = 0
    res_data["l2cache_access"] = 0
    res_data["mem_read_global"] = 0
    res_data["mem_write_global"] = 0
    res_data["fp_access"] = 0
    res_data["sp_access"] = 0
    res_data["reg_read"] = 0
    res_data["reg_write"] = 0
    res_data["shared_mem_access"] = 0
    
    for i, line in enumerate(open(get_file_path(mode) + file)):
        for match in re.finditer(pattern_cycle, line):
            tmp = list(match.group(1))
            tmp = float(''.join(tmp))
            res_data["cycle"] += tmp
        for match in re.finditer(pattern_inst, line):
            tmp = list(match.group(1))
            tmp = float(''.join(tmp))
            res_data["inst"] += tmp
        for match in re.finditer(pattern_l1d_cache_access, line):
            tmp = list(match.group(1))
            tmp = float(''.join(tmp))
            res_data["l1d_cache_access"] += tmp
        for match in re.finditer(pattern_l1c_cache_access, line):
            tmp = list(match.group(1))
            tmp = float(''.join(tmp))
            res_data["l1c_cache_access"] += tmp
        for match in re.finditer(pattern_l2cache_access, line):
            tmp = list(match.group(1))
            tmp = float(''.join(tmp))
            res_data["l2cache_access"] += tmp
        for match in re.finditer(pattern_dram_read, line):
            tmp = list(match.group(1))
            tmp = float(''.join(tmp))
            res_data["mem_read_global"] += tmp
        for match in re.finditer(pattern_dram_write, line):
            tmp = list(match.group(1))
            tmp = float(''.join(tmp))
            res_data["mem_write_global"] += tmp
        for match in re.finditer(pattern_fp_access, line):
            tmp = list(match.group(1))
            tmp = float(''.join(tmp))
            res_data["fp_access"] += tmp
        for match in re.finditer(pattern_sp_access, line):
            tmp = list(match.group(1))
            tmp = float(''.join(tmp))
            res_data["sp_access"] += tmp
        for match in re.finditer(pattern_reg_read, line):
            tmp = list(match.group(1))
            tmp = float(''.join(tmp))
            res_data["reg_read"] += tmp
        for match in re.finditer(pattern_reg_write, line):
            tmp = list(match.group(1))
            tmp = float(''.join(tmp))
            res_data["reg_write"] += tmp
        for match in re.finditer(pattern_shared_mem_access, line):
            tmp = list(match.group(1))
            tmp = float(''.join(tmp))
            res_data["shared_mem_access"] += tmp
    return res_data
def write_to_csv_cost(mode):
    if(mode == "ant"):
        ff = open(get_write_file_path() + "res_wr_ant.csv",  "a")
    elif(mode == "bitfusion"):
        ff = open(get_write_file_path() + "res_wr_bitfusion.csv",  "a")
    else:
        sys.exit("wrong mode")
    wr_line = "Glb_cost, Shm_cost, l2_cost, Reg_cost, PE_cost, Clk_cost, Static_cost\n"
    ff.write(wr_line)
    wr_line = "100, 6, 20, 2, 1, 1, 150\n\n"
    ff.write(wr_line)
    ff.close()
tot_stat = {}
def write_to_csv(module, tot_list, gemm_data, mode, model_name):
    # write first line
    if(mode == "ant"):
        ff = open(get_write_file_path() + "res_wr_ant.csv",  "a")
    elif(mode == "bitfusion"):
        ff = open(get_write_file_path() + "res_wr_bitfusion.csv",  "a")
    else:
        sys.exit("wrong mode")
    wr_line = model_name + ", , , , , , , , , , , , , , " + model_name + "\n"
    ff.write(wr_line)
    tmp1 = list(gemm_data.values())[0]
    wr_line = "conv/fc, m_n_k, "
    for item in tmp1:
        wr_line += item + ", "
    wr_line += "Glb, Shm, Reg, PE, Clk, Glb_energy, Shm_energy, Reg_energy, PE_energy, Clk_energy"
    wr_line += "\n"
    ff.write(wr_line)
    conv_list = ""
    sum_stat = {}
    cost = {}
    cost["Glb"] = 100
    cost["Shm"] = 6
    cost["l2"] = 20
    cost["Reg"] = 2
    cost["PE"] = 1
    cost["Clk"] = 1
    for item in module:
        for it in item:
            conv_list += str(it) + ' '
        wr_conv_list = conv_list.replace(',', ' ')
        wr_line = wr_conv_list + ", "
        gemm_size = tot_list[conv_list]
        str_gemm_size = str(gemm_size[0]) + "_" + str(gemm_size[1]) + "_" + str(gemm_size[2])
        wr_line += str_gemm_size + ", "
        tmp = gemm_data[str_gemm_size]

        tmp["Glb"] = tmp["mem_read_global"] + tmp["mem_write_global"]
        tmp["Shm"] = tmp["l1d_cache_access"] + tmp["l1c_cache_access"] + tmp["shared_mem_access"]
        tmp["Reg"] = ceil((tmp["reg_read"] + tmp["reg_write"]) / 32)
        tmp["PE"] = ceil((tmp["fp_access"] + tmp["sp_access"]) / 32)
        tmp["Clk"] = tmp["cycle"]
        tmp["Glb_energy"] = tmp["Glb"] * cost["Glb"]
        tmp["Shm_energy"] = tmp["Shm"] * cost["Shm"] + tmp["l2cache_access"] * cost["l2"]
        tmp["Reg_energy"] = tmp["Reg"] * cost["Reg"]
        tmp["PE_energy"] = tmp["PE"] * cost["PE"]
        tmp["Clk_energy"] = tmp["Clk"] * cost["Clk"]
        for key, value in tmp.items():
            wr_line += str(value) + ", "
            if key in sum_stat:
                sum_stat[key] += value
            else:   
                sum_stat[key] = value
        wr_line += "\n"
        ff.write(wr_line)
        conv_list = ""
    wr_line = "\n SUM , , "
    for value in sum_stat.values():
        wr_line += str(value) + ", "
    len_ = len(sum_stat)
    tot_stat[model_name + "_" + mode] = list(sum_stat.values())[len_ - 5:]
    wr_line += "\n"
    ff.write(wr_line)
    ff.write("\n")
    ff.close()
def ant_():
    ant_tot_list = {}
    conv2gemm(ant_bench.vgg16, ant_tot_list)
    conv2gemm(ant_bench.resnet18, ant_tot_list)
    conv2gemm(ant_bench.resnet50, ant_tot_list)
    conv2gemm(ant_bench.inceptionv3, ant_tot_list)
    conv2gemm(ant_bench.vit, ant_tot_list)
    conv2gemm(ant_bench.rte, ant_tot_list)
    conv2gemm(ant_bench.wnli, ant_tot_list)
    conv2gemm(ant_bench.mrpc, ant_tot_list)
    conv2gemm(ant_bench.cola, ant_tot_list)
    conv2gemm(ant_bench.sst_2, ant_tot_list)
    conv2gemm(ant_bench.qnli, ant_tot_list)
    conv2gemm(ant_bench.qqp, ant_tot_list)
    conv2gemm(ant_bench.mnli, ant_tot_list)

    files = read_file("ant")
    gemm_data = {}
    for file in files:
        str_tmp = file.split('.')[0]
        gemm_data[str_tmp] = process_result("ant", file)
    # print(gemm_data)
    write_to_csv_cost("ant")
    write_to_csv(ant_bench.vgg16, ant_tot_list, gemm_data, "ant", "vgg16")
    write_to_csv(ant_bench.resnet18, ant_tot_list, gemm_data, "ant", "resnet18")
    write_to_csv(ant_bench.resnet50, ant_tot_list, gemm_data, "ant", "resnet50")
    write_to_csv(ant_bench.inceptionv3, ant_tot_list, gemm_data, "ant", "inceptionv3")
    write_to_csv(ant_bench.vit, ant_tot_list, gemm_data, "ant", "vit")
    write_to_csv(ant_bench.rte, ant_tot_list, gemm_data, "ant", "rte")
    write_to_csv(ant_bench.wnli, ant_tot_list, gemm_data, "ant", "wnli")
    write_to_csv(ant_bench.mrpc, ant_tot_list, gemm_data, "ant", "mrpc")
    write_to_csv(ant_bench.cola, ant_tot_list, gemm_data, "ant", "cola")
    write_to_csv(ant_bench.sst_2, ant_tot_list, gemm_data, "ant", "sst_2")
    write_to_csv(ant_bench.qnli, ant_tot_list, gemm_data, "ant", "qnli")
    write_to_csv(ant_bench.qqp, ant_tot_list, gemm_data, "ant", "qqp")
    write_to_csv(ant_bench.mnli, ant_tot_list, gemm_data, "ant", "mnli")
def bitfution_():
    bitfusion_tot_list = {}
    conv2gemm(bitfusion_bench.vgg16, bitfusion_tot_list)
    conv2gemm(bitfusion_bench.resnet18, bitfusion_tot_list)
    conv2gemm(bitfusion_bench.resnet50, bitfusion_tot_list)
    conv2gemm(bitfusion_bench.inceptionv3, bitfusion_tot_list)
    conv2gemm(bitfusion_bench.vit, bitfusion_tot_list)
    conv2gemm(bitfusion_bench.rte, bitfusion_tot_list)
    conv2gemm(bitfusion_bench.wnli, bitfusion_tot_list)
    conv2gemm(bitfusion_bench.mrpc, bitfusion_tot_list)
    conv2gemm(bitfusion_bench.cola, bitfusion_tot_list)
    conv2gemm(bitfusion_bench.sst_2, bitfusion_tot_list)
    conv2gemm(bitfusion_bench.qnli, bitfusion_tot_list)
    conv2gemm(bitfusion_bench.qqp, bitfusion_tot_list)
    conv2gemm(bitfusion_bench.mnli, bitfusion_tot_list)

    files = read_file("bitfusion")
    gemm_data = {}
    for file in files:
        str_tmp = file.split('.')[0]
        gemm_data[str_tmp] = process_result("bitfusion", file)
    # print(gemm_data)
    write_to_csv_cost("bitfusion")
    write_to_csv(bitfusion_bench.vgg16, bitfusion_tot_list, gemm_data, "bitfusion", "vgg16")
    write_to_csv(bitfusion_bench.resnet18, bitfusion_tot_list, gemm_data, "bitfusion", "resnet18")
    write_to_csv(bitfusion_bench.resnet50, bitfusion_tot_list, gemm_data, "bitfusion", "resnet50")
    write_to_csv(bitfusion_bench.inceptionv3, bitfusion_tot_list, gemm_data, "bitfusion", "inceptionv3")
    write_to_csv(bitfusion_bench.vit, bitfusion_tot_list, gemm_data, "bitfusion", "vit")
    write_to_csv(bitfusion_bench.rte, bitfusion_tot_list, gemm_data, "bitfusion", "rte")
    write_to_csv(bitfusion_bench.wnli, bitfusion_tot_list, gemm_data, "bitfusion", "wnli")
    write_to_csv(bitfusion_bench.mrpc, bitfusion_tot_list, gemm_data, "bitfusion", "mrpc")
    write_to_csv(bitfusion_bench.cola, bitfusion_tot_list, gemm_data, "bitfusion", "cola")
    write_to_csv(bitfusion_bench.sst_2, bitfusion_tot_list, gemm_data, "bitfusion", "sst_2")
    write_to_csv(bitfusion_bench.qnli, bitfusion_tot_list, gemm_data, "bitfusion", "qnli")
    write_to_csv(bitfusion_bench.qqp, bitfusion_tot_list, gemm_data, "bitfusion", "qqp")
    write_to_csv(bitfusion_bench.mnli, bitfusion_tot_list, gemm_data, "bitfusion", "mnli")

def write_summary():
    ff = open(get_write_file_path() + "res_summary.csv",  "a")
    wr_line = ", vgg16, vgg16, resnet18, resnet18, resnet50, resnet50, inceptionv3, inceptionv3, vit, vit, rte, rte, wnli, wnli, mrpc, mrpc, cola, cola, sst_2, sst_2, qnli, qnli, qqp, qqp, mnli, mnli \n"
    ff.write(wr_line)
    wr_line = ", ant, bitfution, ant, bitfution, ant, bitfution, ant, bitfution, ant, bitfution, ant, bitfution, ant, bitfution, ant, bitfution, ant, bitfution, ant, bitfution, ant, bitfution, ant, bitfution, ant, bitfution \n"
    ff.write(wr_line)
    wr_line = "Static, " + str(tot_stat["vgg16_ant"][4] * 150) + ", " + str(tot_stat["vgg16_bitfusion"][4] * 150) + ", " + str(tot_stat["resnet18_ant"][4] * 150) + ", " + str(tot_stat["resnet18_bitfusion"][4] * 150) + ", " + str(tot_stat["resnet50_ant"][4] * 150) + ", " + str(tot_stat["resnet50_bitfusion"][4] * 150) + ", " + str(tot_stat["inceptionv3_ant"][4] * 150) + ", " + str(tot_stat["inceptionv3_bitfusion"][4] * 150) + ", " + str(tot_stat["vit_ant"][4] * 150) + ", " + str(tot_stat["vit_bitfusion"][4] * 150) + ", " + str(tot_stat["rte_ant"][4] * 150) + ", " + str(tot_stat["rte_bitfusion"][4] * 150) + ", " + str(tot_stat["wnli_ant"][4] * 150) + ", " + str(tot_stat["wnli_bitfusion"][4] * 150) + ", " + str(tot_stat["mrpc_ant"][4] * 150) + ", " + str(tot_stat["mrpc_bitfusion"][4] * 150) + ", " + str(tot_stat["cola_ant"][4] * 150) + ", " + str(tot_stat["cola_bitfusion"][4] * 150) + ", " + str(tot_stat["sst_2_ant"][4] * 150) + ", " + str(tot_stat["sst_2_bitfusion"][4] * 150) + ", " + str(tot_stat["qnli_ant"][4] * 150) + ", " + str(tot_stat["qnli_bitfusion"][4] * 150) + ", " + str(tot_stat["qqp_ant"][4] * 150) + ", " + str(tot_stat["qqp_bitfusion"][4] * 150) + ", " + str(tot_stat["mnli_ant"][4] * 150) + ", " + str(tot_stat["mnli_bitfusion"][4] * 150) + "\n"
    ff.write(wr_line)
    wr_line = "Dram, " + str(tot_stat["vgg16_ant"][0]) + ", " + str(tot_stat["vgg16_bitfusion"][0]) + ", " + str(tot_stat["resnet18_ant"][0]) + ", " + str(tot_stat["resnet18_bitfusion"][0]) + ", " + str(tot_stat["resnet50_ant"][0]) + ", " + str(tot_stat["resnet50_bitfusion"][0]) + ", " + str(tot_stat["inceptionv3_ant"][0]) + ", " + str(tot_stat["inceptionv3_bitfusion"][0]) + ", " + str(tot_stat["vit_ant"][0]) + ", " + str(tot_stat["vit_bitfusion"][0]) + ", " + str(tot_stat["rte_ant"][0]) + ", " + str(tot_stat["rte_bitfusion"][0]) + ", " + str(tot_stat["wnli_ant"][0]) + ", " + str(tot_stat["wnli_bitfusion"][0]) + ", " + str(tot_stat["mrpc_ant"][0]) + ", " + str(tot_stat["mrpc_bitfusion"][0]) + ", " + str(tot_stat["cola_ant"][0]) + ", " + str(tot_stat["cola_bitfusion"][0]) + ", " + str(tot_stat["sst_2_ant"][0]) + ", " + str(tot_stat["sst_2_bitfusion"][0]) + ", " + str(tot_stat["qnli_ant"][0]) + ", " + str(tot_stat["qnli_bitfusion"][0]) + ", " + str(tot_stat["qqp_ant"][0]) + ", " + str(tot_stat["qqp_bitfusion"][0]) + ", " + str(tot_stat["mnli_ant"][0]) + ", " + str(tot_stat["mnli_bitfusion"][0]) + "\n"
    ff.write(wr_line)
    wr_line = "Buffer, " + str(tot_stat["vgg16_ant"][1]) + ", " + str(tot_stat["vgg16_bitfusion"][1]) + ", " + str(tot_stat["resnet18_ant"][1]) + ", " + str(tot_stat["resnet18_bitfusion"][1]) + ", " + str(tot_stat["resnet50_ant"][1]) + ", " + str(tot_stat["resnet50_bitfusion"][1]) + ", " + str(tot_stat["inceptionv3_ant"][1]) + ", " + str(tot_stat["inceptionv3_bitfusion"][1]) + ", " + str(tot_stat["vit_ant"][1]) + ", " + str(tot_stat["vit_bitfusion"][1]) + ", " + str(tot_stat["rte_ant"][1]) + ", " + str(tot_stat["rte_bitfusion"][1]) + ", " + str(tot_stat["wnli_ant"][1]) + ", " + str(tot_stat["wnli_bitfusion"][1]) + ", " + str(tot_stat["mrpc_ant"][1]) + ", " + str(tot_stat["mrpc_bitfusion"][1]) + ", " + str(tot_stat["cola_ant"][1]) + ", " + str(tot_stat["cola_bitfusion"][1]) + ", " + str(tot_stat["sst_2_ant"][1]) + ", " + str(tot_stat["sst_2_bitfusion"][1]) + ", " + str(tot_stat["qnli_ant"][1]) + ", " + str(tot_stat["qnli_bitfusion"][1]) + ", " + str(tot_stat["qqp_ant"][1]) + ", " + str(tot_stat["qqp_bitfusion"][1]) + ", " + str(tot_stat["mnli_ant"][1]) + ", " + str(tot_stat["mnli_bitfusion"][1]) + "\n"
    ff.write(wr_line)
    wr_line = "Core, " + str(tot_stat["vgg16_ant"][2] + tot_stat["vgg16_ant"][3]) + ", " + str(tot_stat["vgg16_bitfusion"][2] + tot_stat["vgg16_bitfusion"][3]) + ", " + str(tot_stat["resnet18_ant"][2] + tot_stat["resnet18_ant"][3]) + ", " + str(tot_stat["resnet18_bitfusion"][2] + tot_stat["resnet18_bitfusion"][3]) + ", " + str(tot_stat["resnet50_ant"][2] + tot_stat["resnet50_ant"][3]) + ", " + str(tot_stat["resnet50_bitfusion"][2] + tot_stat["resnet50_bitfusion"][3]) + ", " + str(tot_stat["inceptionv3_ant"][2] + tot_stat["inceptionv3_ant"][3]) + ", " + str(tot_stat["inceptionv3_bitfusion"][2] + tot_stat["inceptionv3_bitfusion"][3]) + ", " + str(tot_stat["vit_ant"][2] + tot_stat["vit_ant"][3]) + ", " + str(tot_stat["vit_bitfusion"][2] + tot_stat["vit_bitfusion"][3]) + ", " + str(tot_stat["rte_ant"][2] + tot_stat["rte_ant"][3]) + ", " + str(tot_stat["rte_bitfusion"][2] + tot_stat["rte_bitfusion"][3]) + ", " + str(tot_stat["wnli_ant"][2] + tot_stat["wnli_ant"][3]) + ", " + str(tot_stat["wnli_bitfusion"][2] + tot_stat["wnli_bitfusion"][3]) + ", " + str(tot_stat["mrpc_ant"][2] + tot_stat["mrpc_ant"][3]) + ", " + str(tot_stat["mrpc_bitfusion"][2] + tot_stat["mrpc_bitfusion"][3]) + ", " + str(tot_stat["cola_ant"][2] + tot_stat["cola_ant"][3]) + ", " + str(tot_stat["cola_bitfusion"][2] + tot_stat["cola_bitfusion"][3]) + ", " + str(tot_stat["sst_2_ant"][2] + tot_stat["sst_2_ant"][3]) + ", " + str(tot_stat["sst_2_bitfusion"][2] + tot_stat["sst_2_bitfusion"][3]) + ", " + str(tot_stat["qnli_ant"][2] + tot_stat["qnli_ant"][3]) + ", " + str(tot_stat["qnli_bitfusion"][2] + tot_stat["qnli_bitfusion"][3]) + ", " + str(tot_stat["qqp_ant"][2] + tot_stat["qqp_ant"][3]) + ", " + str(tot_stat["qqp_bitfusion"][2] + tot_stat["qqp_bitfusion"][3]) + ", " + str(tot_stat["mnli_ant"][2] + tot_stat["mnli_ant"][3]) + ", " + str(tot_stat["mnli_bitfusion"][2] + tot_stat["mnli_bitfusion"][3]) + "\n"
    ff.write(wr_line)
    ff.close()

res=ant_()
res=bitfution_()

write_summary()
