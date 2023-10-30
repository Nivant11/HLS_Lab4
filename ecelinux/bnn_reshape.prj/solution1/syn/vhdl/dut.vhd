-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
-- Version: 2019.2.1
-- Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity dut is
port (
    ap_clk : IN STD_LOGIC;
    ap_rst : IN STD_LOGIC;
    ap_start : IN STD_LOGIC;
    ap_done : OUT STD_LOGIC;
    ap_idle : OUT STD_LOGIC;
    ap_ready : OUT STD_LOGIC;
    strm_in_V_V_dout : IN STD_LOGIC_VECTOR (31 downto 0);
    strm_in_V_V_empty_n : IN STD_LOGIC;
    strm_in_V_V_read : OUT STD_LOGIC;
    strm_out_V_V_din : OUT STD_LOGIC_VECTOR (31 downto 0);
    strm_out_V_V_full_n : IN STD_LOGIC;
    strm_out_V_V_write : OUT STD_LOGIC );
end;


architecture behav of dut is 
    attribute CORE_GENERATION_INFO : STRING;
    attribute CORE_GENERATION_INFO of behav : architecture is
    "dut,hls_ip_2019_2_1,{HLS_INPUT_TYPE=cxx,HLS_INPUT_FLOAT=0,HLS_INPUT_FIXED=1,HLS_INPUT_PART=xc7z020-clg484-1,HLS_INPUT_CLOCK=10.000000,HLS_INPUT_ARCH=others,HLS_SYN_CLOCK=8.681000,HLS_SYN_LAT=75816,HLS_SYN_TPT=none,HLS_SYN_MEM=8,HLS_SYN_DSP=0,HLS_SYN_FF=6724,HLS_SYN_LUT=23117,HLS_VERSION=2019_2_1}";
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_logic_0 : STD_LOGIC := '0';
    constant ap_ST_fsm_state1 : STD_LOGIC_VECTOR (3 downto 0) := "0001";
    constant ap_ST_fsm_state2 : STD_LOGIC_VECTOR (3 downto 0) := "0010";
    constant ap_ST_fsm_state3 : STD_LOGIC_VECTOR (3 downto 0) := "0100";
    constant ap_ST_fsm_state4 : STD_LOGIC_VECTOR (3 downto 0) := "1000";
    constant ap_const_lv32_0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000000";
    constant ap_const_lv32_1 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000001";
    constant ap_const_lv1_0 : STD_LOGIC_VECTOR (0 downto 0) := "0";
    constant ap_const_lv32_3 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000011";
    constant ap_const_lv32_2 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000010";
    constant ap_const_lv9_0 : STD_LOGIC_VECTOR (8 downto 0) := "000000000";
    constant ap_const_lv1_1 : STD_LOGIC_VECTOR (0 downto 0) := "1";
    constant ap_const_lv4_0 : STD_LOGIC_VECTOR (3 downto 0) := "0000";
    constant ap_const_lv6_0 : STD_LOGIC_VECTOR (5 downto 0) := "000000";
    constant ap_const_lv4_8 : STD_LOGIC_VECTOR (3 downto 0) := "1000";
    constant ap_const_lv4_1 : STD_LOGIC_VECTOR (3 downto 0) := "0001";
    constant ap_const_lv9_20 : STD_LOGIC_VECTOR (8 downto 0) := "000100000";
    constant ap_const_lv6_20 : STD_LOGIC_VECTOR (5 downto 0) := "100000";
    constant ap_const_lv6_1 : STD_LOGIC_VECTOR (5 downto 0) := "000001";
    constant ap_const_lv9_1 : STD_LOGIC_VECTOR (8 downto 0) := "000000001";
    constant ap_const_boolean_1 : BOOLEAN := true;

    signal ap_CS_fsm : STD_LOGIC_VECTOR (3 downto 0) := "0001";
    attribute fsm_encoding : string;
    attribute fsm_encoding of ap_CS_fsm : signal is "none";
    signal ap_CS_fsm_state1 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state1 : signal is "none";
    signal strm_in_V_V_blk_n : STD_LOGIC;
    signal ap_CS_fsm_state2 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state2 : signal is "none";
    signal icmp_ln26_fu_182_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal strm_out_V_V_blk_n : STD_LOGIC;
    signal ap_CS_fsm_state4 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state4 : signal is "none";
    signal i_fu_188_p2 : STD_LOGIC_VECTOR (3 downto 0);
    signal i_reg_247 : STD_LOGIC_VECTOR (3 downto 0);
    signal ap_block_state2 : BOOLEAN;
    signal tmp_V_2_reg_252 : STD_LOGIC_VECTOR (31 downto 0);
    signal bitcount_fu_194_p2 : STD_LOGIC_VECTOR (8 downto 0);
    signal bitcount_reg_257 : STD_LOGIC_VECTOR (8 downto 0);
    signal j_fu_210_p2 : STD_LOGIC_VECTOR (5 downto 0);
    signal ap_CS_fsm_state3 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state3 : signal is "none";
    signal add_ln30_fu_233_p2 : STD_LOGIC_VECTOR (8 downto 0);
    signal icmp_ln28_fu_204_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal input_0_address0 : STD_LOGIC_VECTOR (7 downto 0);
    signal input_0_ce0 : STD_LOGIC;
    signal input_0_we0 : STD_LOGIC;
    signal input_0_d0 : STD_LOGIC_VECTOR (0 downto 0);
    signal input_0_q0 : STD_LOGIC_VECTOR (0 downto 0);
    signal grp_bnn_xcel_fu_165_ap_start : STD_LOGIC;
    signal grp_bnn_xcel_fu_165_ap_done : STD_LOGIC;
    signal grp_bnn_xcel_fu_165_ap_idle : STD_LOGIC;
    signal grp_bnn_xcel_fu_165_ap_ready : STD_LOGIC;
    signal grp_bnn_xcel_fu_165_input_0_address0 : STD_LOGIC_VECTOR (7 downto 0);
    signal grp_bnn_xcel_fu_165_input_0_ce0 : STD_LOGIC;
    signal grp_bnn_xcel_fu_165_ap_return : STD_LOGIC_VECTOR (3 downto 0);
    signal bitcount_0_reg_121 : STD_LOGIC_VECTOR (8 downto 0);
    signal i_0_reg_133 : STD_LOGIC_VECTOR (3 downto 0);
    signal bitcount_1_reg_144 : STD_LOGIC_VECTOR (8 downto 0);
    signal Hi_assign_reg_154 : STD_LOGIC_VECTOR (5 downto 0);
    signal grp_bnn_xcel_fu_165_ap_start_reg : STD_LOGIC := '0';
    signal ap_block_state2_ignore_call0 : BOOLEAN;
    signal zext_ln29_fu_228_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal zext_ln28_fu_200_p1 : STD_LOGIC_VECTOR (31 downto 0);
    signal trunc_ln29_fu_224_p1 : STD_LOGIC_VECTOR (7 downto 0);
    signal ap_NS_fsm : STD_LOGIC_VECTOR (3 downto 0);

    component bnn_xcel IS
    port (
        ap_clk : IN STD_LOGIC;
        ap_rst : IN STD_LOGIC;
        ap_start : IN STD_LOGIC;
        ap_done : OUT STD_LOGIC;
        ap_idle : OUT STD_LOGIC;
        ap_ready : OUT STD_LOGIC;
        input_0_address0 : OUT STD_LOGIC_VECTOR (7 downto 0);
        input_0_ce0 : OUT STD_LOGIC;
        input_0_q0 : IN STD_LOGIC_VECTOR (0 downto 0);
        ap_return : OUT STD_LOGIC_VECTOR (3 downto 0) );
    end component;


    component dut_input_0 IS
    generic (
        DataWidth : INTEGER;
        AddressRange : INTEGER;
        AddressWidth : INTEGER );
    port (
        clk : IN STD_LOGIC;
        reset : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR (7 downto 0);
        ce0 : IN STD_LOGIC;
        we0 : IN STD_LOGIC;
        d0 : IN STD_LOGIC_VECTOR (0 downto 0);
        q0 : OUT STD_LOGIC_VECTOR (0 downto 0) );
    end component;



begin
    input_0_U : component dut_input_0
    generic map (
        DataWidth => 1,
        AddressRange => 256,
        AddressWidth => 8)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        address0 => input_0_address0,
        ce0 => input_0_ce0,
        we0 => input_0_we0,
        d0 => input_0_d0,
        q0 => input_0_q0);

    grp_bnn_xcel_fu_165 : component bnn_xcel
    port map (
        ap_clk => ap_clk,
        ap_rst => ap_rst,
        ap_start => grp_bnn_xcel_fu_165_ap_start,
        ap_done => grp_bnn_xcel_fu_165_ap_done,
        ap_idle => grp_bnn_xcel_fu_165_ap_idle,
        ap_ready => grp_bnn_xcel_fu_165_ap_ready,
        input_0_address0 => grp_bnn_xcel_fu_165_input_0_address0,
        input_0_ce0 => grp_bnn_xcel_fu_165_input_0_ce0,
        input_0_q0 => input_0_q0,
        ap_return => grp_bnn_xcel_fu_165_ap_return);





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


    grp_bnn_xcel_fu_165_ap_start_reg_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                grp_bnn_xcel_fu_165_ap_start_reg <= ap_const_logic_0;
            else
                if ((not(((icmp_ln26_fu_182_p2 = ap_const_lv1_0) and (strm_in_V_V_empty_n = ap_const_logic_0))) and (icmp_ln26_fu_182_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
                    grp_bnn_xcel_fu_165_ap_start_reg <= ap_const_logic_1;
                elsif ((grp_bnn_xcel_fu_165_ap_ready = ap_const_logic_1)) then 
                    grp_bnn_xcel_fu_165_ap_start_reg <= ap_const_logic_0;
                end if; 
            end if;
        end if;
    end process;


    Hi_assign_reg_154_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((icmp_ln28_fu_204_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state3))) then 
                Hi_assign_reg_154 <= j_fu_210_p2;
            elsif ((not(((icmp_ln26_fu_182_p2 = ap_const_lv1_0) and (strm_in_V_V_empty_n = ap_const_logic_0))) and (icmp_ln26_fu_182_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
                Hi_assign_reg_154 <= ap_const_lv6_0;
            end if; 
        end if;
    end process;

    bitcount_0_reg_121_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((icmp_ln28_fu_204_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state3))) then 
                bitcount_0_reg_121 <= bitcount_reg_257;
            elsif (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
                bitcount_0_reg_121 <= ap_const_lv9_0;
            end if; 
        end if;
    end process;

    bitcount_1_reg_144_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((icmp_ln28_fu_204_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state3))) then 
                bitcount_1_reg_144 <= add_ln30_fu_233_p2;
            elsif ((not(((icmp_ln26_fu_182_p2 = ap_const_lv1_0) and (strm_in_V_V_empty_n = ap_const_logic_0))) and (icmp_ln26_fu_182_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
                bitcount_1_reg_144 <= bitcount_0_reg_121;
            end if; 
        end if;
    end process;

    i_0_reg_133_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((icmp_ln28_fu_204_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state3))) then 
                i_0_reg_133 <= i_reg_247;
            elsif (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
                i_0_reg_133 <= ap_const_lv4_0;
            end if; 
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((not(((icmp_ln26_fu_182_p2 = ap_const_lv1_0) and (strm_in_V_V_empty_n = ap_const_logic_0))) and (icmp_ln26_fu_182_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state2))) then
                bitcount_reg_257 <= bitcount_fu_194_p2;
                tmp_V_2_reg_252 <= strm_in_V_V_dout;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((not(((icmp_ln26_fu_182_p2 = ap_const_lv1_0) and (strm_in_V_V_empty_n = ap_const_logic_0))) and (ap_const_logic_1 = ap_CS_fsm_state2))) then
                i_reg_247 <= i_fu_188_p2;
            end if;
        end if;
    end process;

    ap_NS_fsm_assign_proc : process (ap_start, ap_CS_fsm, ap_CS_fsm_state1, strm_in_V_V_empty_n, strm_out_V_V_full_n, ap_CS_fsm_state2, icmp_ln26_fu_182_p2, ap_CS_fsm_state4, ap_CS_fsm_state3, icmp_ln28_fu_204_p2, grp_bnn_xcel_fu_165_ap_done)
    begin
        case ap_CS_fsm is
            when ap_ST_fsm_state1 => 
                if (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1))) then
                    ap_NS_fsm <= ap_ST_fsm_state2;
                else
                    ap_NS_fsm <= ap_ST_fsm_state1;
                end if;
            when ap_ST_fsm_state2 => 
                if ((not(((icmp_ln26_fu_182_p2 = ap_const_lv1_0) and (strm_in_V_V_empty_n = ap_const_logic_0))) and (icmp_ln26_fu_182_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state2))) then
                    ap_NS_fsm <= ap_ST_fsm_state3;
                elsif ((not(((icmp_ln26_fu_182_p2 = ap_const_lv1_0) and (strm_in_V_V_empty_n = ap_const_logic_0))) and (icmp_ln26_fu_182_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2))) then
                    ap_NS_fsm <= ap_ST_fsm_state4;
                else
                    ap_NS_fsm <= ap_ST_fsm_state2;
                end if;
            when ap_ST_fsm_state3 => 
                if (((icmp_ln28_fu_204_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state3))) then
                    ap_NS_fsm <= ap_ST_fsm_state2;
                else
                    ap_NS_fsm <= ap_ST_fsm_state3;
                end if;
            when ap_ST_fsm_state4 => 
                if ((not(((grp_bnn_xcel_fu_165_ap_done = ap_const_logic_0) or (strm_out_V_V_full_n = ap_const_logic_0))) and (ap_const_logic_1 = ap_CS_fsm_state4))) then
                    ap_NS_fsm <= ap_ST_fsm_state1;
                else
                    ap_NS_fsm <= ap_ST_fsm_state4;
                end if;
            when others =>  
                ap_NS_fsm <= "XXXX";
        end case;
    end process;
    add_ln30_fu_233_p2 <= std_logic_vector(unsigned(ap_const_lv9_1) + unsigned(bitcount_1_reg_144));
    ap_CS_fsm_state1 <= ap_CS_fsm(0);
    ap_CS_fsm_state2 <= ap_CS_fsm(1);
    ap_CS_fsm_state3 <= ap_CS_fsm(2);
    ap_CS_fsm_state4 <= ap_CS_fsm(3);

    ap_block_state2_assign_proc : process(strm_in_V_V_empty_n, icmp_ln26_fu_182_p2)
    begin
                ap_block_state2 <= ((icmp_ln26_fu_182_p2 = ap_const_lv1_0) and (strm_in_V_V_empty_n = ap_const_logic_0));
    end process;


    ap_block_state2_ignore_call0_assign_proc : process(strm_in_V_V_empty_n, icmp_ln26_fu_182_p2)
    begin
                ap_block_state2_ignore_call0 <= ((icmp_ln26_fu_182_p2 = ap_const_lv1_0) and (strm_in_V_V_empty_n = ap_const_logic_0));
    end process;


    ap_done_assign_proc : process(strm_out_V_V_full_n, ap_CS_fsm_state4, grp_bnn_xcel_fu_165_ap_done)
    begin
        if ((not(((grp_bnn_xcel_fu_165_ap_done = ap_const_logic_0) or (strm_out_V_V_full_n = ap_const_logic_0))) and (ap_const_logic_1 = ap_CS_fsm_state4))) then 
            ap_done <= ap_const_logic_1;
        else 
            ap_done <= ap_const_logic_0;
        end if; 
    end process;


    ap_idle_assign_proc : process(ap_start, ap_CS_fsm_state1)
    begin
        if (((ap_start = ap_const_logic_0) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            ap_idle <= ap_const_logic_1;
        else 
            ap_idle <= ap_const_logic_0;
        end if; 
    end process;


    ap_ready_assign_proc : process(strm_out_V_V_full_n, ap_CS_fsm_state4, grp_bnn_xcel_fu_165_ap_done)
    begin
        if ((not(((grp_bnn_xcel_fu_165_ap_done = ap_const_logic_0) or (strm_out_V_V_full_n = ap_const_logic_0))) and (ap_const_logic_1 = ap_CS_fsm_state4))) then 
            ap_ready <= ap_const_logic_1;
        else 
            ap_ready <= ap_const_logic_0;
        end if; 
    end process;

    bitcount_fu_194_p2 <= std_logic_vector(unsigned(bitcount_0_reg_121) + unsigned(ap_const_lv9_20));
    grp_bnn_xcel_fu_165_ap_start <= grp_bnn_xcel_fu_165_ap_start_reg;
    i_fu_188_p2 <= std_logic_vector(unsigned(i_0_reg_133) + unsigned(ap_const_lv4_1));
    icmp_ln26_fu_182_p2 <= "1" when (i_0_reg_133 = ap_const_lv4_8) else "0";
    icmp_ln28_fu_204_p2 <= "1" when (Hi_assign_reg_154 = ap_const_lv6_20) else "0";

    input_0_address0_assign_proc : process(ap_CS_fsm_state4, ap_CS_fsm_state3, grp_bnn_xcel_fu_165_input_0_address0, zext_ln29_fu_228_p1)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state3)) then 
            input_0_address0 <= zext_ln29_fu_228_p1(8 - 1 downto 0);
        elsif ((ap_const_logic_1 = ap_CS_fsm_state4)) then 
            input_0_address0 <= grp_bnn_xcel_fu_165_input_0_address0;
        else 
            input_0_address0 <= "XXXXXXXX";
        end if; 
    end process;


    input_0_ce0_assign_proc : process(ap_CS_fsm_state4, ap_CS_fsm_state3, grp_bnn_xcel_fu_165_input_0_ce0)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state3)) then 
            input_0_ce0 <= ap_const_logic_1;
        elsif ((ap_const_logic_1 = ap_CS_fsm_state4)) then 
            input_0_ce0 <= grp_bnn_xcel_fu_165_input_0_ce0;
        else 
            input_0_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    input_0_d0 <= tmp_V_2_reg_252(to_integer(unsigned(zext_ln28_fu_200_p1)) downto to_integer(unsigned(zext_ln28_fu_200_p1))) when (to_integer(unsigned(zext_ln28_fu_200_p1))>= 0 and to_integer(unsigned(zext_ln28_fu_200_p1))<=31) else "-";

    input_0_we0_assign_proc : process(ap_CS_fsm_state3, icmp_ln28_fu_204_p2)
    begin
        if (((icmp_ln28_fu_204_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state3))) then 
            input_0_we0 <= ap_const_logic_1;
        else 
            input_0_we0 <= ap_const_logic_0;
        end if; 
    end process;

    j_fu_210_p2 <= std_logic_vector(unsigned(Hi_assign_reg_154) + unsigned(ap_const_lv6_1));

    strm_in_V_V_blk_n_assign_proc : process(strm_in_V_V_empty_n, ap_CS_fsm_state2, icmp_ln26_fu_182_p2)
    begin
        if (((icmp_ln26_fu_182_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
            strm_in_V_V_blk_n <= strm_in_V_V_empty_n;
        else 
            strm_in_V_V_blk_n <= ap_const_logic_1;
        end if; 
    end process;


    strm_in_V_V_read_assign_proc : process(strm_in_V_V_empty_n, ap_CS_fsm_state2, icmp_ln26_fu_182_p2)
    begin
        if ((not(((icmp_ln26_fu_182_p2 = ap_const_lv1_0) and (strm_in_V_V_empty_n = ap_const_logic_0))) and (icmp_ln26_fu_182_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
            strm_in_V_V_read <= ap_const_logic_1;
        else 
            strm_in_V_V_read <= ap_const_logic_0;
        end if; 
    end process;


    strm_out_V_V_blk_n_assign_proc : process(strm_out_V_V_full_n, ap_CS_fsm_state4)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state4)) then 
            strm_out_V_V_blk_n <= strm_out_V_V_full_n;
        else 
            strm_out_V_V_blk_n <= ap_const_logic_1;
        end if; 
    end process;

    strm_out_V_V_din <= std_logic_vector(IEEE.numeric_std.resize(unsigned(grp_bnn_xcel_fu_165_ap_return),32));

    strm_out_V_V_write_assign_proc : process(strm_out_V_V_full_n, ap_CS_fsm_state4, grp_bnn_xcel_fu_165_ap_done)
    begin
        if ((not(((grp_bnn_xcel_fu_165_ap_done = ap_const_logic_0) or (strm_out_V_V_full_n = ap_const_logic_0))) and (ap_const_logic_1 = ap_CS_fsm_state4))) then 
            strm_out_V_V_write <= ap_const_logic_1;
        else 
            strm_out_V_V_write <= ap_const_logic_0;
        end if; 
    end process;

    trunc_ln29_fu_224_p1 <= bitcount_1_reg_144(8 - 1 downto 0);
    zext_ln28_fu_200_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(Hi_assign_reg_154),32));
    zext_ln29_fu_228_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(trunc_ln29_fu_224_p1),64));
end behav;