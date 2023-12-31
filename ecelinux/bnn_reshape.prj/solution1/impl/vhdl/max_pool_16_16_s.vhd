-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
-- Version: 2019.2.1
-- Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity max_pool_16_16_s is
port (
    ap_clk : IN STD_LOGIC;
    ap_rst : IN STD_LOGIC;
    ap_start : IN STD_LOGIC;
    ap_done : OUT STD_LOGIC;
    ap_idle : OUT STD_LOGIC;
    ap_ready : OUT STD_LOGIC;
    input_r_address0 : OUT STD_LOGIC_VECTOR (7 downto 0);
    input_r_ce0 : OUT STD_LOGIC;
    input_r_q0 : IN STD_LOGIC_VECTOR (15 downto 0);
    input_r_address1 : OUT STD_LOGIC_VECTOR (7 downto 0);
    input_r_ce1 : OUT STD_LOGIC;
    input_r_q1 : IN STD_LOGIC_VECTOR (15 downto 0);
    output_r_address0 : OUT STD_LOGIC_VECTOR (5 downto 0);
    output_r_ce0 : OUT STD_LOGIC;
    output_r_we0 : OUT STD_LOGIC;
    output_r_d0 : OUT STD_LOGIC_VECTOR (15 downto 0);
    output_r_q0 : IN STD_LOGIC_VECTOR (15 downto 0) );
end;


architecture behav of max_pool_16_16_s is 
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_logic_0 : STD_LOGIC := '0';
    constant ap_ST_fsm_state1 : STD_LOGIC_VECTOR (3 downto 0) := "0001";
    constant ap_ST_fsm_pp0_stage0 : STD_LOGIC_VECTOR (3 downto 0) := "0010";
    constant ap_ST_fsm_pp0_stage1 : STD_LOGIC_VECTOR (3 downto 0) := "0100";
    constant ap_ST_fsm_state5 : STD_LOGIC_VECTOR (3 downto 0) := "1000";
    constant ap_const_boolean_1 : BOOLEAN := true;
    constant ap_const_lv32_0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000000";
    constant ap_const_lv32_1 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000001";
    constant ap_const_boolean_0 : BOOLEAN := false;
    constant ap_const_lv1_0 : STD_LOGIC_VECTOR (0 downto 0) := "0";
    constant ap_const_lv32_2 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000010";
    constant ap_const_lv1_1 : STD_LOGIC_VECTOR (0 downto 0) := "1";
    constant ap_const_lv11_0 : STD_LOGIC_VECTOR (10 downto 0) := "00000000000";
    constant ap_const_lv5_0 : STD_LOGIC_VECTOR (4 downto 0) := "00000";
    constant ap_const_lv8_0 : STD_LOGIC_VECTOR (7 downto 0) := "00000000";
    constant ap_const_lv4_0 : STD_LOGIC_VECTOR (3 downto 0) := "0000";
    constant ap_const_lv4_1 : STD_LOGIC_VECTOR (3 downto 0) := "0001";
    constant ap_const_lv11_400 : STD_LOGIC_VECTOR (10 downto 0) := "10000000000";
    constant ap_const_lv11_1 : STD_LOGIC_VECTOR (10 downto 0) := "00000000001";
    constant ap_const_lv5_1 : STD_LOGIC_VECTOR (4 downto 0) := "00001";
    constant ap_const_lv8_40 : STD_LOGIC_VECTOR (7 downto 0) := "01000000";
    constant ap_const_lv4_8 : STD_LOGIC_VECTOR (3 downto 0) := "1000";
    constant ap_const_lv56_0 : STD_LOGIC_VECTOR (55 downto 0) := "00000000000000000000000000000000000000000000000000000000";
    constant ap_const_lv8_1 : STD_LOGIC_VECTOR (7 downto 0) := "00000001";
    constant ap_const_lv3_0 : STD_LOGIC_VECTOR (2 downto 0) := "000";
    constant ap_const_lv32_3 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000011";

    signal ap_CS_fsm : STD_LOGIC_VECTOR (3 downto 0) := "0001";
    attribute fsm_encoding : string;
    attribute fsm_encoding of ap_CS_fsm : signal is "none";
    signal ap_CS_fsm_state1 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state1 : signal is "none";
    signal indvar_flatten21_reg_126 : STD_LOGIC_VECTOR (10 downto 0);
    signal m_0_reg_137 : STD_LOGIC_VECTOR (4 downto 0);
    signal indvar_flatten_reg_149 : STD_LOGIC_VECTOR (7 downto 0);
    signal x_0_reg_160 : STD_LOGIC_VECTOR (3 downto 0);
    signal y_0_reg_171 : STD_LOGIC_VECTOR (3 downto 0);
    signal icmp_ln97_fu_194_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal icmp_ln97_reg_483 : STD_LOGIC_VECTOR (0 downto 0);
    signal ap_CS_fsm_pp0_stage0 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_pp0_stage0 : signal is "none";
    signal ap_block_state2_pp0_stage0_iter0 : BOOLEAN;
    signal ap_block_state4_pp0_stage0_iter1 : BOOLEAN;
    signal ap_block_pp0_stage0_11001 : BOOLEAN;
    signal add_ln97_fu_200_p2 : STD_LOGIC_VECTOR (10 downto 0);
    signal add_ln97_reg_487 : STD_LOGIC_VECTOR (10 downto 0);
    signal ap_enable_reg_pp0_iter0 : STD_LOGIC := '0';
    signal m_fu_206_p2 : STD_LOGIC_VECTOR (4 downto 0);
    signal m_reg_492 : STD_LOGIC_VECTOR (4 downto 0);
    signal icmp_ln99_fu_212_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal icmp_ln99_reg_497 : STD_LOGIC_VECTOR (0 downto 0);
    signal select_ln110_fu_218_p3 : STD_LOGIC_VECTOR (3 downto 0);
    signal select_ln110_reg_503 : STD_LOGIC_VECTOR (3 downto 0);
    signal and_ln110_fu_238_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal and_ln110_reg_508 : STD_LOGIC_VECTOR (0 downto 0);
    signal x_fu_244_p2 : STD_LOGIC_VECTOR (3 downto 0);
    signal x_reg_513 : STD_LOGIC_VECTOR (3 downto 0);
    signal select_ln110_9_fu_256_p3 : STD_LOGIC_VECTOR (3 downto 0);
    signal select_ln110_9_reg_518 : STD_LOGIC_VECTOR (3 downto 0);
    signal trunc_ln110_fu_276_p1 : STD_LOGIC_VECTOR (2 downto 0);
    signal trunc_ln110_reg_524 : STD_LOGIC_VECTOR (2 downto 0);
    signal select_ln110_14_fu_323_p3 : STD_LOGIC_VECTOR (3 downto 0);
    signal select_ln110_14_reg_534 : STD_LOGIC_VECTOR (3 downto 0);
    signal or_ln110_fu_331_p2 : STD_LOGIC_VECTOR (3 downto 0);
    signal or_ln110_reg_540 : STD_LOGIC_VECTOR (3 downto 0);
    signal add_ln99_fu_348_p2 : STD_LOGIC_VECTOR (7 downto 0);
    signal add_ln99_reg_550 : STD_LOGIC_VECTOR (7 downto 0);
    signal select_ln110_8_fu_354_p3 : STD_LOGIC_VECTOR (4 downto 0);
    signal select_ln110_8_reg_555 : STD_LOGIC_VECTOR (4 downto 0);
    signal ap_CS_fsm_pp0_stage1 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_pp0_stage1 : signal is "none";
    signal ap_block_state3_pp0_stage1_iter0 : BOOLEAN;
    signal ap_block_pp0_stage1_11001 : BOOLEAN;
    signal zext_ln110_fu_360_p1 : STD_LOGIC_VECTOR (5 downto 0);
    signal zext_ln110_reg_560 : STD_LOGIC_VECTOR (5 downto 0);
    signal select_ln110_10_fu_364_p3 : STD_LOGIC_VECTOR (3 downto 0);
    signal select_ln110_10_reg_567 : STD_LOGIC_VECTOR (3 downto 0);
    signal or_ln110_6_fu_409_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal or_ln110_6_reg_582 : STD_LOGIC_VECTOR (0 downto 0);
    signal output_addr_reg_587 : STD_LOGIC_VECTOR (5 downto 0);
    signal y_fu_437_p2 : STD_LOGIC_VECTOR (3 downto 0);
    signal y_reg_592 : STD_LOGIC_VECTOR (3 downto 0);
    signal select_ln99_fu_442_p3 : STD_LOGIC_VECTOR (7 downto 0);
    signal select_ln99_reg_597 : STD_LOGIC_VECTOR (7 downto 0);
    signal ap_block_pp0_stage0_subdone : BOOLEAN;
    signal ap_condition_pp0_exit_iter0_state2 : STD_LOGIC;
    signal ap_enable_reg_pp0_iter1 : STD_LOGIC := '0';
    signal ap_block_pp0_stage1_subdone : BOOLEAN;
    signal ap_phi_mux_indvar_flatten21_phi_fu_130_p4 : STD_LOGIC_VECTOR (10 downto 0);
    signal ap_block_pp0_stage0 : BOOLEAN;
    signal ap_phi_mux_m_0_phi_fu_141_p4 : STD_LOGIC_VECTOR (4 downto 0);
    signal ap_phi_mux_indvar_flatten_phi_fu_153_p4 : STD_LOGIC_VECTOR (7 downto 0);
    signal ap_phi_mux_x_0_phi_fu_164_p4 : STD_LOGIC_VECTOR (3 downto 0);
    signal ap_phi_mux_y_0_phi_fu_175_p4 : STD_LOGIC_VECTOR (3 downto 0);
    signal tmp_s_fu_302_p5 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_10_fu_337_p4 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_9_fu_373_p5 : STD_LOGIC_VECTOR (63 downto 0);
    signal ap_block_pp0_stage1 : BOOLEAN;
    signal tmp_11_fu_392_p4 : STD_LOGIC_VECTOR (63 downto 0);
    signal zext_ln114_2_fu_432_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal shl_ln110_fu_182_p2 : STD_LOGIC_VECTOR (3 downto 0);
    signal icmp_ln101_fu_232_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal xor_ln110_fu_226_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal or_ln110_9_fu_250_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal shl_ln110_3_fu_264_p2 : STD_LOGIC_VECTOR (3 downto 0);
    signal select_ln110_11_fu_286_p3 : STD_LOGIC_VECTOR (3 downto 0);
    signal select_ln110_12_fu_294_p3 : STD_LOGIC_VECTOR (3 downto 0);
    signal or_ln110_5_fu_188_p2 : STD_LOGIC_VECTOR (3 downto 0);
    signal or_ln110_10_fu_270_p2 : STD_LOGIC_VECTOR (3 downto 0);
    signal select_ln110_13_fu_315_p3 : STD_LOGIC_VECTOR (3 downto 0);
    signal shl_ln110_4_fu_280_p2 : STD_LOGIC_VECTOR (3 downto 0);
    signal tmp_12_fu_401_p3 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_fu_384_p3 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_15_fu_415_p3 : STD_LOGIC_VECTOR (6 downto 0);
    signal zext_ln114_fu_422_p1 : STD_LOGIC_VECTOR (7 downto 0);
    signal zext_ln110_2_fu_369_p1 : STD_LOGIC_VECTOR (7 downto 0);
    signal add_ln114_fu_426_p2 : STD_LOGIC_VECTOR (7 downto 0);
    signal tmp_13_fu_448_p3 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_14_fu_455_p3 : STD_LOGIC_VECTOR (0 downto 0);
    signal or_ln110_7_fu_462_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal or_ln110_8_fu_468_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal ap_CS_fsm_state5 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state5 : signal is "none";
    signal ap_NS_fsm : STD_LOGIC_VECTOR (3 downto 0);
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
                if ((((ap_const_logic_1 = ap_CS_fsm_pp0_stage0) and (ap_const_boolean_0 = ap_block_pp0_stage0_subdone)) or ((ap_const_logic_1 = ap_CS_fsm_pp0_stage1) and (ap_const_boolean_0 = ap_block_pp0_stage1_subdone)))) then 
                    ap_enable_reg_pp0_iter1 <= ap_enable_reg_pp0_iter0;
                elsif (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
                    ap_enable_reg_pp0_iter1 <= ap_const_logic_0;
                end if; 
            end if;
        end if;
    end process;


    indvar_flatten21_reg_126_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (icmp_ln97_reg_483 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0) and (ap_enable_reg_pp0_iter1 = ap_const_logic_1))) then 
                indvar_flatten21_reg_126 <= add_ln97_reg_487;
            elsif (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
                indvar_flatten21_reg_126 <= ap_const_lv11_0;
            end if; 
        end if;
    end process;

    indvar_flatten_reg_149_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (icmp_ln97_reg_483 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0) and (ap_enable_reg_pp0_iter1 = ap_const_logic_1))) then 
                indvar_flatten_reg_149 <= select_ln99_reg_597;
            elsif (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
                indvar_flatten_reg_149 <= ap_const_lv8_0;
            end if; 
        end if;
    end process;

    m_0_reg_137_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (icmp_ln97_reg_483 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0) and (ap_enable_reg_pp0_iter1 = ap_const_logic_1))) then 
                m_0_reg_137 <= select_ln110_8_reg_555;
            elsif (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
                m_0_reg_137 <= ap_const_lv5_0;
            end if; 
        end if;
    end process;

    x_0_reg_160_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (icmp_ln97_reg_483 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0) and (ap_enable_reg_pp0_iter1 = ap_const_logic_1))) then 
                x_0_reg_160 <= select_ln110_10_reg_567;
            elsif (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
                x_0_reg_160 <= ap_const_lv4_0;
            end if; 
        end if;
    end process;

    y_0_reg_171_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (icmp_ln97_reg_483 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0) and (ap_enable_reg_pp0_iter1 = ap_const_logic_1))) then 
                y_0_reg_171 <= y_reg_592;
            elsif (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
                y_0_reg_171 <= ap_const_lv4_0;
            end if; 
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (ap_enable_reg_pp0_iter0 = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0))) then
                add_ln97_reg_487 <= add_ln97_fu_200_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (icmp_ln97_fu_194_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0))) then
                add_ln99_reg_550 <= add_ln99_fu_348_p2;
                and_ln110_reg_508 <= and_ln110_fu_238_p2;
                icmp_ln99_reg_497 <= icmp_ln99_fu_212_p2;
                m_reg_492 <= m_fu_206_p2;
                    or_ln110_reg_540(3 downto 1) <= or_ln110_fu_331_p2(3 downto 1);
                    select_ln110_14_reg_534(3 downto 1) <= select_ln110_14_fu_323_p3(3 downto 1);
                select_ln110_9_reg_518 <= select_ln110_9_fu_256_p3;
                select_ln110_reg_503 <= select_ln110_fu_218_p3;
                trunc_ln110_reg_524 <= trunc_ln110_fu_276_p1;
                x_reg_513 <= x_fu_244_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0))) then
                icmp_ln97_reg_483 <= icmp_ln97_fu_194_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((icmp_ln97_reg_483 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage1) and (ap_const_boolean_0 = ap_block_pp0_stage1_11001))) then
                or_ln110_6_reg_582 <= or_ln110_6_fu_409_p2;
                output_addr_reg_587 <= zext_ln114_2_fu_432_p1(6 - 1 downto 0);
                    zext_ln110_reg_560(4 downto 0) <= zext_ln110_fu_360_p1(4 downto 0);
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((icmp_ln97_reg_483 = ap_const_lv1_0) and (ap_enable_reg_pp0_iter0 = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage1) and (ap_const_boolean_0 = ap_block_pp0_stage1_11001))) then
                select_ln110_10_reg_567 <= select_ln110_10_fu_364_p3;
                select_ln110_8_reg_555 <= select_ln110_8_fu_354_p3;
                select_ln99_reg_597 <= select_ln99_fu_442_p3;
                y_reg_592 <= y_fu_437_p2;
            end if;
        end if;
    end process;
    select_ln110_14_reg_534(0) <= '1';
    or_ln110_reg_540(0) <= '1';
    zext_ln110_reg_560(5) <= '0';

    ap_NS_fsm_assign_proc : process (ap_start, ap_CS_fsm, ap_CS_fsm_state1, icmp_ln97_fu_194_p2, ap_enable_reg_pp0_iter0, ap_block_pp0_stage0_subdone, ap_block_pp0_stage1_subdone)
    begin
        case ap_CS_fsm is
            when ap_ST_fsm_state1 => 
                if (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1))) then
                    ap_NS_fsm <= ap_ST_fsm_pp0_stage0;
                else
                    ap_NS_fsm <= ap_ST_fsm_state1;
                end if;
            when ap_ST_fsm_pp0_stage0 => 
                if ((not(((icmp_ln97_fu_194_p2 = ap_const_lv1_1) and (ap_enable_reg_pp0_iter0 = ap_const_logic_1) and (ap_const_boolean_0 = ap_block_pp0_stage0_subdone))) and (ap_const_boolean_0 = ap_block_pp0_stage0_subdone))) then
                    ap_NS_fsm <= ap_ST_fsm_pp0_stage1;
                elsif (((icmp_ln97_fu_194_p2 = ap_const_lv1_1) and (ap_enable_reg_pp0_iter0 = ap_const_logic_1) and (ap_const_boolean_0 = ap_block_pp0_stage0_subdone))) then
                    ap_NS_fsm <= ap_ST_fsm_state5;
                else
                    ap_NS_fsm <= ap_ST_fsm_pp0_stage0;
                end if;
            when ap_ST_fsm_pp0_stage1 => 
                if ((ap_const_boolean_0 = ap_block_pp0_stage1_subdone)) then
                    ap_NS_fsm <= ap_ST_fsm_pp0_stage0;
                else
                    ap_NS_fsm <= ap_ST_fsm_pp0_stage1;
                end if;
            when ap_ST_fsm_state5 => 
                ap_NS_fsm <= ap_ST_fsm_state1;
            when others =>  
                ap_NS_fsm <= "XXXX";
        end case;
    end process;
    add_ln114_fu_426_p2 <= std_logic_vector(unsigned(zext_ln114_fu_422_p1) + unsigned(zext_ln110_2_fu_369_p1));
    add_ln97_fu_200_p2 <= std_logic_vector(unsigned(ap_const_lv11_1) + unsigned(ap_phi_mux_indvar_flatten21_phi_fu_130_p4));
    add_ln99_fu_348_p2 <= std_logic_vector(unsigned(ap_const_lv8_1) + unsigned(ap_phi_mux_indvar_flatten_phi_fu_153_p4));
    and_ln110_fu_238_p2 <= (xor_ln110_fu_226_p2 and icmp_ln101_fu_232_p2);
    ap_CS_fsm_pp0_stage0 <= ap_CS_fsm(1);
    ap_CS_fsm_pp0_stage1 <= ap_CS_fsm(2);
    ap_CS_fsm_state1 <= ap_CS_fsm(0);
    ap_CS_fsm_state5 <= ap_CS_fsm(3);
        ap_block_pp0_stage0 <= not((ap_const_boolean_1 = ap_const_boolean_1));
        ap_block_pp0_stage0_11001 <= not((ap_const_boolean_1 = ap_const_boolean_1));
        ap_block_pp0_stage0_subdone <= not((ap_const_boolean_1 = ap_const_boolean_1));
        ap_block_pp0_stage1 <= not((ap_const_boolean_1 = ap_const_boolean_1));
        ap_block_pp0_stage1_11001 <= not((ap_const_boolean_1 = ap_const_boolean_1));
        ap_block_pp0_stage1_subdone <= not((ap_const_boolean_1 = ap_const_boolean_1));
        ap_block_state2_pp0_stage0_iter0 <= not((ap_const_boolean_1 = ap_const_boolean_1));
        ap_block_state3_pp0_stage1_iter0 <= not((ap_const_boolean_1 = ap_const_boolean_1));
        ap_block_state4_pp0_stage0_iter1 <= not((ap_const_boolean_1 = ap_const_boolean_1));

    ap_condition_pp0_exit_iter0_state2_assign_proc : process(icmp_ln97_fu_194_p2)
    begin
        if ((icmp_ln97_fu_194_p2 = ap_const_lv1_1)) then 
            ap_condition_pp0_exit_iter0_state2 <= ap_const_logic_1;
        else 
            ap_condition_pp0_exit_iter0_state2 <= ap_const_logic_0;
        end if; 
    end process;


    ap_done_assign_proc : process(ap_start, ap_CS_fsm_state1, ap_CS_fsm_state5)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state5) or ((ap_start = ap_const_logic_0) and (ap_const_logic_1 = ap_CS_fsm_state1)))) then 
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


    ap_idle_pp0_assign_proc : process(ap_enable_reg_pp0_iter0, ap_enable_reg_pp0_iter1)
    begin
        if (((ap_enable_reg_pp0_iter0 = ap_const_logic_0) and (ap_enable_reg_pp0_iter1 = ap_const_logic_0))) then 
            ap_idle_pp0 <= ap_const_logic_1;
        else 
            ap_idle_pp0 <= ap_const_logic_0;
        end if; 
    end process;


    ap_phi_mux_indvar_flatten21_phi_fu_130_p4_assign_proc : process(indvar_flatten21_reg_126, icmp_ln97_reg_483, ap_CS_fsm_pp0_stage0, add_ln97_reg_487, ap_enable_reg_pp0_iter1, ap_block_pp0_stage0)
    begin
        if (((icmp_ln97_reg_483 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0) and (ap_enable_reg_pp0_iter1 = ap_const_logic_1) and (ap_const_boolean_0 = ap_block_pp0_stage0))) then 
            ap_phi_mux_indvar_flatten21_phi_fu_130_p4 <= add_ln97_reg_487;
        else 
            ap_phi_mux_indvar_flatten21_phi_fu_130_p4 <= indvar_flatten21_reg_126;
        end if; 
    end process;


    ap_phi_mux_indvar_flatten_phi_fu_153_p4_assign_proc : process(indvar_flatten_reg_149, icmp_ln97_reg_483, ap_CS_fsm_pp0_stage0, select_ln99_reg_597, ap_enable_reg_pp0_iter1, ap_block_pp0_stage0)
    begin
        if (((icmp_ln97_reg_483 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0) and (ap_enable_reg_pp0_iter1 = ap_const_logic_1) and (ap_const_boolean_0 = ap_block_pp0_stage0))) then 
            ap_phi_mux_indvar_flatten_phi_fu_153_p4 <= select_ln99_reg_597;
        else 
            ap_phi_mux_indvar_flatten_phi_fu_153_p4 <= indvar_flatten_reg_149;
        end if; 
    end process;


    ap_phi_mux_m_0_phi_fu_141_p4_assign_proc : process(m_0_reg_137, icmp_ln97_reg_483, ap_CS_fsm_pp0_stage0, select_ln110_8_reg_555, ap_enable_reg_pp0_iter1, ap_block_pp0_stage0)
    begin
        if (((icmp_ln97_reg_483 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0) and (ap_enable_reg_pp0_iter1 = ap_const_logic_1) and (ap_const_boolean_0 = ap_block_pp0_stage0))) then 
            ap_phi_mux_m_0_phi_fu_141_p4 <= select_ln110_8_reg_555;
        else 
            ap_phi_mux_m_0_phi_fu_141_p4 <= m_0_reg_137;
        end if; 
    end process;


    ap_phi_mux_x_0_phi_fu_164_p4_assign_proc : process(x_0_reg_160, icmp_ln97_reg_483, ap_CS_fsm_pp0_stage0, select_ln110_10_reg_567, ap_enable_reg_pp0_iter1, ap_block_pp0_stage0)
    begin
        if (((icmp_ln97_reg_483 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0) and (ap_enable_reg_pp0_iter1 = ap_const_logic_1) and (ap_const_boolean_0 = ap_block_pp0_stage0))) then 
            ap_phi_mux_x_0_phi_fu_164_p4 <= select_ln110_10_reg_567;
        else 
            ap_phi_mux_x_0_phi_fu_164_p4 <= x_0_reg_160;
        end if; 
    end process;


    ap_phi_mux_y_0_phi_fu_175_p4_assign_proc : process(y_0_reg_171, icmp_ln97_reg_483, ap_CS_fsm_pp0_stage0, y_reg_592, ap_enable_reg_pp0_iter1, ap_block_pp0_stage0)
    begin
        if (((icmp_ln97_reg_483 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0) and (ap_enable_reg_pp0_iter1 = ap_const_logic_1) and (ap_const_boolean_0 = ap_block_pp0_stage0))) then 
            ap_phi_mux_y_0_phi_fu_175_p4 <= y_reg_592;
        else 
            ap_phi_mux_y_0_phi_fu_175_p4 <= y_0_reg_171;
        end if; 
    end process;


    ap_ready_assign_proc : process(ap_CS_fsm_state5)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state5)) then 
            ap_ready <= ap_const_logic_1;
        else 
            ap_ready <= ap_const_logic_0;
        end if; 
    end process;

    icmp_ln101_fu_232_p2 <= "1" when (ap_phi_mux_y_0_phi_fu_175_p4 = ap_const_lv4_8) else "0";
    icmp_ln97_fu_194_p2 <= "1" when (ap_phi_mux_indvar_flatten21_phi_fu_130_p4 = ap_const_lv11_400) else "0";
    icmp_ln99_fu_212_p2 <= "1" when (ap_phi_mux_indvar_flatten_phi_fu_153_p4 = ap_const_lv8_40) else "0";

    input_r_address0_assign_proc : process(ap_CS_fsm_pp0_stage0, ap_enable_reg_pp0_iter0, ap_CS_fsm_pp0_stage1, ap_block_pp0_stage0, tmp_s_fu_302_p5, tmp_9_fu_373_p5, ap_block_pp0_stage1)
    begin
        if ((ap_enable_reg_pp0_iter0 = ap_const_logic_1)) then
            if (((ap_const_logic_1 = ap_CS_fsm_pp0_stage1) and (ap_const_boolean_0 = ap_block_pp0_stage1))) then 
                input_r_address0 <= tmp_9_fu_373_p5(8 - 1 downto 0);
            elsif (((ap_const_logic_1 = ap_CS_fsm_pp0_stage0) and (ap_const_boolean_0 = ap_block_pp0_stage0))) then 
                input_r_address0 <= tmp_s_fu_302_p5(8 - 1 downto 0);
            else 
                input_r_address0 <= "XXXXXXXX";
            end if;
        else 
            input_r_address0 <= "XXXXXXXX";
        end if; 
    end process;


    input_r_address1_assign_proc : process(ap_CS_fsm_pp0_stage0, ap_enable_reg_pp0_iter0, ap_CS_fsm_pp0_stage1, ap_block_pp0_stage0, tmp_10_fu_337_p4, ap_block_pp0_stage1, tmp_11_fu_392_p4)
    begin
        if ((ap_enable_reg_pp0_iter0 = ap_const_logic_1)) then
            if (((ap_const_logic_1 = ap_CS_fsm_pp0_stage1) and (ap_const_boolean_0 = ap_block_pp0_stage1))) then 
                input_r_address1 <= tmp_11_fu_392_p4(8 - 1 downto 0);
            elsif (((ap_const_logic_1 = ap_CS_fsm_pp0_stage0) and (ap_const_boolean_0 = ap_block_pp0_stage0))) then 
                input_r_address1 <= tmp_10_fu_337_p4(8 - 1 downto 0);
            else 
                input_r_address1 <= "XXXXXXXX";
            end if;
        else 
            input_r_address1 <= "XXXXXXXX";
        end if; 
    end process;


    input_r_ce0_assign_proc : process(ap_CS_fsm_pp0_stage0, ap_block_pp0_stage0_11001, ap_enable_reg_pp0_iter0, ap_CS_fsm_pp0_stage1, ap_block_pp0_stage1_11001)
    begin
        if ((((ap_enable_reg_pp0_iter0 = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage1) and (ap_const_boolean_0 = ap_block_pp0_stage1_11001)) or ((ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (ap_enable_reg_pp0_iter0 = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0)))) then 
            input_r_ce0 <= ap_const_logic_1;
        else 
            input_r_ce0 <= ap_const_logic_0;
        end if; 
    end process;


    input_r_ce1_assign_proc : process(ap_CS_fsm_pp0_stage0, ap_block_pp0_stage0_11001, ap_enable_reg_pp0_iter0, ap_CS_fsm_pp0_stage1, ap_block_pp0_stage1_11001)
    begin
        if ((((ap_enable_reg_pp0_iter0 = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage1) and (ap_const_boolean_0 = ap_block_pp0_stage1_11001)) or ((ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (ap_enable_reg_pp0_iter0 = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0)))) then 
            input_r_ce1 <= ap_const_logic_1;
        else 
            input_r_ce1 <= ap_const_logic_0;
        end if; 
    end process;

    m_fu_206_p2 <= std_logic_vector(unsigned(ap_const_lv5_1) + unsigned(ap_phi_mux_m_0_phi_fu_141_p4));
    or_ln110_10_fu_270_p2 <= (shl_ln110_3_fu_264_p2 or ap_const_lv4_1);
    or_ln110_5_fu_188_p2 <= (shl_ln110_fu_182_p2 or ap_const_lv4_1);
    or_ln110_6_fu_409_p2 <= (tmp_fu_384_p3 or tmp_12_fu_401_p3);
    or_ln110_7_fu_462_p2 <= (tmp_14_fu_455_p3 or tmp_13_fu_448_p3);
    or_ln110_8_fu_468_p2 <= (or_ln110_7_fu_462_p2 or or_ln110_6_reg_582);
    or_ln110_9_fu_250_p2 <= (icmp_ln99_fu_212_p2 or and_ln110_fu_238_p2);
    or_ln110_fu_331_p2 <= (shl_ln110_4_fu_280_p2 or ap_const_lv4_1);

    output_r_address0_assign_proc : process(ap_CS_fsm_pp0_stage0, ap_enable_reg_pp0_iter0, ap_CS_fsm_pp0_stage1, output_addr_reg_587, ap_enable_reg_pp0_iter1, ap_block_pp0_stage0, ap_block_pp0_stage1, zext_ln114_2_fu_432_p1)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_pp0_stage0) and (ap_enable_reg_pp0_iter1 = ap_const_logic_1) and (ap_const_boolean_0 = ap_block_pp0_stage0))) then 
            output_r_address0 <= output_addr_reg_587;
        elsif (((ap_enable_reg_pp0_iter0 = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage1) and (ap_const_boolean_0 = ap_block_pp0_stage1))) then 
            output_r_address0 <= zext_ln114_2_fu_432_p1(6 - 1 downto 0);
        else 
            output_r_address0 <= "XXXXXX";
        end if; 
    end process;


    output_r_ce0_assign_proc : process(ap_CS_fsm_pp0_stage0, ap_block_pp0_stage0_11001, ap_enable_reg_pp0_iter0, ap_CS_fsm_pp0_stage1, ap_block_pp0_stage1_11001, ap_enable_reg_pp0_iter1)
    begin
        if ((((ap_enable_reg_pp0_iter0 = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage1) and (ap_const_boolean_0 = ap_block_pp0_stage1_11001)) or ((ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0) and (ap_enable_reg_pp0_iter1 = ap_const_logic_1)))) then 
            output_r_ce0 <= ap_const_logic_1;
        else 
            output_r_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    
    output_r_d0_proc : process(output_r_q0, zext_ln110_reg_560, or_ln110_8_fu_468_p2)
    begin
        output_r_d0 <= output_r_q0;
        if to_integer(unsigned(zext_ln110_reg_560)) >= output_r_q0'low and to_integer(unsigned(zext_ln110_reg_560)) <= output_r_q0'high then
            output_r_d0(to_integer(unsigned(zext_ln110_reg_560))) <= or_ln110_8_fu_468_p2(0);
        end if;
    end process;


    output_r_we0_assign_proc : process(icmp_ln97_reg_483, ap_CS_fsm_pp0_stage0, ap_block_pp0_stage0_11001, ap_enable_reg_pp0_iter1)
    begin
        if (((ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (icmp_ln97_reg_483 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0) and (ap_enable_reg_pp0_iter1 = ap_const_logic_1))) then 
            output_r_we0 <= ap_const_logic_1;
        else 
            output_r_we0 <= ap_const_logic_0;
        end if; 
    end process;

    select_ln110_10_fu_364_p3 <= 
        x_reg_513 when (and_ln110_reg_508(0) = '1') else 
        select_ln110_reg_503;
    select_ln110_11_fu_286_p3 <= 
        ap_const_lv4_0 when (icmp_ln99_fu_212_p2(0) = '1') else 
        shl_ln110_fu_182_p2;
    select_ln110_12_fu_294_p3 <= 
        shl_ln110_3_fu_264_p2 when (and_ln110_fu_238_p2(0) = '1') else 
        select_ln110_11_fu_286_p3;
    select_ln110_13_fu_315_p3 <= 
        ap_const_lv4_1 when (icmp_ln99_fu_212_p2(0) = '1') else 
        or_ln110_5_fu_188_p2;
    select_ln110_14_fu_323_p3 <= 
        or_ln110_10_fu_270_p2 when (and_ln110_fu_238_p2(0) = '1') else 
        select_ln110_13_fu_315_p3;
    select_ln110_8_fu_354_p3 <= 
        m_reg_492 when (icmp_ln99_reg_497(0) = '1') else 
        m_0_reg_137;
    select_ln110_9_fu_256_p3 <= 
        ap_const_lv4_0 when (or_ln110_9_fu_250_p2(0) = '1') else 
        ap_phi_mux_y_0_phi_fu_175_p4;
    select_ln110_fu_218_p3 <= 
        ap_const_lv4_0 when (icmp_ln99_fu_212_p2(0) = '1') else 
        ap_phi_mux_x_0_phi_fu_164_p4;
    select_ln99_fu_442_p3 <= 
        ap_const_lv8_1 when (icmp_ln99_reg_497(0) = '1') else 
        add_ln99_reg_550;
    shl_ln110_3_fu_264_p2 <= std_logic_vector(shift_left(unsigned(x_fu_244_p2),to_integer(unsigned('0' & ap_const_lv4_1(4-1 downto 0)))));
    shl_ln110_4_fu_280_p2 <= std_logic_vector(shift_left(unsigned(select_ln110_9_fu_256_p3),to_integer(unsigned('0' & ap_const_lv4_1(4-1 downto 0)))));
    shl_ln110_fu_182_p2 <= std_logic_vector(shift_left(unsigned(ap_phi_mux_x_0_phi_fu_164_p4),to_integer(unsigned('0' & ap_const_lv4_1(4-1 downto 0)))));
    tmp_10_fu_337_p4 <= ((ap_const_lv56_0 & or_ln110_fu_331_p2) & select_ln110_12_fu_294_p3);
    tmp_11_fu_392_p4 <= ((ap_const_lv56_0 & or_ln110_reg_540) & select_ln110_14_reg_534);
    tmp_12_fu_401_p3 <= input_r_q1(to_integer(unsigned(zext_ln110_fu_360_p1)) downto to_integer(unsigned(zext_ln110_fu_360_p1))) when (to_integer(unsigned(zext_ln110_fu_360_p1))>= 0 and to_integer(unsigned(zext_ln110_fu_360_p1))<=15) else "-";
    tmp_13_fu_448_p3 <= input_r_q0(to_integer(unsigned(zext_ln110_reg_560)) downto to_integer(unsigned(zext_ln110_reg_560))) when (to_integer(unsigned(zext_ln110_reg_560))>= 0 and to_integer(unsigned(zext_ln110_reg_560))<=15) else "-";
    tmp_14_fu_455_p3 <= input_r_q1(to_integer(unsigned(zext_ln110_reg_560)) downto to_integer(unsigned(zext_ln110_reg_560))) when (to_integer(unsigned(zext_ln110_reg_560))>= 0 and to_integer(unsigned(zext_ln110_reg_560))<=15) else "-";
    tmp_15_fu_415_p3 <= (select_ln110_9_reg_518 & ap_const_lv3_0);
    tmp_9_fu_373_p5 <= (((ap_const_lv56_0 & trunc_ln110_reg_524) & ap_const_lv1_0) & select_ln110_14_reg_534);
    tmp_fu_384_p3 <= input_r_q0(to_integer(unsigned(zext_ln110_fu_360_p1)) downto to_integer(unsigned(zext_ln110_fu_360_p1))) when (to_integer(unsigned(zext_ln110_fu_360_p1))>= 0 and to_integer(unsigned(zext_ln110_fu_360_p1))<=15) else "-";
    tmp_s_fu_302_p5 <= (((ap_const_lv56_0 & trunc_ln110_fu_276_p1) & ap_const_lv1_0) & select_ln110_12_fu_294_p3);
    trunc_ln110_fu_276_p1 <= select_ln110_9_fu_256_p3(3 - 1 downto 0);
    x_fu_244_p2 <= std_logic_vector(unsigned(ap_const_lv4_1) + unsigned(select_ln110_fu_218_p3));
    xor_ln110_fu_226_p2 <= (icmp_ln99_fu_212_p2 xor ap_const_lv1_1);
    y_fu_437_p2 <= std_logic_vector(unsigned(ap_const_lv4_1) + unsigned(select_ln110_9_reg_518));
    zext_ln110_2_fu_369_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(select_ln110_10_fu_364_p3),8));
    zext_ln110_fu_360_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(select_ln110_8_fu_354_p3),6));
    zext_ln114_2_fu_432_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(add_ln114_fu_426_p2),64));
    zext_ln114_fu_422_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_15_fu_415_p3),8));
end behav;
