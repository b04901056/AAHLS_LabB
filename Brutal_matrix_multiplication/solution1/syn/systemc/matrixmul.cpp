// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2020.1
// Copyright (C) 1986-2020 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "matrixmul.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic matrixmul::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic matrixmul::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<7> matrixmul::ap_ST_fsm_state1 = "1";
const sc_lv<7> matrixmul::ap_ST_fsm_state2 = "10";
const sc_lv<7> matrixmul::ap_ST_fsm_state3 = "100";
const sc_lv<7> matrixmul::ap_ST_fsm_state4 = "1000";
const sc_lv<7> matrixmul::ap_ST_fsm_state5 = "10000";
const sc_lv<7> matrixmul::ap_ST_fsm_state6 = "100000";
const sc_lv<7> matrixmul::ap_ST_fsm_state7 = "1000000";
const sc_lv<32> matrixmul::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_lv<32> matrixmul::ap_const_lv32_1 = "1";
const sc_lv<1> matrixmul::ap_const_lv1_0 = "0";
const sc_lv<32> matrixmul::ap_const_lv32_2 = "10";
const sc_lv<32> matrixmul::ap_const_lv32_3 = "11";
const sc_lv<32> matrixmul::ap_const_lv32_4 = "100";
const sc_lv<32> matrixmul::ap_const_lv32_5 = "101";
const sc_lv<32> matrixmul::ap_const_lv32_6 = "110";
const sc_lv<6> matrixmul::ap_const_lv6_0 = "000000";
const sc_lv<1> matrixmul::ap_const_lv1_1 = "1";
const sc_lv<6> matrixmul::ap_const_lv6_20 = "100000";
const sc_lv<6> matrixmul::ap_const_lv6_1 = "1";
const sc_lv<5> matrixmul::ap_const_lv5_0 = "00000";
const bool matrixmul::ap_const_boolean_1 = true;

matrixmul::matrixmul(sc_module_name name) : sc_module(name), mVcdFile(0) {

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_AB_address0);
    sensitive << ( AB_addr_reg_260 );
    sensitive << ( ap_CS_fsm_state4 );

    SC_METHOD(thread_AB_ce0);
    sensitive << ( ap_CS_fsm_state4 );

    SC_METHOD(thread_AB_d0);
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( ABij_0_reg_102 );

    SC_METHOD(thread_AB_we0);
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( icmp_ln15_fu_176_p2 );

    SC_METHOD(thread_ABij_fu_228_p2);
    sensitive << ( mul_ln17_reg_293 );
    sensitive << ( ABij_0_reg_102 );

    SC_METHOD(thread_A_address0);
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( zext_ln17_1_fu_197_p1 );

    SC_METHOD(thread_A_ce0);
    sensitive << ( ap_CS_fsm_state4 );

    SC_METHOD(thread_B_address0);
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( zext_ln17_3_fu_219_p1 );

    SC_METHOD(thread_B_ce0);
    sensitive << ( ap_CS_fsm_state4 );

    SC_METHOD(thread_add_ln17_1_fu_214_p2);
    sensitive << ( zext_ln19_reg_255 );
    sensitive << ( zext_ln17_2_fu_210_p1 );

    SC_METHOD(thread_add_ln17_fu_192_p2);
    sensitive << ( zext_ln12_reg_241 );
    sensitive << ( zext_ln17_fu_188_p1 );

    SC_METHOD(thread_add_ln19_fu_166_p2);
    sensitive << ( zext_ln12_reg_241 );
    sensitive << ( zext_ln19_fu_162_p1 );

    SC_METHOD(thread_ap_CS_fsm_state1);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state2);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state3);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state4);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state5);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state6);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state7);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( icmp_ln11_fu_126_p2 );

    SC_METHOD(thread_ap_idle);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( icmp_ln11_fu_126_p2 );

    SC_METHOD(thread_i_fu_132_p2);
    sensitive << ( i_0_reg_80 );

    SC_METHOD(thread_icmp_ln11_fu_126_p2);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( i_0_reg_80 );

    SC_METHOD(thread_icmp_ln12_fu_150_p2);
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( j_0_reg_91 );

    SC_METHOD(thread_icmp_ln15_fu_176_p2);
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( k_0_reg_115 );

    SC_METHOD(thread_j_fu_156_p2);
    sensitive << ( j_0_reg_91 );

    SC_METHOD(thread_k_fu_182_p2);
    sensitive << ( k_0_reg_115 );

    SC_METHOD(thread_mul_ln17_fu_224_p2);
    sensitive << ( A_load_reg_283 );
    sensitive << ( B_load_reg_288 );

    SC_METHOD(thread_tmp_2_fu_138_p3);
    sensitive << ( i_0_reg_80 );

    SC_METHOD(thread_tmp_3_fu_202_p3);
    sensitive << ( k_0_reg_115 );

    SC_METHOD(thread_zext_ln12_fu_146_p1);
    sensitive << ( tmp_2_fu_138_p3 );

    SC_METHOD(thread_zext_ln17_1_fu_197_p1);
    sensitive << ( add_ln17_fu_192_p2 );

    SC_METHOD(thread_zext_ln17_2_fu_210_p1);
    sensitive << ( tmp_3_fu_202_p3 );

    SC_METHOD(thread_zext_ln17_3_fu_219_p1);
    sensitive << ( add_ln17_1_fu_214_p2 );

    SC_METHOD(thread_zext_ln17_fu_188_p1);
    sensitive << ( k_0_reg_115 );

    SC_METHOD(thread_zext_ln19_1_fu_171_p1);
    sensitive << ( add_ln19_fu_166_p2 );

    SC_METHOD(thread_zext_ln19_fu_162_p1);
    sensitive << ( j_0_reg_91 );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( icmp_ln11_fu_126_p2 );
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( icmp_ln12_fu_150_p2 );
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( icmp_ln15_fu_176_p2 );

    SC_THREAD(thread_hdltv_gen);
    sensitive << ( ap_clk.pos() );

    ap_CS_fsm = "0000001";
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "matrixmul_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT__
    sc_trace(mVcdFile, ap_clk, "(port)ap_clk");
    sc_trace(mVcdFile, ap_rst, "(port)ap_rst");
    sc_trace(mVcdFile, ap_start, "(port)ap_start");
    sc_trace(mVcdFile, ap_done, "(port)ap_done");
    sc_trace(mVcdFile, ap_idle, "(port)ap_idle");
    sc_trace(mVcdFile, ap_ready, "(port)ap_ready");
    sc_trace(mVcdFile, A_address0, "(port)A_address0");
    sc_trace(mVcdFile, A_ce0, "(port)A_ce0");
    sc_trace(mVcdFile, A_q0, "(port)A_q0");
    sc_trace(mVcdFile, B_address0, "(port)B_address0");
    sc_trace(mVcdFile, B_ce0, "(port)B_ce0");
    sc_trace(mVcdFile, B_q0, "(port)B_q0");
    sc_trace(mVcdFile, AB_address0, "(port)AB_address0");
    sc_trace(mVcdFile, AB_ce0, "(port)AB_ce0");
    sc_trace(mVcdFile, AB_we0, "(port)AB_we0");
    sc_trace(mVcdFile, AB_d0, "(port)AB_d0");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_CS_fsm_state1, "ap_CS_fsm_state1");
    sc_trace(mVcdFile, i_fu_132_p2, "i_fu_132_p2");
    sc_trace(mVcdFile, i_reg_236, "i_reg_236");
    sc_trace(mVcdFile, ap_CS_fsm_state2, "ap_CS_fsm_state2");
    sc_trace(mVcdFile, zext_ln12_fu_146_p1, "zext_ln12_fu_146_p1");
    sc_trace(mVcdFile, zext_ln12_reg_241, "zext_ln12_reg_241");
    sc_trace(mVcdFile, icmp_ln11_fu_126_p2, "icmp_ln11_fu_126_p2");
    sc_trace(mVcdFile, j_fu_156_p2, "j_fu_156_p2");
    sc_trace(mVcdFile, j_reg_250, "j_reg_250");
    sc_trace(mVcdFile, ap_CS_fsm_state3, "ap_CS_fsm_state3");
    sc_trace(mVcdFile, zext_ln19_fu_162_p1, "zext_ln19_fu_162_p1");
    sc_trace(mVcdFile, zext_ln19_reg_255, "zext_ln19_reg_255");
    sc_trace(mVcdFile, icmp_ln12_fu_150_p2, "icmp_ln12_fu_150_p2");
    sc_trace(mVcdFile, AB_addr_reg_260, "AB_addr_reg_260");
    sc_trace(mVcdFile, k_fu_182_p2, "k_fu_182_p2");
    sc_trace(mVcdFile, k_reg_268, "k_reg_268");
    sc_trace(mVcdFile, ap_CS_fsm_state4, "ap_CS_fsm_state4");
    sc_trace(mVcdFile, icmp_ln15_fu_176_p2, "icmp_ln15_fu_176_p2");
    sc_trace(mVcdFile, A_load_reg_283, "A_load_reg_283");
    sc_trace(mVcdFile, ap_CS_fsm_state5, "ap_CS_fsm_state5");
    sc_trace(mVcdFile, B_load_reg_288, "B_load_reg_288");
    sc_trace(mVcdFile, mul_ln17_fu_224_p2, "mul_ln17_fu_224_p2");
    sc_trace(mVcdFile, mul_ln17_reg_293, "mul_ln17_reg_293");
    sc_trace(mVcdFile, ap_CS_fsm_state6, "ap_CS_fsm_state6");
    sc_trace(mVcdFile, ABij_fu_228_p2, "ABij_fu_228_p2");
    sc_trace(mVcdFile, ap_CS_fsm_state7, "ap_CS_fsm_state7");
    sc_trace(mVcdFile, i_0_reg_80, "i_0_reg_80");
    sc_trace(mVcdFile, j_0_reg_91, "j_0_reg_91");
    sc_trace(mVcdFile, ABij_0_reg_102, "ABij_0_reg_102");
    sc_trace(mVcdFile, k_0_reg_115, "k_0_reg_115");
    sc_trace(mVcdFile, zext_ln19_1_fu_171_p1, "zext_ln19_1_fu_171_p1");
    sc_trace(mVcdFile, zext_ln17_1_fu_197_p1, "zext_ln17_1_fu_197_p1");
    sc_trace(mVcdFile, zext_ln17_3_fu_219_p1, "zext_ln17_3_fu_219_p1");
    sc_trace(mVcdFile, tmp_2_fu_138_p3, "tmp_2_fu_138_p3");
    sc_trace(mVcdFile, add_ln19_fu_166_p2, "add_ln19_fu_166_p2");
    sc_trace(mVcdFile, zext_ln17_fu_188_p1, "zext_ln17_fu_188_p1");
    sc_trace(mVcdFile, add_ln17_fu_192_p2, "add_ln17_fu_192_p2");
    sc_trace(mVcdFile, tmp_3_fu_202_p3, "tmp_3_fu_202_p3");
    sc_trace(mVcdFile, zext_ln17_2_fu_210_p1, "zext_ln17_2_fu_210_p1");
    sc_trace(mVcdFile, add_ln17_1_fu_214_p2, "add_ln17_1_fu_214_p2");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
#endif

    }
    mHdltvinHandle.open("matrixmul.hdltvin.dat");
    mHdltvoutHandle.open("matrixmul.hdltvout.dat");
}

matrixmul::~matrixmul() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

    mHdltvinHandle << "] " << endl;
    mHdltvoutHandle << "] " << endl;
    mHdltvinHandle.close();
    mHdltvoutHandle.close();
}

void matrixmul::thread_ap_clk_no_reset_() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        ABij_0_reg_102 = ABij_fu_228_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln12_fu_150_p2.read()))) {
        ABij_0_reg_102 = ap_const_lv32_0;
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(icmp_ln12_fu_150_p2.read(), ap_const_lv1_1))) {
        i_0_reg_80 = i_reg_236.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        i_0_reg_80 = ap_const_lv6_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(icmp_ln15_fu_176_p2.read(), ap_const_lv1_1))) {
        j_0_reg_91 = j_reg_250.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                esl_seteq<1,1,1>(icmp_ln11_fu_126_p2.read(), ap_const_lv1_0))) {
        j_0_reg_91 = ap_const_lv6_0;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        k_0_reg_115 = k_reg_268.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln12_fu_150_p2.read()))) {
        k_0_reg_115 = ap_const_lv6_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln12_fu_150_p2.read()))) {
        AB_addr_reg_260 =  (sc_lv<10>) (zext_ln19_1_fu_171_p1.read());
        zext_ln19_reg_255 = zext_ln19_fu_162_p1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        A_load_reg_283 = A_q0.read();
        B_load_reg_288 = B_q0.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        i_reg_236 = i_fu_132_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        j_reg_250 = j_fu_156_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        k_reg_268 = k_fu_182_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        mul_ln17_reg_293 = mul_ln17_fu_224_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(icmp_ln11_fu_126_p2.read(), ap_const_lv1_0))) {
        zext_ln12_reg_241 = zext_ln12_fu_146_p1.read();
    }
}

void matrixmul::thread_AB_address0() {
    AB_address0 = AB_addr_reg_260.read();
}

void matrixmul::thread_AB_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        AB_ce0 = ap_const_logic_1;
    } else {
        AB_ce0 = ap_const_logic_0;
    }
}

void matrixmul::thread_AB_d0() {
    AB_d0 = ABij_0_reg_102.read();
}

void matrixmul::thread_AB_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(icmp_ln15_fu_176_p2.read(), ap_const_lv1_1))) {
        AB_we0 = ap_const_logic_1;
    } else {
        AB_we0 = ap_const_logic_0;
    }
}

void matrixmul::thread_ABij_fu_228_p2() {
    ABij_fu_228_p2 = (!mul_ln17_reg_293.read().is_01() || !ABij_0_reg_102.read().is_01())? sc_lv<32>(): (sc_biguint<32>(mul_ln17_reg_293.read()) + sc_biguint<32>(ABij_0_reg_102.read()));
}

void matrixmul::thread_A_address0() {
    A_address0 =  (sc_lv<10>) (zext_ln17_1_fu_197_p1.read());
}

void matrixmul::thread_A_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        A_ce0 = ap_const_logic_1;
    } else {
        A_ce0 = ap_const_logic_0;
    }
}

void matrixmul::thread_B_address0() {
    B_address0 =  (sc_lv<10>) (zext_ln17_3_fu_219_p1.read());
}

void matrixmul::thread_B_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        B_ce0 = ap_const_logic_1;
    } else {
        B_ce0 = ap_const_logic_0;
    }
}

void matrixmul::thread_add_ln17_1_fu_214_p2() {
    add_ln17_1_fu_214_p2 = (!zext_ln19_reg_255.read().is_01() || !zext_ln17_2_fu_210_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln19_reg_255.read()) + sc_biguint<12>(zext_ln17_2_fu_210_p1.read()));
}

void matrixmul::thread_add_ln17_fu_192_p2() {
    add_ln17_fu_192_p2 = (!zext_ln17_fu_188_p1.read().is_01() || !zext_ln12_reg_241.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln17_fu_188_p1.read()) + sc_biguint<12>(zext_ln12_reg_241.read()));
}

void matrixmul::thread_add_ln19_fu_166_p2() {
    add_ln19_fu_166_p2 = (!zext_ln12_reg_241.read().is_01() || !zext_ln19_fu_162_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln12_reg_241.read()) + sc_biguint<12>(zext_ln19_fu_162_p1.read()));
}

void matrixmul::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void matrixmul::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void matrixmul::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read()[2];
}

void matrixmul::thread_ap_CS_fsm_state4() {
    ap_CS_fsm_state4 = ap_CS_fsm.read()[3];
}

void matrixmul::thread_ap_CS_fsm_state5() {
    ap_CS_fsm_state5 = ap_CS_fsm.read()[4];
}

void matrixmul::thread_ap_CS_fsm_state6() {
    ap_CS_fsm_state6 = ap_CS_fsm.read()[5];
}

void matrixmul::thread_ap_CS_fsm_state7() {
    ap_CS_fsm_state7 = ap_CS_fsm.read()[6];
}

void matrixmul::thread_ap_done() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(icmp_ln11_fu_126_p2.read(), ap_const_lv1_1))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void matrixmul::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void matrixmul::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(icmp_ln11_fu_126_p2.read(), ap_const_lv1_1))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void matrixmul::thread_i_fu_132_p2() {
    i_fu_132_p2 = (!i_0_reg_80.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(i_0_reg_80.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void matrixmul::thread_icmp_ln11_fu_126_p2() {
    icmp_ln11_fu_126_p2 = (!i_0_reg_80.read().is_01() || !ap_const_lv6_20.is_01())? sc_lv<1>(): sc_lv<1>(i_0_reg_80.read() == ap_const_lv6_20);
}

void matrixmul::thread_icmp_ln12_fu_150_p2() {
    icmp_ln12_fu_150_p2 = (!j_0_reg_91.read().is_01() || !ap_const_lv6_20.is_01())? sc_lv<1>(): sc_lv<1>(j_0_reg_91.read() == ap_const_lv6_20);
}

void matrixmul::thread_icmp_ln15_fu_176_p2() {
    icmp_ln15_fu_176_p2 = (!k_0_reg_115.read().is_01() || !ap_const_lv6_20.is_01())? sc_lv<1>(): sc_lv<1>(k_0_reg_115.read() == ap_const_lv6_20);
}

void matrixmul::thread_j_fu_156_p2() {
    j_fu_156_p2 = (!j_0_reg_91.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(j_0_reg_91.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void matrixmul::thread_k_fu_182_p2() {
    k_fu_182_p2 = (!k_0_reg_115.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(k_0_reg_115.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void matrixmul::thread_mul_ln17_fu_224_p2() {
    mul_ln17_fu_224_p2 = (!A_load_reg_283.read().is_01() || !B_load_reg_288.read().is_01())? sc_lv<32>(): sc_bigint<32>(A_load_reg_283.read()) * sc_bigint<32>(B_load_reg_288.read());
}

void matrixmul::thread_tmp_2_fu_138_p3() {
    tmp_2_fu_138_p3 = esl_concat<6,5>(i_0_reg_80.read(), ap_const_lv5_0);
}

void matrixmul::thread_tmp_3_fu_202_p3() {
    tmp_3_fu_202_p3 = esl_concat<6,5>(k_0_reg_115.read(), ap_const_lv5_0);
}

void matrixmul::thread_zext_ln12_fu_146_p1() {
    zext_ln12_fu_146_p1 = esl_zext<12,11>(tmp_2_fu_138_p3.read());
}

void matrixmul::thread_zext_ln17_1_fu_197_p1() {
    zext_ln17_1_fu_197_p1 = esl_zext<64,12>(add_ln17_fu_192_p2.read());
}

void matrixmul::thread_zext_ln17_2_fu_210_p1() {
    zext_ln17_2_fu_210_p1 = esl_zext<12,11>(tmp_3_fu_202_p3.read());
}

void matrixmul::thread_zext_ln17_3_fu_219_p1() {
    zext_ln17_3_fu_219_p1 = esl_zext<64,12>(add_ln17_1_fu_214_p2.read());
}

void matrixmul::thread_zext_ln17_fu_188_p1() {
    zext_ln17_fu_188_p1 = esl_zext<12,6>(k_0_reg_115.read());
}

void matrixmul::thread_zext_ln19_1_fu_171_p1() {
    zext_ln19_1_fu_171_p1 = esl_zext<64,12>(add_ln19_fu_166_p2.read());
}

void matrixmul::thread_zext_ln19_fu_162_p1() {
    zext_ln19_fu_162_p1 = esl_zext<12,6>(j_0_reg_91.read());
}

void matrixmul::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(icmp_ln11_fu_126_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state1;
            } else {
                ap_NS_fsm = ap_ST_fsm_state3;
            }
            break;
        case 4 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && esl_seteq<1,1,1>(icmp_ln12_fu_150_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state4;
            }
            break;
        case 8 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && esl_seteq<1,1,1>(icmp_ln15_fu_176_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state3;
            } else {
                ap_NS_fsm = ap_ST_fsm_state5;
            }
            break;
        case 16 : 
            ap_NS_fsm = ap_ST_fsm_state6;
            break;
        case 32 : 
            ap_NS_fsm = ap_ST_fsm_state7;
            break;
        case 64 : 
            ap_NS_fsm = ap_ST_fsm_state4;
            break;
        default : 
            ap_NS_fsm = "XXXXXXX";
            break;
    }
}

void matrixmul::thread_hdltv_gen() {
    const char* dump_tv = std::getenv("AP_WRITE_TV");
    if (!(dump_tv && string(dump_tv) == "on")) return;

    wait();

    mHdltvinHandle << "[ " << endl;
    mHdltvoutHandle << "[ " << endl;
    int ap_cycleNo = 0;
    while (1) {
        wait();
        const char* mComma = ap_cycleNo == 0 ? " " : ", " ;
        mHdltvinHandle << mComma << "{"  <<  " \"ap_rst\" :  \"" << ap_rst.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"ap_start\" :  \"" << ap_start.read() << "\" ";
        mHdltvoutHandle << mComma << "{"  <<  " \"ap_done\" :  \"" << ap_done.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_idle\" :  \"" << ap_idle.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_ready\" :  \"" << ap_ready.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"A_address0\" :  \"" << A_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"A_ce0\" :  \"" << A_ce0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"A_q0\" :  \"" << A_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"B_address0\" :  \"" << B_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"B_ce0\" :  \"" << B_ce0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"B_q0\" :  \"" << B_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"AB_address0\" :  \"" << AB_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"AB_ce0\" :  \"" << AB_ce0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"AB_we0\" :  \"" << AB_we0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"AB_d0\" :  \"" << AB_d0.read() << "\" ";
        mHdltvinHandle << "}" << std::endl;
        mHdltvoutHandle << "}" << std::endl;
        ap_cycleNo++;
    }
}

}
