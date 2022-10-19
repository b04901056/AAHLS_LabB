// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2020.1
// Copyright (C) 1986-2020 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _Loop_memset_AB_proc8_HH_
#define _Loop_memset_AB_proc8_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "blockmatmul_mux_4cud.h"
#include "Loop_memset_AB_prbkb.h"

namespace ap_rtl {

struct Loop_memset_AB_proc8 : public sc_module {
    // Port declarations 41
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_in< sc_logic > ap_continue;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<4> > AB_address0;
    sc_out< sc_logic > AB_ce0;
    sc_out< sc_logic > AB_we0;
    sc_out< sc_lv<32> > AB_d0;
    sc_in< sc_lv<32> > AB_q0;
    sc_out< sc_lv<4> > AB_address1;
    sc_out< sc_logic > AB_ce1;
    sc_out< sc_logic > AB_we1;
    sc_out< sc_lv<32> > AB_d1;
    sc_in< sc_lv<32> > it;
    sc_in< sc_lv<32> > Arows_V_a_0_dout;
    sc_in< sc_logic > Arows_V_a_0_empty_n;
    sc_out< sc_logic > Arows_V_a_0_read;
    sc_in< sc_lv<32> > Arows_V_a_1_dout;
    sc_in< sc_logic > Arows_V_a_1_empty_n;
    sc_out< sc_logic > Arows_V_a_1_read;
    sc_in< sc_lv<32> > Arows_V_a_2_dout;
    sc_in< sc_logic > Arows_V_a_2_empty_n;
    sc_out< sc_logic > Arows_V_a_2_read;
    sc_in< sc_lv<32> > Arows_V_a_3_dout;
    sc_in< sc_logic > Arows_V_a_3_empty_n;
    sc_out< sc_logic > Arows_V_a_3_read;
    sc_in< sc_lv<32> > Bcols_V_a_0_dout;
    sc_in< sc_logic > Bcols_V_a_0_empty_n;
    sc_out< sc_logic > Bcols_V_a_0_read;
    sc_in< sc_lv<32> > Bcols_V_a_1_dout;
    sc_in< sc_logic > Bcols_V_a_1_empty_n;
    sc_out< sc_logic > Bcols_V_a_1_read;
    sc_in< sc_lv<32> > Bcols_V_a_2_dout;
    sc_in< sc_logic > Bcols_V_a_2_empty_n;
    sc_out< sc_logic > Bcols_V_a_2_read;
    sc_in< sc_lv<32> > Bcols_V_a_3_dout;
    sc_in< sc_logic > Bcols_V_a_3_empty_n;
    sc_out< sc_logic > Bcols_V_a_3_read;


    // Module declarations
    Loop_memset_AB_proc8(sc_module_name name);
    SC_HAS_PROCESS(Loop_memset_AB_proc8);

    ~Loop_memset_AB_proc8();

    sc_trace_file* mVcdFile;

    Loop_memset_AB_prbkb* A_U;
    blockmatmul_mux_4cud<1,1,32,32,32,32,2,32>* blockmatmul_mux_4cud_U1;
    sc_signal< sc_logic > ap_done_reg;
    sc_signal< sc_lv<9> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<5> > A_address0;
    sc_signal< sc_logic > A_ce0;
    sc_signal< sc_logic > A_we0;
    sc_signal< sc_lv<32> > A_d0;
    sc_signal< sc_lv<32> > A_q0;
    sc_signal< sc_lv<5> > A_address1;
    sc_signal< sc_logic > A_ce1;
    sc_signal< sc_logic > A_we1;
    sc_signal< sc_lv<32> > A_d1;
    sc_signal< sc_logic > Arows_V_a_0_blk_n;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage1;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0;
    sc_signal< bool > ap_block_pp0_stage1;
    sc_signal< sc_lv<1> > icmp_ln13_reg_567;
    sc_signal< sc_logic > Arows_V_a_1_blk_n;
    sc_signal< sc_logic > Arows_V_a_2_blk_n;
    sc_signal< sc_logic > Arows_V_a_3_blk_n;
    sc_signal< sc_logic > Bcols_V_a_0_blk_n;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< sc_lv<1> > icmp_ln22_fu_392_p2;
    sc_signal< sc_logic > Bcols_V_a_1_blk_n;
    sc_signal< sc_logic > Bcols_V_a_2_blk_n;
    sc_signal< sc_logic > Bcols_V_a_3_blk_n;
    sc_signal< sc_lv<4> > i_0_reg_233;
    sc_signal< sc_lv<5> > indvar_flatten_reg_256;
    sc_signal< sc_lv<3> > i1_0_reg_267;
    sc_signal< sc_lv<3> > j2_0_reg_278;
    sc_signal< bool > ap_block_state1;
    sc_signal< sc_lv<2> > add_ln7_fu_289_p2;
    sc_signal< sc_lv<2> > add_ln7_reg_545;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<2> > add_ln7_1_fu_308_p2;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<1> > icmp_ln7_fu_314_p2;
    sc_signal< sc_lv<1> > icmp_ln7_1_fu_320_p2;
    sc_signal< sc_lv<1> > trunc_ln12_fu_326_p1;
    sc_signal< sc_lv<1> > icmp_ln13_fu_329_p2;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage0;
    sc_signal< bool > ap_block_state4_pp0_stage0_iter0;
    sc_signal< bool > ap_block_state6_pp0_stage0_iter1;
    sc_signal< bool > ap_block_pp0_stage0_11001;
    sc_signal< sc_lv<4> > i_fu_335_p2;
    sc_signal< sc_lv<4> > i_reg_571;
    sc_signal< sc_lv<32> > tmp_a_23_reg_576;
    sc_signal< sc_logic > io_acc_block_signal_op49;
    sc_signal< bool > ap_block_state5_pp0_stage1_iter0;
    sc_signal< bool > ap_block_pp0_stage1_11001;
    sc_signal< sc_lv<32> > tmp_a_34_reg_581;
    sc_signal< sc_lv<4> > xor_ln17_fu_364_p2;
    sc_signal< sc_lv<4> > xor_ln17_reg_586;
    sc_signal< sc_logic > io_acc_block_signal_op82;
    sc_signal< bool > ap_block_state8;
    sc_signal< sc_lv<4> > k_fu_398_p2;
    sc_signal< sc_lv<4> > k_reg_595;
    sc_signal< sc_lv<32> > tmp_a_1_05_reg_600;
    sc_signal< sc_lv<32> > tmp_a_1_16_reg_605;
    sc_signal< sc_lv<32> > tmp_a_1_27_reg_610;
    sc_signal< sc_lv<32> > tmp_a_1_38_reg_615;
    sc_signal< sc_lv<7> > zext_ln25_fu_420_p1;
    sc_signal< sc_lv<7> > zext_ln25_reg_620;
    sc_signal< sc_lv<1> > icmp_ln25_fu_424_p2;
    sc_signal< sc_lv<1> > icmp_ln25_reg_625;
    sc_signal< sc_logic > ap_CS_fsm_pp1_stage0;
    sc_signal< bool > ap_block_state9_pp1_stage0_iter0;
    sc_signal< bool > ap_block_state10_pp1_stage0_iter1;
    sc_signal< bool > ap_block_state11_pp1_stage0_iter2;
    sc_signal< bool > ap_block_state12_pp1_stage0_iter3;
    sc_signal< bool > ap_block_pp1_stage0_11001;
    sc_signal< sc_lv<1> > icmp_ln25_reg_625_pp1_iter1_reg;
    sc_signal< sc_lv<1> > icmp_ln25_reg_625_pp1_iter2_reg;
    sc_signal< sc_lv<5> > add_ln25_fu_430_p2;
    sc_signal< sc_logic > ap_enable_reg_pp1_iter0;
    sc_signal< sc_lv<3> > select_ln28_fu_448_p3;
    sc_signal< sc_lv<3> > select_ln28_reg_634;
    sc_signal< sc_lv<3> > select_ln28_1_fu_456_p3;
    sc_signal< sc_lv<3> > select_ln28_1_reg_639;
    sc_signal< sc_lv<2> > trunc_ln28_fu_486_p1;
    sc_signal< sc_lv<2> > trunc_ln28_reg_650;
    sc_signal< sc_lv<3> > j_fu_490_p2;
    sc_signal< sc_lv<4> > AB_addr_2_reg_660;
    sc_signal< sc_lv<4> > AB_addr_2_reg_660_pp1_iter2_reg;
    sc_signal< sc_lv<32> > A_load_reg_666;
    sc_signal< sc_logic > ap_enable_reg_pp1_iter1;
    sc_signal< sc_lv<32> > tmp_2_fu_521_p6;
    sc_signal< sc_lv<32> > tmp_2_reg_671;
    sc_signal< sc_lv<32> > mul_ln28_fu_530_p2;
    sc_signal< sc_lv<32> > mul_ln28_reg_676;
    sc_signal< bool > ap_block_pp0_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp0_exit_iter0_state4;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter1;
    sc_signal< bool > ap_block_pp0_stage1_subdone;
    sc_signal< bool > ap_block_pp1_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp1_exit_iter0_state9;
    sc_signal< sc_logic > ap_enable_reg_pp1_iter2;
    sc_signal< sc_logic > ap_enable_reg_pp1_iter3;
    sc_signal< sc_lv<2> > phi_ln7_reg_210;
    sc_signal< sc_lv<2> > phi_ln7_1_reg_222;
    sc_signal< sc_lv<4> > ap_phi_mux_i_0_phi_fu_237_p4;
    sc_signal< bool > ap_block_pp0_stage0;
    sc_signal< sc_lv<4> > k_0_reg_245;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_logic > ap_CS_fsm_state13;
    sc_signal< sc_lv<3> > ap_phi_mux_i1_0_phi_fu_271_p4;
    sc_signal< bool > ap_block_pp1_stage0;
    sc_signal< sc_lv<64> > zext_ln7_fu_303_p1;
    sc_signal< sc_lv<64> > zext_ln17_fu_359_p1;
    sc_signal< sc_lv<64> > zext_ln17_1_fu_370_p1;
    sc_signal< sc_lv<64> > tmp_6_fu_375_p3;
    sc_signal< sc_lv<64> > zext_ln17_2_fu_387_p1;
    sc_signal< sc_lv<64> > zext_ln28_1_fu_481_p1;
    sc_signal< sc_lv<64> > zext_ln28_3_fu_516_p1;
    sc_signal< sc_lv<4> > tmp_5_fu_295_p3;
    sc_signal< sc_lv<5> > sext_ln17_fu_384_p1;
    sc_signal< sc_lv<1> > icmp_ln26_fu_442_p2;
    sc_signal< sc_lv<3> > i_1_fu_436_p2;
    sc_signal< sc_lv<6> > tmp_7_fu_464_p3;
    sc_signal< sc_lv<7> > zext_ln28_fu_472_p1;
    sc_signal< sc_lv<7> > add_ln28_1_fu_476_p2;
    sc_signal< sc_lv<5> > tmp_8_fu_496_p3;
    sc_signal< sc_lv<6> > zext_ln26_fu_503_p1;
    sc_signal< sc_lv<6> > zext_ln28_2_fu_507_p1;
    sc_signal< sc_lv<6> > add_ln28_2_fu_510_p2;
    sc_signal< sc_lv<9> > ap_NS_fsm;
    sc_signal< sc_logic > ap_idle_pp0;
    sc_signal< sc_logic > ap_enable_pp0;
    sc_signal< sc_logic > ap_idle_pp1;
    sc_signal< sc_logic > ap_enable_pp1;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<9> ap_ST_fsm_state1;
    static const sc_lv<9> ap_ST_fsm_state2;
    static const sc_lv<9> ap_ST_fsm_state3;
    static const sc_lv<9> ap_ST_fsm_pp0_stage0;
    static const sc_lv<9> ap_ST_fsm_pp0_stage1;
    static const sc_lv<9> ap_ST_fsm_state7;
    static const sc_lv<9> ap_ST_fsm_state8;
    static const sc_lv<9> ap_ST_fsm_pp1_stage0;
    static const sc_lv<9> ap_ST_fsm_state13;
    static const sc_lv<32> ap_const_lv32_0;
    static const bool ap_const_boolean_1;
    static const sc_lv<32> ap_const_lv32_4;
    static const bool ap_const_boolean_0;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<5> ap_const_lv5_0;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<2> ap_const_lv2_1;
    static const sc_lv<2> ap_const_lv2_3;
    static const sc_lv<4> ap_const_lv4_8;
    static const sc_lv<4> ap_const_lv4_1;
    static const sc_lv<60> ap_const_lv60_1;
    static const sc_lv<5> ap_const_lv5_10;
    static const sc_lv<5> ap_const_lv5_1;
    static const sc_lv<3> ap_const_lv3_1;
    static const sc_lv<3> ap_const_lv3_4;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_AB_address0();
    void thread_AB_address1();
    void thread_AB_ce0();
    void thread_AB_ce1();
    void thread_AB_d0();
    void thread_AB_d1();
    void thread_AB_we0();
    void thread_AB_we1();
    void thread_A_address0();
    void thread_A_address1();
    void thread_A_ce0();
    void thread_A_ce1();
    void thread_A_d0();
    void thread_A_d1();
    void thread_A_we0();
    void thread_A_we1();
    void thread_Arows_V_a_0_blk_n();
    void thread_Arows_V_a_0_read();
    void thread_Arows_V_a_1_blk_n();
    void thread_Arows_V_a_1_read();
    void thread_Arows_V_a_2_blk_n();
    void thread_Arows_V_a_2_read();
    void thread_Arows_V_a_3_blk_n();
    void thread_Arows_V_a_3_read();
    void thread_Bcols_V_a_0_blk_n();
    void thread_Bcols_V_a_0_read();
    void thread_Bcols_V_a_1_blk_n();
    void thread_Bcols_V_a_1_read();
    void thread_Bcols_V_a_2_blk_n();
    void thread_Bcols_V_a_2_read();
    void thread_Bcols_V_a_3_blk_n();
    void thread_Bcols_V_a_3_read();
    void thread_add_ln25_fu_430_p2();
    void thread_add_ln28_1_fu_476_p2();
    void thread_add_ln28_2_fu_510_p2();
    void thread_add_ln7_1_fu_308_p2();
    void thread_add_ln7_fu_289_p2();
    void thread_ap_CS_fsm_pp0_stage0();
    void thread_ap_CS_fsm_pp0_stage1();
    void thread_ap_CS_fsm_pp1_stage0();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state13();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state7();
    void thread_ap_CS_fsm_state8();
    void thread_ap_block_pp0_stage0();
    void thread_ap_block_pp0_stage0_11001();
    void thread_ap_block_pp0_stage0_subdone();
    void thread_ap_block_pp0_stage1();
    void thread_ap_block_pp0_stage1_11001();
    void thread_ap_block_pp0_stage1_subdone();
    void thread_ap_block_pp1_stage0();
    void thread_ap_block_pp1_stage0_11001();
    void thread_ap_block_pp1_stage0_subdone();
    void thread_ap_block_state1();
    void thread_ap_block_state10_pp1_stage0_iter1();
    void thread_ap_block_state11_pp1_stage0_iter2();
    void thread_ap_block_state12_pp1_stage0_iter3();
    void thread_ap_block_state4_pp0_stage0_iter0();
    void thread_ap_block_state5_pp0_stage1_iter0();
    void thread_ap_block_state6_pp0_stage0_iter1();
    void thread_ap_block_state8();
    void thread_ap_block_state9_pp1_stage0_iter0();
    void thread_ap_condition_pp0_exit_iter0_state4();
    void thread_ap_condition_pp1_exit_iter0_state9();
    void thread_ap_done();
    void thread_ap_enable_pp0();
    void thread_ap_enable_pp1();
    void thread_ap_idle();
    void thread_ap_idle_pp0();
    void thread_ap_idle_pp1();
    void thread_ap_phi_mux_i1_0_phi_fu_271_p4();
    void thread_ap_phi_mux_i_0_phi_fu_237_p4();
    void thread_ap_ready();
    void thread_i_1_fu_436_p2();
    void thread_i_fu_335_p2();
    void thread_icmp_ln13_fu_329_p2();
    void thread_icmp_ln22_fu_392_p2();
    void thread_icmp_ln25_fu_424_p2();
    void thread_icmp_ln26_fu_442_p2();
    void thread_icmp_ln7_1_fu_320_p2();
    void thread_icmp_ln7_fu_314_p2();
    void thread_io_acc_block_signal_op49();
    void thread_io_acc_block_signal_op82();
    void thread_j_fu_490_p2();
    void thread_k_fu_398_p2();
    void thread_mul_ln28_fu_530_p2();
    void thread_select_ln28_1_fu_456_p3();
    void thread_select_ln28_fu_448_p3();
    void thread_sext_ln17_fu_384_p1();
    void thread_tmp_5_fu_295_p3();
    void thread_tmp_6_fu_375_p3();
    void thread_tmp_7_fu_464_p3();
    void thread_tmp_8_fu_496_p3();
    void thread_trunc_ln12_fu_326_p1();
    void thread_trunc_ln28_fu_486_p1();
    void thread_xor_ln17_fu_364_p2();
    void thread_zext_ln17_1_fu_370_p1();
    void thread_zext_ln17_2_fu_387_p1();
    void thread_zext_ln17_fu_359_p1();
    void thread_zext_ln25_fu_420_p1();
    void thread_zext_ln26_fu_503_p1();
    void thread_zext_ln28_1_fu_481_p1();
    void thread_zext_ln28_2_fu_507_p1();
    void thread_zext_ln28_3_fu_516_p1();
    void thread_zext_ln28_fu_472_p1();
    void thread_zext_ln7_fu_303_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
