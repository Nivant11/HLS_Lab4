// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2.1
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _pad_16_8_s_HH_
#define _pad_16_8_s_HH_

#include "systemc.h"
#include "AESL_pkg.h"


namespace ap_rtl {

struct pad_16_8_s : public sc_module {
    // Port declarations 14
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<6> > input_r_address0;
    sc_out< sc_logic > input_r_ce0;
    sc_in< sc_lv<16> > input_r_q0;
    sc_out< sc_lv<7> > output_r_address0;
    sc_out< sc_logic > output_r_ce0;
    sc_out< sc_logic > output_r_we0;
    sc_out< sc_lv<16> > output_r_d0;
    sc_in< sc_lv<16> > output_r_q0;


    // Module declarations
    pad_16_8_s(sc_module_name name);
    SC_HAS_PROCESS(pad_16_8_s);

    ~pad_16_8_s();

    sc_trace_file* mVcdFile;

    sc_signal< sc_lv<5> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<5> > m_fu_113_p2;
    sc_signal< sc_lv<5> > m_reg_237;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<6> > zext_ln27_fu_119_p1;
    sc_signal< sc_lv<6> > zext_ln27_reg_242;
    sc_signal< sc_lv<1> > icmp_ln22_fu_107_p2;
    sc_signal< sc_lv<4> > x_fu_129_p2;
    sc_signal< sc_lv<4> > x_reg_251;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<8> > zext_ln27_1_fu_135_p1;
    sc_signal< sc_lv<8> > zext_ln27_1_reg_256;
    sc_signal< sc_lv<1> > icmp_ln24_fu_123_p2;
    sc_signal< sc_lv<8> > zext_ln26_fu_139_p1;
    sc_signal< sc_lv<8> > zext_ln26_reg_261;
    sc_signal< sc_lv<4> > y_fu_149_p2;
    sc_signal< sc_lv<4> > y_reg_269;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<1> > icmp_ln26_fu_143_p2;
    sc_signal< sc_lv<7> > output_addr_reg_279;
    sc_signal< sc_lv<5> > m_0_reg_74;
    sc_signal< sc_lv<4> > x_0_reg_85;
    sc_signal< sc_lv<4> > y_0_reg_96;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_lv<64> > zext_ln27_3_fu_172_p1;
    sc_signal< sc_lv<64> > zext_ln27_6_fu_212_p1;
    sc_signal< sc_lv<7> > tmp_4_fu_155_p3;
    sc_signal< sc_lv<8> > zext_ln27_2_fu_163_p1;
    sc_signal< sc_lv<8> > add_ln27_fu_167_p2;
    sc_signal< sc_lv<7> > tmp_5_fu_177_p3;
    sc_signal< sc_lv<5> > tmp_6_fu_189_p3;
    sc_signal< sc_lv<8> > zext_ln27_5_fu_197_p1;
    sc_signal< sc_lv<8> > zext_ln27_4_fu_185_p1;
    sc_signal< sc_lv<8> > add_ln27_2_fu_201_p2;
    sc_signal< sc_lv<8> > add_ln27_3_fu_207_p2;
    sc_signal< sc_lv<1> > tmp_2_fu_217_p3;
    sc_signal< sc_lv<5> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<5> ap_ST_fsm_state1;
    static const sc_lv<5> ap_ST_fsm_state2;
    static const sc_lv<5> ap_ST_fsm_state3;
    static const sc_lv<5> ap_ST_fsm_state4;
    static const sc_lv<5> ap_ST_fsm_state5;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<5> ap_const_lv5_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<5> ap_const_lv5_10;
    static const sc_lv<5> ap_const_lv5_1;
    static const sc_lv<4> ap_const_lv4_8;
    static const sc_lv<4> ap_const_lv4_1;
    static const sc_lv<3> ap_const_lv3_0;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_add_ln27_2_fu_201_p2();
    void thread_add_ln27_3_fu_207_p2();
    void thread_add_ln27_fu_167_p2();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state5();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_icmp_ln22_fu_107_p2();
    void thread_icmp_ln24_fu_123_p2();
    void thread_icmp_ln26_fu_143_p2();
    void thread_input_r_address0();
    void thread_input_r_ce0();
    void thread_m_fu_113_p2();
    void thread_output_r_address0();
    void thread_output_r_ce0();
    void thread_output_r_d0();
    void thread_output_r_we0();
    void thread_tmp_2_fu_217_p3();
    void thread_tmp_4_fu_155_p3();
    void thread_tmp_5_fu_177_p3();
    void thread_tmp_6_fu_189_p3();
    void thread_x_fu_129_p2();
    void thread_y_fu_149_p2();
    void thread_zext_ln26_fu_139_p1();
    void thread_zext_ln27_1_fu_135_p1();
    void thread_zext_ln27_2_fu_163_p1();
    void thread_zext_ln27_3_fu_172_p1();
    void thread_zext_ln27_4_fu_185_p1();
    void thread_zext_ln27_5_fu_197_p1();
    void thread_zext_ln27_6_fu_212_p1();
    void thread_zext_ln27_fu_119_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
