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
write/  # 存放处理后的数据
...
data_analyze.py	# 处理 ant gemm 和 bitfusion gemm 的数据
conv2gemm.py	# 将 ant_bench.py 和 bitfusion.py 中的 conv, fc op 转换为对应 size 的 gemm 模板
ant_compile&run.sh	# 编译并运行所有的 ant gemm
ant_res.csv	
bitfusion_compile&run.sh # 编译并运行所有的 bitfusion gemm
bitfusion_res.csv
```

使用 `python conv2gemm.py` 得到 gemm op 后，把对应的模板粘贴到 `gemm-test/wmma_test.h` 文件中。

# 2. 运行

```shell
$ ant_compile&run.sh    # 编译并运行所有的 ANT gemm
$ bitfusion_compile&run.sh  # 编译并运行所有的 BitFusion gemm

# 运行完成后处理数据

$ python data_analyze.py

# 结果在 write 目录下
```