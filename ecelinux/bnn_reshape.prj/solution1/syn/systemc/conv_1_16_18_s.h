// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2.1
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _conv_1_16_18_s_HH_
#define _conv_1_16_18_s_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "conv_1_16_18_s_w_conv1_0.h"
#include "conv_1_16_18_s_w_conv1_1.h"
#include "conv_1_16_18_s_w_conv1_2.h"

namespace ap_rtl {

struct conv_1_16_18_s : public sc_module {
    // Port declarations 17
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<9> > input_r_address0;
    sc_out< sc_logic > input_r_ce0;
    sc_in< sc_lv<1> > input_r_q0;
    sc_out< sc_lv<9> > input_r_address1;
    sc_out< sc_logic > input_r_ce1;
    sc_in< sc_lv<1> > input_r_q1;
    sc_out< sc_lv<8> > output_r_address0;
    sc_out< sc_logic > output_r_ce0;
    sc_out< sc_logic > output_r_we0;
    sc_out< sc_lv<16> > output_r_d0;
    sc_in< sc_lv<16> > output_r_q0;


    // Module declarations
    conv_1_16_18_s(sc_module_name name);
    SC_HAS_PROCESS(conv_1_16_18_s);

    ~conv_1_16_18_s();

    sc_trace_file* mVcdFile;

    conv_1_16_18_s_w_conv1_0* w_conv1_0_U;
    conv_1_16_18_s_w_conv1_1* w_conv1_1_U;
    conv_1_16_18_s_w_conv1_2* w_conv1_2_U;
    sc_signal< sc_lv<6> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<6> > w_conv1_0_address0;
    sc_signal< sc_logic > w_conv1_0_ce0;
    sc_signal< sc_lv<1> > w_conv1_0_q0;
    sc_signal< sc_lv<6> > w_conv1_1_address0;
    sc_signal< sc_logic > w_conv1_1_ce0;
    sc_signal< sc_lv<1> > w_conv1_1_q0;
    sc_signal< sc_lv<6> > w_conv1_2_address0;
    sc_signal< sc_logic > w_conv1_2_ce0;
    sc_signal< sc_lv<1> > w_conv1_2_q0;
    sc_signal< sc_lv<4> > p_014_0_reg_232;
    sc_signal< sc_lv<2> > c_0_reg_244;
    sc_signal< sc_lv<1> > icmp_ln66_fu_255_p2;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<13> > add_ln66_fu_261_p2;
    sc_signal< sc_lv<13> > add_ln66_reg_773;
    sc_signal< sc_lv<1> > icmp_ln67_fu_273_p2;
    sc_signal< sc_lv<1> > icmp_ln67_reg_778;
    sc_signal< sc_lv<5> > select_ln76_2_fu_287_p3;
    sc_signal< sc_lv<5> > select_ln76_2_reg_783;
    sc_signal< sc_lv<7> > sub_ln76_fu_307_p2;
    sc_signal< sc_lv<7> > sub_ln76_reg_788;
    sc_signal< sc_lv<6> > zext_ln76_60_fu_313_p1;
    sc_signal< sc_lv<6> > zext_ln76_60_reg_793;
    sc_signal< sc_lv<7> > p_cast7_mid2_v_fu_321_p3;
    sc_signal< sc_lv<7> > p_cast7_mid2_v_reg_798;
    sc_signal< sc_lv<7> > or_ln76_fu_329_p2;
    sc_signal< sc_lv<7> > or_ln76_reg_804;
    sc_signal< sc_lv<5> > select_ln81_2_fu_373_p3;
    sc_signal< sc_lv<5> > select_ln81_2_reg_810;
    sc_signal< sc_lv<10> > add_ln76_10_fu_409_p2;
    sc_signal< sc_lv<10> > add_ln76_10_reg_816;
    sc_signal< sc_lv<8> > output_addr_reg_821;
    sc_signal< sc_lv<5> > y_fu_426_p2;
    sc_signal< sc_lv<5> > y_reg_826;
    sc_signal< sc_lv<10> > add_ln76_12_fu_456_p2;
    sc_signal< sc_lv<10> > add_ln76_12_reg_831;
    sc_signal< sc_lv<10> > add_ln76_13_fu_492_p2;
    sc_signal< sc_lv<10> > add_ln76_13_reg_836;
    sc_signal< sc_lv<1> > icmp_ln70_fu_498_p2;
    sc_signal< sc_lv<1> > icmp_ln70_reg_841;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage0;
    sc_signal< bool > ap_block_state3_pp0_stage0_iter0;
    sc_signal< bool > ap_block_state5_pp0_stage0_iter1;
    sc_signal< bool > ap_block_pp0_stage0_11001;
    sc_signal< sc_lv<2> > c_fu_504_p2;
    sc_signal< sc_lv<2> > c_reg_845;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0;
    sc_signal< sc_lv<10> > add_ln76_16_fu_543_p2;
    sc_signal< sc_lv<10> > add_ln76_16_reg_860;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage1;
    sc_signal< bool > ap_block_state4_pp0_stage1_iter0;
    sc_signal< bool > ap_block_pp0_stage1_11001;
    sc_signal< sc_lv<1> > xor_ln76_96_fu_574_p2;
    sc_signal< sc_lv<1> > xor_ln76_96_reg_885;
    sc_signal< sc_lv<1> > xor_ln76_97_fu_586_p2;
    sc_signal< sc_lv<1> > xor_ln76_97_reg_890;
    sc_signal< sc_lv<1> > w_conv1_2_load_reg_895;
    sc_signal< sc_lv<4> > add_ln700_2_fu_629_p2;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter1;
    sc_signal< sc_lv<1> > icmp_ln895_fu_741_p2;
    sc_signal< sc_lv<1> > icmp_ln895_reg_905;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_lv<10> > select_ln67_fu_753_p3;
    sc_signal< sc_lv<10> > select_ln67_reg_910;
    sc_signal< bool > ap_block_pp0_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp0_exit_iter0_state3;
    sc_signal< bool > ap_block_pp0_stage1_subdone;
    sc_signal< sc_lv<13> > indvar_flatten16_reg_176;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_lv<5> > n_0_reg_187;
    sc_signal< sc_lv<10> > indvar_flatten_reg_198;
    sc_signal< sc_lv<5> > x_0_reg_210;
    sc_signal< sc_lv<5> > y_0_reg_221;
    sc_signal< bool > ap_block_pp0_stage0;
    sc_signal< sc_lv<2> > ap_phi_mux_c_0_phi_fu_248_p4;
    sc_signal< sc_lv<64> > zext_ln81_2_fu_421_p1;
    sc_signal< sc_lv<64> > zext_ln76_68_fu_528_p1;
    sc_signal< sc_lv<64> > zext_ln76_69_fu_538_p1;
    sc_signal< sc_lv<64> > sext_ln76_fu_557_p1;
    sc_signal< sc_lv<64> > zext_ln76_70_fu_564_p1;
    sc_signal< bool > ap_block_pp0_stage1;
    sc_signal< sc_lv<5> > n_fu_267_p2;
    sc_signal< sc_lv<7> > tmp_s_fu_299_p3;
    sc_signal< sc_lv<7> > zext_ln76_fu_295_p1;
    sc_signal< sc_lv<4> > trunc_ln76_fu_317_p1;
    sc_signal< sc_lv<1> > icmp_ln68_fu_341_p2;
    sc_signal< sc_lv<1> > xor_ln76_101_fu_335_p2;
    sc_signal< sc_lv<5> > select_ln76_fu_279_p3;
    sc_signal< sc_lv<1> > and_ln76_fu_347_p2;
    sc_signal< sc_lv<1> > or_ln81_fu_359_p2;
    sc_signal< sc_lv<5> > x_fu_353_p2;
    sc_signal< sc_lv<5> > select_ln81_fu_365_p3;
    sc_signal< sc_lv<9> > tmp_26_fu_385_p3;
    sc_signal< sc_lv<6> > tmp_27_fu_397_p3;
    sc_signal< sc_lv<10> > zext_ln76_61_fu_393_p1;
    sc_signal< sc_lv<10> > zext_ln76_62_fu_405_p1;
    sc_signal< sc_lv<10> > zext_ln81_fu_381_p1;
    sc_signal< sc_lv<10> > add_ln81_fu_415_p2;
    sc_signal< sc_lv<9> > tmp_28_fu_432_p3;
    sc_signal< sc_lv<6> > tmp_29_fu_444_p3;
    sc_signal< sc_lv<10> > zext_ln76_63_fu_440_p1;
    sc_signal< sc_lv<10> > zext_ln76_64_fu_452_p1;
    sc_signal< sc_lv<5> > add_ln76_4_fu_462_p2;
    sc_signal< sc_lv<9> > tmp_30_fu_468_p3;
    sc_signal< sc_lv<6> > tmp_31_fu_480_p3;
    sc_signal< sc_lv<10> > zext_ln76_65_fu_476_p1;
    sc_signal< sc_lv<10> > zext_ln76_66_fu_488_p1;
    sc_signal< sc_lv<5> > zext_ln70_fu_510_p1;
    sc_signal< sc_lv<5> > add_ln76_fu_514_p2;
    sc_signal< sc_lv<10> > zext_ln76_67_fu_519_p1;
    sc_signal< sc_lv<10> > add_ln76_14_fu_523_p2;
    sc_signal< sc_lv<10> > add_ln76_15_fu_533_p2;
    sc_signal< sc_lv<7> > zext_ln76_71_fu_548_p1;
    sc_signal< sc_lv<7> > add_ln76_17_fu_552_p2;
    sc_signal< sc_lv<1> > xor_ln76_fu_568_p2;
    sc_signal< sc_lv<1> > xor_ln76_99_fu_580_p2;
    sc_signal< sc_lv<1> > xor_ln76_100_fu_598_p2;
    sc_signal< sc_lv<1> > xor_ln76_98_fu_603_p2;
    sc_signal< sc_lv<2> > zext_ln700_fu_609_p1;
    sc_signal< sc_lv<2> > zext_ln76_54_fu_595_p1;
    sc_signal< sc_lv<2> > zext_ln76_53_fu_592_p1;
    sc_signal< sc_lv<2> > add_ln700_fu_613_p2;
    sc_signal< sc_lv<2> > add_ln700_48_fu_619_p2;
    sc_signal< sc_lv<4> > zext_ln700_32_fu_625_p1;
    sc_signal< sc_lv<5> > shl_ln_fu_635_p3;
    sc_signal< sc_lv<5> > accum_V_fu_643_p2;
    sc_signal< sc_lv<8> > zext_ln895_fu_657_p1;
    sc_signal< sc_lv<8> > zext_ln895_4_fu_660_p1;
    sc_signal< sc_lv<1> > icmp_ln895_257_fu_653_p2;
    sc_signal< sc_lv<8> > sub_ln895_fu_663_p2;
    sc_signal< sc_lv<8> > sub_ln895_3_fu_675_p2;
    sc_signal< sc_lv<8> > xor_ln895_fu_669_p2;
    sc_signal< sc_lv<8> > select_ln895_fu_681_p3;
    sc_signal< sc_lv<8> > select_ln895_4_fu_697_p3;
    sc_signal< sc_lv<8> > sub_ln895_4_fu_705_p2;
    sc_signal< sc_lv<128> > select_ln895_3_fu_689_p3;
    sc_signal< sc_lv<128> > zext_ln895_5_fu_711_p1;
    sc_signal< sc_lv<128> > zext_ln895_6_fu_715_p1;
    sc_signal< sc_lv<128> > lshr_ln895_fu_719_p2;
    sc_signal< sc_lv<128> > lshr_ln895_2_fu_725_p2;
    sc_signal< sc_lv<128> > and_ln895_fu_731_p2;
    sc_signal< sc_lv<8> > sext_ln895_fu_649_p1;
    sc_signal< sc_lv<8> > trunc_ln895_fu_737_p1;
    sc_signal< sc_lv<10> > add_ln67_2_fu_747_p2;
    sc_signal< sc_lv<6> > ap_NS_fsm;
    sc_signal< sc_logic > ap_idle_pp0;
    sc_signal< sc_logic > ap_enable_pp0;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<6> ap_ST_fsm_state1;
    static const sc_lv<6> ap_ST_fsm_state2;
    static const sc_lv<6> ap_ST_fsm_pp0_stage0;
    static const sc_lv<6> ap_ST_fsm_pp0_stage1;
    static const sc_lv<6> ap_ST_fsm_state6;
    static const sc_lv<6> ap_ST_fsm_state7;
    static const bool ap_const_boolean_1;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_2;
    static const bool ap_const_boolean_0;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<13> ap_const_lv13_0;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<5> ap_const_lv5_0;
    static const sc_lv<10> ap_const_lv10_0;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<13> ap_const_lv13_1000;
    static const sc_lv<13> ap_const_lv13_1;
    static const sc_lv<5> ap_const_lv5_1;
    static const sc_lv<10> ap_const_lv10_100;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<7> ap_const_lv7_7;
    static const sc_lv<5> ap_const_lv5_10;
    static const sc_lv<5> ap_const_lv5_2;
    static const sc_lv<2> ap_const_lv2_3;
    static const sc_lv<2> ap_const_lv2_1;
    static const sc_lv<5> ap_const_lv5_17;
    static const sc_lv<8> ap_const_lv8_7F;
    static const sc_lv<128> ap_const_lv128_lc_1;
    static const sc_lv<128> ap_const_lv128_lc_2;
    static const sc_lv<128> ap_const_lv128_lc_3;
    static const sc_lv<10> ap_const_lv10_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_accum_V_fu_643_p2();
    void thread_add_ln66_fu_261_p2();
    void thread_add_ln67_2_fu_747_p2();
    void thread_add_ln700_2_fu_629_p2();
    void thread_add_ln700_48_fu_619_p2();
    void thread_add_ln700_fu_613_p2();
    void thread_add_ln76_10_fu_409_p2();
    void thread_add_ln76_12_fu_456_p2();
    void thread_add_ln76_13_fu_492_p2();
    void thread_add_ln76_14_fu_523_p2();
    void thread_add_ln76_15_fu_533_p2();
    void thread_add_ln76_16_fu_543_p2();
    void thread_add_ln76_17_fu_552_p2();
    void thread_add_ln76_4_fu_462_p2();
    void thread_add_ln76_fu_514_p2();
    void thread_add_ln81_fu_415_p2();
    void thread_and_ln76_fu_347_p2();
    void thread_and_ln895_fu_731_p2();
    void thread_ap_CS_fsm_pp0_stage0();
    void thread_ap_CS_fsm_pp0_stage1();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state6();
    void thread_ap_CS_fsm_state7();
    void thread_ap_block_pp0_stage0();
    void thread_ap_block_pp0_stage0_11001();
    void thread_ap_block_pp0_stage0_subdone();
    void thread_ap_block_pp0_stage1();
    void thread_ap_block_pp0_stage1_11001();
    void thread_ap_block_pp0_stage1_subdone();
    void thread_ap_block_state3_pp0_stage0_iter0();
    void thread_ap_block_state4_pp0_stage1_iter0();
    void thread_ap_block_state5_pp0_stage0_iter1();
    void thread_ap_condition_pp0_exit_iter0_state3();
    void thread_ap_done();
    void thread_ap_enable_pp0();
    void thread_ap_idle();
    void thread_ap_idle_pp0();
    void thread_ap_phi_mux_c_0_phi_fu_248_p4();
    void thread_ap_ready();
    void thread_c_fu_504_p2();
    void thread_icmp_ln66_fu_255_p2();
    void thread_icmp_ln67_fu_273_p2();
    void thread_icmp_ln68_fu_341_p2();
    void thread_icmp_ln70_fu_498_p2();
    void thread_icmp_ln895_257_fu_653_p2();
    void thread_icmp_ln895_fu_741_p2();
    void thread_input_r_address0();
    void thread_input_r_address1();
    void thread_input_r_ce0();
    void thread_input_r_ce1();
    void thread_lshr_ln895_2_fu_725_p2();
    void thread_lshr_ln895_fu_719_p2();
    void thread_n_fu_267_p2();
    void thread_or_ln76_fu_329_p2();
    void thread_or_ln81_fu_359_p2();
    void thread_output_r_address0();
    void thread_output_r_ce0();
    void thread_output_r_d0();
    void thread_output_r_we0();
    void thread_p_cast7_mid2_v_fu_321_p3();
    void thread_select_ln67_fu_753_p3();
    void thread_select_ln76_2_fu_287_p3();
    void thread_select_ln76_fu_279_p3();
    void thread_select_ln81_2_fu_373_p3();
    void thread_select_ln81_fu_365_p3();
    void thread_select_ln895_3_fu_689_p3();
    void thread_select_ln895_4_fu_697_p3();
    void thread_select_ln895_fu_681_p3();
    void thread_sext_ln76_fu_557_p1();
    void thread_sext_ln895_fu_649_p1();
    void thread_shl_ln_fu_635_p3();
    void thread_sub_ln76_fu_307_p2();
    void thread_sub_ln895_3_fu_675_p2();
    void thread_sub_ln895_4_fu_705_p2();
    void thread_sub_ln895_fu_663_p2();
    void thread_tmp_26_fu_385_p3();
    void thread_tmp_27_fu_397_p3();
    void thread_tmp_28_fu_432_p3();
    void thread_tmp_29_fu_444_p3();
    void thread_tmp_30_fu_468_p3();
    void thread_tmp_31_fu_480_p3();
    void thread_tmp_s_fu_299_p3();
    void thread_trunc_ln76_fu_317_p1();
    void thread_trunc_ln895_fu_737_p1();
    void thread_w_conv1_0_address0();
    void thread_w_conv1_0_ce0();
    void thread_w_conv1_1_address0();
    void thread_w_conv1_1_ce0();
    void thread_w_conv1_2_address0();
    void thread_w_conv1_2_ce0();
    void thread_x_fu_353_p2();
    void thread_xor_ln76_100_fu_598_p2();
    void thread_xor_ln76_101_fu_335_p2();
    void thread_xor_ln76_96_fu_574_p2();
    void thread_xor_ln76_97_fu_586_p2();
    void thread_xor_ln76_98_fu_603_p2();
    void thread_xor_ln76_99_fu_580_p2();
    void thread_xor_ln76_fu_568_p2();
    void thread_xor_ln895_fu_669_p2();
    void thread_y_fu_426_p2();
    void thread_zext_ln700_32_fu_625_p1();
    void thread_zext_ln700_fu_609_p1();
    void thread_zext_ln70_fu_510_p1();
    void thread_zext_ln76_53_fu_592_p1();
    void thread_zext_ln76_54_fu_595_p1();
    void thread_zext_ln76_60_fu_313_p1();
    void thread_zext_ln76_61_fu_393_p1();
    void thread_zext_ln76_62_fu_405_p1();
    void thread_zext_ln76_63_fu_440_p1();
    void thread_zext_ln76_64_fu_452_p1();
    void thread_zext_ln76_65_fu_476_p1();
    void thread_zext_ln76_66_fu_488_p1();
    void thread_zext_ln76_67_fu_519_p1();
    void thread_zext_ln76_68_fu_528_p1();
    void thread_zext_ln76_69_fu_538_p1();
    void thread_zext_ln76_70_fu_564_p1();
    void thread_zext_ln76_71_fu_548_p1();
    void thread_zext_ln76_fu_295_p1();
    void thread_zext_ln81_2_fu_421_p1();
    void thread_zext_ln81_fu_381_p1();
    void thread_zext_ln895_4_fu_660_p1();
    void thread_zext_ln895_5_fu_711_p1();
    void thread_zext_ln895_6_fu_715_p1();
    void thread_zext_ln895_fu_657_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
