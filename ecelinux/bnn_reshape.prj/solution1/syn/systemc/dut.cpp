// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2.1
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "dut.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic dut::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic dut::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<4> dut::ap_ST_fsm_state1 = "1";
const sc_lv<4> dut::ap_ST_fsm_state2 = "10";
const sc_lv<4> dut::ap_ST_fsm_state3 = "100";
const sc_lv<4> dut::ap_ST_fsm_state4 = "1000";
const sc_lv<32> dut::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_lv<32> dut::ap_const_lv32_1 = "1";
const sc_lv<1> dut::ap_const_lv1_0 = "0";
const sc_lv<32> dut::ap_const_lv32_3 = "11";
const sc_lv<32> dut::ap_const_lv32_2 = "10";
const sc_lv<9> dut::ap_const_lv9_0 = "000000000";
const sc_lv<1> dut::ap_const_lv1_1 = "1";
const sc_lv<4> dut::ap_const_lv4_0 = "0000";
const sc_lv<6> dut::ap_const_lv6_0 = "000000";
const sc_lv<4> dut::ap_const_lv4_8 = "1000";
const sc_lv<4> dut::ap_const_lv4_1 = "1";
const sc_lv<9> dut::ap_const_lv9_20 = "100000";
const sc_lv<6> dut::ap_const_lv6_20 = "100000";
const sc_lv<6> dut::ap_const_lv6_1 = "1";
const sc_lv<9> dut::ap_const_lv9_1 = "1";
const bool dut::ap_const_boolean_1 = true;

dut::dut(sc_module_name name) : sc_module(name), mVcdFile(0) {
    input_0_U = new dut_input_0("input_0_U");
    input_0_U->clk(ap_clk);
    input_0_U->reset(ap_rst);
    input_0_U->address0(input_0_address0);
    input_0_U->ce0(input_0_ce0);
    input_0_U->we0(input_0_we0);
    input_0_U->d0(input_0_d0);
    input_0_U->q0(input_0_q0);
    grp_bnn_xcel_fu_165 = new bnn_xcel("grp_bnn_xcel_fu_165");
    grp_bnn_xcel_fu_165->ap_clk(ap_clk);
    grp_bnn_xcel_fu_165->ap_rst(ap_rst);
    grp_bnn_xcel_fu_165->ap_start(grp_bnn_xcel_fu_165_ap_start);
    grp_bnn_xcel_fu_165->ap_done(grp_bnn_xcel_fu_165_ap_done);
    grp_bnn_xcel_fu_165->ap_idle(grp_bnn_xcel_fu_165_ap_idle);
    grp_bnn_xcel_fu_165->ap_ready(grp_bnn_xcel_fu_165_ap_ready);
    grp_bnn_xcel_fu_165->input_0_address0(grp_bnn_xcel_fu_165_input_0_address0);
    grp_bnn_xcel_fu_165->input_0_ce0(grp_bnn_xcel_fu_165_input_0_ce0);
    grp_bnn_xcel_fu_165->input_0_q0(input_0_q0);
    grp_bnn_xcel_fu_165->ap_return(grp_bnn_xcel_fu_165_ap_return);

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_add_ln30_fu_233_p2);
    sensitive << ( bitcount_1_reg_144 );

    SC_METHOD(thread_ap_CS_fsm_state1);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state2);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state3);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state4);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_block_state2);
    sensitive << ( strm_in_V_V_empty_n );
    sensitive << ( icmp_ln26_fu_182_p2 );

    SC_METHOD(thread_ap_block_state2_ignore_call0);
    sensitive << ( strm_in_V_V_empty_n );
    sensitive << ( icmp_ln26_fu_182_p2 );

    SC_METHOD(thread_ap_done);
    sensitive << ( strm_out_V_V_full_n );
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( grp_bnn_xcel_fu_165_ap_done );

    SC_METHOD(thread_ap_idle);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( strm_out_V_V_full_n );
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( grp_bnn_xcel_fu_165_ap_done );

    SC_METHOD(thread_bitcount_fu_194_p2);
    sensitive << ( bitcount_0_reg_121 );

    SC_METHOD(thread_grp_bnn_xcel_fu_165_ap_start);
    sensitive << ( grp_bnn_xcel_fu_165_ap_start_reg );

    SC_METHOD(thread_i_fu_188_p2);
    sensitive << ( i_0_reg_133 );

    SC_METHOD(thread_icmp_ln26_fu_182_p2);
    sensitive << ( strm_in_V_V_empty_n );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( icmp_ln26_fu_182_p2 );
    sensitive << ( i_0_reg_133 );

    SC_METHOD(thread_icmp_ln28_fu_204_p2);
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( Hi_assign_reg_154 );

    SC_METHOD(thread_input_0_address0);
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( grp_bnn_xcel_fu_165_input_0_address0 );
    sensitive << ( zext_ln29_fu_228_p1 );

    SC_METHOD(thread_input_0_ce0);
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( grp_bnn_xcel_fu_165_input_0_ce0 );

    SC_METHOD(thread_input_0_d0);
    sensitive << ( tmp_V_2_reg_252 );
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( zext_ln28_fu_200_p1 );

    SC_METHOD(thread_input_0_we0);
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( icmp_ln28_fu_204_p2 );

    SC_METHOD(thread_j_fu_210_p2);
    sensitive << ( Hi_assign_reg_154 );

    SC_METHOD(thread_strm_in_V_V_blk_n);
    sensitive << ( strm_in_V_V_empty_n );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( icmp_ln26_fu_182_p2 );

    SC_METHOD(thread_strm_in_V_V_read);
    sensitive << ( strm_in_V_V_empty_n );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( icmp_ln26_fu_182_p2 );

    SC_METHOD(thread_strm_out_V_V_blk_n);
    sensitive << ( strm_out_V_V_full_n );
    sensitive << ( ap_CS_fsm_state4 );

    SC_METHOD(thread_strm_out_V_V_din);
    sensitive << ( strm_out_V_V_full_n );
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( grp_bnn_xcel_fu_165_ap_done );
    sensitive << ( grp_bnn_xcel_fu_165_ap_return );

    SC_METHOD(thread_strm_out_V_V_write);
    sensitive << ( strm_out_V_V_full_n );
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( grp_bnn_xcel_fu_165_ap_done );

    SC_METHOD(thread_trunc_ln29_fu_224_p1);
    sensitive << ( bitcount_1_reg_144 );

    SC_METHOD(thread_zext_ln28_fu_200_p1);
    sensitive << ( Hi_assign_reg_154 );

    SC_METHOD(thread_zext_ln29_fu_228_p1);
    sensitive << ( trunc_ln29_fu_224_p1 );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( strm_in_V_V_empty_n );
    sensitive << ( strm_out_V_V_full_n );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( icmp_ln26_fu_182_p2 );
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( icmp_ln28_fu_204_p2 );
    sensitive << ( grp_bnn_xcel_fu_165_ap_done );

    SC_THREAD(thread_hdltv_gen);
    sensitive << ( ap_clk.pos() );

    ap_CS_fsm = "0001";
    grp_bnn_xcel_fu_165_ap_start_reg = SC_LOGIC_0;
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "dut_sc_trace_" << apTFileNum ++;
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
    sc_trace(mVcdFile, strm_in_V_V_dout, "(port)strm_in_V_V_dout");
    sc_trace(mVcdFile, strm_in_V_V_empty_n, "(port)strm_in_V_V_empty_n");
    sc_trace(mVcdFile, strm_in_V_V_read, "(port)strm_in_V_V_read");
    sc_trace(mVcdFile, strm_out_V_V_din, "(port)strm_out_V_V_din");
    sc_trace(mVcdFile, strm_out_V_V_full_n, "(port)strm_out_V_V_full_n");
    sc_trace(mVcdFile, strm_out_V_V_write, "(port)strm_out_V_V_write");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_CS_fsm_state1, "ap_CS_fsm_state1");
    sc_trace(mVcdFile, strm_in_V_V_blk_n, "strm_in_V_V_blk_n");
    sc_trace(mVcdFile, ap_CS_fsm_state2, "ap_CS_fsm_state2");
    sc_trace(mVcdFile, icmp_ln26_fu_182_p2, "icmp_ln26_fu_182_p2");
    sc_trace(mVcdFile, strm_out_V_V_blk_n, "strm_out_V_V_blk_n");
    sc_trace(mVcdFile, ap_CS_fsm_state4, "ap_CS_fsm_state4");
    sc_trace(mVcdFile, i_fu_188_p2, "i_fu_188_p2");
    sc_trace(mVcdFile, i_reg_247, "i_reg_247");
    sc_trace(mVcdFile, ap_block_state2, "ap_block_state2");
    sc_trace(mVcdFile, tmp_V_2_reg_252, "tmp_V_2_reg_252");
    sc_trace(mVcdFile, bitcount_fu_194_p2, "bitcount_fu_194_p2");
    sc_trace(mVcdFile, bitcount_reg_257, "bitcount_reg_257");
    sc_trace(mVcdFile, j_fu_210_p2, "j_fu_210_p2");
    sc_trace(mVcdFile, ap_CS_fsm_state3, "ap_CS_fsm_state3");
    sc_trace(mVcdFile, add_ln30_fu_233_p2, "add_ln30_fu_233_p2");
    sc_trace(mVcdFile, icmp_ln28_fu_204_p2, "icmp_ln28_fu_204_p2");
    sc_trace(mVcdFile, input_0_address0, "input_0_address0");
    sc_trace(mVcdFile, input_0_ce0, "input_0_ce0");
    sc_trace(mVcdFile, input_0_we0, "input_0_we0");
    sc_trace(mVcdFile, input_0_d0, "input_0_d0");
    sc_trace(mVcdFile, input_0_q0, "input_0_q0");
    sc_trace(mVcdFile, grp_bnn_xcel_fu_165_ap_start, "grp_bnn_xcel_fu_165_ap_start");
    sc_trace(mVcdFile, grp_bnn_xcel_fu_165_ap_done, "grp_bnn_xcel_fu_165_ap_done");
    sc_trace(mVcdFile, grp_bnn_xcel_fu_165_ap_idle, "grp_bnn_xcel_fu_165_ap_idle");
    sc_trace(mVcdFile, grp_bnn_xcel_fu_165_ap_ready, "grp_bnn_xcel_fu_165_ap_ready");
    sc_trace(mVcdFile, grp_bnn_xcel_fu_165_input_0_address0, "grp_bnn_xcel_fu_165_input_0_address0");
    sc_trace(mVcdFile, grp_bnn_xcel_fu_165_input_0_ce0, "grp_bnn_xcel_fu_165_input_0_ce0");
    sc_trace(mVcdFile, grp_bnn_xcel_fu_165_ap_return, "grp_bnn_xcel_fu_165_ap_return");
    sc_trace(mVcdFile, bitcount_0_reg_121, "bitcount_0_reg_121");
    sc_trace(mVcdFile, i_0_reg_133, "i_0_reg_133");
    sc_trace(mVcdFile, bitcount_1_reg_144, "bitcount_1_reg_144");
    sc_trace(mVcdFile, Hi_assign_reg_154, "Hi_assign_reg_154");
    sc_trace(mVcdFile, grp_bnn_xcel_fu_165_ap_start_reg, "grp_bnn_xcel_fu_165_ap_start_reg");
    sc_trace(mVcdFile, ap_block_state2_ignore_call0, "ap_block_state2_ignore_call0");
    sc_trace(mVcdFile, zext_ln29_fu_228_p1, "zext_ln29_fu_228_p1");
    sc_trace(mVcdFile, zext_ln28_fu_200_p1, "zext_ln28_fu_200_p1");
    sc_trace(mVcdFile, trunc_ln29_fu_224_p1, "trunc_ln29_fu_224_p1");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
#endif

    }
    mHdltvinHandle.open("dut.hdltvin.dat");
    mHdltvoutHandle.open("dut.hdltvout.dat");
}

dut::~dut() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

    mHdltvinHandle << "] " << endl;
    mHdltvoutHandle << "] " << endl;
    mHdltvinHandle.close();
    mHdltvoutHandle.close();
    delete input_0_U;
    delete grp_bnn_xcel_fu_165;
}

void dut::thread_ap_clk_no_reset_() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln28_fu_204_p2.read()))) {
        Hi_assign_reg_154 = j_fu_210_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                esl_seteq<1,1,1>(icmp_ln26_fu_182_p2.read(), ap_const_lv1_0) && 
                !(esl_seteq<1,1,1>(icmp_ln26_fu_182_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, strm_in_V_V_empty_n.read())))) {
        Hi_assign_reg_154 = ap_const_lv6_0;
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(icmp_ln28_fu_204_p2.read(), ap_const_lv1_1))) {
        bitcount_0_reg_121 = bitcount_reg_257.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        bitcount_0_reg_121 = ap_const_lv9_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln28_fu_204_p2.read()))) {
        bitcount_1_reg_144 = add_ln30_fu_233_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                esl_seteq<1,1,1>(icmp_ln26_fu_182_p2.read(), ap_const_lv1_0) && 
                !(esl_seteq<1,1,1>(icmp_ln26_fu_182_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, strm_in_V_V_empty_n.read())))) {
        bitcount_1_reg_144 = bitcount_0_reg_121.read();
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_bnn_xcel_fu_165_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
             !(esl_seteq<1,1,1>(icmp_ln26_fu_182_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, strm_in_V_V_empty_n.read())) && 
             esl_seteq<1,1,1>(icmp_ln26_fu_182_p2.read(), ap_const_lv1_1))) {
            grp_bnn_xcel_fu_165_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_bnn_xcel_fu_165_ap_ready.read())) {
            grp_bnn_xcel_fu_165_ap_start_reg = ap_const_logic_0;
        }
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(icmp_ln28_fu_204_p2.read(), ap_const_lv1_1))) {
        i_0_reg_133 = i_reg_247.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        i_0_reg_133 = ap_const_lv4_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(icmp_ln26_fu_182_p2.read(), ap_const_lv1_0) && !(esl_seteq<1,1,1>(icmp_ln26_fu_182_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, strm_in_V_V_empty_n.read())))) {
        bitcount_reg_257 = bitcount_fu_194_p2.read();
        tmp_V_2_reg_252 = strm_in_V_V_dout.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && !(esl_seteq<1,1,1>(icmp_ln26_fu_182_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, strm_in_V_V_empty_n.read())))) {
        i_reg_247 = i_fu_188_p2.read();
    }
}

void dut::thread_add_ln30_fu_233_p2() {
    add_ln30_fu_233_p2 = (!ap_const_lv9_1.is_01() || !bitcount_1_reg_144.read().is_01())? sc_lv<9>(): (sc_biguint<9>(ap_const_lv9_1) + sc_biguint<9>(bitcount_1_reg_144.read()));
}

void dut::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void dut::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void dut::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read()[2];
}

void dut::thread_ap_CS_fsm_state4() {
    ap_CS_fsm_state4 = ap_CS_fsm.read()[3];
}

void dut::thread_ap_block_state2() {
    ap_block_state2 = (esl_seteq<1,1,1>(icmp_ln26_fu_182_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, strm_in_V_V_empty_n.read()));
}

void dut::thread_ap_block_state2_ignore_call0() {
    ap_block_state2_ignore_call0 = (esl_seteq<1,1,1>(icmp_ln26_fu_182_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, strm_in_V_V_empty_n.read()));
}

void dut::thread_ap_done() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, strm_out_V_V_full_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, grp_bnn_xcel_fu_165_ap_done.read())))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void dut::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void dut::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, strm_out_V_V_full_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, grp_bnn_xcel_fu_165_ap_done.read())))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void dut::thread_bitcount_fu_194_p2() {
    bitcount_fu_194_p2 = (!bitcount_0_reg_121.read().is_01() || !ap_const_lv9_20.is_01())? sc_lv<9>(): (sc_biguint<9>(bitcount_0_reg_121.read()) + sc_biguint<9>(ap_const_lv9_20));
}

void dut::thread_grp_bnn_xcel_fu_165_ap_start() {
    grp_bnn_xcel_fu_165_ap_start = grp_bnn_xcel_fu_165_ap_start_reg.read();
}

void dut::thread_i_fu_188_p2() {
    i_fu_188_p2 = (!i_0_reg_133.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(i_0_reg_133.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void dut::thread_icmp_ln26_fu_182_p2() {
    icmp_ln26_fu_182_p2 = (!i_0_reg_133.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(i_0_reg_133.read() == ap_const_lv4_8);
}

void dut::thread_icmp_ln28_fu_204_p2() {
    icmp_ln28_fu_204_p2 = (!Hi_assign_reg_154.read().is_01() || !ap_const_lv6_20.is_01())? sc_lv<1>(): sc_lv<1>(Hi_assign_reg_154.read() == ap_const_lv6_20);
}

void dut::thread_input_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        input_0_address0 =  (sc_lv<8>) (zext_ln29_fu_228_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        input_0_address0 = grp_bnn_xcel_fu_165_input_0_address0.read();
    } else {
        input_0_address0 = "XXXXXXXX";
    }
}

void dut::thread_input_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        input_0_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        input_0_ce0 = grp_bnn_xcel_fu_165_input_0_ce0.read();
    } else {
        input_0_ce0 = ap_const_logic_0;
    }
}

void dut::thread_input_0_d0() {
    input_0_d0 = (!zext_ln28_fu_200_p1.read().is_01() || sc_biguint<32>(zext_ln28_fu_200_p1.read()).to_uint() >= 32)? sc_lv<1>(): tmp_V_2_reg_252.read().range(sc_biguint<32>(zext_ln28_fu_200_p1.read()).to_uint(), sc_biguint<32>(zext_ln28_fu_200_p1.read()).to_uint());
}

void dut::thread_input_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln28_fu_204_p2.read()))) {
        input_0_we0 = ap_const_logic_1;
    } else {
        input_0_we0 = ap_const_logic_0;
    }
}

void dut::thread_j_fu_210_p2() {
    j_fu_210_p2 = (!Hi_assign_reg_154.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(Hi_assign_reg_154.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void dut::thread_strm_in_V_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(icmp_ln26_fu_182_p2.read(), ap_const_lv1_0))) {
        strm_in_V_V_blk_n = strm_in_V_V_empty_n.read();
    } else {
        strm_in_V_V_blk_n = ap_const_logic_1;
    }
}

void dut::thread_strm_in_V_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(icmp_ln26_fu_182_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(icmp_ln26_fu_182_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, strm_in_V_V_empty_n.read())))) {
        strm_in_V_V_read = ap_const_logic_1;
    } else {
        strm_in_V_V_read = ap_const_logic_0;
    }
}

void dut::thread_strm_out_V_V_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        strm_out_V_V_blk_n = strm_out_V_V_full_n.read();
    } else {
        strm_out_V_V_blk_n = ap_const_logic_1;
    }
}

void dut::thread_strm_out_V_V_din() {
    strm_out_V_V_din = esl_zext<32,4>(grp_bnn_xcel_fu_165_ap_return.read());
}

void dut::thread_strm_out_V_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, strm_out_V_V_full_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, grp_bnn_xcel_fu_165_ap_done.read())))) {
        strm_out_V_V_write = ap_const_logic_1;
    } else {
        strm_out_V_V_write = ap_const_logic_0;
    }
}

void dut::thread_trunc_ln29_fu_224_p1() {
    trunc_ln29_fu_224_p1 = bitcount_1_reg_144.read().range(8-1, 0);
}

void dut::thread_zext_ln28_fu_200_p1() {
    zext_ln28_fu_200_p1 = esl_zext<32,6>(Hi_assign_reg_154.read());
}

void dut::thread_zext_ln29_fu_228_p1() {
    zext_ln29_fu_228_p1 = esl_zext<64,8>(trunc_ln29_fu_224_p1.read());
}

void dut::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(icmp_ln26_fu_182_p2.read(), ap_const_lv1_0) && !(esl_seteq<1,1,1>(icmp_ln26_fu_182_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, strm_in_V_V_empty_n.read())))) {
                ap_NS_fsm = ap_ST_fsm_state3;
            } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && !(esl_seteq<1,1,1>(icmp_ln26_fu_182_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, strm_in_V_V_empty_n.read())) && esl_seteq<1,1,1>(icmp_ln26_fu_182_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state4;
            } else {
                ap_NS_fsm = ap_ST_fsm_state2;
            }
            break;
        case 4 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && esl_seteq<1,1,1>(icmp_ln28_fu_204_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state3;
            }
            break;
        case 8 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && !(esl_seteq<1,1,1>(ap_const_logic_0, strm_out_V_V_full_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, grp_bnn_xcel_fu_165_ap_done.read())))) {
                ap_NS_fsm = ap_ST_fsm_state1;
            } else {
                ap_NS_fsm = ap_ST_fsm_state4;
            }
            break;
        default : 
            ap_NS_fsm =  (sc_lv<4>) ("XXXX");
            break;
    }
}

void dut::thread_hdltv_gen() {
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
        mHdltvinHandle << " , " <<  " \"strm_in_V_V_dout\" :  \"" << strm_in_V_V_dout.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"strm_in_V_V_empty_n\" :  \"" << strm_in_V_V_empty_n.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"strm_in_V_V_read\" :  \"" << strm_in_V_V_read.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"strm_out_V_V_din\" :  \"" << strm_out_V_V_din.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"strm_out_V_V_full_n\" :  \"" << strm_out_V_V_full_n.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"strm_out_V_V_write\" :  \"" << strm_out_V_V_write.read() << "\" ";
        mHdltvinHandle << "}" << std::endl;
        mHdltvoutHandle << "}" << std::endl;
        ap_cycleNo++;
    }
}

}

