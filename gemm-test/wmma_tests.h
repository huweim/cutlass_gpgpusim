  #ifdef WMMA_1
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::MatrixLayout::kRowMajor,
                                        cutlass::Shape<32, 16, 16> >
      WmmaGemmTraits1;
  run_gemm<WmmaGemmTraits1>(16, 16, 16);
  #endif
  #ifdef WMMA_2
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::MatrixLayout::kRowMajor,
                                        cutlass::Shape<32, 16, 16> >
      WmmaGemmTraits2;
  run_gemm<WmmaGemmTraits2>(16, 16, 32);
  #endif
  #ifdef WMMA_3

  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<32, 16, 16> >
      WmmaGemmTraits3;
  run_gemm<WmmaGemmTraits3>(16, 16, 16);
  #endif
  #ifdef WMMA_4


  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<32, 16, 16> >
      WmmaGemmTraits4;
  run_gemm<WmmaGemmTraits4>(16, 16, 32);
  #endif
  #ifdef WMMA_5

  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kRowMajor,
                                        cutlass::Shape<32, 16, 16> >
      WmmaGemmTraits5;
  run_gemm<WmmaGemmTraits5>(16, 16, 16);
  #endif
  #ifdef WMMA_6

  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kRowMajor,
                                        cutlass::Shape<32, 16, 16> >
      WmmaGemmTraits6;
  run_gemm<WmmaGemmTraits6>(16, 16, 32);
  #endif
  #ifdef WMMA_7

  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<32, 16, 16> >
      WmmaGemmTraits7;
  run_gemm<WmmaGemmTraits7>(16, 16, 16);
  #endif
  #ifdef WMMA_8

  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<32, 16, 16> >
      WmmaGemmTraits8;
  run_gemm<WmmaGemmTraits8>(16, 16, 32);
  #endif
  #ifdef WMMA_9

  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::MatrixLayout::kRowMajor,
                                        cutlass::Shape<32, 16, 16> >
      WmmaGemmTraits9;
  run_gemm<WmmaGemmTraits9>(32, 32, 32);
  #endif
  #ifdef WMMA_10
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<32, 16, 16> >
      WmmaGemmTraits10;
  run_gemm<WmmaGemmTraits10>(32, 32, 32);
  #endif
  #ifdef WMMA_11
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kRowMajor,
                                        cutlass::Shape<32, 16, 16> >
      WmmaGemmTraits11;
  run_gemm<WmmaGemmTraits11>(32, 32, 32);
  #endif
  #ifdef WMMA_12
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<32, 16, 16> >
      WmmaGemmTraits12;
  run_gemm<WmmaGemmTraits12>(32, 32, 32);
  #endif
  #ifdef WMMA_13

  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::MatrixLayout::kRowMajor,
                                        cutlass::Shape<32, 128, 128> >
      WmmaGemmTraits13;
  run_gemm<WmmaGemmTraits13>(128, 128, 128);
  #endif
  #ifdef WMMA_14
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<32, 128, 128> >
      WmmaGemmTraits14;
  run_gemm<WmmaGemmTraits14>(128, 128, 128);
  #endif
  #ifdef WMMA_15
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kRowMajor,
                                        cutlass::Shape<32, 128, 128> >
      WmmaGemmTraits15;
  run_gemm<WmmaGemmTraits15>(128, 128, 128);
  #endif
  #ifdef WMMA_16

  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<32, 128, 128> >
      WmmaGemmTraits16;
  run_gemm<WmmaGemmTraits16>(128, 128, 128);
  #endif
  #ifdef WMMA_17

  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::MatrixLayout::kRowMajor,
                                        cutlass::Shape<32, 128, 128> >
      WmmaGemmTraits17;
  run_gemm<WmmaGemmTraits17>(256, 256, 128);
  #endif
  #ifdef WMMA_18

  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<32, 128, 128> >
      WmmaGemmTraits18;
  run_gemm<WmmaGemmTraits18>(256, 256, 128);
  #endif
  #ifdef WMMA_19

  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kRowMajor,
                                        cutlass::Shape<32, 128, 128> >
      WmmaGemmTraits19;
  run_gemm<WmmaGemmTraits19>(256, 256, 128);
  #endif
  #ifdef WMMA_20

  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<32, 128, 128> >
      WmmaGemmTraits20;
  run_gemm<WmmaGemmTraits20>(256, 256, 128);
  #endif
  #ifdef WMMA_21

  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::MatrixLayout::kRowMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits21;
  run_gemm<WmmaGemmTraits21>(256, 256, 256);
  #endif
  #ifdef WMMA_22

  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits22;
  run_gemm<WmmaGemmTraits22>(256, 256, 256);
  #endif
  #ifdef WMMA_23

  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kRowMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits23;
  run_gemm<WmmaGemmTraits23>(256, 256, 256);
  #endif
  #ifdef WMMA_24

  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits24;
  run_gemm<WmmaGemmTraits24>(256, 256, 256);
  #endif
  #ifdef WMMA_25
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::MatrixLayout::kRowMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits25;
  run_gemm<WmmaGemmTraits25>(512, 512, 512);
  #endif
  #ifdef WMMA_26

  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits26;
  run_gemm<WmmaGemmTraits26>(512, 512, 512);
  #endif
  #ifdef WMMA_27

  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kRowMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits27;
  run_gemm<WmmaGemmTraits27>(512, 512, 512);
  #endif
  #ifdef WMMA_28

  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits28;
  run_gemm<WmmaGemmTraits28>(512, 512, 512);
  #endif
  #ifdef WMMA_29

  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::MatrixLayout::kRowMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits29;
  run_gemm<WmmaGemmTraits29>(768, 768, 768);
  #endif
  #ifdef WMMA_30
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits30;
  run_gemm<WmmaGemmTraits30>(768, 768, 768);
  #endif
  #ifdef WMMA_31

  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kRowMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits31;
  run_gemm<WmmaGemmTraits31>(768, 768, 768);
  #endif
  #ifdef WMMA_32

  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits32;
  run_gemm<WmmaGemmTraits32>(768, 768, 768);
  #endif
  #ifdef WMMA_33


  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::MatrixLayout::kRowMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits33;
  run_gemm<WmmaGemmTraits33>(1024, 1024, 1024);
  #endif
  #ifdef WMMA_34

  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits34;
  run_gemm<WmmaGemmTraits34>(1024, 1024, 1024);
  #endif
  #ifdef WMMA_35

  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kRowMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits35;
  run_gemm<WmmaGemmTraits35>(1024, 1024, 1024);
  #endif
  #ifdef WMMA_36

  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits36;
  run_gemm<WmmaGemmTraits36>(1024, 1024, 1024);
  #endif
  #ifdef WMMA_37
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::MatrixLayout::kRowMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits37;
  run_gemm<WmmaGemmTraits37>(2048, 2048, 2048);
  #endif
  #ifdef WMMA_38

  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits38;
  run_gemm<WmmaGemmTraits38>(2048, 2048, 2048);
  #endif
  #ifdef WMMA_39

  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kRowMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits39;
  run_gemm<WmmaGemmTraits39>(2048, 2048, 2048);
  #endif
  #ifdef WMMA_40

  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits40;
  run_gemm<WmmaGemmTraits40>(2048, 2048, 2048);
  #endif
  #ifdef WMMA_41
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::MatrixLayout::kRowMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits41;
  run_gemm<WmmaGemmTraits41>(4096, 4096, 4096);
  #endif
  #ifdef WMMA_42

  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits42;
  run_gemm<WmmaGemmTraits42>(4096, 4096, 4096);
  #endif
  #ifdef WMMA_43

  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kRowMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits43;
  run_gemm<WmmaGemmTraits43>(4096, 4096, 4096);
  #endif
  #ifdef WMMA_44
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits44;
  run_gemm<WmmaGemmTraits44>(4096, 4096, 4096);
  #endif
  #ifdef WMMA_45
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits45;
  run_gemm<WmmaGemmTraits45>(1, 4096, 4096);
  #endif
  #ifdef WMMA_46
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits46;
  run_gemm<WmmaGemmTraits46>(3211264, 64, 16);
  #endif
  #ifdef WMMA_47
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits47;
  run_gemm<WmmaGemmTraits47>(3211264, 64, 144);
  #endif
  #ifdef WMMA_48
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits48;
  run_gemm<WmmaGemmTraits48>(802816, 128, 144);
  #endif
  #ifdef WMMA_49
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits49;
  run_gemm<WmmaGemmTraits49>(802816, 128, 288);
  #endif
  #ifdef WMMA_50
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits50;
  run_gemm<WmmaGemmTraits50>(200704, 256, 288);
  #endif
  #ifdef WMMA_51
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits51;
  run_gemm<WmmaGemmTraits51>(200704, 256, 576);
  #endif
  #ifdef WMMA_52
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits52;
  run_gemm<WmmaGemmTraits52>(50176, 512, 576);
  #endif
  #ifdef WMMA_53
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits53;
  run_gemm<WmmaGemmTraits53>(50176, 512, 1152);
  #endif
  #ifdef WMMA_54
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits54;
  run_gemm<WmmaGemmTraits54>(12544, 512, 1152);
  #endif
  #ifdef WMMA_55
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits55;
  run_gemm<WmmaGemmTraits55>(64, 4096, 6272);
  #endif
  #ifdef WMMA_56
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits56;
  run_gemm<WmmaGemmTraits56>(64, 4096, 1024);
  #endif
  #ifdef WMMA_57
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits57;
  run_gemm<WmmaGemmTraits57>(64, 1000, 2048);
  #endif
  #ifdef WMMA_58
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits58;
  run_gemm<WmmaGemmTraits58>(802816, 64, 80);
  #endif
  #ifdef WMMA_59
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits59;
  run_gemm<WmmaGemmTraits59>(200704, 64, 144);
  #endif
  #ifdef WMMA_60
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits60;
  run_gemm<WmmaGemmTraits60>(50176, 128, 144);
  #endif
  #ifdef WMMA_61
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits61;
  run_gemm<WmmaGemmTraits61>(50176, 128, 288);
  #endif
  #ifdef WMMA_62
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits62;
  run_gemm<WmmaGemmTraits62>(50176, 128, 16);
  #endif
  #ifdef WMMA_63
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits63;
  run_gemm<WmmaGemmTraits63>(12544, 256, 288);
  #endif
  #ifdef WMMA_64
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits64;
  run_gemm<WmmaGemmTraits64>(12544, 256, 576);
  #endif
  #ifdef WMMA_65
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits65;
  run_gemm<WmmaGemmTraits65>(12544, 256, 32);
  #endif
  #ifdef WMMA_66
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits66;
  run_gemm<WmmaGemmTraits66>(3136, 512, 576);
  #endif
  #ifdef WMMA_67
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits67;
  run_gemm<WmmaGemmTraits67>(3136, 512, 1152);
  #endif
  #ifdef WMMA_68
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits68;
  run_gemm<WmmaGemmTraits68>(3136, 512, 64);
  #endif
  #ifdef WMMA_69
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits69;
  run_gemm<WmmaGemmTraits69>(64, 1000, 256);
  #endif
  #ifdef WMMA_70
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits70;
  run_gemm<WmmaGemmTraits70>(200704, 64, 16);
  #endif
  #ifdef WMMA_71
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits71;
  run_gemm<WmmaGemmTraits71>(200704, 256, 16);
  #endif
  #ifdef WMMA_72
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits72;
  run_gemm<WmmaGemmTraits72>(200704, 64, 64);
  #endif
  #ifdef WMMA_73
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits73;
  run_gemm<WmmaGemmTraits73>(200704, 128, 64);
  #endif
  #ifdef WMMA_74
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits74;
  run_gemm<WmmaGemmTraits74>(50176, 512, 32);
  #endif
  #ifdef WMMA_75
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits75;
  run_gemm<WmmaGemmTraits75>(50176, 512, 64);
  #endif
  #ifdef WMMA_76
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits76;
  run_gemm<WmmaGemmTraits76>(50176, 128, 128);
  #endif
  #ifdef WMMA_77
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits77;
  run_gemm<WmmaGemmTraits77>(50176, 256, 128);
  #endif
  #ifdef WMMA_78
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits78;
  run_gemm<WmmaGemmTraits78>(12544, 1024, 64);
  #endif
  #ifdef WMMA_79
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits79;
  run_gemm<WmmaGemmTraits79>(12544, 1024, 128);
  #endif
  #ifdef WMMA_80
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits80;
  run_gemm<WmmaGemmTraits80>(12544, 256, 256);
  #endif
  #ifdef WMMA_81
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits81;
  run_gemm<WmmaGemmTraits81>(12544, 512, 256);
  #endif
  #ifdef WMMA_82
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits82;
  run_gemm<WmmaGemmTraits82>(3136, 2048, 128);
  #endif
  #ifdef WMMA_83
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits83;
  run_gemm<WmmaGemmTraits83>(3136, 2048, 256);
  #endif
  #ifdef WMMA_84
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits84;
  run_gemm<WmmaGemmTraits84>(3136, 512, 512);
  #endif
  #ifdef WMMA_85
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits85;
  run_gemm<WmmaGemmTraits85>(64, 1000, 1024);
  #endif
  #ifdef WMMA_86
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits86;
  run_gemm<WmmaGemmTraits86>(1411344, 32, 16);
  #endif
  #ifdef WMMA_87
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits87;
  run_gemm<WmmaGemmTraits87>(1382976, 32, 144);
  #endif
  #ifdef WMMA_88
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits88;
  run_gemm<WmmaGemmTraits88>(1382976, 64, 144);
  #endif
  #ifdef WMMA_89
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits89;
  run_gemm<WmmaGemmTraits89>(341056, 80, 32);
  #endif
  #ifdef WMMA_90
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits90;
  run_gemm<WmmaGemmTraits90>(322624, 192, 184);
  #endif
  #ifdef WMMA_91
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits91;
  run_gemm<WmmaGemmTraits91>(78400, 64, 48);
  #endif
  #ifdef WMMA_92
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits92;
  run_gemm<WmmaGemmTraits92>(78400, 48, 48);
  #endif
  #ifdef WMMA_93
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits93;
  run_gemm<WmmaGemmTraits93>(78400, 64, 304);
  #endif
  #ifdef WMMA_94
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits94;
  run_gemm<WmmaGemmTraits94>(78400, 96, 144);
  #endif
  #ifdef WMMA_95
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits95;
  run_gemm<WmmaGemmTraits95>(78400, 96, 216);
  #endif
  #ifdef WMMA_96
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits96;
  run_gemm<WmmaGemmTraits96>(78400, 32, 48);
  #endif
  #ifdef WMMA_97
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits97;
  run_gemm<WmmaGemmTraits97>(78400, 64, 64);
  #endif
  #ifdef WMMA_98
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits98;
  run_gemm<WmmaGemmTraits98>(78400, 48, 64);
  #endif
  #ifdef WMMA_99
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits99;
  run_gemm<WmmaGemmTraits99>(78400, 64, 72);
  #endif
  #ifdef WMMA_100
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits100;
  run_gemm<WmmaGemmTraits100>(78400, 48, 72);
  #endif
  #ifdef WMMA_101
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits101;
  run_gemm<WmmaGemmTraits101>(17424, 384, 648);
  #endif
  #ifdef WMMA_102
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits102;
  run_gemm<WmmaGemmTraits102>(17424, 96, 216);
  #endif
  #ifdef WMMA_103
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits103;
  run_gemm<WmmaGemmTraits103>(18496, 192, 192);
  #endif
  #ifdef WMMA_104
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits104;
  run_gemm<WmmaGemmTraits104>(18496, 128, 192);
  #endif
  #ifdef WMMA_105
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits105;
  run_gemm<WmmaGemmTraits105>(18496, 128, 32);
  #endif
  #ifdef WMMA_106
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits106;
  run_gemm<WmmaGemmTraits106>(18496, 192, 1568);
  #endif
  #ifdef WMMA_107
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits107;
  run_gemm<WmmaGemmTraits107>(18496, 128, 1568);
  #endif
  #ifdef WMMA_108
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits108;
  run_gemm<WmmaGemmTraits108>(18496, 192, 32);
  #endif
  #ifdef WMMA_109
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits109;
  run_gemm<WmmaGemmTraits109>(18496, 160, 192);
  #endif
  #ifdef WMMA_110
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits110;
  run_gemm<WmmaGemmTraits110>(18496, 160, 40);
  #endif
  #ifdef WMMA_111
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits111;
  run_gemm<WmmaGemmTraits111>(18496, 192, 1960);
  #endif
  #ifdef WMMA_112
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits112;
  run_gemm<WmmaGemmTraits112>(18496, 160, 1960);
  #endif
  #ifdef WMMA_113
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits113;
  run_gemm<WmmaGemmTraits113>(18496, 192, 40);
  #endif
  #ifdef WMMA_114
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits114;
  run_gemm<WmmaGemmTraits114>(18496, 192, 48);
  #endif
  #ifdef WMMA_115
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits115;
  run_gemm<WmmaGemmTraits115>(18496, 192, 2352);
  #endif
  #ifdef WMMA_116
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits116;
  run_gemm<WmmaGemmTraits116>(3600, 320, 432);
  #endif
  #ifdef WMMA_117
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits117;
  run_gemm<WmmaGemmTraits117>(3600, 192, 432);
  #endif
  #ifdef WMMA_118
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits118;
  run_gemm<WmmaGemmTraits118>(4096, 320, 320);
  #endif
  #ifdef WMMA_119
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits119;
  run_gemm<WmmaGemmTraits119>(4096, 384, 320);
  #endif
  #ifdef WMMA_120
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits120;
  run_gemm<WmmaGemmTraits120>(4096, 384, 96);
  #endif
  #ifdef WMMA_121
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits121;
  run_gemm<WmmaGemmTraits121>(4096, 384, 864);
  #endif
  #ifdef WMMA_122
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits122;
  run_gemm<WmmaGemmTraits122>(4096, 448, 320);
  #endif
  #ifdef WMMA_123
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits123;
  run_gemm<WmmaGemmTraits123>(4096, 384, 1008);
  #endif
  #ifdef WMMA_124
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits124;
  run_gemm<WmmaGemmTraits124>(4096, 192, 320);
  #endif
  #ifdef WMMA_125
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits125;
  run_gemm<WmmaGemmTraits125>(4096, 320, 512);
  #endif
  #ifdef WMMA_126
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits126;
  run_gemm<WmmaGemmTraits126>(4096, 384, 512);
  #endif
  #ifdef WMMA_127
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits127;
  run_gemm<WmmaGemmTraits127>(4096, 448, 512);
  #endif
  #ifdef WMMA_128
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits128;
  run_gemm<WmmaGemmTraits128>(4096, 192, 512);
  #endif
  #ifdef WMMA_129
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits129;
  run_gemm<WmmaGemmTraits129>(12608, 2304, 192);
  #endif
  #ifdef WMMA_130
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits130;
  run_gemm<WmmaGemmTraits130>(12608, 768, 384);
  #endif
  #ifdef WMMA_131
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits131;
  run_gemm<WmmaGemmTraits131>(12608, 3072, 384);
  #endif
  #ifdef WMMA_132
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits132;
  run_gemm<WmmaGemmTraits132>(12608, 768, 1536);
  #endif
  #ifdef WMMA_133
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits133;
  run_gemm<WmmaGemmTraits133>(12608, 768, 192);
  #endif
  #ifdef WMMA_134
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits134;
  run_gemm<WmmaGemmTraits134>(12608, 768, 768);
  #endif
  #ifdef WMMA_135
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits135;
  run_gemm<WmmaGemmTraits135>(12608, 3072, 192);
  #endif
  #ifdef WMMA_136
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits136;
  run_gemm<WmmaGemmTraits136>(12608, 2304, 384);
  #endif
  #ifdef WMMA_137
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits137;
  run_gemm<WmmaGemmTraits137>(64, 1000, 384);
  #endif
  #ifdef WMMA_138
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits138;
  run_gemm<WmmaGemmTraits138>(8192, 768, 192);
  #endif
  #ifdef WMMA_139
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits139;
  run_gemm<WmmaGemmTraits139>(8192, 3072, 192);
  #endif
  #ifdef WMMA_140
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits140;
  run_gemm<WmmaGemmTraits140>(8192, 768, 768);
  #endif
  #ifdef WMMA_141
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits141;
  run_gemm<WmmaGemmTraits141>(64, 768, 384);
  #endif
  #ifdef WMMA_142
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits142;
  run_gemm<WmmaGemmTraits142>(64, 8, 384);
  #endif
  #ifdef WMMA_143
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits143;
  run_gemm<WmmaGemmTraits143>(64, 768, 192);
  #endif
  #ifdef WMMA_144
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits144;
  run_gemm<WmmaGemmTraits144>(64, 8, 192);
  #endif
  #ifdef WMMA_145
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits145;
  run_gemm<WmmaGemmTraits145>(8192, 768, 384);
  #endif
  #ifdef WMMA_146
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits146;
  run_gemm<WmmaGemmTraits146>(8192, 768, 1536);
  #endif
  #ifdef WMMA_147
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits147;
  run_gemm<WmmaGemmTraits147>(3211264, 64, 16);
  #endif
  #ifdef WMMA_148
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits148;
  run_gemm<WmmaGemmTraits148>(3211264, 64, 288);
  #endif
  #ifdef WMMA_149
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits149;
  run_gemm<WmmaGemmTraits149>(802816, 128, 288);
  #endif
  #ifdef WMMA_150
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits150;
  run_gemm<WmmaGemmTraits150>(802816, 128, 576);
  #endif
  #ifdef WMMA_151
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits151;
  run_gemm<WmmaGemmTraits151>(200704, 256, 576);
  #endif
  #ifdef WMMA_152
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits152;
  run_gemm<WmmaGemmTraits152>(200704, 256, 1152);
  #endif
  #ifdef WMMA_153
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits153;
  run_gemm<WmmaGemmTraits153>(50176, 512, 1152);
  #endif
  #ifdef WMMA_154
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits154;
  run_gemm<WmmaGemmTraits154>(50176, 512, 2304);
  #endif
  #ifdef WMMA_155
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits155;
  run_gemm<WmmaGemmTraits155>(12544, 512, 1152);
  #endif
  #ifdef WMMA_156
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits156;
  run_gemm<WmmaGemmTraits156>(12544, 512, 2304);
  #endif
  #ifdef WMMA_157
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits157;
  run_gemm<WmmaGemmTraits157>(64, 4096, 12544);
  #endif
  #ifdef WMMA_158
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits158;
  run_gemm<WmmaGemmTraits158>(64, 4096, 1024);
  #endif
  #ifdef WMMA_159
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits159;
  run_gemm<WmmaGemmTraits159>(64, 1000, 2048);
  #endif
  #ifdef WMMA_160
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits160;
  run_gemm<WmmaGemmTraits160>(802816, 64, 80);
  #endif
  #ifdef WMMA_161
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits161;
  run_gemm<WmmaGemmTraits161>(200704, 64, 288);
  #endif
  #ifdef WMMA_162
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits162;
  run_gemm<WmmaGemmTraits162>(50176, 128, 288);
  #endif
  #ifdef WMMA_163
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits163;
  run_gemm<WmmaGemmTraits163>(50176, 128, 576);
  #endif
  #ifdef WMMA_164
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits164;
  run_gemm<WmmaGemmTraits164>(50176, 128, 32);
  #endif
  #ifdef WMMA_165
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits165;
  run_gemm<WmmaGemmTraits165>(12544, 256, 576);
  #endif
  #ifdef WMMA_166
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits166;
  run_gemm<WmmaGemmTraits166>(12544, 256, 1152);
  #endif
  #ifdef WMMA_167
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits167;
  run_gemm<WmmaGemmTraits167>(12544, 256, 64);
  #endif
  #ifdef WMMA_168
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits168;
  run_gemm<WmmaGemmTraits168>(3136, 512, 1152);
  #endif
  #ifdef WMMA_169
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits169;
  run_gemm<WmmaGemmTraits169>(3136, 512, 128);
  #endif
  #ifdef WMMA_170
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits170;
  run_gemm<WmmaGemmTraits170>(3136, 512, 2304);
  #endif
  #ifdef WMMA_171
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits171;
  run_gemm<WmmaGemmTraits171>(64, 1000, 256);
  #endif
  #ifdef WMMA_172
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits172;
  run_gemm<WmmaGemmTraits172>(200704, 64, 32);
  #endif
  #ifdef WMMA_173
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits173;
  run_gemm<WmmaGemmTraits173>(200704, 256, 32);
  #endif
  #ifdef WMMA_174
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits174;
  run_gemm<WmmaGemmTraits174>(200704, 64, 128);
  #endif
  #ifdef WMMA_175
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits175;
  run_gemm<WmmaGemmTraits175>(200704, 128, 128);
  #endif
  #ifdef WMMA_176
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits176;
  run_gemm<WmmaGemmTraits176>(50176, 512, 64);
  #endif
  #ifdef WMMA_177
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits177;
  run_gemm<WmmaGemmTraits177>(50176, 512, 128);
  #endif
  #ifdef WMMA_178
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits178;
  run_gemm<WmmaGemmTraits178>(50176, 128, 256);
  #endif
  #ifdef WMMA_179
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits179;
  run_gemm<WmmaGemmTraits179>(50176, 512, 32);
  #endif
  #ifdef WMMA_180
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits180;
  run_gemm<WmmaGemmTraits180>(50176, 256, 256);
  #endif
  #ifdef WMMA_181
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits181;
  run_gemm<WmmaGemmTraits181>(12544, 1024, 64);
  #endif
  #ifdef WMMA_182
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits182;
  run_gemm<WmmaGemmTraits182>(12544, 1024, 256);
  #endif
  #ifdef WMMA_183
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits183;
  run_gemm<WmmaGemmTraits183>(12544, 256, 512);
  #endif
  #ifdef WMMA_184
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits184;
  run_gemm<WmmaGemmTraits184>(12544, 1024, 128);
  #endif
  #ifdef WMMA_185
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits185;
  run_gemm<WmmaGemmTraits185>(12544, 512, 512);
  #endif
  #ifdef WMMA_186
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits186;
  run_gemm<WmmaGemmTraits186>(3136, 2048, 128);
  #endif
  #ifdef WMMA_187
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits187;
  run_gemm<WmmaGemmTraits187>(3136, 2048, 512);
  #endif
  #ifdef WMMA_188
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits188;
  run_gemm<WmmaGemmTraits188>(3136, 512, 1024);
  #endif
  #ifdef WMMA_189
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits189;
  run_gemm<WmmaGemmTraits189>(64, 1000, 1024);
  #endif
  #ifdef WMMA_190
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits190;
  run_gemm<WmmaGemmTraits190>(1411344, 32, 16);
  #endif
  #ifdef WMMA_191
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits191;
  run_gemm<WmmaGemmTraits191>(1382976, 32, 144);
  #endif
  #ifdef WMMA_192
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits192;
  run_gemm<WmmaGemmTraits192>(1382976, 64, 144);
  #endif
  #ifdef WMMA_193
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits193;
  run_gemm<WmmaGemmTraits193>(341056, 80, 32);
  #endif
  #ifdef WMMA_194
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits194;
  run_gemm<WmmaGemmTraits194>(322624, 192, 360);
  #endif
  #ifdef WMMA_195
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits195;
  run_gemm<WmmaGemmTraits195>(78400, 64, 96);
  #endif
  #ifdef WMMA_196
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits196;
  run_gemm<WmmaGemmTraits196>(78400, 48, 96);
  #endif
  #ifdef WMMA_197
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits197;
  run_gemm<WmmaGemmTraits197>(78400, 64, 600);
  #endif
  #ifdef WMMA_198
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits198;
  run_gemm<WmmaGemmTraits198>(78400, 96, 288);
  #endif
  #ifdef WMMA_199
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits199;
  run_gemm<WmmaGemmTraits199>(78400, 96, 432);
  #endif
  #ifdef WMMA_200
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits200;
  run_gemm<WmmaGemmTraits200>(78400, 32, 96);
  #endif
  #ifdef WMMA_201
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits201;
  run_gemm<WmmaGemmTraits201>(78400, 64, 128);
  #endif
  #ifdef WMMA_202
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits202;
  run_gemm<WmmaGemmTraits202>(78400, 48, 128);
  #endif
  #ifdef WMMA_203
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits203;
  run_gemm<WmmaGemmTraits203>(78400, 64, 144);
  #endif
  #ifdef WMMA_204
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits204;
  run_gemm<WmmaGemmTraits204>(78400, 48, 144);
  #endif
  #ifdef WMMA_205
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits205;
  run_gemm<WmmaGemmTraits205>(17424, 384, 1296);
  #endif
  #ifdef WMMA_206
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits206;
  run_gemm<WmmaGemmTraits206>(17424, 96, 216);
  #endif
  #ifdef WMMA_207
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits207;
  run_gemm<WmmaGemmTraits207>(18496, 192, 384);
  #endif
  #ifdef WMMA_208
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits208;
  run_gemm<WmmaGemmTraits208>(18496, 128, 384);
  #endif
  #ifdef WMMA_209
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits209;
  run_gemm<WmmaGemmTraits209>(18496, 128, 32);
  #endif
  #ifdef WMMA_210
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits210;
  run_gemm<WmmaGemmTraits210>(18496, 192, 1568);
  #endif
  #ifdef WMMA_211
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits211;
  run_gemm<WmmaGemmTraits211>(18496, 128, 3136);
  #endif
  #ifdef WMMA_212
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits212;
  run_gemm<WmmaGemmTraits212>(18496, 128, 64);
  #endif
  #ifdef WMMA_213
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits213;
  run_gemm<WmmaGemmTraits213>(18496, 192, 32);
  #endif
  #ifdef WMMA_214
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits214;
  run_gemm<WmmaGemmTraits214>(18496, 160, 384);
  #endif
  #ifdef WMMA_215
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits215;
  run_gemm<WmmaGemmTraits215>(18496, 160, 40);
  #endif
  #ifdef WMMA_216
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits216;
  run_gemm<WmmaGemmTraits216>(18496, 192, 3920);
  #endif
  #ifdef WMMA_217
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits217;
  run_gemm<WmmaGemmTraits217>(18496, 160, 1960);
  #endif
  #ifdef WMMA_218
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits218;
  run_gemm<WmmaGemmTraits218>(18496, 160, 3920);
  #endif
  #ifdef WMMA_219
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits219;
  run_gemm<WmmaGemmTraits219>(18496, 192, 80);
  #endif
  #ifdef WMMA_220
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits220;
  run_gemm<WmmaGemmTraits220>(18496, 192, 1960);
  #endif
  #ifdef WMMA_221
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits221;
  run_gemm<WmmaGemmTraits221>(18496, 192, 40);
  #endif
  #ifdef WMMA_222
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits222;
  run_gemm<WmmaGemmTraits222>(18496, 192, 192);
  #endif
  #ifdef WMMA_223
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits223;
  run_gemm<WmmaGemmTraits223>(18496, 192, 48);
  #endif
  #ifdef WMMA_224
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits224;
  run_gemm<WmmaGemmTraits224>(18496, 192, 4704);
  #endif
  #ifdef WMMA_225
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits225;
  run_gemm<WmmaGemmTraits225>(18496, 192, 2352);
  #endif
  #ifdef WMMA_226
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits226;
  run_gemm<WmmaGemmTraits226>(3600, 320, 432);
  #endif
  #ifdef WMMA_227
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits227;
  run_gemm<WmmaGemmTraits227>(18496, 192, 96);
  #endif
  #ifdef WMMA_228
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits228;
  run_gemm<WmmaGemmTraits228>(3600, 192, 432);
  #endif
  #ifdef WMMA_229
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits229;
  run_gemm<WmmaGemmTraits229>(4096, 320, 640);
  #endif
  #ifdef WMMA_230
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits230;
  run_gemm<WmmaGemmTraits230>(4096, 384, 640);
  #endif
  #ifdef WMMA_231
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits231;
  run_gemm<WmmaGemmTraits231>(4096, 384, 96);
  #endif
  #ifdef WMMA_232
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits232;
  run_gemm<WmmaGemmTraits232>(4096, 384, 864);
  #endif
  #ifdef WMMA_233
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits233;
  run_gemm<WmmaGemmTraits233>(4096, 448, 640);
  #endif
  #ifdef WMMA_234
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits234;
  run_gemm<WmmaGemmTraits234>(4096, 384, 1008);
  #endif
  #ifdef WMMA_235
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits235;
  run_gemm<WmmaGemmTraits235>(4096, 192, 640);
  #endif
  #ifdef WMMA_236
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits236;
  run_gemm<WmmaGemmTraits236>(4096, 320, 512);
  #endif
  #ifdef WMMA_237
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits237;
  run_gemm<WmmaGemmTraits237>(4096, 384, 512);
  #endif
  #ifdef WMMA_238
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits238;
  run_gemm<WmmaGemmTraits238>(4096, 448, 512);
  #endif
  #ifdef WMMA_239
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits239;
  run_gemm<WmmaGemmTraits239>(4096, 192, 512);
  #endif
  #ifdef WMMA_240
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits240;
  run_gemm<WmmaGemmTraits240>(64, 1000, 512);
  #endif
  #ifdef WMMA_241
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits241;
  run_gemm<WmmaGemmTraits241>(10928, 768, 384);
  #endif
  #ifdef WMMA_242
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits242;
  run_gemm<WmmaGemmTraits242>(12608, 2304, 384);
  #endif
  #ifdef WMMA_243
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits243;
  run_gemm<WmmaGemmTraits243>(12608, 768, 192);
  #endif
  #ifdef WMMA_244
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits244;
  run_gemm<WmmaGemmTraits244>(12608, 3072, 384);
  #endif
  #ifdef WMMA_245
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits245;
  run_gemm<WmmaGemmTraits245>(12608, 768, 1536);
  #endif
  #ifdef WMMA_246
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits246;
  run_gemm<WmmaGemmTraits246>(12608, 768, 384);
  #endif
  #ifdef WMMA_247
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits247;
  run_gemm<WmmaGemmTraits247>(64, 1000, 384);
  #endif
  #ifdef WMMA_248
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits248;
  run_gemm<WmmaGemmTraits248>(8192, 768, 384);
  #endif
  #ifdef WMMA_249
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits249;
  run_gemm<WmmaGemmTraits249>(8192, 768, 192);
  #endif
  #ifdef WMMA_250
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits250;
  run_gemm<WmmaGemmTraits250>(8192, 3072, 384);
  #endif
  #ifdef WMMA_251
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits251;
  run_gemm<WmmaGemmTraits251>(8192, 768, 1536);
  #endif
  #ifdef WMMA_252
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits252;
  run_gemm<WmmaGemmTraits252>(8192, 768, 768);
  #endif
  #ifdef WMMA_253
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits253;
  run_gemm<WmmaGemmTraits253>(64, 768, 384);
  #endif
  #ifdef WMMA_254
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits254;
  run_gemm<WmmaGemmTraits254>(64, 8, 384);
  #endif
  #ifdef WMMA_255
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits255;
  run_gemm<WmmaGemmTraits255>(64, 768, 192);
  #endif
  #ifdef WMMA_256
  typedef cutlass::gemm::WmmaGemmTraits<cutlass::MatrixLayout::kRowMajor,
                                        cutlass::MatrixLayout::kColumnMajor,
                                        cutlass::Shape<64, 128, 128> >
      WmmaGemmTraits256;
  run_gemm<WmmaGemmTraits256>(64, 8, 192);
  #endif
