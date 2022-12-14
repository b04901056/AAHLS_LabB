-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
-- Version: 2020.1
-- Copyright (C) 1986-2020 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity matrixmul is
port (
    ap_clk : IN STD_LOGIC;
    ap_rst : IN STD_LOGIC;
    ap_start : IN STD_LOGIC;
    ap_done : OUT STD_LOGIC;
    ap_idle : OUT STD_LOGIC;
    ap_ready : OUT STD_LOGIC;
    A_address0 : OUT STD_LOGIC_VECTOR (9 downto 0);
    A_ce0 : OUT STD_LOGIC;
    A_q0 : IN STD_LOGIC_VECTOR (31 downto 0);
    B_address0 : OUT STD_LOGIC_VECTOR (9 downto 0);
    B_ce0 : OUT STD_LOGIC;
    B_q0 : IN STD_LOGIC_VECTOR (31 downto 0);
    AB_address0 : OUT STD_LOGIC_VECTOR (9 downto 0);
    AB_ce0 : OUT STD_LOGIC;
    AB_we0 : OUT STD_LOGIC;
    AB_d0 : OUT STD_LOGIC_VECTOR (31 downto 0) );
end;


architecture behav of matrixmul is 
    attribute CORE_GENERATION_INFO : STRING;
    attribute CORE_GENERATION_INFO of behav : architecture is
    "matrixmul,hls_ip_2020_1,{HLS_INPUT_TYPE=cxx,HLS_INPUT_FLOAT=0,HLS_INPUT_FIXED=0,HLS_INPUT_PART=xc7z020-clg400-1,HLS_INPUT_CLOCK=10.000000,HLS_INPUT_ARCH=others,HLS_SYN_CLOCK=8.510000,HLS_SYN_LAT=32773,HLS_SYN_TPT=none,HLS_SYN_MEM=0,HLS_SYN_DSP=3,HLS_SYN_FF=475,HLS_SYN_LUT=554,HLS_VERSION=2020_1}";
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_logic_0 : STD_LOGIC := '0';
    constant ap_ST_fsm_state1 : STD_LOGIC_VECTOR (2 downto 0) := "001";
    constant ap_ST_fsm_pp0_stage0 : STD_LOGIC_VECTOR (2 downto 0) := "010";
    constant ap_ST_fsm_state7 : STD_LOGIC_VECTOR (2 downto 0) := "100";
    constant ap_const_lv32_0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000000";
    constant ap_const_boolean_1 : BOOLEAN := true;
    constant ap_const_lv32_1 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000001";
    constant ap_const_boolean_0 : BOOLEAN := false;
    constant ap_const_lv1_0 : STD_LOGIC_VECTOR (0 downto 0) := "0";
    constant ap_const_lv1_1 : STD_LOGIC_VECTOR (0 downto 0) := "1";
    constant ap_const_lv16_0 : STD_LOGIC_VECTOR (15 downto 0) := "0000000000000000";
    constant ap_const_lv6_0 : STD_LOGIC_VECTOR (5 downto 0) := "000000";
    constant ap_const_lv12_0 : STD_LOGIC_VECTOR (11 downto 0) := "000000000000";
    constant ap_const_lv16_8000 : STD_LOGIC_VECTOR (15 downto 0) := "1000000000000000";
    constant ap_const_lv16_1 : STD_LOGIC_VECTOR (15 downto 0) := "0000000000000001";
    constant ap_const_lv12_400 : STD_LOGIC_VECTOR (11 downto 0) := "010000000000";
    constant ap_const_lv6_20 : STD_LOGIC_VECTOR (5 downto 0) := "100000";
    constant ap_const_lv6_1 : STD_LOGIC_VECTOR (5 downto 0) := "000001";
    constant ap_const_lv12_1 : STD_LOGIC_VECTOR (11 downto 0) := "000000000001";
    constant ap_const_lv5_0 : STD_LOGIC_VECTOR (4 downto 0) := "00000";
    constant ap_const_lv32_2 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000010";

    signal ap_CS_fsm : STD_LOGIC_VECTOR (2 downto 0) := "001";
    attribute fsm_encoding : string;
    attribute fsm_encoding of ap_CS_fsm : signal is "none";
    signal ap_CS_fsm_state1 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state1 : signal is "none";
    signal indvar_flatten14_reg_102 : STD_LOGIC_VECTOR (15 downto 0);
    signal i_0_reg_113 : STD_LOGIC_VECTOR (5 downto 0);
    signal indvar_flatten_reg_125 : STD_LOGIC_VECTOR (11 downto 0);
    signal j_0_reg_136 : STD_LOGIC_VECTOR (5 downto 0);
    signal ABij_0_reg_147 : STD_LOGIC_VECTOR (31 downto 0);
    signal k_0_reg_159 : STD_LOGIC_VECTOR (5 downto 0);
    signal icmp_ln11_fu_170_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal icmp_ln11_reg_359 : STD_LOGIC_VECTOR (0 downto 0);
    signal ap_CS_fsm_pp0_stage0 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_pp0_stage0 : signal is "none";
    signal ap_block_state2_pp0_stage0_iter0 : BOOLEAN;
    signal ap_block_state3_pp0_stage0_iter1 : BOOLEAN;
    signal ap_block_state4_pp0_stage0_iter2 : BOOLEAN;
    signal ap_block_state5_pp0_stage0_iter3 : BOOLEAN;
    signal ap_block_state6_pp0_stage0_iter4 : BOOLEAN;
    signal ap_block_pp0_stage0_11001 : BOOLEAN;
    signal icmp_ln11_reg_359_pp0_iter1_reg : STD_LOGIC_VECTOR (0 downto 0);
    signal icmp_ln11_reg_359_pp0_iter2_reg : STD_LOGIC_VECTOR (0 downto 0);
    signal icmp_ln11_reg_359_pp0_iter3_reg : STD_LOGIC_VECTOR (0 downto 0);
    signal add_ln11_fu_176_p2 : STD_LOGIC_VECTOR (15 downto 0);
    signal ap_enable_reg_pp0_iter0 : STD_LOGIC := '0';
    signal icmp_ln12_fu_182_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal icmp_ln12_reg_368 : STD_LOGIC_VECTOR (0 downto 0);
    signal or_ln17_fu_220_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal or_ln17_reg_373 : STD_LOGIC_VECTOR (0 downto 0);
    signal or_ln17_reg_373_pp0_iter1_reg : STD_LOGIC_VECTOR (0 downto 0);
    signal or_ln17_reg_373_pp0_iter2_reg : STD_LOGIC_VECTOR (0 downto 0);
    signal or_ln17_reg_373_pp0_iter3_reg : STD_LOGIC_VECTOR (0 downto 0);
    signal select_ln17_3_fu_226_p3 : STD_LOGIC_VECTOR (5 downto 0);
    signal select_ln17_3_reg_378 : STD_LOGIC_VECTOR (5 downto 0);
    signal select_ln17_4_fu_234_p3 : STD_LOGIC_VECTOR (5 downto 0);
    signal select_ln17_4_reg_384 : STD_LOGIC_VECTOR (5 downto 0);
    signal k_fu_242_p2 : STD_LOGIC_VECTOR (5 downto 0);
    signal k_reg_390 : STD_LOGIC_VECTOR (5 downto 0);
    signal k_reg_390_pp0_iter1_reg : STD_LOGIC_VECTOR (5 downto 0);
    signal k_reg_390_pp0_iter2_reg : STD_LOGIC_VECTOR (5 downto 0);
    signal k_reg_390_pp0_iter3_reg : STD_LOGIC_VECTOR (5 downto 0);
    signal select_ln12_fu_254_p3 : STD_LOGIC_VECTOR (11 downto 0);
    signal select_ln17_1_fu_268_p3 : STD_LOGIC_VECTOR (5 downto 0);
    signal select_ln17_1_reg_401 : STD_LOGIC_VECTOR (5 downto 0);
    signal ap_enable_reg_pp0_iter1 : STD_LOGIC := '0';
    signal AB_addr_reg_406 : STD_LOGIC_VECTOR (9 downto 0);
    signal AB_addr_reg_406_pp0_iter2_reg : STD_LOGIC_VECTOR (9 downto 0);
    signal AB_addr_reg_406_pp0_iter3_reg : STD_LOGIC_VECTOR (9 downto 0);
    signal A_load_reg_421 : STD_LOGIC_VECTOR (31 downto 0);
    signal B_load_reg_426 : STD_LOGIC_VECTOR (31 downto 0);
    signal mul_ln17_fu_337_p2 : STD_LOGIC_VECTOR (31 downto 0);
    signal mul_ln17_reg_431 : STD_LOGIC_VECTOR (31 downto 0);
    signal ABij_fu_348_p2 : STD_LOGIC_VECTOR (31 downto 0);
    signal ap_enable_reg_pp0_iter4 : STD_LOGIC := '0';
    signal ap_block_pp0_stage0_subdone : BOOLEAN;
    signal ap_condition_pp0_exit_iter0_state2 : STD_LOGIC;
    signal ap_enable_reg_pp0_iter2 : STD_LOGIC := '0';
    signal ap_enable_reg_pp0_iter3 : STD_LOGIC := '0';
    signal ap_phi_mux_i_0_phi_fu_117_p4 : STD_LOGIC_VECTOR (5 downto 0);
    signal ap_block_pp0_stage0 : BOOLEAN;
    signal ap_phi_mux_j_0_phi_fu_140_p4 : STD_LOGIC_VECTOR (5 downto 0);
    signal ap_phi_mux_k_0_phi_fu_163_p4 : STD_LOGIC_VECTOR (5 downto 0);
    signal zext_ln19_fu_296_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal zext_ln17_3_fu_310_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal zext_ln17_5_fu_332_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal icmp_ln15_1_fu_354_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal icmp_ln15_fu_202_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal xor_ln17_fu_196_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal select_ln17_fu_188_p3 : STD_LOGIC_VECTOR (5 downto 0);
    signal and_ln17_fu_208_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal j_fu_214_p2 : STD_LOGIC_VECTOR (5 downto 0);
    signal add_ln12_fu_248_p2 : STD_LOGIC_VECTOR (11 downto 0);
    signal i_fu_262_p2 : STD_LOGIC_VECTOR (5 downto 0);
    signal tmp_fu_275_p3 : STD_LOGIC_VECTOR (10 downto 0);
    signal zext_ln17_1_fu_287_p1 : STD_LOGIC_VECTOR (11 downto 0);
    signal zext_ln17_fu_283_p1 : STD_LOGIC_VECTOR (11 downto 0);
    signal add_ln19_fu_290_p2 : STD_LOGIC_VECTOR (11 downto 0);
    signal zext_ln17_2_fu_301_p1 : STD_LOGIC_VECTOR (11 downto 0);
    signal add_ln17_fu_304_p2 : STD_LOGIC_VECTOR (11 downto 0);
    signal tmp_1_fu_315_p3 : STD_LOGIC_VECTOR (10 downto 0);
    signal zext_ln17_4_fu_322_p1 : STD_LOGIC_VECTOR (11 downto 0);
    signal add_ln17_1_fu_326_p2 : STD_LOGIC_VECTOR (11 downto 0);
    signal select_ln17_2_fu_341_p3 : STD_LOGIC_VECTOR (31 downto 0);
    signal ap_CS_fsm_state7 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state7 : signal is "none";
    signal ap_NS_fsm : STD_LOGIC_VECTOR (2 downto 0);
    signal ap_idle_pp0 : STD_LOGIC;
    signal ap_enable_pp0 : STD_LOGIC;


begin




    ap_CS_fsm_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_CS_fsm <= ap_ST_fsm_state1;
            else
                ap_CS_fsm <= ap_NS_fsm;
            end if;
        end if;
    end process;


    ap_enable_reg_pp0_iter0_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_enable_reg_pp0_iter0 <= ap_const_logic_0;
            else
                if (((ap_const_logic_1 = ap_CS_fsm_pp0_stage0) and (ap_const_logic_1 = ap_condition_pp0_exit_iter0_state2) and (ap_const_boolean_0 = ap_block_pp0_stage0_subdone))) then 
                    ap_enable_reg_pp0_iter0 <= ap_const_logic_0;
                elsif (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
                    ap_enable_reg_pp0_iter0 <= ap_const_logic_1;
                end if; 
            end if;
        end if;
    end process;


    ap_enable_reg_pp0_iter1_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_enable_reg_pp0_iter1 <= ap_const_logic_0;
            else
                if ((ap_const_boolean_0 = ap_block_pp0_stage0_subdone)) then
                    if ((ap_const_logic_1 = ap_condition_pp0_exit_iter0_state2)) then 
                        ap_enable_reg_pp0_iter1 <= (ap_const_logic_1 xor ap_condition_pp0_exit_iter0_state2);
                    elsif ((ap_const_boolean_1 = ap_const_boolean_1)) then 
                        ap_enable_reg_pp0_iter1 <= ap_enable_reg_pp0_iter0;
                    end if;
                end if; 
            end if;
        end if;
    end process;


    ap_enable_reg_pp0_iter2_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_enable_reg_pp0_iter2 <= ap_const_logic_0;
            else
                if ((ap_const_boolean_0 = ap_block_pp0_stage0_subdone)) then 
                    ap_enable_reg_pp0_iter2 <= ap_enable_reg_pp0_iter1;
                end if; 
            end if;
        end if;
    end process;


    ap_enable_reg_pp0_iter3_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_enable_reg_pp0_iter3 <= ap_const_logic_0;
            else
                if ((ap_const_boolean_0 = ap_block_pp0_stage0_subdone)) then 
                    ap_enable_reg_pp0_iter3 <= ap_enable_reg_pp0_iter2;
                end if; 
            end if;
        end if;
    end process;


    ap_enable_reg_pp0_iter4_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_enable_reg_pp0_iter4 <= ap_const_logic_0;
            else
                if ((ap_const_boolean_0 = ap_block_pp0_stage0_subdone)) then 
                    ap_enable_reg_pp0_iter4 <= ap_enable_reg_pp0_iter3;
                elsif (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
                    ap_enable_reg_pp0_iter4 <= ap_const_logic_0;
                end if; 
            end if;
        end if;
    end process;


    ABij_0_reg_147_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((icmp_ln11_reg_359_pp0_iter3_reg = ap_const_lv1_0) and (ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (ap_enable_reg_pp0_iter4 = ap_const_logic_1))) then 
                ABij_0_reg_147 <= ABij_fu_348_p2;
            elsif (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
                ABij_0_reg_147 <= ap_const_lv32_0;
            end if; 
        end if;
    end process;

    i_0_reg_113_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((icmp_ln11_reg_359_pp0_iter1_reg = ap_const_lv1_0) and (ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (ap_enable_reg_pp0_iter2 = ap_const_logic_1))) then 
                i_0_reg_113 <= select_ln17_1_reg_401;
            elsif (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
                i_0_reg_113 <= ap_const_lv6_0;
            end if; 
        end if;
    end process;

    indvar_flatten14_reg_102_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (icmp_ln11_fu_170_p2 = ap_const_lv1_0) and (ap_enable_reg_pp0_iter0 = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0))) then 
                indvar_flatten14_reg_102 <= add_ln11_fu_176_p2;
            elsif (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
                indvar_flatten14_reg_102 <= ap_const_lv16_0;
            end if; 
        end if;
    end process;

    indvar_flatten_reg_125_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (icmp_ln11_fu_170_p2 = ap_const_lv1_0) and (ap_enable_reg_pp0_iter0 = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0))) then 
                indvar_flatten_reg_125 <= select_ln12_fu_254_p3;
            elsif (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
                indvar_flatten_reg_125 <= ap_const_lv12_0;
            end if; 
        end if;
    end process;

    j_0_reg_136_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (icmp_ln11_reg_359 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0) and (ap_enable_reg_pp0_iter1 = ap_const_logic_1))) then 
                j_0_reg_136 <= select_ln17_4_reg_384;
            elsif (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
                j_0_reg_136 <= ap_const_lv6_0;
            end if; 
        end if;
    end process;

    k_0_reg_159_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (icmp_ln11_reg_359 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0) and (ap_enable_reg_pp0_iter1 = ap_const_logic_1))) then 
                k_0_reg_159 <= k_reg_390;
            elsif (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
                k_0_reg_159 <= ap_const_lv6_0;
            end if; 
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (icmp_ln11_reg_359 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0))) then
                AB_addr_reg_406 <= zext_ln19_fu_296_p1(10 - 1 downto 0);
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_boolean_0 = ap_block_pp0_stage0_11001)) then
                AB_addr_reg_406_pp0_iter2_reg <= AB_addr_reg_406;
                AB_addr_reg_406_pp0_iter3_reg <= AB_addr_reg_406_pp0_iter2_reg;
                icmp_ln11_reg_359_pp0_iter2_reg <= icmp_ln11_reg_359_pp0_iter1_reg;
                icmp_ln11_reg_359_pp0_iter3_reg <= icmp_ln11_reg_359_pp0_iter2_reg;
                k_reg_390_pp0_iter2_reg <= k_reg_390_pp0_iter1_reg;
                k_reg_390_pp0_iter3_reg <= k_reg_390_pp0_iter2_reg;
                or_ln17_reg_373_pp0_iter2_reg <= or_ln17_reg_373_pp0_iter1_reg;
                or_ln17_reg_373_pp0_iter3_reg <= or_ln17_reg_373_pp0_iter2_reg;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((icmp_ln11_reg_359_pp0_iter1_reg = ap_const_lv1_0) and (ap_const_boolean_0 = ap_block_pp0_stage0_11001))) then
                A_load_reg_421 <= A_q0;
                B_load_reg_426 <= B_q0;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0))) then
                icmp_ln11_reg_359 <= icmp_ln11_fu_170_p2;
                icmp_ln11_reg_359_pp0_iter1_reg <= icmp_ln11_reg_359;
                k_reg_390_pp0_iter1_reg <= k_reg_390;
                or_ln17_reg_373_pp0_iter1_reg <= or_ln17_reg_373;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (icmp_ln11_fu_170_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0))) then
                icmp_ln12_reg_368 <= icmp_ln12_fu_182_p2;
                or_ln17_reg_373 <= or_ln17_fu_220_p2;
                select_ln17_3_reg_378 <= select_ln17_3_fu_226_p3;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (icmp_ln11_fu_170_p2 = ap_const_lv1_0) and (ap_enable_reg_pp0_iter0 = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0))) then
                k_reg_390 <= k_fu_242_p2;
                select_ln17_4_reg_384 <= select_ln17_4_fu_234_p3;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((icmp_ln11_reg_359_pp0_iter2_reg = ap_const_lv1_0) and (ap_const_boolean_0 = ap_block_pp0_stage0_11001))) then
                mul_ln17_reg_431 <= mul_ln17_fu_337_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (icmp_ln11_reg_359 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0) and (ap_enable_reg_pp0_iter1 = ap_const_logic_1))) then
                select_ln17_1_reg_401 <= select_ln17_1_fu_268_p3;
            end if;
        end if;
    end process;

    ap_NS_fsm_assign_proc : process (ap_start, ap_CS_fsm, ap_CS_fsm_state1, icmp_ln11_fu_170_p2, ap_enable_reg_pp0_iter0, ap_enable_reg_pp0_iter1, ap_enable_reg_pp0_iter4, ap_block_pp0_stage0_subdone, ap_enable_reg_pp0_iter3)
    begin
        case ap_CS_fsm is
            when ap_ST_fsm_state1 => 
                if (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1))) then
                    ap_NS_fsm <= ap_ST_fsm_pp0_stage0;
                else
                    ap_NS_fsm <= ap_ST_fsm_state1;
                end if;
            when ap_ST_fsm_pp0_stage0 => 
                if ((not(((icmp_ln11_fu_170_p2 = ap_const_lv1_1) and (ap_enable_reg_pp0_iter0 = ap_const_logic_1) and (ap_const_boolean_0 = ap_block_pp0_stage0_subdone) and (ap_enable_reg_pp0_iter1 = ap_const_logic_0))) and not(((ap_enable_reg_pp0_iter4 = ap_const_logic_1) and (ap_enable_reg_pp0_iter3 = ap_const_logic_0) and (ap_const_boolean_0 = ap_block_pp0_stage0_subdone))))) then
                    ap_NS_fsm <= ap_ST_fsm_pp0_stage0;
                elsif ((((icmp_ln11_fu_170_p2 = ap_const_lv1_1) and (ap_enable_reg_pp0_iter0 = ap_const_logic_1) and (ap_const_boolean_0 = ap_block_pp0_stage0_subdone) and (ap_enable_reg_pp0_iter1 = ap_const_logic_0)) or ((ap_enable_reg_pp0_iter4 = ap_const_logic_1) and (ap_enable_reg_pp0_iter3 = ap_const_logic_0) and (ap_const_boolean_0 = ap_block_pp0_stage0_subdone)))) then
                    ap_NS_fsm <= ap_ST_fsm_state7;
                else
                    ap_NS_fsm <= ap_ST_fsm_pp0_stage0;
                end if;
            when ap_ST_fsm_state7 => 
                ap_NS_fsm <= ap_ST_fsm_state1;
            when others =>  
                ap_NS_fsm <= "XXX";
        end case;
    end process;
    AB_address0 <= AB_addr_reg_406_pp0_iter3_reg;

    AB_ce0_assign_proc : process(ap_block_pp0_stage0_11001, ap_enable_reg_pp0_iter4)
    begin
        if (((ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (ap_enable_reg_pp0_iter4 = ap_const_logic_1))) then 
            AB_ce0 <= ap_const_logic_1;
        else 
            AB_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    AB_d0 <= std_logic_vector(unsigned(mul_ln17_reg_431) + unsigned(select_ln17_2_fu_341_p3));

    AB_we0_assign_proc : process(ap_block_pp0_stage0_11001, ap_enable_reg_pp0_iter4, icmp_ln15_1_fu_354_p2)
    begin
        if (((ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (ap_enable_reg_pp0_iter4 = ap_const_logic_1) and (icmp_ln15_1_fu_354_p2 = ap_const_lv1_1))) then 
            AB_we0 <= ap_const_logic_1;
        else 
            AB_we0 <= ap_const_logic_0;
        end if; 
    end process;

    ABij_fu_348_p2 <= std_logic_vector(unsigned(mul_ln17_reg_431) + unsigned(select_ln17_2_fu_341_p3));
    A_address0 <= zext_ln17_3_fu_310_p1(10 - 1 downto 0);

    A_ce0_assign_proc : process(ap_CS_fsm_pp0_stage0, ap_block_pp0_stage0_11001, ap_enable_reg_pp0_iter1)
    begin
        if (((ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0) and (ap_enable_reg_pp0_iter1 = ap_const_logic_1))) then 
            A_ce0 <= ap_const_logic_1;
        else 
            A_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    B_address0 <= zext_ln17_5_fu_332_p1(10 - 1 downto 0);

    B_ce0_assign_proc : process(ap_CS_fsm_pp0_stage0, ap_block_pp0_stage0_11001, ap_enable_reg_pp0_iter1)
    begin
        if (((ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0) and (ap_enable_reg_pp0_iter1 = ap_const_logic_1))) then 
            B_ce0 <= ap_const_logic_1;
        else 
            B_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    add_ln11_fu_176_p2 <= std_logic_vector(unsigned(indvar_flatten14_reg_102) + unsigned(ap_const_lv16_1));
    add_ln12_fu_248_p2 <= std_logic_vector(unsigned(indvar_flatten_reg_125) + unsigned(ap_const_lv12_1));
    add_ln17_1_fu_326_p2 <= std_logic_vector(unsigned(zext_ln17_1_fu_287_p1) + unsigned(zext_ln17_4_fu_322_p1));
    add_ln17_fu_304_p2 <= std_logic_vector(unsigned(zext_ln17_2_fu_301_p1) + unsigned(zext_ln17_fu_283_p1));
    add_ln19_fu_290_p2 <= std_logic_vector(unsigned(zext_ln17_1_fu_287_p1) + unsigned(zext_ln17_fu_283_p1));
    and_ln17_fu_208_p2 <= (xor_ln17_fu_196_p2 and icmp_ln15_fu_202_p2);
    ap_CS_fsm_pp0_stage0 <= ap_CS_fsm(1);
    ap_CS_fsm_state1 <= ap_CS_fsm(0);
    ap_CS_fsm_state7 <= ap_CS_fsm(2);
        ap_block_pp0_stage0 <= not((ap_const_boolean_1 = ap_const_boolean_1));
        ap_block_pp0_stage0_11001 <= not((ap_const_boolean_1 = ap_const_boolean_1));
        ap_block_pp0_stage0_subdone <= not((ap_const_boolean_1 = ap_const_boolean_1));
        ap_block_state2_pp0_stage0_iter0 <= not((ap_const_boolean_1 = ap_const_boolean_1));
        ap_block_state3_pp0_stage0_iter1 <= not((ap_const_boolean_1 = ap_const_boolean_1));
        ap_block_state4_pp0_stage0_iter2 <= not((ap_const_boolean_1 = ap_const_boolean_1));
        ap_block_state5_pp0_stage0_iter3 <= not((ap_const_boolean_1 = ap_const_boolean_1));
        ap_block_state6_pp0_stage0_iter4 <= not((ap_const_boolean_1 = ap_const_boolean_1));

    ap_condition_pp0_exit_iter0_state2_assign_proc : process(icmp_ln11_fu_170_p2)
    begin
        if ((icmp_ln11_fu_170_p2 = ap_const_lv1_1)) then 
            ap_condition_pp0_exit_iter0_state2 <= ap_const_logic_1;
        else 
            ap_condition_pp0_exit_iter0_state2 <= ap_const_logic_0;
        end if; 
    end process;


    ap_done_assign_proc : process(ap_CS_fsm_state7)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state7)) then 
            ap_done <= ap_const_logic_1;
        else 
            ap_done <= ap_const_logic_0;
        end if; 
    end process;

    ap_enable_pp0 <= (ap_idle_pp0 xor ap_const_logic_1);

    ap_idle_assign_proc : process(ap_start, ap_CS_fsm_state1)
    begin
        if (((ap_start = ap_const_logic_0) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            ap_idle <= ap_const_logic_1;
        else 
            ap_idle <= ap_const_logic_0;
        end if; 
    end process;


    ap_idle_pp0_assign_proc : process(ap_enable_reg_pp0_iter0, ap_enable_reg_pp0_iter1, ap_enable_reg_pp0_iter4, ap_enable_reg_pp0_iter2, ap_enable_reg_pp0_iter3)
    begin
        if (((ap_enable_reg_pp0_iter0 = ap_const_logic_0) and (ap_enable_reg_pp0_iter3 = ap_const_logic_0) and (ap_enable_reg_pp0_iter2 = ap_const_logic_0) and (ap_enable_reg_pp0_iter4 = ap_const_logic_0) and (ap_enable_reg_pp0_iter1 = ap_const_logic_0))) then 
            ap_idle_pp0 <= ap_const_logic_1;
        else 
            ap_idle_pp0 <= ap_const_logic_0;
        end if; 
    end process;


    ap_phi_mux_i_0_phi_fu_117_p4_assign_proc : process(i_0_reg_113, icmp_ln11_reg_359_pp0_iter1_reg, select_ln17_1_reg_401, ap_enable_reg_pp0_iter2, ap_block_pp0_stage0)
    begin
        if (((icmp_ln11_reg_359_pp0_iter1_reg = ap_const_lv1_0) and (ap_enable_reg_pp0_iter2 = ap_const_logic_1) and (ap_const_boolean_0 = ap_block_pp0_stage0))) then 
            ap_phi_mux_i_0_phi_fu_117_p4 <= select_ln17_1_reg_401;
        else 
            ap_phi_mux_i_0_phi_fu_117_p4 <= i_0_reg_113;
        end if; 
    end process;


    ap_phi_mux_j_0_phi_fu_140_p4_assign_proc : process(j_0_reg_136, icmp_ln11_reg_359, ap_CS_fsm_pp0_stage0, select_ln17_4_reg_384, ap_enable_reg_pp0_iter1, ap_block_pp0_stage0)
    begin
        if (((icmp_ln11_reg_359 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0) and (ap_enable_reg_pp0_iter1 = ap_const_logic_1) and (ap_const_boolean_0 = ap_block_pp0_stage0))) then 
            ap_phi_mux_j_0_phi_fu_140_p4 <= select_ln17_4_reg_384;
        else 
            ap_phi_mux_j_0_phi_fu_140_p4 <= j_0_reg_136;
        end if; 
    end process;


    ap_phi_mux_k_0_phi_fu_163_p4_assign_proc : process(k_0_reg_159, icmp_ln11_reg_359, ap_CS_fsm_pp0_stage0, k_reg_390, ap_enable_reg_pp0_iter1, ap_block_pp0_stage0)
    begin
        if (((icmp_ln11_reg_359 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0) and (ap_enable_reg_pp0_iter1 = ap_const_logic_1) and (ap_const_boolean_0 = ap_block_pp0_stage0))) then 
            ap_phi_mux_k_0_phi_fu_163_p4 <= k_reg_390;
        else 
            ap_phi_mux_k_0_phi_fu_163_p4 <= k_0_reg_159;
        end if; 
    end process;


    ap_ready_assign_proc : process(ap_CS_fsm_state7)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state7)) then 
            ap_ready <= ap_const_logic_1;
        else 
            ap_ready <= ap_const_logic_0;
        end if; 
    end process;

    i_fu_262_p2 <= std_logic_vector(unsigned(ap_phi_mux_i_0_phi_fu_117_p4) + unsigned(ap_const_lv6_1));
    icmp_ln11_fu_170_p2 <= "1" when (indvar_flatten14_reg_102 = ap_const_lv16_8000) else "0";
    icmp_ln12_fu_182_p2 <= "1" when (indvar_flatten_reg_125 = ap_const_lv12_400) else "0";
    icmp_ln15_1_fu_354_p2 <= "1" when (k_reg_390_pp0_iter3_reg = ap_const_lv6_20) else "0";
    icmp_ln15_fu_202_p2 <= "1" when (ap_phi_mux_k_0_phi_fu_163_p4 = ap_const_lv6_20) else "0";
    j_fu_214_p2 <= std_logic_vector(unsigned(select_ln17_fu_188_p3) + unsigned(ap_const_lv6_1));
    k_fu_242_p2 <= std_logic_vector(unsigned(select_ln17_3_fu_226_p3) + unsigned(ap_const_lv6_1));
    mul_ln17_fu_337_p2 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(std_logic_vector(signed(A_load_reg_421) * signed(B_load_reg_426))), 32));
    or_ln17_fu_220_p2 <= (icmp_ln12_fu_182_p2 or and_ln17_fu_208_p2);
    select_ln12_fu_254_p3 <= 
        ap_const_lv12_1 when (icmp_ln12_fu_182_p2(0) = '1') else 
        add_ln12_fu_248_p2;
    select_ln17_1_fu_268_p3 <= 
        i_fu_262_p2 when (icmp_ln12_reg_368(0) = '1') else 
        ap_phi_mux_i_0_phi_fu_117_p4;
    select_ln17_2_fu_341_p3 <= 
        ap_const_lv32_0 when (or_ln17_reg_373_pp0_iter3_reg(0) = '1') else 
        ABij_0_reg_147;
    select_ln17_3_fu_226_p3 <= 
        ap_const_lv6_0 when (or_ln17_fu_220_p2(0) = '1') else 
        ap_phi_mux_k_0_phi_fu_163_p4;
    select_ln17_4_fu_234_p3 <= 
        j_fu_214_p2 when (and_ln17_fu_208_p2(0) = '1') else 
        select_ln17_fu_188_p3;
    select_ln17_fu_188_p3 <= 
        ap_const_lv6_0 when (icmp_ln12_fu_182_p2(0) = '1') else 
        ap_phi_mux_j_0_phi_fu_140_p4;
    tmp_1_fu_315_p3 <= (select_ln17_3_reg_378 & ap_const_lv5_0);
    tmp_fu_275_p3 <= (select_ln17_1_fu_268_p3 & ap_const_lv5_0);
    xor_ln17_fu_196_p2 <= (icmp_ln12_fu_182_p2 xor ap_const_lv1_1);
    zext_ln17_1_fu_287_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(select_ln17_4_reg_384),12));
    zext_ln17_2_fu_301_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(select_ln17_3_reg_378),12));
    zext_ln17_3_fu_310_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(add_ln17_fu_304_p2),64));
    zext_ln17_4_fu_322_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_1_fu_315_p3),12));
    zext_ln17_5_fu_332_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(add_ln17_1_fu_326_p2),64));
    zext_ln17_fu_283_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_fu_275_p3),12));
    zext_ln19_fu_296_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(add_ln19_fu_290_p2),64));
end behav;
