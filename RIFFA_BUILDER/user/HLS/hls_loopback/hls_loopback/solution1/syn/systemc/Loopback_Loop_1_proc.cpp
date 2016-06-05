// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ===========================================================

#include "Loopback_Loop_1_proc.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic Loopback_Loop_1_proc::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic Loopback_Loop_1_proc::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<2> Loopback_Loop_1_proc::ap_ST_st1_fsm_0 = "1";
const sc_lv<2> Loopback_Loop_1_proc::ap_ST_st2_fsm_1 = "10";
const sc_lv<32> Loopback_Loop_1_proc::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_lv<1> Loopback_Loop_1_proc::ap_const_lv1_1 = "1";
const sc_lv<32> Loopback_Loop_1_proc::ap_const_lv32_1 = "1";
const sc_lv<1> Loopback_Loop_1_proc::ap_const_lv1_0 = "0";
const sc_lv<17> Loopback_Loop_1_proc::ap_const_lv17_0 = "00000000000000000";
const sc_lv<17> Loopback_Loop_1_proc::ap_const_lv17_10000 = "10000000000000000";
const sc_lv<17> Loopback_Loop_1_proc::ap_const_lv17_1 = "1";

Loopback_Loop_1_proc::Loopback_Loop_1_proc(sc_module_name name) : sc_module(name), mVcdFile(0) {

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_IN_r_TREADY);
    sensitive << ( ap_sig_cseq_ST_st2_fsm_1 );
    sensitive << ( exitcond_i_i_fu_51_p2 );
    sensitive << ( ap_sig_bdd_48 );
    sensitive << ( ap_sig_ioackin_OUT_r_TREADY );

    SC_METHOD(thread_OUT_r_TDATA);
    sensitive << ( IN_r_TDATA );
    sensitive << ( ap_sig_cseq_ST_st2_fsm_1 );
    sensitive << ( exitcond_i_i_fu_51_p2 );
    sensitive << ( ap_sig_bdd_48 );

    SC_METHOD(thread_OUT_r_TVALID);
    sensitive << ( ap_sig_cseq_ST_st2_fsm_1 );
    sensitive << ( exitcond_i_i_fu_51_p2 );
    sensitive << ( ap_sig_bdd_48 );
    sensitive << ( ap_reg_ioackin_OUT_r_TREADY );

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_done_reg );
    sensitive << ( ap_sig_cseq_ST_st2_fsm_1 );
    sensitive << ( exitcond_i_i_fu_51_p2 );
    sensitive << ( ap_sig_bdd_48 );
    sensitive << ( ap_sig_ioackin_OUT_r_TREADY );

    SC_METHOD(thread_ap_idle);
    sensitive << ( ap_start );
    sensitive << ( ap_sig_cseq_ST_st1_fsm_0 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( ap_sig_cseq_ST_st2_fsm_1 );
    sensitive << ( exitcond_i_i_fu_51_p2 );
    sensitive << ( ap_sig_bdd_48 );
    sensitive << ( ap_sig_ioackin_OUT_r_TREADY );

    SC_METHOD(thread_ap_sig_bdd_100);
    sensitive << ( ap_sig_cseq_ST_st2_fsm_1 );
    sensitive << ( exitcond_i_i_fu_51_p2 );

    SC_METHOD(thread_ap_sig_bdd_101);
    sensitive << ( OUT_r_TREADY );
    sensitive << ( ap_sig_bdd_48 );

    SC_METHOD(thread_ap_sig_bdd_21);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_sig_bdd_41);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_sig_bdd_48);
    sensitive << ( IN_r_TVALID );
    sensitive << ( exitcond_i_i_fu_51_p2 );

    SC_METHOD(thread_ap_sig_bdd_61);
    sensitive << ( ap_start );
    sensitive << ( ap_done_reg );

    SC_METHOD(thread_ap_sig_cseq_ST_st1_fsm_0);
    sensitive << ( ap_sig_bdd_21 );

    SC_METHOD(thread_ap_sig_cseq_ST_st2_fsm_1);
    sensitive << ( ap_sig_bdd_41 );

    SC_METHOD(thread_ap_sig_ioackin_OUT_r_TREADY);
    sensitive << ( OUT_r_TREADY );
    sensitive << ( ap_reg_ioackin_OUT_r_TREADY );

    SC_METHOD(thread_exitcond_i_i_fu_51_p2);
    sensitive << ( ap_sig_cseq_ST_st2_fsm_1 );
    sensitive << ( exitcond_i_i_fu_51_p2 );
    sensitive << ( ap_sig_bdd_48 );
    sensitive << ( ap_sig_ioackin_OUT_r_TREADY );
    sensitive << ( i_0_i_i_reg_40 );

    SC_METHOD(thread_i_fu_57_p2);
    sensitive << ( i_0_i_i_reg_40 );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_CS_fsm );
    sensitive << ( exitcond_i_i_fu_51_p2 );
    sensitive << ( ap_sig_bdd_48 );
    sensitive << ( ap_sig_ioackin_OUT_r_TREADY );
    sensitive << ( ap_sig_bdd_61 );

    ap_done_reg = SC_LOGIC_0;
    ap_CS_fsm = "01";
    ap_reg_ioackin_OUT_r_TREADY = SC_LOGIC_0;
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "Loopback_Loop_1_proc_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT_HIER__
    sc_trace(mVcdFile, ap_clk, "(port)ap_clk");
    sc_trace(mVcdFile, ap_rst, "(port)ap_rst");
    sc_trace(mVcdFile, ap_start, "(port)ap_start");
    sc_trace(mVcdFile, ap_done, "(port)ap_done");
    sc_trace(mVcdFile, ap_continue, "(port)ap_continue");
    sc_trace(mVcdFile, ap_idle, "(port)ap_idle");
    sc_trace(mVcdFile, ap_ready, "(port)ap_ready");
    sc_trace(mVcdFile, IN_r_TDATA, "(port)IN_r_TDATA");
    sc_trace(mVcdFile, IN_r_TVALID, "(port)IN_r_TVALID");
    sc_trace(mVcdFile, IN_r_TREADY, "(port)IN_r_TREADY");
    sc_trace(mVcdFile, OUT_r_TDATA, "(port)OUT_r_TDATA");
    sc_trace(mVcdFile, OUT_r_TVALID, "(port)OUT_r_TVALID");
    sc_trace(mVcdFile, OUT_r_TREADY, "(port)OUT_r_TREADY");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_done_reg, "ap_done_reg");
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_sig_cseq_ST_st1_fsm_0, "ap_sig_cseq_ST_st1_fsm_0");
    sc_trace(mVcdFile, ap_sig_bdd_21, "ap_sig_bdd_21");
    sc_trace(mVcdFile, i_fu_57_p2, "i_fu_57_p2");
    sc_trace(mVcdFile, ap_sig_cseq_ST_st2_fsm_1, "ap_sig_cseq_ST_st2_fsm_1");
    sc_trace(mVcdFile, ap_sig_bdd_41, "ap_sig_bdd_41");
    sc_trace(mVcdFile, exitcond_i_i_fu_51_p2, "exitcond_i_i_fu_51_p2");
    sc_trace(mVcdFile, ap_sig_bdd_48, "ap_sig_bdd_48");
    sc_trace(mVcdFile, ap_sig_ioackin_OUT_r_TREADY, "ap_sig_ioackin_OUT_r_TREADY");
    sc_trace(mVcdFile, i_0_i_i_reg_40, "i_0_i_i_reg_40");
    sc_trace(mVcdFile, ap_sig_bdd_61, "ap_sig_bdd_61");
    sc_trace(mVcdFile, ap_reg_ioackin_OUT_r_TREADY, "ap_reg_ioackin_OUT_r_TREADY");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
    sc_trace(mVcdFile, ap_sig_bdd_101, "ap_sig_bdd_101");
    sc_trace(mVcdFile, ap_sig_bdd_100, "ap_sig_bdd_100");
#endif

    }
}

Loopback_Loop_1_proc::~Loopback_Loop_1_proc() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

}

void Loopback_Loop_1_proc::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_st1_fsm_0;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_done_reg = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_continue.read())) {
            ap_done_reg = ap_const_logic_0;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
                    !(ap_sig_bdd_48.read() || (esl_seteq<1,1,1>(exitcond_i_i_fu_51_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_OUT_r_TREADY.read()))) && 
                    !esl_seteq<1,1,1>(exitcond_i_i_fu_51_p2.read(), ap_const_lv1_0))) {
            ap_done_reg = ap_const_logic_1;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_reg_ioackin_OUT_r_TREADY = ap_const_logic_0;
    } else {
        if (ap_sig_bdd_100.read()) {
            if (!(ap_sig_bdd_48.read() || (esl_seteq<1,1,1>(exitcond_i_i_fu_51_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_OUT_r_TREADY.read())))) {
                ap_reg_ioackin_OUT_r_TREADY = ap_const_logic_0;
            } else if (ap_sig_bdd_101.read()) {
                ap_reg_ioackin_OUT_r_TREADY = ap_const_logic_1;
            }
        }
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond_i_i_fu_51_p2.read(), ap_const_lv1_0) && 
         !(ap_sig_bdd_48.read() || (esl_seteq<1,1,1>(exitcond_i_i_fu_51_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_OUT_r_TREADY.read()))))) {
        i_0_i_i_reg_40 = i_fu_57_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
                !ap_sig_bdd_61.read())) {
        i_0_i_i_reg_40 = ap_const_lv17_0;
    }
}

void Loopback_Loop_1_proc::thread_IN_r_TREADY() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond_i_i_fu_51_p2.read(), ap_const_lv1_0) && 
         !(ap_sig_bdd_48.read() || (esl_seteq<1,1,1>(exitcond_i_i_fu_51_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_OUT_r_TREADY.read()))))) {
        IN_r_TREADY = ap_const_logic_1;
    } else {
        IN_r_TREADY = ap_const_logic_0;
    }
}

void Loopback_Loop_1_proc::thread_OUT_r_TDATA() {
    OUT_r_TDATA = IN_r_TDATA.read();
}

void Loopback_Loop_1_proc::thread_OUT_r_TVALID() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond_i_i_fu_51_p2.read(), ap_const_lv1_0) && 
         !ap_sig_bdd_48.read() && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_OUT_r_TREADY.read()))) {
        OUT_r_TVALID = ap_const_logic_1;
    } else {
        OUT_r_TVALID = ap_const_logic_0;
    }
}

void Loopback_Loop_1_proc::thread_ap_done() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_done_reg.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
          !(ap_sig_bdd_48.read() || (esl_seteq<1,1,1>(exitcond_i_i_fu_51_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_OUT_r_TREADY.read()))) && 
          !esl_seteq<1,1,1>(exitcond_i_i_fu_51_p2.read(), ap_const_lv1_0)))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void Loopback_Loop_1_proc::thread_ap_idle() {
    if ((!esl_seteq<1,1,1>(ap_const_logic_1, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void Loopback_Loop_1_proc::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         !(ap_sig_bdd_48.read() || (esl_seteq<1,1,1>(exitcond_i_i_fu_51_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_OUT_r_TREADY.read()))) && 
         !esl_seteq<1,1,1>(exitcond_i_i_fu_51_p2.read(), ap_const_lv1_0))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void Loopback_Loop_1_proc::thread_ap_sig_bdd_100() {
    ap_sig_bdd_100 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && esl_seteq<1,1,1>(exitcond_i_i_fu_51_p2.read(), ap_const_lv1_0));
}

void Loopback_Loop_1_proc::thread_ap_sig_bdd_101() {
    ap_sig_bdd_101 = (!ap_sig_bdd_48.read() && esl_seteq<1,1,1>(ap_const_logic_1, OUT_r_TREADY.read()));
}

void Loopback_Loop_1_proc::thread_ap_sig_bdd_21() {
    ap_sig_bdd_21 = esl_seteq<1,1,1>(ap_CS_fsm.read().range(0, 0), ap_const_lv1_1);
}

void Loopback_Loop_1_proc::thread_ap_sig_bdd_41() {
    ap_sig_bdd_41 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(1, 1));
}

void Loopback_Loop_1_proc::thread_ap_sig_bdd_48() {
    ap_sig_bdd_48 = (esl_seteq<1,1,1>(IN_r_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_i_i_fu_51_p2.read(), ap_const_lv1_0));
}

void Loopback_Loop_1_proc::thread_ap_sig_bdd_61() {
    ap_sig_bdd_61 = (esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1));
}

void Loopback_Loop_1_proc::thread_ap_sig_cseq_ST_st1_fsm_0() {
    if (ap_sig_bdd_21.read()) {
        ap_sig_cseq_ST_st1_fsm_0 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_st1_fsm_0 = ap_const_logic_0;
    }
}

void Loopback_Loop_1_proc::thread_ap_sig_cseq_ST_st2_fsm_1() {
    if (ap_sig_bdd_41.read()) {
        ap_sig_cseq_ST_st2_fsm_1 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_st2_fsm_1 = ap_const_logic_0;
    }
}

void Loopback_Loop_1_proc::thread_ap_sig_ioackin_OUT_r_TREADY() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_OUT_r_TREADY.read())) {
        ap_sig_ioackin_OUT_r_TREADY = OUT_r_TREADY.read();
    } else {
        ap_sig_ioackin_OUT_r_TREADY = ap_const_logic_1;
    }
}

void Loopback_Loop_1_proc::thread_exitcond_i_i_fu_51_p2() {
    exitcond_i_i_fu_51_p2 = (!i_0_i_i_reg_40.read().is_01() || !ap_const_lv17_10000.is_01())? sc_lv<1>(): sc_lv<1>(i_0_i_i_reg_40.read() == ap_const_lv17_10000);
}

void Loopback_Loop_1_proc::thread_i_fu_57_p2() {
    i_fu_57_p2 = (!i_0_i_i_reg_40.read().is_01() || !ap_const_lv17_1.is_01())? sc_lv<17>(): (sc_biguint<17>(i_0_i_i_reg_40.read()) + sc_biguint<17>(ap_const_lv17_1));
}

void Loopback_Loop_1_proc::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if (!ap_sig_bdd_61.read()) {
                ap_NS_fsm = ap_ST_st2_fsm_1;
            } else {
                ap_NS_fsm = ap_ST_st1_fsm_0;
            }
            break;
        case 2 : 
            if ((!(ap_sig_bdd_48.read() || (esl_seteq<1,1,1>(exitcond_i_i_fu_51_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_OUT_r_TREADY.read()))) && !esl_seteq<1,1,1>(exitcond_i_i_fu_51_p2.read(), ap_const_lv1_0))) {
                ap_NS_fsm = ap_ST_st1_fsm_0;
            } else if ((esl_seteq<1,1,1>(exitcond_i_i_fu_51_p2.read(), ap_const_lv1_0) && !(ap_sig_bdd_48.read() || (esl_seteq<1,1,1>(exitcond_i_i_fu_51_p2.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_OUT_r_TREADY.read()))))) {
                ap_NS_fsm = ap_ST_st2_fsm_1;
            } else {
                ap_NS_fsm = ap_ST_st2_fsm_1;
            }
            break;
        default : 
            ap_NS_fsm = "XX";
            break;
    }
}

}

