0. 前言

基于 [cutlass-gpgpu-sim](https://github.com/gpgpu-sim/cutlass-gpgpu-sim)，在 gpgpusim 上运行 wmma 指令。将不同网络模型的 conv 以及 fc 操作转换为对应 size 的 gemm。在 [cutlass-gpgpu-sim](https://github.com/gpgpu-sim/cutlass-gpgpu-sim) 的基础上增加了一些编译的 case，增加了编译运行的脚本，以及对数据进行处理的脚本。

## 0.1 Prerequisite

+ CUDA 9.1
+ gpgpu-sim 4.0
+ gcc 5.5
+ cutlass-gpgpu-sim

# 1. 目录
```shell
test_ant/	# 存放 ANT gemm 程序
test_bitfusion/	# 存放 BitFusion gemm 程序
output_ant/	# 存放 ANT gemm 结果
output_bitfusion/	# 存放 BitFusion gemm 结果
...
analyze.py
ant_compile&run.sh
ant_res.csv
bitfusion_compile&run.sh
bitfusion_res.csv
```