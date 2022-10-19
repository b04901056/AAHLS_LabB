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
    // Port declarations 22
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<10> > A_address0;
    sc_out< sc_logic > A_ce0;
    sc_in< sc_lv<32> > A_q0;
    sc_out< sc_lv<10> > A_address1;
    sc_out< sc_logic > A_ce1;
    sc_in< sc_lv<32> > A_q1;
    sc_out< sc_lv<10> > B_address0;
    sc_out< sc_logic > B_ce0;
    sc_in< sc_lv<32> > B_q0;
    sc_out< sc_lv<10> > B_address1;
    sc_out< sc_logic > B_ce1;
    sc_in< sc_lv<32> > B_q1;
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
    sc_signal< sc_lv<18> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<11> > indvar_flatten_reg_717;
    sc_signal< sc_lv<6> > i_0_reg_728;
    sc_signal< sc_lv<6> > j_0_reg_739;
    sc_signal< sc_lv<32> > reg_750;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage1;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0;
    sc_signal< bool > ap_block_state3_pp0_stage1_iter0;
    sc_signal< bool > ap_block_state19_pp0_stage1_iter1;
    sc_signal< bool > ap_block_pp0_stage1_11001;
    sc_signal< sc_lv<1> > icmp_ln11_reg_1678;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage2;
    sc_signal< bool > ap_block_state4_pp0_stage2_iter0;
    sc_signal< bool > ap_block_state20_pp0_stage2_iter1;
    sc_signal< bool > ap_block_pp0_stage2_11001;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage3;
    sc_signal< bool > ap_block_state5_pp0_stage3_iter0;
    sc_signal< bool > ap_block_state21_pp0_stage3_iter1;
    sc_signal< bool > ap_block_pp0_stage3_11001;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage4;
    sc_signal< bool > ap_block_state6_pp0_stage4_iter0;
    sc_signal< bool > ap_block_pp0_stage4_11001;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage5;
    sc_signal< bool > ap_block_state7_pp0_stage5_iter0;
    sc_signal< bool > ap_block_pp0_stage5_11001;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage6;
    sc_signal< bool > ap_block_state8_pp0_stage6_iter0;
    sc_signal< bool > ap_block_pp0_stage6_11001;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage7;
    sc_signal< bool > ap_block_state9_pp0_stage7_iter0;
    sc_signal< bool > ap_block_pp0_stage7_11001;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage8;
    sc_signal< bool > ap_block_state10_pp0_stage8_iter0;
    sc_signal< bool > ap_block_pp0_stage8_11001;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage9;
    sc_signal< bool > ap_block_state11_pp0_stage9_iter0;
    sc_signal< bool > ap_block_pp0_stage9_11001;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage10;
    sc_signal< bool > ap_block_state12_pp0_stage10_iter0;
    sc_signal< bool > ap_block_pp0_stage10_11001;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage11;
    sc_signal< bool > ap_block_state13_pp0_stage11_iter0;
    sc_signal< bool > ap_block_pp0_stage11_11001;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage12;
    sc_signal< bool > ap_block_state14_pp0_stage12_iter0;
    sc_signal< bool > ap_block_pp0_stage12_11001;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage13;
    sc_signal< bool > ap_block_state15_pp0_stage13_iter0;
    sc_signal< bool > ap_block_pp0_stage13_11001;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage14;
    sc_signal< bool > ap_block_state16_pp0_stage14_iter0;
    sc_signal< bool > ap_block_pp0_stage14_11001;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage15;
    sc_signal< bool > ap_block_state17_pp0_stage15_iter0;
    sc_signal< bool > ap_block_pp0_stage15_11001;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage0;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter1;
    sc_signal< bool > ap_block_state2_pp0_stage0_iter0;
    sc_signal< bool > ap_block_state18_pp0_stage0_iter1;
    sc_signal< bool > ap_block_pp0_stage0_11001;
    sc_signal< sc_lv<32> > reg_754;
    sc_signal< sc_lv<32> > reg_758;
    sc_signal< sc_lv<32> > reg_762;
    sc_signal< sc_lv<32> > grp_fu_766_p2;
    sc_signal< sc_lv<32> > reg_778;
    sc_signal< sc_lv<1> > icmp_ln11_reg_1678_pp0_iter1_reg;
    sc_signal< sc_lv<32> > grp_fu_772_p2;
    sc_signal< sc_lv<32> > reg_782;
    sc_signal< sc_lv<32> > grp_fu_786_p2;
    sc_signal< sc_lv<32> > reg_798;
    sc_signal< sc_lv<32> > grp_fu_802_p2;
    sc_signal< sc_lv<32> > reg_814;
    sc_signal< sc_lv<1> > icmp_ln11_fu_818_p2;
    sc_signal< sc_lv<11> > add_ln11_fu_824_p2;
    sc_signal< sc_lv<11> > add_ln11_reg_1682;
    sc_signal< sc_lv<6> > select_ln17_fu_842_p3;
    sc_signal< sc_lv<6> > select_ln17_reg_1687;
    sc_signal< sc_lv<6> > select_ln17_reg_1687_pp0_iter1_reg;
    sc_signal< sc_lv<6> > select_ln17_1_fu_850_p3;
    sc_signal< sc_lv<6> > select_ln17_1_reg_1712;
    sc_signal< sc_lv<11> > tmp_fu_858_p3;
    sc_signal< sc_lv<11> > tmp_reg_1717;
    sc_signal< sc_lv<11> > tmp_reg_1717_pp0_iter1_reg;
    sc_signal< sc_lv<8> > zext_ln17_6_fu_934_p1;
    sc_signal< sc_lv<8> > zext_ln17_6_reg_1782;
    sc_signal< sc_lv<8> > add_ln17_33_fu_992_p2;
    sc_signal< sc_lv<8> > add_ln17_33_reg_1812;
    sc_signal< sc_lv<9> > zext_ln17_7_fu_1030_p1;
    sc_signal< sc_lv<9> > zext_ln17_7_reg_1833;
    sc_signal< sc_lv<9> > add_ln17_35_fu_1088_p2;
    sc_signal< sc_lv<9> > add_ln17_35_reg_1864;
    sc_signal< sc_lv<10> > zext_ln17_5_fu_1170_p1;
    sc_signal< sc_lv<10> > zext_ln17_5_reg_1904;
    sc_signal< sc_lv<32> > add_ln17_6_fu_1192_p2;
    sc_signal< sc_lv<32> > add_ln17_6_reg_1922;
    sc_signal< sc_lv<9> > add_ln17_36_fu_1278_p2;
    sc_signal< sc_lv<9> > add_ln17_36_reg_1962;
    sc_signal< sc_lv<32> > add_ln17_10_reg_1972;
    sc_signal< sc_lv<32> > add_ln17_15_reg_1997;
    sc_signal< sc_lv<32> > add_ln17_22_reg_2022;
    sc_signal< sc_lv<32> > add_ln17_14_fu_1483_p2;
    sc_signal< sc_lv<32> > add_ln17_14_reg_2067;
    sc_signal< sc_lv<32> > add_ln17_17_fu_1532_p2;
    sc_signal< sc_lv<32> > add_ln17_17_reg_2092;
    sc_signal< sc_lv<32> > add_ln17_21_fu_1631_p2;
    sc_signal< sc_lv<32> > add_ln17_21_reg_2137;
    sc_signal< sc_lv<6> > j_fu_1636_p2;
    sc_signal< sc_lv<6> > j_reg_2142;
    sc_signal< sc_lv<32> > add_ln17_24_fu_1641_p2;
    sc_signal< sc_lv<32> > add_ln17_24_reg_2147;
    sc_signal< sc_lv<32> > add_ln17_28_fu_1646_p2;
    sc_signal< sc_lv<32> > add_ln17_28_reg_2152;
    sc_signal< bool > ap_block_pp0_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp0_exit_iter0_state2;
    sc_signal< bool > ap_block_pp0_stage15_subdone;
    sc_signal< bool > ap_block_pp0_stage3_subdone;
    sc_signal< sc_lv<11> > ap_phi_mux_indvar_flatten_phi_fu_721_p4;
    sc_signal< bool > ap_block_pp0_stage0;
    sc_signal< sc_lv<6> > ap_phi_mux_i_0_phi_fu_732_p4;
    sc_signal< sc_lv<6> > ap_phi_mux_j_0_phi_fu_743_p4;
    sc_signal< sc_lv<64> > zext_ln17_fu_866_p1;
    sc_signal< sc_lv<64> > tmp_2_fu_877_p3;
    sc_signal< sc_lv<64> > zext_ln17_1_fu_886_p1;
    sc_signal< sc_lv<64> > zext_ln17_9_fu_901_p1;
    sc_signal< sc_lv<64> > tmp_3_fu_911_p3;
    sc_signal< bool > ap_block_pp0_stage1;
    sc_signal< sc_lv<64> > tmp_4_fu_925_p3;
    sc_signal< sc_lv<64> > tmp_32_fu_937_p3;
    sc_signal< sc_lv<64> > zext_ln17_10_fu_951_p1;
    sc_signal< sc_lv<64> > tmp_5_fu_961_p3;
    sc_signal< bool > ap_block_pp0_stage2;
    sc_signal< sc_lv<64> > tmp_6_fu_975_p3;
    sc_signal< sc_lv<64> > tmp_33_fu_984_p3;
    sc_signal< sc_lv<64> > zext_ln17_11_fu_997_p1;
    sc_signal< sc_lv<64> > tmp_7_fu_1007_p3;
    sc_signal< bool > ap_block_pp0_stage3;
    sc_signal< sc_lv<64> > tmp_8_fu_1021_p3;
    sc_signal< sc_lv<64> > tmp_34_fu_1033_p3;
    sc_signal< sc_lv<64> > zext_ln17_12_fu_1047_p1;
    sc_signal< sc_lv<64> > tmp_9_fu_1057_p3;
    sc_signal< bool > ap_block_pp0_stage4;
    sc_signal< sc_lv<64> > tmp_s_fu_1071_p3;
    sc_signal< sc_lv<64> > tmp_35_fu_1080_p3;
    sc_signal< sc_lv<64> > zext_ln17_13_fu_1093_p1;
    sc_signal< sc_lv<64> > tmp_12_fu_1103_p3;
    sc_signal< bool > ap_block_pp0_stage5;
    sc_signal< sc_lv<64> > tmp_13_fu_1117_p3;
    sc_signal< sc_lv<64> > tmp_37_fu_1126_p3;
    sc_signal< sc_lv<64> > zext_ln17_15_fu_1137_p1;
    sc_signal< sc_lv<64> > tmp_16_fu_1147_p3;
    sc_signal< bool > ap_block_pp0_stage6;
    sc_signal< sc_lv<64> > tmp_17_fu_1161_p3;
    sc_signal< sc_lv<64> > tmp_39_fu_1173_p3;
    sc_signal< sc_lv<64> > zext_ln17_17_fu_1187_p1;
    sc_signal< sc_lv<64> > tmp_24_fu_1203_p3;
    sc_signal< bool > ap_block_pp0_stage7;
    sc_signal< sc_lv<64> > tmp_25_fu_1217_p3;
    sc_signal< sc_lv<64> > tmp_43_fu_1226_p3;
    sc_signal< sc_lv<64> > zext_ln17_21_fu_1237_p1;
    sc_signal< sc_lv<64> > tmp_10_fu_1247_p3;
    sc_signal< bool > ap_block_pp0_stage8;
    sc_signal< sc_lv<64> > tmp_11_fu_1261_p3;
    sc_signal< sc_lv<64> > tmp_36_fu_1270_p3;
    sc_signal< sc_lv<64> > zext_ln17_14_fu_1283_p1;
    sc_signal< sc_lv<64> > tmp_14_fu_1293_p3;
    sc_signal< bool > ap_block_pp0_stage9;
    sc_signal< sc_lv<64> > tmp_15_fu_1307_p3;
    sc_signal< sc_lv<64> > tmp_38_fu_1316_p3;
    sc_signal< sc_lv<64> > zext_ln17_16_fu_1329_p1;
    sc_signal< sc_lv<64> > tmp_18_fu_1339_p3;
    sc_signal< bool > ap_block_pp0_stage10;
    sc_signal< sc_lv<64> > tmp_19_fu_1353_p3;
    sc_signal< sc_lv<64> > tmp_40_fu_1362_p3;
    sc_signal< sc_lv<64> > zext_ln17_18_fu_1375_p1;
    sc_signal< sc_lv<64> > tmp_20_fu_1385_p3;
    sc_signal< bool > ap_block_pp0_stage11;
    sc_signal< sc_lv<64> > tmp_21_fu_1399_p3;
    sc_signal< sc_lv<64> > tmp_41_fu_1408_p3;
    sc_signal< sc_lv<64> > zext_ln17_19_fu_1421_p1;
    sc_signal< sc_lv<64> > tmp_22_fu_1431_p3;
    sc_signal< bool > ap_block_pp0_stage12;
    sc_signal< sc_lv<64> > tmp_23_fu_1445_p3;
    sc_signal< sc_lv<64> > tmp_42_fu_1454_p3;
    sc_signal< sc_lv<64> > zext_ln17_20_fu_1467_p1;
    sc_signal< sc_lv<64> > tmp_26_fu_1493_p3;
    sc_signal< bool > ap_block_pp0_stage13;
    sc_signal< sc_lv<64> > tmp_27_fu_1507_p3;
    sc_signal< sc_lv<64> > tmp_44_fu_1516_p3;
    sc_signal< sc_lv<64> > zext_ln17_22_fu_1527_p1;
    sc_signal< sc_lv<64> > tmp_28_fu_1542_p3;
    sc_signal< bool > ap_block_pp0_stage14;
    sc_signal< sc_lv<64> > tmp_29_fu_1556_p3;
    sc_signal< sc_lv<64> > tmp_45_fu_1565_p3;
    sc_signal< sc_lv<64> > zext_ln17_23_fu_1576_p1;
    sc_signal< sc_lv<64> > tmp_30_fu_1586_p3;
    sc_signal< bool > ap_block_pp0_stage15;
    sc_signal< sc_lv<64> > tmp_31_fu_1600_p3;
    sc_signal< sc_lv<64> > tmp_46_fu_1612_p3;
    sc_signal< sc_lv<64> > zext_ln17_24_fu_1626_p1;
    sc_signal< sc_lv<64> > zext_ln19_fu_1663_p1;
    sc_signal< sc_lv<32> > grp_fu_792_p2;
    sc_signal< sc_lv<1> > icmp_ln12_fu_836_p2;
    sc_signal< sc_lv<6> > i_fu_830_p2;
    sc_signal< sc_lv<11> > or_ln17_fu_871_p2;
    sc_signal< sc_lv<7> > zext_ln17_8_fu_891_p1;
    sc_signal< sc_lv<7> > add_ln17_31_fu_895_p2;
    sc_signal< sc_lv<11> > or_ln17_1_fu_906_p2;
    sc_signal< sc_lv<11> > or_ln17_2_fu_920_p2;
    sc_signal< sc_lv<8> > add_ln17_32_fu_945_p2;
    sc_signal< sc_lv<11> > or_ln17_3_fu_956_p2;
    sc_signal< sc_lv<11> > or_ln17_4_fu_970_p2;
    sc_signal< sc_lv<11> > or_ln17_5_fu_1002_p2;
    sc_signal< sc_lv<11> > or_ln17_6_fu_1016_p2;
    sc_signal< sc_lv<9> > add_ln17_34_fu_1041_p2;
    sc_signal< sc_lv<11> > or_ln17_7_fu_1052_p2;
    sc_signal< sc_lv<11> > or_ln17_8_fu_1066_p2;
    sc_signal< sc_lv<11> > or_ln17_11_fu_1098_p2;
    sc_signal< sc_lv<11> > or_ln17_12_fu_1112_p2;
    sc_signal< sc_lv<9> > sext_ln17_fu_1134_p1;
    sc_signal< sc_lv<11> > or_ln17_15_fu_1142_p2;
    sc_signal< sc_lv<11> > or_ln17_16_fu_1156_p2;
    sc_signal< sc_lv<10> > add_ln17_38_fu_1181_p2;
    sc_signal< sc_lv<32> > grp_fu_808_p2;
    sc_signal< sc_lv<11> > or_ln17_23_fu_1198_p2;
    sc_signal< sc_lv<11> > or_ln17_24_fu_1212_p2;
    sc_signal< sc_lv<10> > sext_ln17_1_fu_1234_p1;
    sc_signal< sc_lv<11> > or_ln17_9_fu_1242_p2;
    sc_signal< sc_lv<11> > or_ln17_10_fu_1256_p2;
    sc_signal< sc_lv<11> > or_ln17_13_fu_1288_p2;
    sc_signal< sc_lv<11> > or_ln17_14_fu_1302_p2;
    sc_signal< sc_lv<10> > add_ln17_37_fu_1324_p2;
    sc_signal< sc_lv<11> > or_ln17_17_fu_1334_p2;
    sc_signal< sc_lv<11> > or_ln17_18_fu_1348_p2;
    sc_signal< sc_lv<10> > add_ln17_39_fu_1370_p2;
    sc_signal< sc_lv<11> > or_ln17_19_fu_1380_p2;
    sc_signal< sc_lv<11> > or_ln17_20_fu_1394_p2;
    sc_signal< sc_lv<10> > add_ln17_40_fu_1416_p2;
    sc_signal< sc_lv<11> > or_ln17_21_fu_1426_p2;
    sc_signal< sc_lv<11> > or_ln17_22_fu_1440_p2;
    sc_signal< sc_lv<10> > add_ln17_41_fu_1462_p2;
    sc_signal< sc_lv<32> > add_ln17_12_fu_1472_p2;
    sc_signal< sc_lv<32> > add_ln17_13_fu_1477_p2;
    sc_signal< sc_lv<11> > or_ln17_25_fu_1488_p2;
    sc_signal< sc_lv<11> > or_ln17_26_fu_1502_p2;
    sc_signal< sc_lv<10> > sext_ln17_2_fu_1524_p1;
    sc_signal< sc_lv<11> > or_ln17_27_fu_1537_p2;
    sc_signal< sc_lv<11> > or_ln17_28_fu_1551_p2;
    sc_signal< sc_lv<10> > sext_ln17_3_fu_1573_p1;
    sc_signal< sc_lv<11> > or_ln17_29_fu_1581_p2;
    sc_signal< sc_lv<11> > or_ln17_30_fu_1595_p2;
    sc_signal< sc_lv<11> > zext_ln17_4_fu_1609_p1;
    sc_signal< sc_lv<11> > add_ln17_42_fu_1620_p2;
    sc_signal< sc_lv<12> > zext_ln17_2_fu_1651_p1;
    sc_signal< sc_lv<12> > zext_ln17_3_fu_1654_p1;
    sc_signal< sc_lv<12> > add_ln19_fu_1657_p2;
    sc_signal< sc_lv<32> > add_ln17_29_fu_1668_p2;
    sc_signal< sc_logic > ap_CS_fsm_state22;
    sc_signal< sc_lv<18> > ap_NS_fsm;
    sc_signal< bool > ap_block_pp0_stage1_subdone;
    sc_signal< bool > ap_block_pp0_stage2_subdone;
    sc_signal< bool > ap_block_pp0_stage4_subdone;
    sc_signal< bool > ap_block_pp0_stage5_subdone;
    sc_signal< bool > ap_block_pp0_stage6_subdone;
    sc_signal< bool > ap_block_pp0_stage7_subdone;
    sc_signal< bool > ap_block_pp0_stage8_subdone;
    sc_signal< bool > ap_block_pp0_stage9_subdone;
    sc_signal< bool > ap_block_pp0_stage10_subdone;
    sc_signal< bool > ap_block_pp0_stage11_subdone;
    sc_signal< bool > ap_block_pp0_stage12_subdone;
    sc_signal< bool > ap_block_pp0_stage13_subdone;
    sc_signal< bool > ap_block_pp0_stage14_subdone;
    sc_signal< sc_logic > ap_idle_pp0;
    sc_signal< sc_logic > ap_enable_pp0;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<18> ap_ST_fsm_state1;
    static const sc_lv<18> ap_ST_fsm_pp0_stage0;
    static const sc_lv<18> ap_ST_fsm_pp0_stage1;
    static const sc_lv<18> ap_ST_fsm_pp0_stage2;
    static const sc_lv<18> ap_ST_fsm_pp0_stage3;
    static const sc_lv<18> ap_ST_fsm_pp0_stage4;
    static const sc_lv<18> ap_ST_fsm_pp0_stage5;
    static const sc_lv<18> ap_ST_fsm_pp0_stage6;
    static const sc_lv<18> ap_ST_fsm_pp0_stage7;
    static const sc_lv<18> ap_ST_fsm_pp0_stage8;
    static const sc_lv<18> ap_ST_fsm_pp0_stage9;
    static const sc_lv<18> ap_ST_fsm_pp0_stage10;
    static const sc_lv<18> ap_ST_fsm_pp0_stage11;
    static const sc_lv<18> ap_ST_fsm_pp0_stage12;
    static const sc_lv<18> ap_ST_fsm_pp0_stage13;
    static const sc_lv<18> ap_ST_fsm_pp0_stage14;
    static const sc_lv<18> ap_ST_fsm_pp0_stage15;
    static const sc_lv<18> ap_ST_fsm_state22;
    static const sc_lv<32> ap_const_lv32_0;
    static const bool ap_const_boolean_1;
    static const sc_lv<32> ap_const_lv32_2;
    static const bool ap_const_boolean_0;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<32> ap_const_lv32_B;
    static const sc_lv<32> ap_const_lv32_C;
    static const sc_lv<32> ap_const_lv32_D;
    static const sc_lv<32> ap_const_lv32_E;
    static const sc_lv<32> ap_const_lv32_F;
    static const sc_lv<32> ap_const_lv32_10;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<11> ap_const_lv11_0;
    static const sc_lv<6> ap_const_lv6_0;
    static const sc_lv<11> ap_const_lv11_400;
    static const sc_lv<11> ap_const_lv11_1;
    static const sc_lv<6> ap_const_lv6_1;
    static const sc_lv<6> ap_const_lv6_20;
    static const sc_lv<5> ap_const_lv5_0;
    static const sc_lv<53> ap_const_lv53_0;
    static const sc_lv<7> ap_const_lv7_20;
    static const sc_lv<11> ap_const_lv11_2;
    static const sc_lv<11> ap_const_lv11_3;
    static const sc_lv<58> ap_const_lv58_1;
    static const sc_lv<8> ap_const_lv8_60;
    static const sc_lv<11> ap_const_lv11_4;
    static const sc_lv<11> ap_const_lv11_5;
    static const sc_lv<58> ap_const_lv58_2;
    static const sc_lv<8> ap_const_lv8_A0;
    static const sc_lv<11> ap_const_lv11_6;
    static const sc_lv<11> ap_const_lv11_7;
    static const sc_lv<58> ap_const_lv58_3;
    static const sc_lv<9> ap_const_lv9_E0;
    static const sc_lv<11> ap_const_lv11_8;
    static const sc_lv<11> ap_const_lv11_9;
    static const sc_lv<58> ap_const_lv58_4;
    static const sc_lv<9> ap_const_lv9_120;
    static const sc_lv<11> ap_const_lv11_C;
    static const sc_lv<11> ap_const_lv11_D;
    static const sc_lv<58> ap_const_lv58_6;
    static const sc_lv<11> ap_const_lv11_10;
    static const sc_lv<11> ap_const_lv11_11;
    static const sc_lv<58> ap_const_lv58_8;
    static const sc_lv<10> ap_const_lv10_220;
    static const sc_lv<11> ap_const_lv11_18;
    static const sc_lv<11> ap_const_lv11_19;
    static const sc_lv<58> ap_const_lv58_C;
    static const sc_lv<11> ap_const_lv11_A;
    static const sc_lv<11> ap_const_lv11_B;
    static const sc_lv<58> ap_const_lv58_5;
    static const sc_lv<9> ap_const_lv9_160;
    static const sc_lv<11> ap_const_lv11_E;
    static const sc_lv<11> ap_const_lv11_F;
    static const sc_lv<58> ap_const_lv58_7;
    static const sc_lv<10> ap_const_lv10_1E0;
    static const sc_lv<11> ap_const_lv11_12;
    static const sc_lv<11> ap_const_lv11_13;
    static const sc_lv<58> ap_const_lv58_9;
    static const sc_lv<10> ap_const_lv10_260;
    static const sc_lv<11> ap_const_lv11_14;
    static const sc_lv<11> ap_const_lv11_15;
    static const sc_lv<58> ap_const_lv58_A;
    static const sc_lv<10> ap_const_lv10_2A0;
    static const sc_lv<11> ap_const_lv11_16;
    static const sc_lv<11> ap_const_lv11_17;
    static const sc_lv<58> ap_const_lv58_B;
    static const sc_lv<10> ap_const_lv10_2E0;
    static const sc_lv<11> ap_const_lv11_1A;
    static const sc_lv<11> ap_const_lv11_1B;
    static const sc_lv<58> ap_const_lv58_D;
    static const sc_lv<11> ap_const_lv11_1C;
    static const sc_lv<11> ap_const_lv11_1D;
    static const sc_lv<58> ap_const_lv58_E;
    static const sc_lv<11> ap_const_lv11_1E;
    static const sc_lv<11> ap_const_lv11_1F;
    static const sc_lv<58> ap_const_lv58_F;
    static const sc_lv<11> ap_const_lv11_3E0;
    static const sc_lv<32> ap_const_lv32_11;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_AB_address0();
    void thread_AB_ce0();
    void thread_AB_d0();
    void thread_AB_we0();
    void thread_A_address0();
    void thread_A_address1();
    void thread_A_ce0();
    void thread_A_ce1();
    void thread_B_address0();
    void thread_B_address1();
    void thread_B_ce0();
    void thread_B_ce1();
    void thread_add_ln11_fu_824_p2();
    void thread_add_ln17_12_fu_1472_p2();
    void thread_add_ln17_13_fu_1477_p2();
    void thread_add_ln17_14_fu_1483_p2();
    void thread_add_ln17_17_fu_1532_p2();
    void thread_add_ln17_21_fu_1631_p2();
    void thread_add_ln17_24_fu_1641_p2();
    void thread_add_ln17_28_fu_1646_p2();
    void thread_add_ln17_29_fu_1668_p2();
    void thread_add_ln17_31_fu_895_p2();
    void thread_add_ln17_32_fu_945_p2();
    void thread_add_ln17_33_fu_992_p2();
    void thread_add_ln17_34_fu_1041_p2();
    void thread_add_ln17_35_fu_1088_p2();
    void thread_add_ln17_36_fu_1278_p2();
    void thread_add_ln17_37_fu_1324_p2();
    void thread_add_ln17_38_fu_1181_p2();
    void thread_add_ln17_39_fu_1370_p2();
    void thread_add_ln17_40_fu_1416_p2();
    void thread_add_ln17_41_fu_1462_p2();
    void thread_add_ln17_42_fu_1620_p2();
    void thread_add_ln17_6_fu_1192_p2();
    void thread_add_ln19_fu_1657_p2();
    void thread_ap_CS_fsm_pp0_stage0();
    void thread_ap_CS_fsm_pp0_stage1();
    void thread_ap_CS_fsm_pp0_stage10();
    void thread_ap_CS_fsm_pp0_stage11();
    void thread_ap_CS_fsm_pp0_stage12();
    void thread_ap_CS_fsm_pp0_stage13();
    void thread_ap_CS_fsm_pp0_stage14();
    void thread_ap_CS_fsm_pp0_stage15();
    void thread_ap_CS_fsm_pp0_stage2();
    void thread_ap_CS_fsm_pp0_stage3();
    void thread_ap_CS_fsm_pp0_stage4();
    void thread_ap_CS_fsm_pp0_stage5();
    void thread_ap_CS_fsm_pp0_stage6();
    void thread_ap_CS_fsm_pp0_stage7();
    void thread_ap_CS_fsm_pp0_stage8();
    void thread_ap_CS_fsm_pp0_stage9();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state22();
    void thread_ap_block_pp0_stage0();
    void thread_ap_block_pp0_stage0_11001();
    void thread_ap_block_pp0_stage0_subdone();
    void thread_ap_block_pp0_stage1();
    void thread_ap_block_pp0_stage10();
    void thread_ap_block_pp0_stage10_11001();
    void thread_ap_block_pp0_stage10_subdone();
    void thread_ap_block_pp0_stage11();
    void thread_ap_block_pp0_stage11_11001();
    void thread_ap_block_pp0_stage11_subdone();
    void thread_ap_block_pp0_stage12();
    void thread_ap_block_pp0_stage12_11001();
    void thread_ap_block_pp0_stage12_subdone();
    void thread_ap_block_pp0_stage13();
    void thread_ap_block_pp0_stage13_11001();
    void thread_ap_block_pp0_stage13_subdone();
    void thread_ap_block_pp0_stage14();
    void thread_ap_block_pp0_stage14_11001();
    void thread_ap_block_pp0_stage14_subdone();
    void thread_ap_block_pp0_stage15();
    void thread_ap_block_pp0_stage15_11001();
    void thread_ap_block_pp0_stage15_subdone();
    void thread_ap_block_pp0_stage1_11001();
    void thread_ap_block_pp0_stage1_subdone();
    void thread_ap_block_pp0_stage2();
    void thread_ap_block_pp0_stage2_11001();
    void thread_ap_block_pp0_stage2_subdone();
    void thread_ap_block_pp0_stage3();
    void thread_ap_block_pp0_stage3_11001();
    void thread_ap_block_pp0_stage3_subdone();
    void thread_ap_block_pp0_stage4();
    void thread_ap_block_pp0_stage4_11001();
    void thread_ap_block_pp0_stage4_subdone();
    void thread_ap_block_pp0_stage5();
    void thread_ap_block_pp0_stage5_11001();
    void thread_ap_block_pp0_stage5_subdone();
    void thread_ap_block_pp0_stage6();
    void thread_ap_block_pp0_stage6_11001();
    void thread_ap_block_pp0_stage6_subdone();
    void thread_ap_block_pp0_stage7();
    void thread_ap_block_pp0_stage7_11001();
    void thread_ap_block_pp0_stage7_subdone();
    void thread_ap_block_pp0_stage8();
    void thread_ap_block_pp0_stage8_11001();
    void thread_ap_block_pp0_stage8_subdone();
    void thread_ap_block_pp0_stage9();
    void thread_ap_block_pp0_stage9_11001();
    void thread_ap_block_pp0_stage9_subdone();
    void thread_ap_block_state10_pp0_stage8_iter0();
    void thread_ap_block_state11_pp0_stage9_iter0();
    void thread_ap_block_state12_pp0_stage10_iter0();
    void thread_ap_block_state13_pp0_stage11_iter0();
    void thread_ap_block_state14_pp0_stage12_iter0();
    void thread_ap_block_state15_pp0_stage13_iter0();
    void thread_ap_block_state16_pp0_stage14_iter0();
    void thread_ap_block_state17_pp0_stage15_iter0();
    void thread_ap_block_state18_pp0_stage0_iter1();
    void thread_ap_block_state19_pp0_stage1_iter1();
    void thread_ap_block_state20_pp0_stage2_iter1();
    void thread_ap_block_state21_pp0_stage3_iter1();
    void thread_ap_block_state2_pp0_stage0_iter0();
    void thread_ap_block_state3_pp0_stage1_iter0();
    void thread_ap_block_state4_pp0_stage2_iter0();
    void thread_ap_block_state5_pp0_stage3_iter0();
    void thread_ap_block_state6_pp0_stage4_iter0();
    void thread_ap_block_state7_pp0_stage5_iter0();
    void thread_ap_block_state8_pp0_stage6_iter0();
    void thread_ap_block_state9_pp0_stage7_iter0();
    void thread_ap_condition_pp0_exit_iter0_state2();
    void thread_ap_done();
    void thread_ap_enable_pp0();
    void thread_ap_idle();
    void thread_ap_idle_pp0();
    void thread_ap_phi_mux_i_0_phi_fu_732_p4();
    void thread_ap_phi_mux_indvar_flatten_phi_fu_721_p4();
    void thread_ap_phi_mux_j_0_phi_fu_743_p4();
    void thread_ap_ready();
    void thread_grp_fu_766_p2();
    void thread_grp_fu_772_p2();
    void thread_grp_fu_786_p2();
    void thread_grp_fu_792_p2();
    void thread_grp_fu_802_p2();
    void thread_grp_fu_808_p2();
    void thread_i_fu_830_p2();
    void thread_icmp_ln11_fu_818_p2();
    void thread_icmp_ln12_fu_836_p2();
    void thread_j_fu_1636_p2();
    void thread_or_ln17_10_fu_1256_p2();
    void thread_or_ln17_11_fu_1098_p2();
    void thread_or_ln17_12_fu_1112_p2();
    void thread_or_ln17_13_fu_1288_p2();
    void thread_or_ln17_14_fu_1302_p2();
    void thread_or_ln17_15_fu_1142_p2();
    void thread_or_ln17_16_fu_1156_p2();
    void thread_or_ln17_17_fu_1334_p2();
    void thread_or_ln17_18_fu_1348_p2();
    void thread_or_ln17_19_fu_1380_p2();
    void thread_or_ln17_1_fu_906_p2();
    void thread_or_ln17_20_fu_1394_p2();
    void thread_or_ln17_21_fu_1426_p2();
    void thread_or_ln17_22_fu_1440_p2();
    void thread_or_ln17_23_fu_1198_p2();
    void thread_or_ln17_24_fu_1212_p2();
    void thread_or_ln17_25_fu_1488_p2();
    void thread_or_ln17_26_fu_1502_p2();
    void thread_or_ln17_27_fu_1537_p2();
    void thread_or_ln17_28_fu_1551_p2();
    void thread_or_ln17_29_fu_1581_p2();
    void thread_or_ln17_2_fu_920_p2();
    void thread_or_ln17_30_fu_1595_p2();
    void thread_or_ln17_3_fu_956_p2();
    void thread_or_ln17_4_fu_970_p2();
    void thread_or_ln17_5_fu_1002_p2();
    void thread_or_ln17_6_fu_1016_p2();
    void thread_or_ln17_7_fu_1052_p2();
    void thread_or_ln17_8_fu_1066_p2();
    void thread_or_ln17_9_fu_1242_p2();
    void thread_or_ln17_fu_871_p2();
    void thread_select_ln17_1_fu_850_p3();
    void thread_select_ln17_fu_842_p3();
    void thread_sext_ln17_1_fu_1234_p1();
    void thread_sext_ln17_2_fu_1524_p1();
    void thread_sext_ln17_3_fu_1573_p1();
    void thread_sext_ln17_fu_1134_p1();
    void thread_tmp_10_fu_1247_p3();
    void thread_tmp_11_fu_1261_p3();
    void thread_tmp_12_fu_1103_p3();
    void thread_tmp_13_fu_1117_p3();
    void thread_tmp_14_fu_1293_p3();
    void thread_tmp_15_fu_1307_p3();
    void thread_tmp_16_fu_1147_p3();
    void thread_tmp_17_fu_1161_p3();
    void thread_tmp_18_fu_1339_p3();
    void thread_tmp_19_fu_1353_p3();
    void thread_tmp_20_fu_1385_p3();
    void thread_tmp_21_fu_1399_p3();
    void thread_tmp_22_fu_1431_p3();
    void thread_tmp_23_fu_1445_p3();
    void thread_tmp_24_fu_1203_p3();
    void thread_tmp_25_fu_1217_p3();
    void thread_tmp_26_fu_1493_p3();
    void thread_tmp_27_fu_1507_p3();
    void thread_tmp_28_fu_1542_p3();
    void thread_tmp_29_fu_1556_p3();
    void thread_tmp_2_fu_877_p3();
    void thread_tmp_30_fu_1586_p3();
    void thread_tmp_31_fu_1600_p3();
    void thread_tmp_32_fu_937_p3();
    void thread_tmp_33_fu_984_p3();
    void thread_tmp_34_fu_1033_p3();
    void thread_tmp_35_fu_1080_p3();
    void thread_tmp_36_fu_1270_p3();
    void thread_tmp_37_fu_1126_p3();
    void thread_tmp_38_fu_1316_p3();
    void thread_tmp_39_fu_1173_p3();
    void thread_tmp_3_fu_911_p3();
    void thread_tmp_40_fu_1362_p3();
    void thread_tmp_41_fu_1408_p3();
    void thread_tmp_42_fu_1454_p3();
    void thread_tmp_43_fu_1226_p3();
    void thread_tmp_44_fu_1516_p3();
    void thread_tmp_45_fu_1565_p3();
    void thread_tmp_46_fu_1612_p3();
    void thread_tmp_4_fu_925_p3();
    void thread_tmp_5_fu_961_p3();
    void thread_tmp_6_fu_975_p3();
    void thread_tmp_7_fu_1007_p3();
    void thread_tmp_8_fu_1021_p3();
    void thread_tmp_9_fu_1057_p3();
    void thread_tmp_fu_858_p3();
    void thread_tmp_s_fu_1071_p3();
    void thread_zext_ln17_10_fu_951_p1();
    void thread_zext_ln17_11_fu_997_p1();
    void thread_zext_ln17_12_fu_1047_p1();
    void thread_zext_ln17_13_fu_1093_p1();
    void thread_zext_ln17_14_fu_1283_p1();
    void thread_zext_ln17_15_fu_1137_p1();
    void thread_zext_ln17_16_fu_1329_p1();
    void thread_zext_ln17_17_fu_1187_p1();
    void thread_zext_ln17_18_fu_1375_p1();
    void thread_zext_ln17_19_fu_1421_p1();
    void thread_zext_ln17_1_fu_886_p1();
    void thread_zext_ln17_20_fu_1467_p1();
    void thread_zext_ln17_21_fu_1237_p1();
    void thread_zext_ln17_22_fu_1527_p1();
    void thread_zext_ln17_23_fu_1576_p1();
    void thread_zext_ln17_24_fu_1626_p1();
    void thread_zext_ln17_2_fu_1651_p1();
    void thread_zext_ln17_3_fu_1654_p1();
    void thread_zext_ln17_4_fu_1609_p1();
    void thread_zext_ln17_5_fu_1170_p1();
    void thread_zext_ln17_6_fu_934_p1();
    void thread_zext_ln17_7_fu_1030_p1();
    void thread_zext_ln17_8_fu_891_p1();
    void thread_zext_ln17_9_fu_901_p1();
    void thread_zext_ln17_fu_866_p1();
    void thread_zext_ln19_fu_1663_p1();
    void thread_ap_NS_fsm();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif