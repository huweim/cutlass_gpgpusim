make CFLAGS=-DWMMA_148
mkdir ./test_bitfusion/3211264_64_288
cp ./cutlass-test ./gpgpusim.config ./config_volta_islip.icnt ./test_bitfusion/3211264_64_288
./test_bitfusion/3211264_64_288/cutlass-test > ./output_bitfusion/3211264_64_288.log &
make clean