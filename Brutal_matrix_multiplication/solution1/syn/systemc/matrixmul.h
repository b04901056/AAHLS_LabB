// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2020.1
// Copyright (C) 1986-2020 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _matrixmul_HH_
#define _matrixmul_HH_

#include "systemc.h"
#include "AESL_pkg.h"


namespace ap_rtl {

struct matrixmul : public sc_module {
    // Port declarations 16
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<10> > A_address0;
    sc_out< sc_logic > A_ce0;
    sc_in< sc_lv<32> > A_q0;
    sc_out< sc_lv<10> > B_address0;
    sc_out< sc_logic > B_ce0;
    sc_in< sc_lv<32> > B_q0;
    sc_out< sc_lv<10> > AB_address0;
    sc_out< sc_logic > AB_ce0;
    sc_out< sc_logic > AB_we0;
    sc_out< sc_lv<32> > AB_d0;


    // Module declarations
    matrixmul(sc_module_name name);
    SC_HAS_PROCESS(matrixmul);

    ~matrixmul();

    sc_trace_file* mVcdFile;

    ofstream mHdltvinHandle;
    ofstream mHdltvoutHandle;
    sc_signal< sc_lv<7> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<6> > i_fu_132_p2;
    sc_signal< sc_lv<6> > i_reg_236;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<12> > zext_ln12_fu_146_p1;
    sc_signal< sc_lv<12> > zext_ln12_reg_241;
    sc_signal< sc_lv<1> > icmp_ln11_fu_126_p2;
    sc_signal< sc_lv<6> > j_fu_156_p2;
    sc_signal< sc_lv<6> > j_reg_250;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<12> > zext_ln19_fu_162_p1;
    sc_signal< sc_lv<12> > zext_ln19_reg_255;
    sc_signal< sc_lv<1> > icmp_ln12_fu_150_p2;
    sc_signal< sc_lv<10> > AB_addr_reg_260;
    sc_signal< sc_lv<6> > k_fu_182_p2;
    sc_signal< sc_lv<6> > k_reg_268;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<1> > icmp_ln15_fu_176_p2;
    sc_signal< sc_lv<32> > A_load_reg_283;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_lv<32> > B_load_reg_288;
    sc_signal< sc_lv<32> > mul_ln17_fu_224_p2;
    sc_signal< sc_lv<32> > mul_ln17_reg_293;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_lv<32> > ABij_fu_228_p2;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_lv<6> > i_0_reg_80;
    sc_signal< sc_lv<6> > j_0_reg_91;
    sc_signal< sc_lv<32> > ABij_0_reg_102;
    sc_signal< sc_lv<6> > k_0_reg_115;
    sc_signal< sc_lv<64> > zext_ln19_1_fu_171_p1;
    sc_signal< sc_lv<64> > zext_ln17_1_fu_197_p1;
    sc_signal< sc_lv<64> > zext_ln17_3_fu_219_p1;
    sc_signal< sc_lv<11> > tmp_2_fu_138_p3;
    sc_signal< sc_lv<12> > add_ln19_fu_166_p2;
    sc_signal< sc_lv<12> > zext_ln17_fu_188_p1;
    sc_signal< sc_lv<12> > add_ln17_fu_192_p2;
    sc_signal< sc_lv<11> > tmp_3_fu_202_p3;
    sc_signal< sc_lv<12> > zext_ln17_2_fu_210_p1;
    sc_signal< sc_lv<12> > add_ln17_1_fu_214_p2;
    sc_signal< sc_lv<7> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<7> ap_ST_fsm_state1;
    static const sc_lv<7> ap_ST_fsm_state2;
    static const sc_lv<7> ap_ST_fsm_state3;
    static const sc_lv<7> ap_ST_fsm_state4;
    static const sc_lv<7> ap_ST_fsm_state5;
    static const sc_lv<7> ap_ST_fsm_state6;
    static const sc_lv<7> ap_ST_fsm_state7;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<6> ap_const_lv6_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<6> ap_const_lv6_20;
    static const sc_lv<6> ap_const_lv6_1;
    static const sc_lv<5> ap_const_lv5_0;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_AB_address0();
    void thread_AB_ce0();
    void thread_AB_d0();
    void thread_AB_we0();
    void thread_ABij_fu_228_p2();
    void thread_A_address0();
    void thread_A_ce0();
    void thread_B_address0();
    void thread_B_ce0();
    void thread_add_ln17_1_fu_214_p2();
    void thread_add_ln17_fu_192_p2();
    void thread_add_ln19_fu_166_p2();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state5();
    void thread_ap_CS_fsm_state6();
    void thread_ap_CS_fsm_state7();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_i_fu_132_p2();
    void thread_icmp_ln11_fu_126_p2();
    void thread_icmp_ln12_fu_150_p2();
    void thread_icmp_ln15_fu_176_p2();
    void thread_j_fu_156_p2();
    void thread_k_fu_182_p2();
    void thread_mul_ln17_fu_224_p2();
    void thread_tmp_2_fu_138_p3();
    void thread_tmp_3_fu_202_p3();
    void thread_zext_ln12_fu_146_p1();
    void thread_zext_ln17_1_fu_197_p1();
    void thread_zext_ln17_2_fu_210_p1();
    void thread_zext_ln17_3_fu_219_p1();
    void thread_zext_ln17_fu_188_p1();
    void thread_zext_ln19_1_fu_171_p1();
    void thread_zext_ln19_fu_162_p1();
    void thread_ap_NS_fsm();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif