// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ===========================================================

#ifndef _inference_Loop_inference_label11_proc_HH_
#define _inference_Loop_inference_label11_proc_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "inference_mux_4to1_sel2_32_1.h"

namespace ap_rtl {

struct inference_Loop_inference_label11_proc : public sc_module {
    // Port declarations 139
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_in< sc_logic > ap_continue;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<5> > convOutput3_0_address0;
    sc_out< sc_logic > convOutput3_0_ce0;
    sc_in< sc_lv<32> > convOutput3_0_q0;
    sc_out< sc_lv<5> > convOutput3_1_address0;
    sc_out< sc_logic > convOutput3_1_ce0;
    sc_in< sc_lv<32> > convOutput3_1_q0;
    sc_out< sc_lv<5> > convOutput3_2_address0;
    sc_out< sc_logic > convOutput3_2_ce0;
    sc_in< sc_lv<32> > convOutput3_2_q0;
    sc_out< sc_lv<5> > convOutput3_3_address0;
    sc_out< sc_logic > convOutput3_3_ce0;
    sc_in< sc_lv<32> > convOutput3_3_q0;
    sc_out< sc_lv<32> > ap_return_0;
    sc_out< sc_lv<32> > ap_return_1;
    sc_out< sc_lv<32> > ap_return_2;
    sc_out< sc_lv<32> > ap_return_3;
    sc_out< sc_lv<32> > ap_return_4;
    sc_out< sc_lv<32> > ap_return_5;
    sc_out< sc_lv<32> > ap_return_6;
    sc_out< sc_lv<32> > ap_return_7;
    sc_out< sc_lv<32> > ap_return_8;
    sc_out< sc_lv<32> > ap_return_9;
    sc_out< sc_lv<32> > ap_return_10;
    sc_out< sc_lv<32> > ap_return_11;
    sc_out< sc_lv<32> > ap_return_12;
    sc_out< sc_lv<32> > ap_return_13;
    sc_out< sc_lv<32> > ap_return_14;
    sc_out< sc_lv<32> > ap_return_15;
    sc_out< sc_lv<32> > ap_return_16;
    sc_out< sc_lv<32> > ap_return_17;
    sc_out< sc_lv<32> > ap_return_18;
    sc_out< sc_lv<32> > ap_return_19;
    sc_out< sc_lv<32> > ap_return_20;
    sc_out< sc_lv<32> > ap_return_21;
    sc_out< sc_lv<32> > ap_return_22;
    sc_out< sc_lv<32> > ap_return_23;
    sc_out< sc_lv<32> > ap_return_24;
    sc_out< sc_lv<32> > ap_return_25;
    sc_out< sc_lv<32> > ap_return_26;
    sc_out< sc_lv<32> > ap_return_27;
    sc_out< sc_lv<32> > ap_return_28;
    sc_out< sc_lv<32> > ap_return_29;
    sc_out< sc_lv<32> > ap_return_30;
    sc_out< sc_lv<32> > ap_return_31;
    sc_out< sc_lv<32> > ap_return_32;
    sc_out< sc_lv<32> > ap_return_33;
    sc_out< sc_lv<32> > ap_return_34;
    sc_out< sc_lv<32> > ap_return_35;
    sc_out< sc_lv<32> > ap_return_36;
    sc_out< sc_lv<32> > ap_return_37;
    sc_out< sc_lv<32> > ap_return_38;
    sc_out< sc_lv<32> > ap_return_39;
    sc_out< sc_lv<32> > ap_return_40;
    sc_out< sc_lv<32> > ap_return_41;
    sc_out< sc_lv<32> > ap_return_42;
    sc_out< sc_lv<32> > ap_return_43;
    sc_out< sc_lv<32> > ap_return_44;
    sc_out< sc_lv<32> > ap_return_45;
    sc_out< sc_lv<32> > ap_return_46;
    sc_out< sc_lv<32> > ap_return_47;
    sc_out< sc_lv<32> > ap_return_48;
    sc_out< sc_lv<32> > ap_return_49;
    sc_out< sc_lv<32> > ap_return_50;
    sc_out< sc_lv<32> > ap_return_51;
    sc_out< sc_lv<32> > ap_return_52;
    sc_out< sc_lv<32> > ap_return_53;
    sc_out< sc_lv<32> > ap_return_54;
    sc_out< sc_lv<32> > ap_return_55;
    sc_out< sc_lv<32> > ap_return_56;
    sc_out< sc_lv<32> > ap_return_57;
    sc_out< sc_lv<32> > ap_return_58;
    sc_out< sc_lv<32> > ap_return_59;
    sc_out< sc_lv<32> > ap_return_60;
    sc_out< sc_lv<32> > ap_return_61;
    sc_out< sc_lv<32> > ap_return_62;
    sc_out< sc_lv<32> > ap_return_63;
    sc_out< sc_lv<32> > ap_return_64;
    sc_out< sc_lv<32> > ap_return_65;
    sc_out< sc_lv<32> > ap_return_66;
    sc_out< sc_lv<32> > ap_return_67;
    sc_out< sc_lv<32> > ap_return_68;
    sc_out< sc_lv<32> > ap_return_69;
    sc_out< sc_lv<32> > ap_return_70;
    sc_out< sc_lv<32> > ap_return_71;
    sc_out< sc_lv<32> > ap_return_72;
    sc_out< sc_lv<32> > ap_return_73;
    sc_out< sc_lv<32> > ap_return_74;
    sc_out< sc_lv<32> > ap_return_75;
    sc_out< sc_lv<32> > ap_return_76;
    sc_out< sc_lv<32> > ap_return_77;
    sc_out< sc_lv<32> > ap_return_78;
    sc_out< sc_lv<32> > ap_return_79;
    sc_out< sc_lv<32> > ap_return_80;
    sc_out< sc_lv<32> > ap_return_81;
    sc_out< sc_lv<32> > ap_return_82;
    sc_out< sc_lv<32> > ap_return_83;
    sc_out< sc_lv<32> > ap_return_84;
    sc_out< sc_lv<32> > ap_return_85;
    sc_out< sc_lv<32> > ap_return_86;
    sc_out< sc_lv<32> > ap_return_87;
    sc_out< sc_lv<32> > ap_return_88;
    sc_out< sc_lv<32> > ap_return_89;
    sc_out< sc_lv<32> > ap_return_90;
    sc_out< sc_lv<32> > ap_return_91;
    sc_out< sc_lv<32> > ap_return_92;
    sc_out< sc_lv<32> > ap_return_93;
    sc_out< sc_lv<32> > ap_return_94;
    sc_out< sc_lv<32> > ap_return_95;
    sc_out< sc_lv<32> > ap_return_96;
    sc_out< sc_lv<32> > ap_return_97;
    sc_out< sc_lv<32> > ap_return_98;
    sc_out< sc_lv<32> > ap_return_99;
    sc_out< sc_lv<32> > ap_return_100;
    sc_out< sc_lv<32> > ap_return_101;
    sc_out< sc_lv<32> > ap_return_102;
    sc_out< sc_lv<32> > ap_return_103;
    sc_out< sc_lv<32> > ap_return_104;
    sc_out< sc_lv<32> > ap_return_105;
    sc_out< sc_lv<32> > ap_return_106;
    sc_out< sc_lv<32> > ap_return_107;
    sc_out< sc_lv<32> > ap_return_108;
    sc_out< sc_lv<32> > ap_return_109;
    sc_out< sc_lv<32> > ap_return_110;
    sc_out< sc_lv<32> > ap_return_111;
    sc_out< sc_lv<32> > ap_return_112;
    sc_out< sc_lv<32> > ap_return_113;
    sc_out< sc_lv<32> > ap_return_114;
    sc_out< sc_lv<32> > ap_return_115;
    sc_out< sc_lv<32> > ap_return_116;
    sc_out< sc_lv<32> > ap_return_117;
    sc_out< sc_lv<32> > ap_return_118;
    sc_out< sc_lv<32> > ap_return_119;


    // Module declarations
    inference_Loop_inference_label11_proc(sc_module_name name);
    SC_HAS_PROCESS(inference_Loop_inference_label11_proc);

    ~inference_Loop_inference_label11_proc();

    sc_trace_file* mVcdFile;

    inference_mux_4to1_sel2_32_1<1,1,32,32,32,32,2,32>* inference_mux_4to1_sel2_32_1_U1176;
    sc_signal< sc_logic > ap_done_reg;
    sc_signal< sc_lv<3> > ap_CS_fsm;
    sc_signal< sc_logic > ap_sig_cseq_ST_st1_fsm_0;
    sc_signal< bool > ap_sig_bdd_22;
    sc_signal< sc_lv<7> > k3_reg_808;
    sc_signal< sc_lv<1> > exitcond_fu_820_p2;
    sc_signal< sc_lv<1> > exitcond_reg_3267;
    sc_signal< sc_logic > ap_sig_cseq_ST_pp0_stg0_fsm_1;
    sc_signal< bool > ap_sig_bdd_183;
    sc_signal< sc_logic > ap_reg_ppiten_pp0_it0;
    sc_signal< sc_logic > ap_reg_ppiten_pp0_it1;
    sc_signal< sc_lv<7> > k_fu_826_p2;
    sc_signal< sc_lv<7> > k_reg_3271;
    sc_signal< sc_lv<2> > tmp_fu_850_p1;
    sc_signal< sc_lv<2> > tmp_reg_3296;
    sc_signal< bool > ap_sig_bdd_208;
    sc_signal< sc_lv<7> > k3_phi_fu_812_p4;
    sc_signal< sc_lv<64> > newIndex11_fu_842_p1;
    sc_signal< sc_lv<32> > fcIn_0_119_fu_280;
    sc_signal< sc_lv<32> > fcIn_0_0_fu_854_p6;
    sc_signal< sc_logic > ap_sig_cseq_ST_st4_fsm_2;
    sc_signal< bool > ap_sig_bdd_705;
    sc_signal< sc_lv<32> > fcIn_0_119_1_fu_284;
    sc_signal< sc_lv<32> > fcIn_0_119_2_fu_288;
    sc_signal< sc_lv<32> > fcIn_0_119_3_fu_292;
    sc_signal< sc_lv<32> > fcIn_0_119_4_fu_296;
    sc_signal< sc_lv<32> > fcIn_0_119_5_fu_300;
    sc_signal< sc_lv<32> > fcIn_0_119_6_fu_304;
    sc_signal< sc_lv<32> > fcIn_0_119_7_fu_308;
    sc_signal< sc_lv<32> > fcIn_0_119_8_fu_312;
    sc_signal< sc_lv<32> > fcIn_0_119_9_fu_316;
    sc_signal< sc_lv<32> > fcIn_0_119_10_fu_320;
    sc_signal< sc_lv<32> > fcIn_0_119_11_fu_324;
    sc_signal< sc_lv<32> > fcIn_0_119_12_fu_328;
    sc_signal< sc_lv<32> > fcIn_0_119_13_fu_332;
    sc_signal< sc_lv<32> > fcIn_0_119_14_fu_336;
    sc_signal< sc_lv<32> > fcIn_0_119_15_fu_340;
    sc_signal< sc_lv<32> > fcIn_0_119_16_fu_344;
    sc_signal< sc_lv<32> > fcIn_0_119_17_fu_348;
    sc_signal< sc_lv<32> > fcIn_0_119_18_fu_352;
    sc_signal< sc_lv<32> > fcIn_0_119_19_fu_356;
    sc_signal< sc_lv<32> > fcIn_0_119_20_fu_360;
    sc_signal< sc_lv<32> > fcIn_0_119_21_fu_364;
    sc_signal< sc_lv<32> > fcIn_0_119_22_fu_368;
    sc_signal< sc_lv<32> > fcIn_0_119_23_fu_372;
    sc_signal< sc_lv<32> > fcIn_0_119_24_fu_376;
    sc_signal< sc_lv<32> > fcIn_0_119_25_fu_380;
    sc_signal< sc_lv<32> > fcIn_0_119_26_fu_384;
    sc_signal< sc_lv<32> > fcIn_0_119_27_fu_388;
    sc_signal< sc_lv<32> > fcIn_0_119_28_fu_392;
    sc_signal< sc_lv<32> > fcIn_0_119_29_fu_396;
    sc_signal< sc_lv<32> > fcIn_0_119_30_fu_400;
    sc_signal< sc_lv<32> > fcIn_0_119_31_fu_404;
    sc_signal< sc_lv<32> > fcIn_0_119_32_fu_408;
    sc_signal< sc_lv<32> > fcIn_0_119_33_fu_412;
    sc_signal< sc_lv<32> > fcIn_0_119_34_fu_416;
    sc_signal< sc_lv<32> > fcIn_0_119_35_fu_420;
    sc_signal< sc_lv<32> > fcIn_0_119_36_fu_424;
    sc_signal< sc_lv<32> > fcIn_0_119_37_fu_428;
    sc_signal< sc_lv<32> > fcIn_0_119_38_fu_432;
    sc_signal< sc_lv<32> > fcIn_0_119_39_fu_436;
    sc_signal< sc_lv<32> > fcIn_0_119_40_fu_440;
    sc_signal< sc_lv<32> > fcIn_0_119_41_fu_444;
    sc_signal< sc_lv<32> > fcIn_0_119_42_fu_448;
    sc_signal< sc_lv<32> > fcIn_0_119_43_fu_452;
    sc_signal< sc_lv<32> > fcIn_0_119_44_fu_456;
    sc_signal< sc_lv<32> > fcIn_0_119_45_fu_460;
    sc_signal< sc_lv<32> > fcIn_0_119_46_fu_464;
    sc_signal< sc_lv<32> > fcIn_0_119_47_fu_468;
    sc_signal< sc_lv<32> > fcIn_0_119_48_fu_472;
    sc_signal< sc_lv<32> > fcIn_0_119_49_fu_476;
    sc_signal< sc_lv<32> > fcIn_0_119_50_fu_480;
    sc_signal< sc_lv<32> > fcIn_0_119_51_fu_484;
    sc_signal< sc_lv<32> > fcIn_0_119_52_fu_488;
    sc_signal< sc_lv<32> > fcIn_0_119_53_fu_492;
    sc_signal< sc_lv<32> > fcIn_0_119_54_fu_496;
    sc_signal< sc_lv<32> > fcIn_0_119_55_fu_500;
    sc_signal< sc_lv<32> > fcIn_0_119_56_fu_504;
    sc_signal< sc_lv<32> > fcIn_0_119_57_fu_508;
    sc_signal< sc_lv<32> > fcIn_0_119_58_fu_512;
    sc_signal< sc_lv<32> > fcIn_0_119_59_fu_516;
    sc_signal< sc_lv<32> > fcIn_0_119_60_fu_520;
    sc_signal< sc_lv<32> > fcIn_0_119_61_fu_524;
    sc_signal< sc_lv<32> > fcIn_0_119_62_fu_528;
    sc_signal< sc_lv<32> > fcIn_0_119_63_fu_532;
    sc_signal< sc_lv<32> > fcIn_0_119_64_fu_536;
    sc_signal< sc_lv<32> > fcIn_0_119_65_fu_540;
    sc_signal< sc_lv<32> > fcIn_0_119_66_fu_544;
    sc_signal< sc_lv<32> > fcIn_0_119_67_fu_548;
    sc_signal< sc_lv<32> > fcIn_0_119_68_fu_552;
    sc_signal< sc_lv<32> > fcIn_0_119_69_fu_556;
    sc_signal< sc_lv<32> > fcIn_0_119_70_fu_560;
    sc_signal< sc_lv<32> > fcIn_0_119_71_fu_564;
    sc_signal< sc_lv<32> > fcIn_0_119_72_fu_568;
    sc_signal< sc_lv<32> > fcIn_0_119_73_fu_572;
    sc_signal< sc_lv<32> > fcIn_0_119_74_fu_576;
    sc_signal< sc_lv<32> > fcIn_0_119_75_fu_580;
    sc_signal< sc_lv<32> > fcIn_0_119_76_fu_584;
    sc_signal< sc_lv<32> > fcIn_0_119_77_fu_588;
    sc_signal< sc_lv<32> > fcIn_0_119_78_fu_592;
    sc_signal< sc_lv<32> > fcIn_0_119_79_fu_596;
    sc_signal< sc_lv<32> > fcIn_0_119_80_fu_600;
    sc_signal< sc_lv<32> > fcIn_0_119_81_fu_604;
    sc_signal< sc_lv<32> > fcIn_0_119_82_fu_608;
    sc_signal< sc_lv<32> > fcIn_0_119_83_fu_612;
    sc_signal< sc_lv<32> > fcIn_0_119_84_fu_616;
    sc_signal< sc_lv<32> > fcIn_0_119_85_fu_620;
    sc_signal< sc_lv<32> > fcIn_0_119_86_fu_624;
    sc_signal< sc_lv<32> > fcIn_0_119_87_fu_628;
    sc_signal< sc_lv<32> > fcIn_0_119_88_fu_632;
    sc_signal< sc_lv<32> > fcIn_0_119_89_fu_636;
    sc_signal< sc_lv<32> > fcIn_0_119_90_fu_640;
    sc_signal< sc_lv<32> > fcIn_0_119_91_fu_644;
    sc_signal< sc_lv<32> > fcIn_0_119_92_fu_648;
    sc_signal< sc_lv<32> > fcIn_0_119_93_fu_652;
    sc_signal< sc_lv<32> > fcIn_0_119_94_fu_656;
    sc_signal< sc_lv<32> > fcIn_0_119_95_fu_660;
    sc_signal< sc_lv<32> > fcIn_0_119_96_fu_664;
    sc_signal< sc_lv<32> > fcIn_0_119_97_fu_668;
    sc_signal< sc_lv<32> > fcIn_0_119_98_fu_672;
    sc_signal< sc_lv<32> > fcIn_0_119_99_fu_676;
    sc_signal< sc_lv<32> > fcIn_0_119_100_fu_680;
    sc_signal< sc_lv<32> > fcIn_0_119_101_fu_684;
    sc_signal< sc_lv<32> > fcIn_0_119_102_fu_688;
    sc_signal< sc_lv<32> > fcIn_0_119_103_fu_692;
    sc_signal< sc_lv<32> > fcIn_0_119_104_fu_696;
    sc_signal< sc_lv<32> > fcIn_0_119_105_fu_700;
    sc_signal< sc_lv<32> > fcIn_0_119_106_fu_704;
    sc_signal< sc_lv<32> > fcIn_0_119_107_fu_708;
    sc_signal< sc_lv<32> > fcIn_0_119_108_fu_712;
    sc_signal< sc_lv<32> > fcIn_0_119_109_fu_716;
    sc_signal< sc_lv<32> > fcIn_0_119_110_fu_720;
    sc_signal< sc_lv<32> > fcIn_0_119_111_fu_724;
    sc_signal< sc_lv<32> > fcIn_0_119_112_fu_728;
    sc_signal< sc_lv<32> > fcIn_0_119_113_fu_732;
    sc_signal< sc_lv<32> > fcIn_0_119_114_fu_736;
    sc_signal< sc_lv<32> > fcIn_0_119_115_fu_740;
    sc_signal< sc_lv<32> > fcIn_0_119_116_fu_744;
    sc_signal< sc_lv<32> > fcIn_0_119_117_fu_748;
    sc_signal< sc_lv<32> > fcIn_0_119_118_fu_752;
    sc_signal< sc_lv<32> > fcIn_0_119_119_fu_756;
    sc_signal< sc_lv<5> > newIndex10_fu_832_p4;
    sc_signal< sc_lv<3> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<3> ap_ST_st1_fsm_0;
    static const sc_lv<3> ap_ST_pp0_stg0_fsm_1;
    static const sc_lv<3> ap_ST_st4_fsm_2;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<7> ap_const_lv7_0;
    static const sc_lv<7> ap_const_lv7_76;
    static const sc_lv<7> ap_const_lv7_75;
    static const sc_lv<7> ap_const_lv7_74;
    static const sc_lv<7> ap_const_lv7_73;
    static const sc_lv<7> ap_const_lv7_72;
    static const sc_lv<7> ap_const_lv7_71;
    static const sc_lv<7> ap_const_lv7_70;
    static const sc_lv<7> ap_const_lv7_6F;
    static const sc_lv<7> ap_const_lv7_6E;
    static const sc_lv<7> ap_const_lv7_6D;
    static const sc_lv<7> ap_const_lv7_6C;
    static const sc_lv<7> ap_const_lv7_6B;
    static const sc_lv<7> ap_const_lv7_6A;
    static const sc_lv<7> ap_const_lv7_69;
    static const sc_lv<7> ap_const_lv7_68;
    static const sc_lv<7> ap_const_lv7_67;
    static const sc_lv<7> ap_const_lv7_66;
    static const sc_lv<7> ap_const_lv7_65;
    static const sc_lv<7> ap_const_lv7_64;
    static const sc_lv<7> ap_const_lv7_63;
    static const sc_lv<7> ap_const_lv7_62;
    static const sc_lv<7> ap_const_lv7_61;
    static const sc_lv<7> ap_const_lv7_60;
    static const sc_lv<7> ap_const_lv7_5F;
    static const sc_lv<7> ap_const_lv7_5E;
    static const sc_lv<7> ap_const_lv7_5D;
    static const sc_lv<7> ap_const_lv7_5C;
    static const sc_lv<7> ap_const_lv7_5B;
    static const sc_lv<7> ap_const_lv7_5A;
    static const sc_lv<7> ap_const_lv7_59;
    static const sc_lv<7> ap_const_lv7_58;
    static const sc_lv<7> ap_const_lv7_57;
    static const sc_lv<7> ap_const_lv7_56;
    static const sc_lv<7> ap_const_lv7_55;
    static const sc_lv<7> ap_const_lv7_54;
    static const sc_lv<7> ap_const_lv7_53;
    static const sc_lv<7> ap_const_lv7_52;
    static const sc_lv<7> ap_const_lv7_51;
    static const sc_lv<7> ap_const_lv7_50;
    static const sc_lv<7> ap_const_lv7_4F;
    static const sc_lv<7> ap_const_lv7_4E;
    static const sc_lv<7> ap_const_lv7_4D;
    static const sc_lv<7> ap_const_lv7_4C;
    static const sc_lv<7> ap_const_lv7_4B;
    static const sc_lv<7> ap_const_lv7_4A;
    static const sc_lv<7> ap_const_lv7_49;
    static const sc_lv<7> ap_const_lv7_48;
    static const sc_lv<7> ap_const_lv7_47;
    static const sc_lv<7> ap_const_lv7_46;
    static const sc_lv<7> ap_const_lv7_45;
    static const sc_lv<7> ap_const_lv7_44;
    static const sc_lv<7> ap_const_lv7_43;
    static const sc_lv<7> ap_const_lv7_42;
    static const sc_lv<7> ap_const_lv7_41;
    static const sc_lv<7> ap_const_lv7_40;
    static const sc_lv<7> ap_const_lv7_3F;
    static const sc_lv<7> ap_const_lv7_3E;
    static const sc_lv<7> ap_const_lv7_3D;
    static const sc_lv<7> ap_const_lv7_3C;
    static const sc_lv<7> ap_const_lv7_3B;
    static const sc_lv<7> ap_const_lv7_3A;
    static const sc_lv<7> ap_const_lv7_39;
    static const sc_lv<7> ap_const_lv7_38;
    static const sc_lv<7> ap_const_lv7_37;
    static const sc_lv<7> ap_const_lv7_36;
    static const sc_lv<7> ap_const_lv7_35;
    static const sc_lv<7> ap_const_lv7_34;
    static const sc_lv<7> ap_const_lv7_33;
    static const sc_lv<7> ap_const_lv7_32;
    static const sc_lv<7> ap_const_lv7_31;
    static const sc_lv<7> ap_const_lv7_30;
    static const sc_lv<7> ap_const_lv7_2F;
    static const sc_lv<7> ap_const_lv7_2E;
    static const sc_lv<7> ap_const_lv7_2D;
    static const sc_lv<7> ap_const_lv7_2C;
    static const sc_lv<7> ap_const_lv7_2B;
    static const sc_lv<7> ap_const_lv7_2A;
    static const sc_lv<7> ap_const_lv7_29;
    static const sc_lv<7> ap_const_lv7_28;
    static const sc_lv<7> ap_const_lv7_27;
    static const sc_lv<7> ap_const_lv7_26;
    static const sc_lv<7> ap_const_lv7_25;
    static const sc_lv<7> ap_const_lv7_24;
    static const sc_lv<7> ap_const_lv7_23;
    static const sc_lv<7> ap_const_lv7_22;
    static const sc_lv<7> ap_const_lv7_21;
    static const sc_lv<7> ap_const_lv7_20;
    static const sc_lv<7> ap_const_lv7_1F;
    static const sc_lv<7> ap_const_lv7_1E;
    static const sc_lv<7> ap_const_lv7_1D;
    static const sc_lv<7> ap_const_lv7_1C;
    static const sc_lv<7> ap_const_lv7_1B;
    static const sc_lv<7> ap_const_lv7_1A;
    static const sc_lv<7> ap_const_lv7_19;
    static const sc_lv<7> ap_const_lv7_18;
    static const sc_lv<7> ap_const_lv7_17;
    static const sc_lv<7> ap_const_lv7_16;
    static const sc_lv<7> ap_const_lv7_15;
    static const sc_lv<7> ap_const_lv7_14;
    static const sc_lv<7> ap_const_lv7_13;
    static const sc_lv<7> ap_const_lv7_12;
    static const sc_lv<7> ap_const_lv7_11;
    static const sc_lv<7> ap_const_lv7_10;
    static const sc_lv<7> ap_const_lv7_F;
    static const sc_lv<7> ap_const_lv7_E;
    static const sc_lv<7> ap_const_lv7_D;
    static const sc_lv<7> ap_const_lv7_C;
    static const sc_lv<7> ap_const_lv7_B;
    static const sc_lv<7> ap_const_lv7_A;
    static const sc_lv<7> ap_const_lv7_9;
    static const sc_lv<7> ap_const_lv7_8;
    static const sc_lv<7> ap_const_lv7_7;
    static const sc_lv<7> ap_const_lv7_6;
    static const sc_lv<7> ap_const_lv7_5;
    static const sc_lv<7> ap_const_lv7_4;
    static const sc_lv<7> ap_const_lv7_3;
    static const sc_lv<7> ap_const_lv7_2;
    static const sc_lv<7> ap_const_lv7_1;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<7> ap_const_lv7_78;
    static const sc_lv<32> ap_const_lv32_6;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_ap_return_0();
    void thread_ap_return_1();
    void thread_ap_return_10();
    void thread_ap_return_100();
    void thread_ap_return_101();
    void thread_ap_return_102();
    void thread_ap_return_103();
    void thread_ap_return_104();
    void thread_ap_return_105();
    void thread_ap_return_106();
    void thread_ap_return_107();
    void thread_ap_return_108();
    void thread_ap_return_109();
    void thread_ap_return_11();
    void thread_ap_return_110();
    void thread_ap_return_111();
    void thread_ap_return_112();
    void thread_ap_return_113();
    void thread_ap_return_114();
    void thread_ap_return_115();
    void thread_ap_return_116();
    void thread_ap_return_117();
    void thread_ap_return_118();
    void thread_ap_return_119();
    void thread_ap_return_12();
    void thread_ap_return_13();
    void thread_ap_return_14();
    void thread_ap_return_15();
    void thread_ap_return_16();
    void thread_ap_return_17();
    void thread_ap_return_18();
    void thread_ap_return_19();
    void thread_ap_return_2();
    void thread_ap_return_20();
    void thread_ap_return_21();
    void thread_ap_return_22();
    void thread_ap_return_23();
    void thread_ap_return_24();
    void thread_ap_return_25();
    void thread_ap_return_26();
    void thread_ap_return_27();
    void thread_ap_return_28();
    void thread_ap_return_29();
    void thread_ap_return_3();
    void thread_ap_return_30();
    void thread_ap_return_31();
    void thread_ap_return_32();
    void thread_ap_return_33();
    void thread_ap_return_34();
    void thread_ap_return_35();
    void thread_ap_return_36();
    void thread_ap_return_37();
    void thread_ap_return_38();
    void thread_ap_return_39();
    void thread_ap_return_4();
    void thread_ap_return_40();
    void thread_ap_return_41();
    void thread_ap_return_42();
    void thread_ap_return_43();
    void thread_ap_return_44();
    void thread_ap_return_45();
    void thread_ap_return_46();
    void thread_ap_return_47();
    void thread_ap_return_48();
    void thread_ap_return_49();
    void thread_ap_return_5();
    void thread_ap_return_50();
    void thread_ap_return_51();
    void thread_ap_return_52();
    void thread_ap_return_53();
    void thread_ap_return_54();
    void thread_ap_return_55();
    void thread_ap_return_56();
    void thread_ap_return_57();
    void thread_ap_return_58();
    void thread_ap_return_59();
    void thread_ap_return_6();
    void thread_ap_return_60();
    void thread_ap_return_61();
    void thread_ap_return_62();
    void thread_ap_return_63();
    void thread_ap_return_64();
    void thread_ap_return_65();
    void thread_ap_return_66();
    void thread_ap_return_67();
    void thread_ap_return_68();
    void thread_ap_return_69();
    void thread_ap_return_7();
    void thread_ap_return_70();
    void thread_ap_return_71();
    void thread_ap_return_72();
    void thread_ap_return_73();
    void thread_ap_return_74();
    void thread_ap_return_75();
    void thread_ap_return_76();
    void thread_ap_return_77();
    void thread_ap_return_78();
    void thread_ap_return_79();
    void thread_ap_return_8();
    void thread_ap_return_80();
    void thread_ap_return_81();
    void thread_ap_return_82();
    void thread_ap_return_83();
    void thread_ap_return_84();
    void thread_ap_return_85();
    void thread_ap_return_86();
    void thread_ap_return_87();
    void thread_ap_return_88();
    void thread_ap_return_89();
    void thread_ap_return_9();
    void thread_ap_return_90();
    void thread_ap_return_91();
    void thread_ap_return_92();
    void thread_ap_return_93();
    void thread_ap_return_94();
    void thread_ap_return_95();
    void thread_ap_return_96();
    void thread_ap_return_97();
    void thread_ap_return_98();
    void thread_ap_return_99();
    void thread_ap_sig_bdd_183();
    void thread_ap_sig_bdd_208();
    void thread_ap_sig_bdd_22();
    void thread_ap_sig_bdd_705();
    void thread_ap_sig_cseq_ST_pp0_stg0_fsm_1();
    void thread_ap_sig_cseq_ST_st1_fsm_0();
    void thread_ap_sig_cseq_ST_st4_fsm_2();
    void thread_convOutput3_0_address0();
    void thread_convOutput3_0_ce0();
    void thread_convOutput3_1_address0();
    void thread_convOutput3_1_ce0();
    void thread_convOutput3_2_address0();
    void thread_convOutput3_2_ce0();
    void thread_convOutput3_3_address0();
    void thread_convOutput3_3_ce0();
    void thread_exitcond_fu_820_p2();
    void thread_k3_phi_fu_812_p4();
    void thread_k_fu_826_p2();
    void thread_newIndex10_fu_832_p4();
    void thread_newIndex11_fu_842_p1();
    void thread_tmp_fu_850_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif