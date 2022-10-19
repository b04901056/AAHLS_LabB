// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2020.1
// Copyright (C) 1986-2020 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "blockmatmul.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic blockmatmul::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic blockmatmul::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<4> blockmatmul::ap_const_lv4_0 = "0000";
const sc_lv<32> blockmatmul::ap_const_lv32_0 = "00000000000000000000000000000000";

blockmatmul::blockmatmul(sc_module_name name) : sc_module(name), mVcdFile(0) {
    AB_U = new blockmatmul_AB("AB_U");
    AB_U->clk(ap_clk);
    AB_U->reset(ap_rst);
    AB_U->i_address0(Loop_memset_AB_proc8_U0_AB_address0);
    AB_U->i_ce0(Loop_memset_AB_proc8_U0_AB_ce0);
    AB_U->i_we0(Loop_memset_AB_proc8_U0_AB_we0);
    AB_U->i_d0(Loop_memset_AB_proc8_U0_AB_d0);
    AB_U->i_q0(AB_i_q0);
    AB_U->i_address1(Loop_memset_AB_proc8_U0_AB_address1);
    AB_U->i_ce1(Loop_memset_AB_proc8_U0_AB_ce1);
    AB_U->i_we1(Loop_memset_AB_proc8_U0_AB_we1);
    AB_U->i_d1(Loop_memset_AB_proc8_U0_AB_d1);
    AB_U->i_q1(AB_i_q1);
    AB_U->t_address0(Loop_writeoutput_pro_U0_AB_address0);
    AB_U->t_ce0(Loop_writeoutput_pro_U0_AB_ce0);
    AB_U->t_we0(ap_var_for_const0);
    AB_U->t_d0(ap_var_for_const1);
    AB_U->t_q0(AB_t_q0);
    AB_U->t_address1(Loop_writeoutput_pro_U0_AB_address1);
    AB_U->t_ce1(Loop_writeoutput_pro_U0_AB_ce1);
    AB_U->t_we1(ap_var_for_const0);
    AB_U->t_d1(ap_var_for_const1);
    AB_U->t_q1(AB_t_q1);
    AB_U->i_ce(ap_var_for_const2);
    AB_U->t_ce(ap_var_for_const2);
    AB_U->i_full_n(AB_i_full_n);
    AB_U->i_write(Loop_memset_AB_proc8_U0_ap_done);
    AB_U->t_empty_n(AB_t_empty_n);
    AB_U->t_read(Loop_writeoutput_pro_U0_ap_ready);
    Loop_memset_AB_proc8_U0 = new Loop_memset_AB_proc8("Loop_memset_AB_proc8_U0");
    Loop_memset_AB_proc8_U0->ap_clk(ap_clk);
    Loop_memset_AB_proc8_U0->ap_rst(ap_rst);
    Loop_memset_AB_proc8_U0->ap_start(Loop_memset_AB_proc8_U0_ap_start);
    Loop_memset_AB_proc8_U0->ap_done(Loop_memset_AB_proc8_U0_ap_done);
    Loop_memset_AB_proc8_U0->ap_continue(Loop_memset_AB_proc8_U0_ap_continue);
    Loop_memset_AB_proc8_U0->ap_idle(Loop_memset_AB_proc8_U0_ap_idle);
    Loop_memset_AB_proc8_U0->ap_ready(Loop_memset_AB_proc8_U0_ap_ready);
    Loop_memset_AB_proc8_U0->AB_address0(Loop_memset_AB_proc8_U0_AB_address0);
    Loop_memset_AB_proc8_U0->AB_ce0(Loop_memset_AB_proc8_U0_AB_ce0);
    Loop_memset_AB_proc8_U0->AB_we0(Loop_memset_AB_proc8_U0_AB_we0);
    Loop_memset_AB_proc8_U0->AB_d0(Loop_memset_AB_proc8_U0_AB_d0);
    Loop_memset_AB_proc8_U0->AB_q0(AB_i_q0);
    Loop_memset_AB_proc8_U0->AB_address1(Loop_memset_AB_proc8_U0_AB_address1);
    Loop_memset_AB_proc8_U0->AB_ce1(Loop_memset_AB_proc8_U0_AB_ce1);
    Loop_memset_AB_proc8_U0->AB_we1(Loop_memset_AB_proc8_U0_AB_we1);
    Loop_memset_AB_proc8_U0->AB_d1(Loop_memset_AB_proc8_U0_AB_d1);
    Loop_memset_AB_proc8_U0->AB_q1(AB_i_q1);
    Loop_memset_AB_proc8_U0->it(it);
    Loop_memset_AB_proc8_U0->Arows_V_a_0_dout(Arows_V_a_0_dout);
    Loop_memset_AB_proc8_U0->Arows_V_a_0_empty_n(Arows_V_a_0_empty_n);
    Loop_memset_AB_proc8_U0->Arows_V_a_0_read(Loop_memset_AB_proc8_U0_Arows_V_a_0_read);
    Loop_memset_AB_proc8_U0->Arows_V_a_1_dout(Arows_V_a_1_dout);
    Loop_memset_AB_proc8_U0->Arows_V_a_1_empty_n(Arows_V_a_1_empty_n);
    Loop_memset_AB_proc8_U0->Arows_V_a_1_read(Loop_memset_AB_proc8_U0_Arows_V_a_1_read);
    Loop_memset_AB_proc8_U0->Arows_V_a_2_dout(Arows_V_a_2_dout);
    Loop_memset_AB_proc8_U0->Arows_V_a_2_empty_n(Arows_V_a_2_empty_n);
    Loop_memset_AB_proc8_U0->Arows_V_a_2_read(Loop_memset_AB_proc8_U0_Arows_V_a_2_read);
    Loop_memset_AB_proc8_U0->Arows_V_a_3_dout(Arows_V_a_3_dout);
    Loop_memset_AB_proc8_U0->Arows_V_a_3_empty_n(Arows_V_a_3_empty_n);
    Loop_memset_AB_proc8_U0->Arows_V_a_3_read(Loop_memset_AB_proc8_U0_Arows_V_a_3_read);
    Loop_memset_AB_proc8_U0->Bcols_V_a_0_dout(Bcols_V_a_0_dout);
    Loop_memset_AB_proc8_U0->Bcols_V_a_0_empty_n(Bcols_V_a_0_empty_n);
    Loop_memset_AB_proc8_U0->Bcols_V_a_0_read(Loop_memset_AB_proc8_U0_Bcols_V_a_0_read);
    Loop_memset_AB_proc8_U0->Bcols_V_a_1_dout(Bcols_V_a_1_dout);
    Loop_memset_AB_proc8_U0->Bcols_V_a_1_empty_n(Bcols_V_a_1_empty_n);
    Loop_memset_AB_proc8_U0->Bcols_V_a_1_read(Loop_memset_AB_proc8_U0_Bcols_V_a_1_read);
    Loop_memset_AB_proc8_U0->Bcols_V_a_2_dout(Bcols_V_a_2_dout);
    Loop_memset_AB_proc8_U0->Bcols_V_a_2_empty_n(Bcols_V_a_2_empty_n);
    Loop_memset_AB_proc8_U0->Bcols_V_a_2_read(Loop_memset_AB_proc8_U0_Bcols_V_a_2_read);
    Loop_memset_AB_proc8_U0->Bcols_V_a_3_dout(Bcols_V_a_3_dout);
    Loop_memset_AB_proc8_U0->Bcols_V_a_3_empty_n(Bcols_V_a_3_empty_n);
    Loop_memset_AB_proc8_U0->Bcols_V_a_3_read(Loop_memset_AB_proc8_U0_Bcols_V_a_3_read);
    Loop_writeoutput_pro_U0 = new Loop_writeoutput_pro("Loop_writeoutput_pro_U0");
    Loop_writeoutput_pro_U0->ap_clk(ap_clk);
    Loop_writeoutput_pro_U0->ap_rst(ap_rst);
    Loop_writeoutput_pro_U0->ap_start(Loop_writeoutput_pro_U0_ap_start);
    Loop_writeoutput_pro_U0->ap_done(Loop_writeoutput_pro_U0_ap_done);
    Loop_writeoutput_pro_U0->ap_continue(Loop_writeoutput_pro_U0_ap_continue);
    Loop_writeoutput_pro_U0->ap_idle(Loop_writeoutput_pro_U0_ap_idle);
    Loop_writeoutput_pro_U0->ap_ready(Loop_writeoutput_pro_U0_ap_ready);
    Loop_writeoutput_pro_U0->AB_address0(Loop_writeoutput_pro_U0_AB_address0);
    Loop_writeoutput_pro_U0->AB_ce0(Loop_writeoutput_pro_U0_AB_ce0);
    Loop_writeoutput_pro_U0->AB_q0(AB_t_q0);
    Loop_writeoutput_pro_U0->AB_address1(Loop_writeoutput_pro_U0_AB_address1);
    Loop_writeoutput_pro_U0->AB_ce1(Loop_writeoutput_pro_U0_AB_ce1);
    Loop_writeoutput_pro_U0->AB_q1(AB_t_q1);
    Loop_writeoutput_pro_U0->ABpartial_out_address0(Loop_writeoutput_pro_U0_ABpartial_out_address0);
    Loop_writeoutput_pro_U0->ABpartial_out_ce0(Loop_writeoutput_pro_U0_ABpartial_out_ce0);
    Loop_writeoutput_pro_U0->ABpartial_out_we0(Loop_writeoutput_pro_U0_ABpartial_out_we0);
    Loop_writeoutput_pro_U0->ABpartial_out_d0(Loop_writeoutput_pro_U0_ABpartial_out_d0);
    Loop_writeoutput_pro_U0->ABpartial_out_address1(Loop_writeoutput_pro_U0_ABpartial_out_address1);
    Loop_writeoutput_pro_U0->ABpartial_out_ce1(Loop_writeoutput_pro_U0_ABpartial_out_ce1);
    Loop_writeoutput_pro_U0->ABpartial_out_we1(Loop_writeoutput_pro_U0_ABpartial_out_we1);
    Loop_writeoutput_pro_U0->ABpartial_out_d1(Loop_writeoutput_pro_U0_ABpartial_out_d1);

    SC_METHOD(thread_ABpartial_out_address0);
    sensitive << ( Loop_writeoutput_pro_U0_ABpartial_out_address0 );

    SC_METHOD(thread_ABpartial_out_address1);
    sensitive << ( Loop_writeoutput_pro_U0_ABpartial_out_address1 );

    SC_METHOD(thread_ABpartial_out_ce0);
    sensitive << ( Loop_writeoutput_pro_U0_ABpartial_out_ce0 );

    SC_METHOD(thread_ABpartial_out_ce1);
    sensitive << ( Loop_writeoutput_pro_U0_ABpartial_out_ce1 );

    SC_METHOD(thread_ABpartial_out_d0);
    sensitive << ( Loop_writeoutput_pro_U0_ABpartial_out_d0 );

    SC_METHOD(thread_ABpartial_out_d1);
    sensitive << ( Loop_writeoutput_pro_U0_ABpartial_out_d1 );

    SC_METHOD(thread_ABpartial_out_we0);
    sensitive << ( Loop_writeoutput_pro_U0_ABpartial_out_we0 );

    SC_METHOD(thread_ABpartial_out_we1);
    sensitive << ( Loop_writeoutput_pro_U0_ABpartial_out_we1 );

    SC_METHOD(thread_Arows_V_a_0_read);
    sensitive << ( Loop_memset_AB_proc8_U0_Arows_V_a_0_read );

    SC_METHOD(thread_Arows_V_a_1_read);
    sensitive << ( Loop_memset_AB_proc8_U0_Arows_V_a_1_read );

    SC_METHOD(thread_Arows_V_a_2_read);
    sensitive << ( Loop_memset_AB_proc8_U0_Arows_V_a_2_read );

    SC_METHOD(thread_Arows_V_a_3_read);
    sensitive << ( Loop_memset_AB_proc8_U0_Arows_V_a_3_read );

    SC_METHOD(thread_Bcols_V_a_0_read);
    sensitive << ( Loop_memset_AB_proc8_U0_Bcols_V_a_0_read );

    SC_METHOD(thread_Bcols_V_a_1_read);
    sensitive << ( Loop_memset_AB_proc8_U0_Bcols_V_a_1_read );

    SC_METHOD(thread_Bcols_V_a_2_read);
    sensitive << ( Loop_memset_AB_proc8_U0_Bcols_V_a_2_read );

    SC_METHOD(thread_Bcols_V_a_3_read);
    sensitive << ( Loop_memset_AB_proc8_U0_Bcols_V_a_3_read );

    SC_METHOD(thread_Loop_memset_AB_proc8_U0_AB_full_n);
    sensitive << ( AB_i_full_n );

    SC_METHOD(thread_Loop_memset_AB_proc8_U0_ap_continue);
    sensitive << ( AB_i_full_n );

    SC_METHOD(thread_Loop_memset_AB_proc8_U0_ap_start);
    sensitive << ( ap_start );

    SC_METHOD(thread_Loop_memset_AB_proc8_U0_start_full_n);

    SC_METHOD(thread_Loop_memset_AB_proc8_U0_start_write);

    SC_METHOD(thread_Loop_writeoutput_pro_U0_ap_continue);

    SC_METHOD(thread_Loop_writeoutput_pro_U0_ap_start);
    sensitive << ( AB_t_empty_n );

    SC_METHOD(thread_Loop_writeoutput_pro_U0_start_full_n);

    SC_METHOD(thread_Loop_writeoutput_pro_U0_start_write);

    SC_METHOD(thread_ap_channel_done_AB);
    sensitive << ( Loop_memset_AB_proc8_U0_ap_done );

    SC_METHOD(thread_ap_done);
    sensitive << ( Loop_writeoutput_pro_U0_ap_done );

    SC_METHOD(thread_ap_idle);
    sensitive << ( Loop_memset_AB_proc8_U0_ap_idle );
    sensitive << ( Loop_writeoutput_pro_U0_ap_idle );
    sensitive << ( AB_t_empty_n );

    SC_METHOD(thread_ap_ready);
    sensitive << ( Loop_memset_AB_proc8_U0_ap_ready );

    SC_METHOD(thread_ap_sync_continue);

    SC_METHOD(thread_ap_sync_done);
    sensitive << ( Loop_writeoutput_pro_U0_ap_done );

    SC_METHOD(thread_ap_sync_ready);
    sensitive << ( Loop_memset_AB_proc8_U0_ap_ready );

    SC_THREAD(thread_hdltv_gen);
    sensitive << ( ap_clk.pos() );

    SC_THREAD(thread_ap_var_for_const2);

    SC_THREAD(thread_ap_var_for_const0);

    SC_THREAD(thread_ap_var_for_const1);

    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "blockmatmul_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT__
    sc_trace(mVcdFile, ap_clk, "(port)ap_clk");
    sc_trace(mVcdFile, ap_rst, "(port)ap_rst");
    sc_trace(mVcdFile, Arows_V_a_0_dout, "(port)Arows_V_a_0_dout");
    sc_trace(mVcdFile, Arows_V_a_0_empty_n, "(port)Arows_V_a_0_empty_n");
    sc_trace(mVcdFile, Arows_V_a_0_read, "(port)Arows_V_a_0_read");
    sc_trace(mVcdFile, Arows_V_a_1_dout, "(port)Arows_V_a_1_dout");
    sc_trace(mVcdFile, Arows_V_a_1_empty_n, "(port)Arows_V_a_1_empty_n");
    sc_trace(mVcdFile, Arows_V_a_1_read, "(port)Arows_V_a_1_read");
    sc_trace(mVcdFile, Arows_V_a_2_dout, "(port)Arows_V_a_2_dout");
    sc_trace(mVcdFile, Arows_V_a_2_empty_n, "(port)Arows_V_a_2_empty_n");
    sc_trace(mVcdFile, Arows_V_a_2_read, "(port)Arows_V_a_2_read");
    sc_trace(mVcdFile, Arows_V_a_3_dout, "(port)Arows_V_a_3_dout");
    sc_trace(mVcdFile, Arows_V_a_3_empty_n, "(port)Arows_V_a_3_empty_n");
    sc_trace(mVcdFile, Arows_V_a_3_read, "(port)Arows_V_a_3_read");
    sc_trace(mVcdFile, Bcols_V_a_0_dout, "(port)Bcols_V_a_0_dout");
    sc_trace(mVcdFile, Bcols_V_a_0_empty_n, "(port)Bcols_V_a_0_empty_n");
    sc_trace(mVcdFile, Bcols_V_a_0_read, "(port)Bcols_V_a_0_read");
    sc_trace(mVcdFile, Bcols_V_a_1_dout, "(port)Bcols_V_a_1_dout");
    sc_trace(mVcdFile, Bcols_V_a_1_empty_n, "(port)Bcols_V_a_1_empty_n");
    sc_trace(mVcdFile, Bcols_V_a_1_read, "(port)Bcols_V_a_1_read");
    sc_trace(mVcdFile, Bcols_V_a_2_dout, "(port)Bcols_V_a_2_dout");
    sc_trace(mVcdFile, Bcols_V_a_2_empty_n, "(port)Bcols_V_a_2_empty_n");
    sc_trace(mVcdFile, Bcols_V_a_2_read, "(port)Bcols_V_a_2_read");
    sc_trace(mVcdFile, Bcols_V_a_3_dout, "(port)Bcols_V_a_3_dout");
    sc_trace(mVcdFile, Bcols_V_a_3_empty_n, "(port)Bcols_V_a_3_empty_n");
    sc_trace(mVcdFile, Bcols_V_a_3_read, "(port)Bcols_V_a_3_read");
    sc_trace(mVcdFile, ABpartial_out_address0, "(port)ABpartial_out_address0");
    sc_trace(mVcdFile, ABpartial_out_ce0, "(port)ABpartial_out_ce0");
    sc_trace(mVcdFile, ABpartial_out_d0, "(port)ABpartial_out_d0");
    sc_trace(mVcdFile, ABpartial_out_q0, "(port)ABpartial_out_q0");
    sc_trace(mVcdFile, ABpartial_out_we0, "(port)ABpartial_out_we0");
    sc_trace(mVcdFile, ABpartial_out_address1, "(port)ABpartial_out_address1");
    sc_trace(mVcdFile, ABpartial_out_ce1, "(port)ABpartial_out_ce1");
    sc_trace(mVcdFile, ABpartial_out_d1, "(port)ABpartial_out_d1");
    sc_trace(mVcdFile, ABpartial_out_q1, "(port)ABpartial_out_q1");
    sc_trace(mVcdFile, ABpartial_out_we1, "(port)ABpartial_out_we1");
    sc_trace(mVcdFile, it, "(port)it");
    sc_trace(mVcdFile, ap_start, "(port)ap_start");
    sc_trace(mVcdFile, ap_done, "(port)ap_done");
    sc_trace(mVcdFile, ap_ready, "(port)ap_ready");
    sc_trace(mVcdFile, ap_idle, "(port)ap_idle");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, AB_i_q0, "AB_i_q0");
    sc_trace(mVcdFile, AB_i_q1, "AB_i_q1");
    sc_trace(mVcdFile, AB_t_q0, "AB_t_q0");
    sc_trace(mVcdFile, AB_t_q1, "AB_t_q1");
    sc_trace(mVcdFile, Loop_memset_AB_proc8_U0_ap_start, "Loop_memset_AB_proc8_U0_ap_start");
    sc_trace(mVcdFile, Loop_memset_AB_proc8_U0_ap_done, "Loop_memset_AB_proc8_U0_ap_done");
    sc_trace(mVcdFile, Loop_memset_AB_proc8_U0_ap_continue, "Loop_memset_AB_proc8_U0_ap_continue");
    sc_trace(mVcdFile, Loop_memset_AB_proc8_U0_ap_idle, "Loop_memset_AB_proc8_U0_ap_idle");
    sc_trace(mVcdFile, Loop_memset_AB_proc8_U0_ap_ready, "Loop_memset_AB_proc8_U0_ap_ready");
    sc_trace(mVcdFile, Loop_memset_AB_proc8_U0_AB_address0, "Loop_memset_AB_proc8_U0_AB_address0");
    sc_trace(mVcdFile, Loop_memset_AB_proc8_U0_AB_ce0, "Loop_memset_AB_proc8_U0_AB_ce0");
    sc_trace(mVcdFile, Loop_memset_AB_proc8_U0_AB_we0, "Loop_memset_AB_proc8_U0_AB_we0");
    sc_trace(mVcdFile, Loop_memset_AB_proc8_U0_AB_d0, "Loop_memset_AB_proc8_U0_AB_d0");
    sc_trace(mVcdFile, Loop_memset_AB_proc8_U0_AB_address1, "Loop_memset_AB_proc8_U0_AB_address1");
    sc_trace(mVcdFile, Loop_memset_AB_proc8_U0_AB_ce1, "Loop_memset_AB_proc8_U0_AB_ce1");
    sc_trace(mVcdFile, Loop_memset_AB_proc8_U0_AB_we1, "Loop_memset_AB_proc8_U0_AB_we1");
    sc_trace(mVcdFile, Loop_memset_AB_proc8_U0_AB_d1, "Loop_memset_AB_proc8_U0_AB_d1");
    sc_trace(mVcdFile, Loop_memset_AB_proc8_U0_Arows_V_a_0_read, "Loop_memset_AB_proc8_U0_Arows_V_a_0_read");
    sc_trace(mVcdFile, Loop_memset_AB_proc8_U0_Arows_V_a_1_read, "Loop_memset_AB_proc8_U0_Arows_V_a_1_read");
    sc_trace(mVcdFile, Loop_memset_AB_proc8_U0_Arows_V_a_2_read, "Loop_memset_AB_proc8_U0_Arows_V_a_2_read");
    sc_trace(mVcdFile, Loop_memset_AB_proc8_U0_Arows_V_a_3_read, "Loop_memset_AB_proc8_U0_Arows_V_a_3_read");
    sc_trace(mVcdFile, Loop_memset_AB_proc8_U0_Bcols_V_a_0_read, "Loop_memset_AB_proc8_U0_Bcols_V_a_0_read");
    sc_trace(mVcdFile, Loop_memset_AB_proc8_U0_Bcols_V_a_1_read, "Loop_memset_AB_proc8_U0_Bcols_V_a_1_read");
    sc_trace(mVcdFile, Loop_memset_AB_proc8_U0_Bcols_V_a_2_read, "Loop_memset_AB_proc8_U0_Bcols_V_a_2_read");
    sc_trace(mVcdFile, Loop_memset_AB_proc8_U0_Bcols_V_a_3_read, "Loop_memset_AB_proc8_U0_Bcols_V_a_3_read");
    sc_trace(mVcdFile, ap_channel_done_AB, "ap_channel_done_AB");
    sc_trace(mVcdFile, Loop_memset_AB_proc8_U0_AB_full_n, "Loop_memset_AB_proc8_U0_AB_full_n");
    sc_trace(mVcdFile, Loop_writeoutput_pro_U0_ap_start, "Loop_writeoutput_pro_U0_ap_start");
    sc_trace(mVcdFile, Loop_writeoutput_pro_U0_ap_done, "Loop_writeoutput_pro_U0_ap_done");
    sc_trace(mVcdFile, Loop_writeoutput_pro_U0_ap_continue, "Loop_writeoutput_pro_U0_ap_continue");
    sc_trace(mVcdFile, Loop_writeoutput_pro_U0_ap_idle, "Loop_writeoutput_pro_U0_ap_idle");
    sc_trace(mVcdFile, Loop_writeoutput_pro_U0_ap_ready, "Loop_writeoutput_pro_U0_ap_ready");
    sc_trace(mVcdFile, Loop_writeoutput_pro_U0_AB_address0, "Loop_writeoutput_pro_U0_AB_address0");
    sc_trace(mVcdFile, Loop_writeoutput_pro_U0_AB_ce0, "Loop_writeoutput_pro_U0_AB_ce0");
    sc_trace(mVcdFile, Loop_writeoutput_pro_U0_AB_address1, "Loop_writeoutput_pro_U0_AB_address1");
    sc_trace(mVcdFile, Loop_writeoutput_pro_U0_AB_ce1, "Loop_writeoutput_pro_U0_AB_ce1");
    sc_trace(mVcdFile, Loop_writeoutput_pro_U0_ABpartial_out_address0, "Loop_writeoutput_pro_U0_ABpartial_out_address0");
    sc_trace(mVcdFile, Loop_writeoutput_pro_U0_ABpartial_out_ce0, "Loop_writeoutput_pro_U0_ABpartial_out_ce0");
    sc_trace(mVcdFile, Loop_writeoutput_pro_U0_ABpartial_out_we0, "Loop_writeoutput_pro_U0_ABpartial_out_we0");
    sc_trace(mVcdFile, Loop_writeoutput_pro_U0_ABpartial_out_d0, "Loop_writeoutput_pro_U0_ABpartial_out_d0");
    sc_trace(mVcdFile, Loop_writeoutput_pro_U0_ABpartial_out_address1, "Loop_writeoutput_pro_U0_ABpartial_out_address1");
    sc_trace(mVcdFile, Loop_writeoutput_pro_U0_ABpartial_out_ce1, "Loop_writeoutput_pro_U0_ABpartial_out_ce1");
    sc_trace(mVcdFile, Loop_writeoutput_pro_U0_ABpartial_out_we1, "Loop_writeoutput_pro_U0_ABpartial_out_we1");
    sc_trace(mVcdFile, Loop_writeoutput_pro_U0_ABpartial_out_d1, "Loop_writeoutput_pro_U0_ABpartial_out_d1");
    sc_trace(mVcdFile, ap_sync_continue, "ap_sync_continue");
    sc_trace(mVcdFile, AB_i_full_n, "AB_i_full_n");
    sc_trace(mVcdFile, AB_t_empty_n, "AB_t_empty_n");
    sc_trace(mVcdFile, ap_sync_done, "ap_sync_done");
    sc_trace(mVcdFile, ap_sync_ready, "ap_sync_ready");
    sc_trace(mVcdFile, Loop_memset_AB_proc8_U0_start_full_n, "Loop_memset_AB_proc8_U0_start_full_n");
    sc_trace(mVcdFile, Loop_memset_AB_proc8_U0_start_write, "Loop_memset_AB_proc8_U0_start_write");
    sc_trace(mVcdFile, Loop_writeoutput_pro_U0_start_full_n, "Loop_writeoutput_pro_U0_start_full_n");
    sc_trace(mVcdFile, Loop_writeoutput_pro_U0_start_write, "Loop_writeoutput_pro_U0_start_write");
#endif

    }
    mHdltvinHandle.open("blockmatmul.hdltvin.dat");
    mHdltvoutHandle.open("blockmatmul.hdltvout.dat");
}

blockmatmul::~blockmatmul() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

    mHdltvinHandle << "] " << endl;
    mHdltvoutHandle << "] " << endl;
    mHdltvinHandle.close();
    mHdltvoutHandle.close();
    delete AB_U;
    delete Loop_memset_AB_proc8_U0;
    delete Loop_writeoutput_pro_U0;
}

void blockmatmul::thread_ap_var_for_const2() {
    ap_var_for_const2 = ap_const_logic_1;
}

void blockmatmul::thread_ap_var_for_const0() {
    ap_var_for_const0 = ap_const_logic_0;
}

void blockmatmul::thread_ap_var_for_const1() {
    ap_var_for_const1 = ap_const_lv32_0;
}

void blockmatmul::thread_ABpartial_out_address0() {
    ABpartial_out_address0 = Loop_writeoutput_pro_U0_ABpartial_out_address0.read();
}

void blockmatmul::thread_ABpartial_out_address1() {
    ABpartial_out_address1 = Loop_writeoutput_pro_U0_ABpartial_out_address1.read();
}

void blockmatmul::thread_ABpartial_out_ce0() {
    ABpartial_out_ce0 = Loop_writeoutput_pro_U0_ABpartial_out_ce0.read();
}

void blockmatmul::thread_ABpartial_out_ce1() {
    ABpartial_out_ce1 = Loop_writeoutput_pro_U0_ABpartial_out_ce1.read();
}

void blockmatmul::thread_ABpartial_out_d0() {
    ABpartial_out_d0 = Loop_writeoutput_pro_U0_ABpartial_out_d0.read();
}

void blockmatmul::thread_ABpartial_out_d1() {
    ABpartial_out_d1 = Loop_writeoutput_pro_U0_ABpartial_out_d1.read();
}

void blockmatmul::thread_ABpartial_out_we0() {
    ABpartial_out_we0 = Loop_writeoutput_pro_U0_ABpartial_out_we0.read();
}

void blockmatmul::thread_ABpartial_out_we1() {
    ABpartial_out_we1 = Loop_writeoutput_pro_U0_ABpartial_out_we1.read();
}

void blockmatmul::thread_Arows_V_a_0_read() {
    Arows_V_a_0_read = Loop_memset_AB_proc8_U0_Arows_V_a_0_read.read();
}

void blockmatmul::thread_Arows_V_a_1_read() {
    Arows_V_a_1_read = Loop_memset_AB_proc8_U0_Arows_V_a_1_read.read();
}

void blockmatmul::thread_Arows_V_a_2_read() {
    Arows_V_a_2_read = Loop_memset_AB_proc8_U0_Arows_V_a_2_read.read();
}

void blockmatmul::thread_Arows_V_a_3_read() {
    Arows_V_a_3_read = Loop_memset_AB_proc8_U0_Arows_V_a_3_read.read();
}

void blockmatmul::thread_Bcols_V_a_0_read() {
    Bcols_V_a_0_read = Loop_memset_AB_proc8_U0_Bcols_V_a_0_read.read();
}

void blockmatmul::thread_Bcols_V_a_1_read() {
    Bcols_V_a_1_read = Loop_memset_AB_proc8_U0_Bcols_V_a_1_read.read();
}

void blockmatmul::thread_Bcols_V_a_2_read() {
    Bcols_V_a_2_read = Loop_memset_AB_proc8_U0_Bcols_V_a_2_read.read();
}

void blockmatmul::thread_Bcols_V_a_3_read() {
    Bcols_V_a_3_read = Loop_memset_AB_proc8_U0_Bcols_V_a_3_read.read();
}

void blockmatmul::thread_Loop_memset_AB_proc8_U0_AB_full_n() {
    Loop_memset_AB_proc8_U0_AB_full_n = AB_i_full_n.read();
}

void blockmatmul::thread_Loop_memset_AB_proc8_U0_ap_continue() {
    Loop_memset_AB_proc8_U0_ap_continue = AB_i_full_n.read();
}

void blockmatmul::thread_Loop_memset_AB_proc8_U0_ap_start() {
    Loop_memset_AB_proc8_U0_ap_start = ap_start.read();
}

void blockmatmul::thread_Loop_memset_AB_proc8_U0_start_full_n() {
    Loop_memset_AB_proc8_U0_start_full_n = ap_const_logic_1;
}

void blockmatmul::thread_Loop_memset_AB_proc8_U0_start_write() {
    Loop_memset_AB_proc8_U0_start_write = ap_const_logic_0;
}

void blockmatmul::thread_Loop_writeoutput_pro_U0_ap_continue() {
    Loop_writeoutput_pro_U0_ap_continue = ap_const_logic_1;
}

void blockmatmul::thread_Loop_writeoutput_pro_U0_ap_start() {
    Loop_writeoutput_pro_U0_ap_start = AB_t_empty_n.read();
}

void blockmatmul::thread_Loop_writeoutput_pro_U0_start_full_n() {
    Loop_writeoutput_pro_U0_start_full_n = ap_const_logic_1;
}

void blockmatmul::thread_Loop_writeoutput_pro_U0_start_write() {
    Loop_writeoutput_pro_U0_start_write = ap_const_logic_0;
}

void blockmatmul::thread_ap_channel_done_AB() {
    ap_channel_done_AB = Loop_memset_AB_proc8_U0_ap_done.read();
}

void blockmatmul::thread_ap_done() {
    ap_done = Loop_writeoutput_pro_U0_ap_done.read();
}

void blockmatmul::thread_ap_idle() {
    ap_idle = (Loop_memset_AB_proc8_U0_ap_idle.read() & Loop_writeoutput_pro_U0_ap_idle.read() & (AB_t_empty_n.read() ^ 
  ap_const_logic_1));
}

void blockmatmul::thread_ap_ready() {
    ap_ready = Loop_memset_AB_proc8_U0_ap_ready.read();
}

void blockmatmul::thread_ap_sync_continue() {
    ap_sync_continue = ap_const_logic_1;
}

void blockmatmul::thread_ap_sync_done() {
    ap_sync_done = Loop_writeoutput_pro_U0_ap_done.read();
}

void blockmatmul::thread_ap_sync_ready() {
    ap_sync_ready = Loop_memset_AB_proc8_U0_ap_ready.read();
}

void blockmatmul::thread_hdltv_gen() {
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
        mHdltvinHandle << " , " <<  " \"Arows_V_a_0_dout\" :  \"" << Arows_V_a_0_dout.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"Arows_V_a_0_empty_n\" :  \"" << Arows_V_a_0_empty_n.read() << "\" ";
        mHdltvoutHandle << mComma << "{"  <<  " \"Arows_V_a_0_read\" :  \"" << Arows_V_a_0_read.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"Arows_V_a_1_dout\" :  \"" << Arows_V_a_1_dout.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"Arows_V_a_1_empty_n\" :  \"" << Arows_V_a_1_empty_n.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"Arows_V_a_1_read\" :  \"" << Arows_V_a_1_read.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"Arows_V_a_2_dout\" :  \"" << Arows_V_a_2_dout.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"Arows_V_a_2_empty_n\" :  \"" << Arows_V_a_2_empty_n.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"Arows_V_a_2_read\" :  \"" << Arows_V_a_2_read.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"Arows_V_a_3_dout\" :  \"" << Arows_V_a_3_dout.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"Arows_V_a_3_empty_n\" :  \"" << Arows_V_a_3_empty_n.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"Arows_V_a_3_read\" :  \"" << Arows_V_a_3_read.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"Bcols_V_a_0_dout\" :  \"" << Bcols_V_a_0_dout.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"Bcols_V_a_0_empty_n\" :  \"" << Bcols_V_a_0_empty_n.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"Bcols_V_a_0_read\" :  \"" << Bcols_V_a_0_read.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"Bcols_V_a_1_dout\" :  \"" << Bcols_V_a_1_dout.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"Bcols_V_a_1_empty_n\" :  \"" << Bcols_V_a_1_empty_n.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"Bcols_V_a_1_read\" :  \"" << Bcols_V_a_1_read.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"Bcols_V_a_2_dout\" :  \"" << Bcols_V_a_2_dout.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"Bcols_V_a_2_empty_n\" :  \"" << Bcols_V_a_2_empty_n.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"Bcols_V_a_2_read\" :  \"" << Bcols_V_a_2_read.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"Bcols_V_a_3_dout\" :  \"" << Bcols_V_a_3_dout.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"Bcols_V_a_3_empty_n\" :  \"" << Bcols_V_a_3_empty_n.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"Bcols_V_a_3_read\" :  \"" << Bcols_V_a_3_read.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ABpartial_out_address0\" :  \"" << ABpartial_out_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ABpartial_out_ce0\" :  \"" << ABpartial_out_ce0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ABpartial_out_d0\" :  \"" << ABpartial_out_d0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"ABpartial_out_q0\" :  \"" << ABpartial_out_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ABpartial_out_we0\" :  \"" << ABpartial_out_we0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ABpartial_out_address1\" :  \"" << ABpartial_out_address1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ABpartial_out_ce1\" :  \"" << ABpartial_out_ce1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ABpartial_out_d1\" :  \"" << ABpartial_out_d1.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"ABpartial_out_q1\" :  \"" << ABpartial_out_q1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ABpartial_out_we1\" :  \"" << ABpartial_out_we1.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"it\" :  \"" << it.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"ap_start\" :  \"" << ap_start.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_done\" :  \"" << ap_done.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_ready\" :  \"" << ap_ready.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_idle\" :  \"" << ap_idle.read() << "\" ";
        mHdltvinHandle << "}" << std::endl;
        mHdltvoutHandle << "}" << std::endl;
        ap_cycleNo++;
    }
}

}

