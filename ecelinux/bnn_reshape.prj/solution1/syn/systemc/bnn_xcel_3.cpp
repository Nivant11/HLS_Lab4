#include "bnn_xcel.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void bnn_xcel::thread_add_ln27_1_fu_1431_p2() {
    add_ln27_1_fu_1431_p2 = (!y_0_0_i2153_reg_203.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(y_0_0_i2153_reg_203.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void bnn_xcel::thread_add_ln27_4_fu_1449_p2() {
    add_ln27_4_fu_1449_p2 = (!zext_ln27_7_fu_1445_p1.read().is_01() || !zext_ln27_reg_6694.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln27_7_fu_1445_p1.read()) + sc_biguint<10>(zext_ln27_reg_6694.read()));
}

void bnn_xcel::thread_add_ln27_5_fu_1483_p2() {
    add_ln27_5_fu_1483_p2 = (!zext_ln27_10_fu_1479_p1.read().is_01() || !zext_ln27_9_fu_1467_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln27_10_fu_1479_p1.read()) + sc_biguint<10>(zext_ln27_9_fu_1467_p1.read()));
}

void bnn_xcel::thread_add_ln27_6_fu_1489_p2() {
    add_ln27_6_fu_1489_p2 = (!add_ln27_5_fu_1483_p2.read().is_01() || !zext_ln26_reg_6699.read().is_01())? sc_lv<10>(): (sc_biguint<10>(add_ln27_5_fu_1483_p2.read()) + sc_biguint<10>(zext_ln26_reg_6699.read()));
}

void bnn_xcel::thread_add_ln27_fu_1411_p2() {
    add_ln27_fu_1411_p2 = (!x_0_0_i2152_reg_192.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(x_0_0_i2152_reg_192.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void bnn_xcel::thread_add_ln43_fu_1343_p2() {
    add_ln43_fu_1343_p2 = (!x_0_0_i_reg_170.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(x_0_0_i_reg_170.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void bnn_xcel::thread_add_ln45_fu_1385_p2() {
    add_ln45_fu_1385_p2 = (!y_0_0_i_reg_181.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(y_0_0_i_reg_181.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void bnn_xcel::thread_add_ln46_2_fu_1395_p2() {
    add_ln46_2_fu_1395_p2 = (!add_ln46_reg_6673.read().is_01() || !zext_ln46_6_fu_1391_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(add_ln46_reg_6673.read()) + sc_biguint<10>(zext_ln46_6_fu_1391_p1.read()));
}

void bnn_xcel::thread_add_ln46_fu_1373_p2() {
    add_ln46_fu_1373_p2 = (!zext_ln46_5_fu_1369_p1.read().is_01() || !zext_ln46_fu_1357_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln46_5_fu_1369_p1.read()) + sc_biguint<10>(zext_ln46_fu_1357_p1.read()));
}

void bnn_xcel::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void bnn_xcel::thread_ap_CS_fsm_state10() {
    ap_CS_fsm_state10 = ap_CS_fsm.read()[9];
}

void bnn_xcel::thread_ap_CS_fsm_state11() {
    ap_CS_fsm_state11 = ap_CS_fsm.read()[10];
}

void bnn_xcel::thread_ap_CS_fsm_state12() {
    ap_CS_fsm_state12 = ap_CS_fsm.read()[11];
}

void bnn_xcel::thread_ap_CS_fsm_state13() {
    ap_CS_fsm_state13 = ap_CS_fsm.read()[12];
}

void bnn_xcel::thread_ap_CS_fsm_state14() {
    ap_CS_fsm_state14 = ap_CS_fsm.read()[13];
}

void bnn_xcel::thread_ap_CS_fsm_state15() {
    ap_CS_fsm_state15 = ap_CS_fsm.read()[14];
}

void bnn_xcel::thread_ap_CS_fsm_state16() {
    ap_CS_fsm_state16 = ap_CS_fsm.read()[15];
}

void bnn_xcel::thread_ap_CS_fsm_state17() {
    ap_CS_fsm_state17 = ap_CS_fsm.read()[16];
}

void bnn_xcel::thread_ap_CS_fsm_state18() {
    ap_CS_fsm_state18 = ap_CS_fsm.read()[17];
}

void bnn_xcel::thread_ap_CS_fsm_state19() {
    ap_CS_fsm_state19 = ap_CS_fsm.read()[18];
}

void bnn_xcel::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void bnn_xcel::thread_ap_CS_fsm_state20() {
    ap_CS_fsm_state20 = ap_CS_fsm.read()[19];
}

void bnn_xcel::thread_ap_CS_fsm_state21() {
    ap_CS_fsm_state21 = ap_CS_fsm.read()[20];
}

void bnn_xcel::thread_ap_CS_fsm_state22() {
    ap_CS_fsm_state22 = ap_CS_fsm.read()[21];
}

void bnn_xcel::thread_ap_CS_fsm_state23() {
    ap_CS_fsm_state23 = ap_CS_fsm.read()[22];
}

void bnn_xcel::thread_ap_CS_fsm_state24() {
    ap_CS_fsm_state24 = ap_CS_fsm.read()[23];
}

void bnn_xcel::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read()[2];
}

void bnn_xcel::thread_ap_CS_fsm_state4() {
    ap_CS_fsm_state4 = ap_CS_fsm.read()[3];
}

void bnn_xcel::thread_ap_CS_fsm_state5() {
    ap_CS_fsm_state5 = ap_CS_fsm.read()[4];
}

void bnn_xcel::thread_ap_CS_fsm_state6() {
    ap_CS_fsm_state6 = ap_CS_fsm.read()[5];
}

void bnn_xcel::thread_ap_CS_fsm_state7() {
    ap_CS_fsm_state7 = ap_CS_fsm.read()[6];
}

void bnn_xcel::thread_ap_CS_fsm_state8() {
    ap_CS_fsm_state8 = ap_CS_fsm.read()[7];
}

void bnn_xcel::thread_ap_CS_fsm_state9() {
    ap_CS_fsm_state9 = ap_CS_fsm.read()[8];
}

void bnn_xcel::thread_ap_done() {
    if (((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) && 
          esl_seteq<1,1,1>(icmp_ln169_fu_6622_p2.read(), ap_const_lv1_1)))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void bnn_xcel::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void bnn_xcel::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) && 
         esl_seteq<1,1,1>(icmp_ln169_fu_6622_p2.read(), ap_const_lv1_1))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void bnn_xcel::thread_ap_return() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) && 
         esl_seteq<1,1,1>(icmp_ln169_fu_6622_p2.read(), ap_const_lv1_1))) {
        ap_return = agg_result_V_0_i_reg_214.read();
    } else {
        ap_return = ap_return_preg.read();
    }
}

void bnn_xcel::thread_conv1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        conv1_address0 = grp_max_pool_16_16_s_fu_1314_input_r_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        conv1_address0 = grp_conv_1_16_18_s_fu_1297_output_r_address0.read();
    } else {
        conv1_address0 = "XXXXXXXX";
    }
}

void bnn_xcel::thread_conv1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        conv1_ce0 = grp_max_pool_16_16_s_fu_1314_input_r_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        conv1_ce0 = grp_conv_1_16_18_s_fu_1297_output_r_ce0.read();
    } else {
        conv1_ce0 = ap_const_logic_0;
    }
}

void bnn_xcel::thread_conv1_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        conv1_ce1 = grp_max_pool_16_16_s_fu_1314_input_r_ce1.read();
    } else {
        conv1_ce1 = ap_const_logic_0;
    }
}

void bnn_xcel::thread_conv1_pooled_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        conv1_pooled_address0 = grp_pad_16_8_s_fu_1326_input_r_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        conv1_pooled_address0 = grp_max_pool_16_16_s_fu_1314_output_r_address0.read();
    } else {
        conv1_pooled_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void bnn_xcel::thread_conv1_pooled_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        conv1_pooled_ce0 = grp_pad_16_8_s_fu_1326_input_r_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        conv1_pooled_ce0 = grp_max_pool_16_16_s_fu_1314_output_r_ce0.read();
    } else {
        conv1_pooled_ce0 = ap_const_logic_0;
    }
}

void bnn_xcel::thread_conv1_pooled_padded_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        conv1_pooled_padded_address0 = grp_initialize_padded_memory_16_10_0_s_fu_1332_input_r_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        conv1_pooled_padded_address0 = grp_pad_16_8_s_fu_1326_output_r_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        conv1_pooled_padded_address0 = grp_conv_16_32_10_s_fu_1285_input_r_address0.read();
    } else {
        conv1_pooled_padded_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void bnn_xcel::thread_conv1_pooled_padded_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        conv1_pooled_padded_ce0 = grp_initialize_padded_memory_16_10_0_s_fu_1332_input_r_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        conv1_pooled_padded_ce0 = grp_pad_16_8_s_fu_1326_output_r_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        conv1_pooled_padded_ce0 = grp_conv_16_32_10_s_fu_1285_input_r_ce0.read();
    } else {
        conv1_pooled_padded_ce0 = ap_const_logic_0;
    }
}

void bnn_xcel::thread_conv1_pooled_padded_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        conv1_pooled_padded_ce1 = grp_conv_16_32_10_s_fu_1285_input_r_ce1.read();
    } else {
        conv1_pooled_padded_ce1 = ap_const_logic_0;
    }
}

void bnn_xcel::thread_conv1_pooled_padded_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        conv1_pooled_padded_d0 = grp_initialize_padded_memory_16_10_0_s_fu_1332_input_r_d0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        conv1_pooled_padded_d0 = grp_pad_16_8_s_fu_1326_output_r_d0.read();
    } else {
        conv1_pooled_padded_d0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void bnn_xcel::thread_conv1_pooled_padded_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        conv1_pooled_padded_we0 = grp_initialize_padded_memory_16_10_0_s_fu_1332_input_r_we0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        conv1_pooled_padded_we0 = grp_pad_16_8_s_fu_1326_output_r_we0.read();
    } else {
        conv1_pooled_padded_we0 = ap_const_logic_0;
    }
}

void bnn_xcel::thread_conv1_pooled_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        conv1_pooled_we0 = grp_max_pool_16_16_s_fu_1314_output_r_we0.read();
    } else {
        conv1_pooled_we0 = ap_const_logic_0;
    }
}

void bnn_xcel::thread_conv1_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        conv1_we0 = grp_conv_1_16_18_s_fu_1297_output_r_we0.read();
    } else {
        conv1_we0 = ap_const_logic_0;
    }
}

void bnn_xcel::thread_conv2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        conv2_address0 = grp_max_pool_32_8_s_fu_1320_input_r_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        conv2_address0 = grp_conv_16_32_10_s_fu_1285_output_r_address0.read();
    } else {
        conv2_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void bnn_xcel::thread_conv2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        conv2_ce0 = grp_max_pool_32_8_s_fu_1320_input_r_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        conv2_ce0 = grp_conv_16_32_10_s_fu_1285_output_r_ce0.read();
    } else {
        conv2_ce0 = ap_const_logic_0;
    }
}

void bnn_xcel::thread_conv2_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        conv2_ce1 = grp_max_pool_32_8_s_fu_1320_input_r_ce1.read();
    } else {
        conv2_ce1 = ap_const_logic_0;
    }
}

void bnn_xcel::thread_conv2_pooled_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        conv2_pooled_address0 = grp_max_pool_32_8_s_fu_1320_output_r_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        conv2_pooled_address0 = grp_flatten_fu_1309_input_r_address0.read();
    } else {
        conv2_pooled_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void bnn_xcel::thread_conv2_pooled_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        conv2_pooled_ce0 = grp_max_pool_32_8_s_fu_1320_output_r_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        conv2_pooled_ce0 = grp_flatten_fu_1309_input_r_ce0.read();
    } else {
        conv2_pooled_ce0 = ap_const_logic_0;
    }
}

void bnn_xcel::thread_conv2_pooled_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        conv2_pooled_we0 = grp_max_pool_32_8_s_fu_1320_output_r_we0.read();
    } else {
        conv2_pooled_we0 = ap_const_logic_0;
    }
}

void bnn_xcel::thread_conv2_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        conv2_we0 = grp_conv_16_32_10_s_fu_1285_output_r_we0.read();
    } else {
        conv2_we0 = ap_const_logic_0;
    }
}

void bnn_xcel::thread_dense2_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        dense2_V_address0 =  (sc_lv<4>) (zext_ln170_fu_6628_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        dense2_V_address0 =  (sc_lv<4>) (ap_const_lv64_0);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        dense2_V_address0 = grp_dense_256_10_s_fu_764_output_V_address0.read();
    } else {
        dense2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void bnn_xcel::thread_dense2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        dense2_V_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        dense2_V_ce0 = grp_dense_256_10_s_fu_764_output_V_ce0.read();
    } else {
        dense2_V_ce0 = ap_const_logic_0;
    }
}

void bnn_xcel::thread_dense2_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        dense2_V_we0 = grp_dense_256_10_s_fu_764_output_V_we0.read();
    } else {
        dense2_V_we0 = ap_const_logic_0;
    }
}

void bnn_xcel::thread_grp_conv_16_32_10_s_fu_1285_ap_start() {
    grp_conv_16_32_10_s_fu_1285_ap_start = grp_conv_16_32_10_s_fu_1285_ap_start_reg.read();
}

void bnn_xcel::thread_grp_conv_1_16_18_s_fu_1297_ap_start() {
    grp_conv_1_16_18_s_fu_1297_ap_start = grp_conv_1_16_18_s_fu_1297_ap_start_reg.read();
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_ap_start() {
    grp_dense_256_10_s_fu_764_ap_start = grp_dense_256_10_s_fu_764_ap_start_reg.read();
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_0_read() {
    grp_dense_256_10_s_fu_764_input_0_read =  (sc_logic) (signed1_0_reg_9282.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_100_read() {
    grp_dense_256_10_s_fu_764_input_100_read =  (sc_logic) (signed1_100_reg_9782.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_101_read() {
    grp_dense_256_10_s_fu_764_input_101_read =  (sc_logic) (signed1_101_reg_9787.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_102_read() {
    grp_dense_256_10_s_fu_764_input_102_read =  (sc_logic) (signed1_102_reg_9792.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_103_read() {
    grp_dense_256_10_s_fu_764_input_103_read =  (sc_logic) (signed1_103_reg_9797.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_104_read() {
    grp_dense_256_10_s_fu_764_input_104_read =  (sc_logic) (signed1_104_reg_9802.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_105_read() {
    grp_dense_256_10_s_fu_764_input_105_read =  (sc_logic) (signed1_105_reg_9807.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_106_read() {
    grp_dense_256_10_s_fu_764_input_106_read =  (sc_logic) (signed1_106_reg_9812.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_107_read() {
    grp_dense_256_10_s_fu_764_input_107_read =  (sc_logic) (signed1_107_reg_9817.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_108_read() {
    grp_dense_256_10_s_fu_764_input_108_read =  (sc_logic) (signed1_108_reg_9822.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_109_read() {
    grp_dense_256_10_s_fu_764_input_109_read =  (sc_logic) (signed1_109_reg_9827.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_10_read() {
    grp_dense_256_10_s_fu_764_input_10_read =  (sc_logic) (signed1_10_reg_9332.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_110_read() {
    grp_dense_256_10_s_fu_764_input_110_read =  (sc_logic) (signed1_110_reg_9832.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_111_read() {
    grp_dense_256_10_s_fu_764_input_111_read =  (sc_logic) (signed1_111_reg_9837.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_112_read() {
    grp_dense_256_10_s_fu_764_input_112_read =  (sc_logic) (signed1_112_reg_9842.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_113_read() {
    grp_dense_256_10_s_fu_764_input_113_read =  (sc_logic) (signed1_113_reg_9847.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_114_read() {
    grp_dense_256_10_s_fu_764_input_114_read =  (sc_logic) (signed1_114_reg_9852.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_115_read() {
    grp_dense_256_10_s_fu_764_input_115_read =  (sc_logic) (signed1_115_reg_9857.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_116_read() {
    grp_dense_256_10_s_fu_764_input_116_read =  (sc_logic) (signed1_116_reg_9862.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_117_read() {
    grp_dense_256_10_s_fu_764_input_117_read =  (sc_logic) (signed1_117_reg_9867.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_118_read() {
    grp_dense_256_10_s_fu_764_input_118_read =  (sc_logic) (signed1_118_reg_9872.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_119_read() {
    grp_dense_256_10_s_fu_764_input_119_read =  (sc_logic) (signed1_119_reg_9877.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_11_read() {
    grp_dense_256_10_s_fu_764_input_11_read =  (sc_logic) (signed1_11_reg_9337.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_120_read() {
    grp_dense_256_10_s_fu_764_input_120_read =  (sc_logic) (signed1_120_reg_9882.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_121_read() {
    grp_dense_256_10_s_fu_764_input_121_read =  (sc_logic) (signed1_121_reg_9887.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_122_read() {
    grp_dense_256_10_s_fu_764_input_122_read =  (sc_logic) (signed1_122_reg_9892.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_123_read() {
    grp_dense_256_10_s_fu_764_input_123_read =  (sc_logic) (signed1_123_reg_9897.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_124_read() {
    grp_dense_256_10_s_fu_764_input_124_read =  (sc_logic) (signed1_124_reg_9902.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_125_read() {
    grp_dense_256_10_s_fu_764_input_125_read =  (sc_logic) (signed1_125_reg_9907.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_126_read() {
    grp_dense_256_10_s_fu_764_input_126_read =  (sc_logic) (signed1_126_reg_9912.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_127_read() {
    grp_dense_256_10_s_fu_764_input_127_read =  (sc_logic) (signed1_127_reg_9917.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_128_read() {
    grp_dense_256_10_s_fu_764_input_128_read =  (sc_logic) (signed1_128_reg_9922.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_129_read() {
    grp_dense_256_10_s_fu_764_input_129_read =  (sc_logic) (signed1_129_reg_9927.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_12_read() {
    grp_dense_256_10_s_fu_764_input_12_read =  (sc_logic) (signed1_12_reg_9342.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_130_read() {
    grp_dense_256_10_s_fu_764_input_130_read =  (sc_logic) (signed1_130_reg_9932.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_131_read() {
    grp_dense_256_10_s_fu_764_input_131_read =  (sc_logic) (signed1_131_reg_9937.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_132_read() {
    grp_dense_256_10_s_fu_764_input_132_read =  (sc_logic) (signed1_132_reg_9942.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_133_read() {
    grp_dense_256_10_s_fu_764_input_133_read =  (sc_logic) (signed1_133_reg_9947.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_134_read() {
    grp_dense_256_10_s_fu_764_input_134_read =  (sc_logic) (signed1_134_reg_9952.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_135_read() {
    grp_dense_256_10_s_fu_764_input_135_read =  (sc_logic) (signed1_135_reg_9957.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_136_read() {
    grp_dense_256_10_s_fu_764_input_136_read =  (sc_logic) (signed1_136_reg_9962.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_137_read() {
    grp_dense_256_10_s_fu_764_input_137_read =  (sc_logic) (signed1_137_reg_9967.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_138_read() {
    grp_dense_256_10_s_fu_764_input_138_read =  (sc_logic) (signed1_138_reg_9972.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_139_read() {
    grp_dense_256_10_s_fu_764_input_139_read =  (sc_logic) (signed1_139_reg_9977.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_13_read() {
    grp_dense_256_10_s_fu_764_input_13_read =  (sc_logic) (signed1_13_reg_9347.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_140_read() {
    grp_dense_256_10_s_fu_764_input_140_read =  (sc_logic) (signed1_140_reg_9982.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_141_read() {
    grp_dense_256_10_s_fu_764_input_141_read =  (sc_logic) (signed1_141_reg_9987.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_142_read() {
    grp_dense_256_10_s_fu_764_input_142_read =  (sc_logic) (signed1_142_reg_9992.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_143_read() {
    grp_dense_256_10_s_fu_764_input_143_read =  (sc_logic) (signed1_143_reg_9997.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_144_read() {
    grp_dense_256_10_s_fu_764_input_144_read =  (sc_logic) (signed1_144_reg_10002.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_145_read() {
    grp_dense_256_10_s_fu_764_input_145_read =  (sc_logic) (signed1_145_reg_10007.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_146_read() {
    grp_dense_256_10_s_fu_764_input_146_read =  (sc_logic) (signed1_146_reg_10012.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_147_read() {
    grp_dense_256_10_s_fu_764_input_147_read =  (sc_logic) (signed1_147_reg_10017.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_148_read() {
    grp_dense_256_10_s_fu_764_input_148_read =  (sc_logic) (signed1_148_reg_10022.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_149_read() {
    grp_dense_256_10_s_fu_764_input_149_read =  (sc_logic) (signed1_149_reg_10027.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_14_read() {
    grp_dense_256_10_s_fu_764_input_14_read =  (sc_logic) (signed1_14_reg_9352.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_150_read() {
    grp_dense_256_10_s_fu_764_input_150_read =  (sc_logic) (signed1_150_reg_10032.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_151_read() {
    grp_dense_256_10_s_fu_764_input_151_read =  (sc_logic) (signed1_151_reg_10037.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_152_read() {
    grp_dense_256_10_s_fu_764_input_152_read =  (sc_logic) (signed1_152_reg_10042.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_153_read() {
    grp_dense_256_10_s_fu_764_input_153_read =  (sc_logic) (signed1_153_reg_10047.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_154_read() {
    grp_dense_256_10_s_fu_764_input_154_read =  (sc_logic) (signed1_154_reg_10052.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_155_read() {
    grp_dense_256_10_s_fu_764_input_155_read =  (sc_logic) (signed1_155_reg_10057.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_156_read() {
    grp_dense_256_10_s_fu_764_input_156_read =  (sc_logic) (signed1_156_reg_10062.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_157_read() {
    grp_dense_256_10_s_fu_764_input_157_read =  (sc_logic) (signed1_157_reg_10067.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_158_read() {
    grp_dense_256_10_s_fu_764_input_158_read =  (sc_logic) (signed1_158_reg_10072.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_159_read() {
    grp_dense_256_10_s_fu_764_input_159_read =  (sc_logic) (signed1_159_reg_10077.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_15_read() {
    grp_dense_256_10_s_fu_764_input_15_read =  (sc_logic) (signed1_15_reg_9357.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_160_read() {
    grp_dense_256_10_s_fu_764_input_160_read =  (sc_logic) (signed1_160_reg_10082.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_161_read() {
    grp_dense_256_10_s_fu_764_input_161_read =  (sc_logic) (signed1_161_reg_10087.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_162_read() {
    grp_dense_256_10_s_fu_764_input_162_read =  (sc_logic) (signed1_162_reg_10092.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_163_read() {
    grp_dense_256_10_s_fu_764_input_163_read =  (sc_logic) (signed1_163_reg_10097.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_164_read() {
    grp_dense_256_10_s_fu_764_input_164_read =  (sc_logic) (signed1_164_reg_10102.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_165_read() {
    grp_dense_256_10_s_fu_764_input_165_read =  (sc_logic) (signed1_165_reg_10107.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_166_read() {
    grp_dense_256_10_s_fu_764_input_166_read =  (sc_logic) (signed1_166_reg_10112.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_167_read() {
    grp_dense_256_10_s_fu_764_input_167_read =  (sc_logic) (signed1_167_reg_10117.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_168_read() {
    grp_dense_256_10_s_fu_764_input_168_read =  (sc_logic) (signed1_168_reg_10122.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_169_read() {
    grp_dense_256_10_s_fu_764_input_169_read =  (sc_logic) (signed1_169_reg_10127.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_16_read() {
    grp_dense_256_10_s_fu_764_input_16_read =  (sc_logic) (signed1_16_reg_9362.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_170_read() {
    grp_dense_256_10_s_fu_764_input_170_read =  (sc_logic) (signed1_170_reg_10132.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_171_read() {
    grp_dense_256_10_s_fu_764_input_171_read =  (sc_logic) (signed1_171_reg_10137.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_172_read() {
    grp_dense_256_10_s_fu_764_input_172_read =  (sc_logic) (signed1_172_reg_10142.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_173_read() {
    grp_dense_256_10_s_fu_764_input_173_read =  (sc_logic) (signed1_173_reg_10147.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_174_read() {
    grp_dense_256_10_s_fu_764_input_174_read =  (sc_logic) (signed1_174_reg_10152.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_175_read() {
    grp_dense_256_10_s_fu_764_input_175_read =  (sc_logic) (signed1_175_reg_10157.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_176_read() {
    grp_dense_256_10_s_fu_764_input_176_read =  (sc_logic) (signed1_176_reg_10162.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_177_read() {
    grp_dense_256_10_s_fu_764_input_177_read =  (sc_logic) (signed1_177_reg_10167.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_178_read() {
    grp_dense_256_10_s_fu_764_input_178_read =  (sc_logic) (signed1_178_reg_10172.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_179_read() {
    grp_dense_256_10_s_fu_764_input_179_read =  (sc_logic) (signed1_179_reg_10177.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_17_read() {
    grp_dense_256_10_s_fu_764_input_17_read =  (sc_logic) (signed1_17_reg_9367.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_180_read() {
    grp_dense_256_10_s_fu_764_input_180_read =  (sc_logic) (signed1_180_reg_10182.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_181_read() {
    grp_dense_256_10_s_fu_764_input_181_read =  (sc_logic) (signed1_181_reg_10187.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_182_read() {
    grp_dense_256_10_s_fu_764_input_182_read =  (sc_logic) (signed1_182_reg_10192.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_183_read() {
    grp_dense_256_10_s_fu_764_input_183_read =  (sc_logic) (signed1_183_reg_10197.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_184_read() {
    grp_dense_256_10_s_fu_764_input_184_read =  (sc_logic) (signed1_184_reg_10202.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_185_read() {
    grp_dense_256_10_s_fu_764_input_185_read =  (sc_logic) (signed1_185_reg_10207.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_186_read() {
    grp_dense_256_10_s_fu_764_input_186_read =  (sc_logic) (signed1_186_reg_10212.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_187_read() {
    grp_dense_256_10_s_fu_764_input_187_read =  (sc_logic) (signed1_187_reg_10217.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_188_read() {
    grp_dense_256_10_s_fu_764_input_188_read =  (sc_logic) (signed1_188_reg_10222.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_189_read() {
    grp_dense_256_10_s_fu_764_input_189_read =  (sc_logic) (signed1_189_reg_10227.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_18_read() {
    grp_dense_256_10_s_fu_764_input_18_read =  (sc_logic) (signed1_18_reg_9372.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_190_read() {
    grp_dense_256_10_s_fu_764_input_190_read =  (sc_logic) (signed1_190_reg_10232.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_191_read() {
    grp_dense_256_10_s_fu_764_input_191_read =  (sc_logic) (signed1_191_reg_10237.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_192_read() {
    grp_dense_256_10_s_fu_764_input_192_read =  (sc_logic) (signed1_192_reg_10242.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_193_read() {
    grp_dense_256_10_s_fu_764_input_193_read =  (sc_logic) (signed1_193_reg_10247.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_194_read() {
    grp_dense_256_10_s_fu_764_input_194_read =  (sc_logic) (signed1_194_reg_10252.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_195_read() {
    grp_dense_256_10_s_fu_764_input_195_read =  (sc_logic) (signed1_195_reg_10257.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_196_read() {
    grp_dense_256_10_s_fu_764_input_196_read =  (sc_logic) (signed1_196_reg_10262.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_197_read() {
    grp_dense_256_10_s_fu_764_input_197_read =  (sc_logic) (signed1_197_reg_10267.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_198_read() {
    grp_dense_256_10_s_fu_764_input_198_read =  (sc_logic) (signed1_198_reg_10272.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_199_read() {
    grp_dense_256_10_s_fu_764_input_199_read =  (sc_logic) (signed1_199_reg_10277.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_19_read() {
    grp_dense_256_10_s_fu_764_input_19_read =  (sc_logic) (signed1_19_reg_9377.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_1_read() {
    grp_dense_256_10_s_fu_764_input_1_read =  (sc_logic) (signed1_1_reg_9287.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_200_read() {
    grp_dense_256_10_s_fu_764_input_200_read =  (sc_logic) (signed1_200_reg_10282.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_201_read() {
    grp_dense_256_10_s_fu_764_input_201_read =  (sc_logic) (signed1_201_reg_10287.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_202_read() {
    grp_dense_256_10_s_fu_764_input_202_read =  (sc_logic) (signed1_202_reg_10292.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_203_read() {
    grp_dense_256_10_s_fu_764_input_203_read =  (sc_logic) (signed1_203_reg_10297.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_204_read() {
    grp_dense_256_10_s_fu_764_input_204_read =  (sc_logic) (signed1_204_reg_10302.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_205_read() {
    grp_dense_256_10_s_fu_764_input_205_read =  (sc_logic) (signed1_205_reg_10307.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_206_read() {
    grp_dense_256_10_s_fu_764_input_206_read =  (sc_logic) (signed1_206_reg_10312.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_207_read() {
    grp_dense_256_10_s_fu_764_input_207_read =  (sc_logic) (signed1_207_reg_10317.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_208_read() {
    grp_dense_256_10_s_fu_764_input_208_read =  (sc_logic) (signed1_208_reg_10322.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_209_read() {
    grp_dense_256_10_s_fu_764_input_209_read =  (sc_logic) (signed1_209_reg_10327.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_20_read() {
    grp_dense_256_10_s_fu_764_input_20_read =  (sc_logic) (signed1_20_reg_9382.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_210_read() {
    grp_dense_256_10_s_fu_764_input_210_read =  (sc_logic) (signed1_210_reg_10332.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_211_read() {
    grp_dense_256_10_s_fu_764_input_211_read =  (sc_logic) (signed1_211_reg_10337.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_212_read() {
    grp_dense_256_10_s_fu_764_input_212_read =  (sc_logic) (signed1_212_reg_10342.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_213_read() {
    grp_dense_256_10_s_fu_764_input_213_read =  (sc_logic) (signed1_213_reg_10347.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_214_read() {
    grp_dense_256_10_s_fu_764_input_214_read =  (sc_logic) (signed1_214_reg_10352.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_215_read() {
    grp_dense_256_10_s_fu_764_input_215_read =  (sc_logic) (signed1_215_reg_10357.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_216_read() {
    grp_dense_256_10_s_fu_764_input_216_read =  (sc_logic) (signed1_216_reg_10362.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_217_read() {
    grp_dense_256_10_s_fu_764_input_217_read =  (sc_logic) (signed1_217_reg_10367.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_218_read() {
    grp_dense_256_10_s_fu_764_input_218_read =  (sc_logic) (signed1_218_reg_10372.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_219_read() {
    grp_dense_256_10_s_fu_764_input_219_read =  (sc_logic) (signed1_219_reg_10377.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_21_read() {
    grp_dense_256_10_s_fu_764_input_21_read =  (sc_logic) (signed1_21_reg_9387.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_220_read() {
    grp_dense_256_10_s_fu_764_input_220_read =  (sc_logic) (signed1_220_reg_10382.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_221_read() {
    grp_dense_256_10_s_fu_764_input_221_read =  (sc_logic) (signed1_221_reg_10387.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_222_read() {
    grp_dense_256_10_s_fu_764_input_222_read =  (sc_logic) (signed1_222_reg_10392.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_223_read() {
    grp_dense_256_10_s_fu_764_input_223_read =  (sc_logic) (signed1_223_reg_10397.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_224_read() {
    grp_dense_256_10_s_fu_764_input_224_read =  (sc_logic) (signed1_224_reg_10402.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_225_read() {
    grp_dense_256_10_s_fu_764_input_225_read =  (sc_logic) (signed1_225_reg_10407.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_226_read() {
    grp_dense_256_10_s_fu_764_input_226_read =  (sc_logic) (signed1_226_reg_10412.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_227_read() {
    grp_dense_256_10_s_fu_764_input_227_read =  (sc_logic) (signed1_227_reg_10417.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_228_read() {
    grp_dense_256_10_s_fu_764_input_228_read =  (sc_logic) (signed1_228_reg_10422.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_229_read() {
    grp_dense_256_10_s_fu_764_input_229_read =  (sc_logic) (signed1_229_reg_10427.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_22_read() {
    grp_dense_256_10_s_fu_764_input_22_read =  (sc_logic) (signed1_22_reg_9392.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_230_read() {
    grp_dense_256_10_s_fu_764_input_230_read =  (sc_logic) (signed1_230_reg_10432.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_231_read() {
    grp_dense_256_10_s_fu_764_input_231_read =  (sc_logic) (signed1_231_reg_10437.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_232_read() {
    grp_dense_256_10_s_fu_764_input_232_read =  (sc_logic) (signed1_232_reg_10442.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_233_read() {
    grp_dense_256_10_s_fu_764_input_233_read =  (sc_logic) (signed1_233_reg_10447.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_234_read() {
    grp_dense_256_10_s_fu_764_input_234_read =  (sc_logic) (signed1_234_reg_10452.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_235_read() {
    grp_dense_256_10_s_fu_764_input_235_read =  (sc_logic) (signed1_235_reg_10457.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_236_read() {
    grp_dense_256_10_s_fu_764_input_236_read =  (sc_logic) (signed1_236_reg_10462.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_237_read() {
    grp_dense_256_10_s_fu_764_input_237_read =  (sc_logic) (signed1_237_reg_10467.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_238_read() {
    grp_dense_256_10_s_fu_764_input_238_read =  (sc_logic) (signed1_238_reg_10472.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_239_read() {
    grp_dense_256_10_s_fu_764_input_239_read =  (sc_logic) (signed1_239_reg_10477.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_23_read() {
    grp_dense_256_10_s_fu_764_input_23_read =  (sc_logic) (signed1_23_reg_9397.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_240_read() {
    grp_dense_256_10_s_fu_764_input_240_read =  (sc_logic) (signed1_240_reg_10482.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_241_read() {
    grp_dense_256_10_s_fu_764_input_241_read =  (sc_logic) (signed1_241_reg_10487.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_242_read() {
    grp_dense_256_10_s_fu_764_input_242_read =  (sc_logic) (signed1_242_reg_10492.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_243_read() {
    grp_dense_256_10_s_fu_764_input_243_read =  (sc_logic) (signed1_243_reg_10497.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_244_read() {
    grp_dense_256_10_s_fu_764_input_244_read =  (sc_logic) (signed1_244_reg_10502.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_245_read() {
    grp_dense_256_10_s_fu_764_input_245_read =  (sc_logic) (signed1_245_reg_10507.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_246_read() {
    grp_dense_256_10_s_fu_764_input_246_read =  (sc_logic) (signed1_246_reg_10512.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_247_read() {
    grp_dense_256_10_s_fu_764_input_247_read =  (sc_logic) (signed1_247_reg_10517.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_248_read() {
    grp_dense_256_10_s_fu_764_input_248_read =  (sc_logic) (signed1_248_reg_10522.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_249_read() {
    grp_dense_256_10_s_fu_764_input_249_read =  (sc_logic) (signed1_249_reg_10527.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_24_read() {
    grp_dense_256_10_s_fu_764_input_24_read =  (sc_logic) (signed1_24_reg_9402.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_250_read() {
    grp_dense_256_10_s_fu_764_input_250_read =  (sc_logic) (signed1_250_reg_10532.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_251_read() {
    grp_dense_256_10_s_fu_764_input_251_read =  (sc_logic) (signed1_251_reg_10537.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_252_read() {
    grp_dense_256_10_s_fu_764_input_252_read =  (sc_logic) (signed1_252_reg_10542.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_253_read() {
    grp_dense_256_10_s_fu_764_input_253_read =  (sc_logic) (signed1_253_reg_10547.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_254_read() {
    grp_dense_256_10_s_fu_764_input_254_read =  (sc_logic) (signed1_254_reg_10552.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_255_read() {
    grp_dense_256_10_s_fu_764_input_255_read =  (sc_logic) (signed1_255_reg_10557.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_25_read() {
    grp_dense_256_10_s_fu_764_input_25_read =  (sc_logic) (signed1_25_reg_9407.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_26_read() {
    grp_dense_256_10_s_fu_764_input_26_read =  (sc_logic) (signed1_26_reg_9412.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_27_read() {
    grp_dense_256_10_s_fu_764_input_27_read =  (sc_logic) (signed1_27_reg_9417.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_28_read() {
    grp_dense_256_10_s_fu_764_input_28_read =  (sc_logic) (signed1_28_reg_9422.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_29_read() {
    grp_dense_256_10_s_fu_764_input_29_read =  (sc_logic) (signed1_29_reg_9427.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_2_read() {
    grp_dense_256_10_s_fu_764_input_2_read =  (sc_logic) (signed1_2_reg_9292.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_30_read() {
    grp_dense_256_10_s_fu_764_input_30_read =  (sc_logic) (signed1_30_reg_9432.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_31_read() {
    grp_dense_256_10_s_fu_764_input_31_read =  (sc_logic) (signed1_31_reg_9437.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_32_read() {
    grp_dense_256_10_s_fu_764_input_32_read =  (sc_logic) (signed1_32_reg_9442.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_33_read() {
    grp_dense_256_10_s_fu_764_input_33_read =  (sc_logic) (signed1_33_reg_9447.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_34_read() {
    grp_dense_256_10_s_fu_764_input_34_read =  (sc_logic) (signed1_34_reg_9452.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_35_read() {
    grp_dense_256_10_s_fu_764_input_35_read =  (sc_logic) (signed1_35_reg_9457.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_36_read() {
    grp_dense_256_10_s_fu_764_input_36_read =  (sc_logic) (signed1_36_reg_9462.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_37_read() {
    grp_dense_256_10_s_fu_764_input_37_read =  (sc_logic) (signed1_37_reg_9467.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_38_read() {
    grp_dense_256_10_s_fu_764_input_38_read =  (sc_logic) (signed1_38_reg_9472.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_39_read() {
    grp_dense_256_10_s_fu_764_input_39_read =  (sc_logic) (signed1_39_reg_9477.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_3_read() {
    grp_dense_256_10_s_fu_764_input_3_read =  (sc_logic) (signed1_3_reg_9297.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_40_read() {
    grp_dense_256_10_s_fu_764_input_40_read =  (sc_logic) (signed1_40_reg_9482.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_41_read() {
    grp_dense_256_10_s_fu_764_input_41_read =  (sc_logic) (signed1_41_reg_9487.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_42_read() {
    grp_dense_256_10_s_fu_764_input_42_read =  (sc_logic) (signed1_42_reg_9492.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_43_read() {
    grp_dense_256_10_s_fu_764_input_43_read =  (sc_logic) (signed1_43_reg_9497.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_44_read() {
    grp_dense_256_10_s_fu_764_input_44_read =  (sc_logic) (signed1_44_reg_9502.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_45_read() {
    grp_dense_256_10_s_fu_764_input_45_read =  (sc_logic) (signed1_45_reg_9507.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_46_read() {
    grp_dense_256_10_s_fu_764_input_46_read =  (sc_logic) (signed1_46_reg_9512.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_47_read() {
    grp_dense_256_10_s_fu_764_input_47_read =  (sc_logic) (signed1_47_reg_9517.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_48_read() {
    grp_dense_256_10_s_fu_764_input_48_read =  (sc_logic) (signed1_48_reg_9522.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_49_read() {
    grp_dense_256_10_s_fu_764_input_49_read =  (sc_logic) (signed1_49_reg_9527.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_4_read() {
    grp_dense_256_10_s_fu_764_input_4_read =  (sc_logic) (signed1_4_reg_9302.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_50_read() {
    grp_dense_256_10_s_fu_764_input_50_read =  (sc_logic) (signed1_50_reg_9532.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_51_read() {
    grp_dense_256_10_s_fu_764_input_51_read =  (sc_logic) (signed1_51_reg_9537.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_52_read() {
    grp_dense_256_10_s_fu_764_input_52_read =  (sc_logic) (signed1_52_reg_9542.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_53_read() {
    grp_dense_256_10_s_fu_764_input_53_read =  (sc_logic) (signed1_53_reg_9547.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_54_read() {
    grp_dense_256_10_s_fu_764_input_54_read =  (sc_logic) (signed1_54_reg_9552.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_55_read() {
    grp_dense_256_10_s_fu_764_input_55_read =  (sc_logic) (signed1_55_reg_9557.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_56_read() {
    grp_dense_256_10_s_fu_764_input_56_read =  (sc_logic) (signed1_56_reg_9562.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_57_read() {
    grp_dense_256_10_s_fu_764_input_57_read =  (sc_logic) (signed1_57_reg_9567.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_58_read() {
    grp_dense_256_10_s_fu_764_input_58_read =  (sc_logic) (signed1_58_reg_9572.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_59_read() {
    grp_dense_256_10_s_fu_764_input_59_read =  (sc_logic) (signed1_59_reg_9577.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_5_read() {
    grp_dense_256_10_s_fu_764_input_5_read =  (sc_logic) (signed1_5_reg_9307.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_60_read() {
    grp_dense_256_10_s_fu_764_input_60_read =  (sc_logic) (signed1_60_reg_9582.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_61_read() {
    grp_dense_256_10_s_fu_764_input_61_read =  (sc_logic) (signed1_61_reg_9587.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_62_read() {
    grp_dense_256_10_s_fu_764_input_62_read =  (sc_logic) (signed1_62_reg_9592.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_63_read() {
    grp_dense_256_10_s_fu_764_input_63_read =  (sc_logic) (signed1_63_reg_9597.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_64_read() {
    grp_dense_256_10_s_fu_764_input_64_read =  (sc_logic) (signed1_64_reg_9602.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_65_read() {
    grp_dense_256_10_s_fu_764_input_65_read =  (sc_logic) (signed1_65_reg_9607.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_66_read() {
    grp_dense_256_10_s_fu_764_input_66_read =  (sc_logic) (signed1_66_reg_9612.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_67_read() {
    grp_dense_256_10_s_fu_764_input_67_read =  (sc_logic) (signed1_67_reg_9617.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_68_read() {
    grp_dense_256_10_s_fu_764_input_68_read =  (sc_logic) (signed1_68_reg_9622.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_69_read() {
    grp_dense_256_10_s_fu_764_input_69_read =  (sc_logic) (signed1_69_reg_9627.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_6_read() {
    grp_dense_256_10_s_fu_764_input_6_read =  (sc_logic) (signed1_6_reg_9312.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_70_read() {
    grp_dense_256_10_s_fu_764_input_70_read =  (sc_logic) (signed1_70_reg_9632.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_71_read() {
    grp_dense_256_10_s_fu_764_input_71_read =  (sc_logic) (signed1_71_reg_9637.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_72_read() {
    grp_dense_256_10_s_fu_764_input_72_read =  (sc_logic) (signed1_72_reg_9642.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_73_read() {
    grp_dense_256_10_s_fu_764_input_73_read =  (sc_logic) (signed1_73_reg_9647.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_74_read() {
    grp_dense_256_10_s_fu_764_input_74_read =  (sc_logic) (signed1_74_reg_9652.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_75_read() {
    grp_dense_256_10_s_fu_764_input_75_read =  (sc_logic) (signed1_75_reg_9657.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_76_read() {
    grp_dense_256_10_s_fu_764_input_76_read =  (sc_logic) (signed1_76_reg_9662.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_77_read() {
    grp_dense_256_10_s_fu_764_input_77_read =  (sc_logic) (signed1_77_reg_9667.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_78_read() {
    grp_dense_256_10_s_fu_764_input_78_read =  (sc_logic) (signed1_78_reg_9672.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_79_read() {
    grp_dense_256_10_s_fu_764_input_79_read =  (sc_logic) (signed1_79_reg_9677.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_7_read() {
    grp_dense_256_10_s_fu_764_input_7_read =  (sc_logic) (signed1_7_reg_9317.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_80_read() {
    grp_dense_256_10_s_fu_764_input_80_read =  (sc_logic) (signed1_80_reg_9682.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_81_read() {
    grp_dense_256_10_s_fu_764_input_81_read =  (sc_logic) (signed1_81_reg_9687.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_82_read() {
    grp_dense_256_10_s_fu_764_input_82_read =  (sc_logic) (signed1_82_reg_9692.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_83_read() {
    grp_dense_256_10_s_fu_764_input_83_read =  (sc_logic) (signed1_83_reg_9697.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_84_read() {
    grp_dense_256_10_s_fu_764_input_84_read =  (sc_logic) (signed1_84_reg_9702.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_85_read() {
    grp_dense_256_10_s_fu_764_input_85_read =  (sc_logic) (signed1_85_reg_9707.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_86_read() {
    grp_dense_256_10_s_fu_764_input_86_read =  (sc_logic) (signed1_86_reg_9712.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_87_read() {
    grp_dense_256_10_s_fu_764_input_87_read =  (sc_logic) (signed1_87_reg_9717.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_88_read() {
    grp_dense_256_10_s_fu_764_input_88_read =  (sc_logic) (signed1_88_reg_9722.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_89_read() {
    grp_dense_256_10_s_fu_764_input_89_read =  (sc_logic) (signed1_89_reg_9727.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_8_read() {
    grp_dense_256_10_s_fu_764_input_8_read =  (sc_logic) (signed1_8_reg_9322.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_90_read() {
    grp_dense_256_10_s_fu_764_input_90_read =  (sc_logic) (signed1_90_reg_9732.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_91_read() {
    grp_dense_256_10_s_fu_764_input_91_read =  (sc_logic) (signed1_91_reg_9737.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_92_read() {
    grp_dense_256_10_s_fu_764_input_92_read =  (sc_logic) (signed1_92_reg_9742.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_93_read() {
    grp_dense_256_10_s_fu_764_input_93_read =  (sc_logic) (signed1_93_reg_9747.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_94_read() {
    grp_dense_256_10_s_fu_764_input_94_read =  (sc_logic) (signed1_94_reg_9752.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_95_read() {
    grp_dense_256_10_s_fu_764_input_95_read =  (sc_logic) (signed1_95_reg_9757.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_96_read() {
    grp_dense_256_10_s_fu_764_input_96_read =  (sc_logic) (signed1_96_reg_9762.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_97_read() {
    grp_dense_256_10_s_fu_764_input_97_read =  (sc_logic) (signed1_97_reg_9767.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_98_read() {
    grp_dense_256_10_s_fu_764_input_98_read =  (sc_logic) (signed1_98_reg_9772.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_99_read() {
    grp_dense_256_10_s_fu_764_input_99_read =  (sc_logic) (signed1_99_reg_9777.read()[0]);
}

void bnn_xcel::thread_grp_dense_256_10_s_fu_764_input_9_read() {
    grp_dense_256_10_s_fu_764_input_9_read =  (sc_logic) (signed1_9_reg_9327.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_ap_start() {
    grp_dense_512_256_s_fu_248_ap_start = grp_dense_512_256_s_fu_248_ap_start_reg.read();
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_0_read() {
    grp_dense_512_256_s_fu_248_input_0_read =  (sc_logic) (reshaped_0_reg_6722.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_100_read() {
    grp_dense_512_256_s_fu_248_input_100_read =  (sc_logic) (reshaped_100_reg_7222.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_101_read() {
    grp_dense_512_256_s_fu_248_input_101_read =  (sc_logic) (reshaped_101_reg_7227.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_102_read() {
    grp_dense_512_256_s_fu_248_input_102_read =  (sc_logic) (reshaped_102_reg_7232.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_103_read() {
    grp_dense_512_256_s_fu_248_input_103_read =  (sc_logic) (reshaped_103_reg_7237.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_104_read() {
    grp_dense_512_256_s_fu_248_input_104_read =  (sc_logic) (reshaped_104_reg_7242.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_105_read() {
    grp_dense_512_256_s_fu_248_input_105_read =  (sc_logic) (reshaped_105_reg_7247.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_106_read() {
    grp_dense_512_256_s_fu_248_input_106_read =  (sc_logic) (reshaped_106_reg_7252.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_107_read() {
    grp_dense_512_256_s_fu_248_input_107_read =  (sc_logic) (reshaped_107_reg_7257.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_108_read() {
    grp_dense_512_256_s_fu_248_input_108_read =  (sc_logic) (reshaped_108_reg_7262.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_109_read() {
    grp_dense_512_256_s_fu_248_input_109_read =  (sc_logic) (reshaped_109_reg_7267.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_10_read() {
    grp_dense_512_256_s_fu_248_input_10_read =  (sc_logic) (reshaped_10_reg_6772.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_110_read() {
    grp_dense_512_256_s_fu_248_input_110_read =  (sc_logic) (reshaped_110_reg_7272.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_111_read() {
    grp_dense_512_256_s_fu_248_input_111_read =  (sc_logic) (reshaped_111_reg_7277.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_112_read() {
    grp_dense_512_256_s_fu_248_input_112_read =  (sc_logic) (reshaped_112_reg_7282.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_113_read() {
    grp_dense_512_256_s_fu_248_input_113_read =  (sc_logic) (reshaped_113_reg_7287.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_114_read() {
    grp_dense_512_256_s_fu_248_input_114_read =  (sc_logic) (reshaped_114_reg_7292.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_115_read() {
    grp_dense_512_256_s_fu_248_input_115_read =  (sc_logic) (reshaped_115_reg_7297.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_116_read() {
    grp_dense_512_256_s_fu_248_input_116_read =  (sc_logic) (reshaped_116_reg_7302.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_117_read() {
    grp_dense_512_256_s_fu_248_input_117_read =  (sc_logic) (reshaped_117_reg_7307.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_118_read() {
    grp_dense_512_256_s_fu_248_input_118_read =  (sc_logic) (reshaped_118_reg_7312.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_119_read() {
    grp_dense_512_256_s_fu_248_input_119_read =  (sc_logic) (reshaped_119_reg_7317.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_11_read() {
    grp_dense_512_256_s_fu_248_input_11_read =  (sc_logic) (reshaped_11_reg_6777.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_120_read() {
    grp_dense_512_256_s_fu_248_input_120_read =  (sc_logic) (reshaped_120_reg_7322.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_121_read() {
    grp_dense_512_256_s_fu_248_input_121_read =  (sc_logic) (reshaped_121_reg_7327.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_122_read() {
    grp_dense_512_256_s_fu_248_input_122_read =  (sc_logic) (reshaped_122_reg_7332.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_123_read() {
    grp_dense_512_256_s_fu_248_input_123_read =  (sc_logic) (reshaped_123_reg_7337.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_124_read() {
    grp_dense_512_256_s_fu_248_input_124_read =  (sc_logic) (reshaped_124_reg_7342.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_125_read() {
    grp_dense_512_256_s_fu_248_input_125_read =  (sc_logic) (reshaped_125_reg_7347.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_126_read() {
    grp_dense_512_256_s_fu_248_input_126_read =  (sc_logic) (reshaped_126_reg_7352.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_127_read() {
    grp_dense_512_256_s_fu_248_input_127_read =  (sc_logic) (reshaped_127_reg_7357.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_128_read() {
    grp_dense_512_256_s_fu_248_input_128_read =  (sc_logic) (reshaped_128_reg_7362.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_129_read() {
    grp_dense_512_256_s_fu_248_input_129_read =  (sc_logic) (reshaped_129_reg_7367.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_12_read() {
    grp_dense_512_256_s_fu_248_input_12_read =  (sc_logic) (reshaped_12_reg_6782.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_130_read() {
    grp_dense_512_256_s_fu_248_input_130_read =  (sc_logic) (reshaped_130_reg_7372.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_131_read() {
    grp_dense_512_256_s_fu_248_input_131_read =  (sc_logic) (reshaped_131_reg_7377.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_132_read() {
    grp_dense_512_256_s_fu_248_input_132_read =  (sc_logic) (reshaped_132_reg_7382.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_133_read() {
    grp_dense_512_256_s_fu_248_input_133_read =  (sc_logic) (reshaped_133_reg_7387.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_134_read() {
    grp_dense_512_256_s_fu_248_input_134_read =  (sc_logic) (reshaped_134_reg_7392.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_135_read() {
    grp_dense_512_256_s_fu_248_input_135_read =  (sc_logic) (reshaped_135_reg_7397.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_136_read() {
    grp_dense_512_256_s_fu_248_input_136_read =  (sc_logic) (reshaped_136_reg_7402.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_137_read() {
    grp_dense_512_256_s_fu_248_input_137_read =  (sc_logic) (reshaped_137_reg_7407.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_138_read() {
    grp_dense_512_256_s_fu_248_input_138_read =  (sc_logic) (reshaped_138_reg_7412.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_139_read() {
    grp_dense_512_256_s_fu_248_input_139_read =  (sc_logic) (reshaped_139_reg_7417.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_13_read() {
    grp_dense_512_256_s_fu_248_input_13_read =  (sc_logic) (reshaped_13_reg_6787.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_140_read() {
    grp_dense_512_256_s_fu_248_input_140_read =  (sc_logic) (reshaped_140_reg_7422.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_141_read() {
    grp_dense_512_256_s_fu_248_input_141_read =  (sc_logic) (reshaped_141_reg_7427.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_142_read() {
    grp_dense_512_256_s_fu_248_input_142_read =  (sc_logic) (reshaped_142_reg_7432.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_143_read() {
    grp_dense_512_256_s_fu_248_input_143_read =  (sc_logic) (reshaped_143_reg_7437.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_144_read() {
    grp_dense_512_256_s_fu_248_input_144_read =  (sc_logic) (reshaped_144_reg_7442.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_145_read() {
    grp_dense_512_256_s_fu_248_input_145_read =  (sc_logic) (reshaped_145_reg_7447.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_146_read() {
    grp_dense_512_256_s_fu_248_input_146_read =  (sc_logic) (reshaped_146_reg_7452.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_147_read() {
    grp_dense_512_256_s_fu_248_input_147_read =  (sc_logic) (reshaped_147_reg_7457.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_148_read() {
    grp_dense_512_256_s_fu_248_input_148_read =  (sc_logic) (reshaped_148_reg_7462.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_149_read() {
    grp_dense_512_256_s_fu_248_input_149_read =  (sc_logic) (reshaped_149_reg_7467.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_14_read() {
    grp_dense_512_256_s_fu_248_input_14_read =  (sc_logic) (reshaped_14_reg_6792.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_150_read() {
    grp_dense_512_256_s_fu_248_input_150_read =  (sc_logic) (reshaped_150_reg_7472.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_151_read() {
    grp_dense_512_256_s_fu_248_input_151_read =  (sc_logic) (reshaped_151_reg_7477.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_152_read() {
    grp_dense_512_256_s_fu_248_input_152_read =  (sc_logic) (reshaped_152_reg_7482.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_153_read() {
    grp_dense_512_256_s_fu_248_input_153_read =  (sc_logic) (reshaped_153_reg_7487.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_154_read() {
    grp_dense_512_256_s_fu_248_input_154_read =  (sc_logic) (reshaped_154_reg_7492.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_155_read() {
    grp_dense_512_256_s_fu_248_input_155_read =  (sc_logic) (reshaped_155_reg_7497.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_156_read() {
    grp_dense_512_256_s_fu_248_input_156_read =  (sc_logic) (reshaped_156_reg_7502.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_157_read() {
    grp_dense_512_256_s_fu_248_input_157_read =  (sc_logic) (reshaped_157_reg_7507.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_158_read() {
    grp_dense_512_256_s_fu_248_input_158_read =  (sc_logic) (reshaped_158_reg_7512.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_159_read() {
    grp_dense_512_256_s_fu_248_input_159_read =  (sc_logic) (reshaped_159_reg_7517.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_15_read() {
    grp_dense_512_256_s_fu_248_input_15_read =  (sc_logic) (reshaped_15_reg_6797.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_160_read() {
    grp_dense_512_256_s_fu_248_input_160_read =  (sc_logic) (reshaped_160_reg_7522.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_161_read() {
    grp_dense_512_256_s_fu_248_input_161_read =  (sc_logic) (reshaped_161_reg_7527.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_162_read() {
    grp_dense_512_256_s_fu_248_input_162_read =  (sc_logic) (reshaped_162_reg_7532.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_163_read() {
    grp_dense_512_256_s_fu_248_input_163_read =  (sc_logic) (reshaped_163_reg_7537.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_164_read() {
    grp_dense_512_256_s_fu_248_input_164_read =  (sc_logic) (reshaped_164_reg_7542.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_165_read() {
    grp_dense_512_256_s_fu_248_input_165_read =  (sc_logic) (reshaped_165_reg_7547.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_166_read() {
    grp_dense_512_256_s_fu_248_input_166_read =  (sc_logic) (reshaped_166_reg_7552.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_167_read() {
    grp_dense_512_256_s_fu_248_input_167_read =  (sc_logic) (reshaped_167_reg_7557.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_168_read() {
    grp_dense_512_256_s_fu_248_input_168_read =  (sc_logic) (reshaped_168_reg_7562.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_169_read() {
    grp_dense_512_256_s_fu_248_input_169_read =  (sc_logic) (reshaped_169_reg_7567.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_16_read() {
    grp_dense_512_256_s_fu_248_input_16_read =  (sc_logic) (reshaped_16_reg_6802.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_170_read() {
    grp_dense_512_256_s_fu_248_input_170_read =  (sc_logic) (reshaped_170_reg_7572.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_171_read() {
    grp_dense_512_256_s_fu_248_input_171_read =  (sc_logic) (reshaped_171_reg_7577.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_172_read() {
    grp_dense_512_256_s_fu_248_input_172_read =  (sc_logic) (reshaped_172_reg_7582.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_173_read() {
    grp_dense_512_256_s_fu_248_input_173_read =  (sc_logic) (reshaped_173_reg_7587.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_174_read() {
    grp_dense_512_256_s_fu_248_input_174_read =  (sc_logic) (reshaped_174_reg_7592.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_175_read() {
    grp_dense_512_256_s_fu_248_input_175_read =  (sc_logic) (reshaped_175_reg_7597.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_176_read() {
    grp_dense_512_256_s_fu_248_input_176_read =  (sc_logic) (reshaped_176_reg_7602.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_177_read() {
    grp_dense_512_256_s_fu_248_input_177_read =  (sc_logic) (reshaped_177_reg_7607.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_178_read() {
    grp_dense_512_256_s_fu_248_input_178_read =  (sc_logic) (reshaped_178_reg_7612.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_179_read() {
    grp_dense_512_256_s_fu_248_input_179_read =  (sc_logic) (reshaped_179_reg_7617.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_17_read() {
    grp_dense_512_256_s_fu_248_input_17_read =  (sc_logic) (reshaped_17_reg_6807.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_180_read() {
    grp_dense_512_256_s_fu_248_input_180_read =  (sc_logic) (reshaped_180_reg_7622.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_181_read() {
    grp_dense_512_256_s_fu_248_input_181_read =  (sc_logic) (reshaped_181_reg_7627.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_182_read() {
    grp_dense_512_256_s_fu_248_input_182_read =  (sc_logic) (reshaped_182_reg_7632.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_183_read() {
    grp_dense_512_256_s_fu_248_input_183_read =  (sc_logic) (reshaped_183_reg_7637.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_184_read() {
    grp_dense_512_256_s_fu_248_input_184_read =  (sc_logic) (reshaped_184_reg_7642.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_185_read() {
    grp_dense_512_256_s_fu_248_input_185_read =  (sc_logic) (reshaped_185_reg_7647.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_186_read() {
    grp_dense_512_256_s_fu_248_input_186_read =  (sc_logic) (reshaped_186_reg_7652.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_187_read() {
    grp_dense_512_256_s_fu_248_input_187_read =  (sc_logic) (reshaped_187_reg_7657.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_188_read() {
    grp_dense_512_256_s_fu_248_input_188_read =  (sc_logic) (reshaped_188_reg_7662.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_189_read() {
    grp_dense_512_256_s_fu_248_input_189_read =  (sc_logic) (reshaped_189_reg_7667.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_18_read() {
    grp_dense_512_256_s_fu_248_input_18_read =  (sc_logic) (reshaped_18_reg_6812.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_190_read() {
    grp_dense_512_256_s_fu_248_input_190_read =  (sc_logic) (reshaped_190_reg_7672.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_191_read() {
    grp_dense_512_256_s_fu_248_input_191_read =  (sc_logic) (reshaped_191_reg_7677.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_192_read() {
    grp_dense_512_256_s_fu_248_input_192_read =  (sc_logic) (reshaped_192_reg_7682.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_193_read() {
    grp_dense_512_256_s_fu_248_input_193_read =  (sc_logic) (reshaped_193_reg_7687.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_194_read() {
    grp_dense_512_256_s_fu_248_input_194_read =  (sc_logic) (reshaped_194_reg_7692.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_195_read() {
    grp_dense_512_256_s_fu_248_input_195_read =  (sc_logic) (reshaped_195_reg_7697.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_196_read() {
    grp_dense_512_256_s_fu_248_input_196_read =  (sc_logic) (reshaped_196_reg_7702.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_197_read() {
    grp_dense_512_256_s_fu_248_input_197_read =  (sc_logic) (reshaped_197_reg_7707.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_198_read() {
    grp_dense_512_256_s_fu_248_input_198_read =  (sc_logic) (reshaped_198_reg_7712.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_199_read() {
    grp_dense_512_256_s_fu_248_input_199_read =  (sc_logic) (reshaped_199_reg_7717.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_19_read() {
    grp_dense_512_256_s_fu_248_input_19_read =  (sc_logic) (reshaped_19_reg_6817.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_1_read() {
    grp_dense_512_256_s_fu_248_input_1_read =  (sc_logic) (reshaped_1_reg_6727.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_200_read() {
    grp_dense_512_256_s_fu_248_input_200_read =  (sc_logic) (reshaped_200_reg_7722.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_201_read() {
    grp_dense_512_256_s_fu_248_input_201_read =  (sc_logic) (reshaped_201_reg_7727.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_202_read() {
    grp_dense_512_256_s_fu_248_input_202_read =  (sc_logic) (reshaped_202_reg_7732.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_203_read() {
    grp_dense_512_256_s_fu_248_input_203_read =  (sc_logic) (reshaped_203_reg_7737.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_204_read() {
    grp_dense_512_256_s_fu_248_input_204_read =  (sc_logic) (reshaped_204_reg_7742.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_205_read() {
    grp_dense_512_256_s_fu_248_input_205_read =  (sc_logic) (reshaped_205_reg_7747.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_206_read() {
    grp_dense_512_256_s_fu_248_input_206_read =  (sc_logic) (reshaped_206_reg_7752.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_207_read() {
    grp_dense_512_256_s_fu_248_input_207_read =  (sc_logic) (reshaped_207_reg_7757.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_208_read() {
    grp_dense_512_256_s_fu_248_input_208_read =  (sc_logic) (reshaped_208_reg_7762.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_209_read() {
    grp_dense_512_256_s_fu_248_input_209_read =  (sc_logic) (reshaped_209_reg_7767.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_20_read() {
    grp_dense_512_256_s_fu_248_input_20_read =  (sc_logic) (reshaped_20_reg_6822.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_210_read() {
    grp_dense_512_256_s_fu_248_input_210_read =  (sc_logic) (reshaped_210_reg_7772.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_211_read() {
    grp_dense_512_256_s_fu_248_input_211_read =  (sc_logic) (reshaped_211_reg_7777.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_212_read() {
    grp_dense_512_256_s_fu_248_input_212_read =  (sc_logic) (reshaped_212_reg_7782.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_213_read() {
    grp_dense_512_256_s_fu_248_input_213_read =  (sc_logic) (reshaped_213_reg_7787.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_214_read() {
    grp_dense_512_256_s_fu_248_input_214_read =  (sc_logic) (reshaped_214_reg_7792.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_215_read() {
    grp_dense_512_256_s_fu_248_input_215_read =  (sc_logic) (reshaped_215_reg_7797.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_216_read() {
    grp_dense_512_256_s_fu_248_input_216_read =  (sc_logic) (reshaped_216_reg_7802.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_217_read() {
    grp_dense_512_256_s_fu_248_input_217_read =  (sc_logic) (reshaped_217_reg_7807.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_218_read() {
    grp_dense_512_256_s_fu_248_input_218_read =  (sc_logic) (reshaped_218_reg_7812.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_219_read() {
    grp_dense_512_256_s_fu_248_input_219_read =  (sc_logic) (reshaped_219_reg_7817.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_21_read() {
    grp_dense_512_256_s_fu_248_input_21_read =  (sc_logic) (reshaped_21_reg_6827.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_220_read() {
    grp_dense_512_256_s_fu_248_input_220_read =  (sc_logic) (reshaped_220_reg_7822.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_221_read() {
    grp_dense_512_256_s_fu_248_input_221_read =  (sc_logic) (reshaped_221_reg_7827.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_222_read() {
    grp_dense_512_256_s_fu_248_input_222_read =  (sc_logic) (reshaped_222_reg_7832.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_223_read() {
    grp_dense_512_256_s_fu_248_input_223_read =  (sc_logic) (reshaped_223_reg_7837.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_224_read() {
    grp_dense_512_256_s_fu_248_input_224_read =  (sc_logic) (reshaped_224_reg_7842.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_225_read() {
    grp_dense_512_256_s_fu_248_input_225_read =  (sc_logic) (reshaped_225_reg_7847.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_226_read() {
    grp_dense_512_256_s_fu_248_input_226_read =  (sc_logic) (reshaped_226_reg_7852.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_227_read() {
    grp_dense_512_256_s_fu_248_input_227_read =  (sc_logic) (reshaped_227_reg_7857.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_228_read() {
    grp_dense_512_256_s_fu_248_input_228_read =  (sc_logic) (reshaped_228_reg_7862.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_229_read() {
    grp_dense_512_256_s_fu_248_input_229_read =  (sc_logic) (reshaped_229_reg_7867.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_22_read() {
    grp_dense_512_256_s_fu_248_input_22_read =  (sc_logic) (reshaped_22_reg_6832.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_230_read() {
    grp_dense_512_256_s_fu_248_input_230_read =  (sc_logic) (reshaped_230_reg_7872.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_231_read() {
    grp_dense_512_256_s_fu_248_input_231_read =  (sc_logic) (reshaped_231_reg_7877.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_232_read() {
    grp_dense_512_256_s_fu_248_input_232_read =  (sc_logic) (reshaped_232_reg_7882.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_233_read() {
    grp_dense_512_256_s_fu_248_input_233_read =  (sc_logic) (reshaped_233_reg_7887.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_234_read() {
    grp_dense_512_256_s_fu_248_input_234_read =  (sc_logic) (reshaped_234_reg_7892.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_235_read() {
    grp_dense_512_256_s_fu_248_input_235_read =  (sc_logic) (reshaped_235_reg_7897.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_236_read() {
    grp_dense_512_256_s_fu_248_input_236_read =  (sc_logic) (reshaped_236_reg_7902.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_237_read() {
    grp_dense_512_256_s_fu_248_input_237_read =  (sc_logic) (reshaped_237_reg_7907.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_238_read() {
    grp_dense_512_256_s_fu_248_input_238_read =  (sc_logic) (reshaped_238_reg_7912.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_239_read() {
    grp_dense_512_256_s_fu_248_input_239_read =  (sc_logic) (reshaped_239_reg_7917.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_23_read() {
    grp_dense_512_256_s_fu_248_input_23_read =  (sc_logic) (reshaped_23_reg_6837.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_240_read() {
    grp_dense_512_256_s_fu_248_input_240_read =  (sc_logic) (reshaped_240_reg_7922.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_241_read() {
    grp_dense_512_256_s_fu_248_input_241_read =  (sc_logic) (reshaped_241_reg_7927.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_242_read() {
    grp_dense_512_256_s_fu_248_input_242_read =  (sc_logic) (reshaped_242_reg_7932.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_243_read() {
    grp_dense_512_256_s_fu_248_input_243_read =  (sc_logic) (reshaped_243_reg_7937.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_244_read() {
    grp_dense_512_256_s_fu_248_input_244_read =  (sc_logic) (reshaped_244_reg_7942.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_245_read() {
    grp_dense_512_256_s_fu_248_input_245_read =  (sc_logic) (reshaped_245_reg_7947.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_246_read() {
    grp_dense_512_256_s_fu_248_input_246_read =  (sc_logic) (reshaped_246_reg_7952.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_247_read() {
    grp_dense_512_256_s_fu_248_input_247_read =  (sc_logic) (reshaped_247_reg_7957.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_248_read() {
    grp_dense_512_256_s_fu_248_input_248_read =  (sc_logic) (reshaped_248_reg_7962.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_249_read() {
    grp_dense_512_256_s_fu_248_input_249_read =  (sc_logic) (reshaped_249_reg_7967.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_24_read() {
    grp_dense_512_256_s_fu_248_input_24_read =  (sc_logic) (reshaped_24_reg_6842.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_250_read() {
    grp_dense_512_256_s_fu_248_input_250_read =  (sc_logic) (reshaped_250_reg_7972.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_251_read() {
    grp_dense_512_256_s_fu_248_input_251_read =  (sc_logic) (reshaped_251_reg_7977.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_252_read() {
    grp_dense_512_256_s_fu_248_input_252_read =  (sc_logic) (reshaped_252_reg_7982.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_253_read() {
    grp_dense_512_256_s_fu_248_input_253_read =  (sc_logic) (reshaped_253_reg_7987.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_254_read() {
    grp_dense_512_256_s_fu_248_input_254_read =  (sc_logic) (reshaped_254_reg_7992.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_255_read() {
    grp_dense_512_256_s_fu_248_input_255_read =  (sc_logic) (reshaped_255_reg_7997.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_256_read() {
    grp_dense_512_256_s_fu_248_input_256_read =  (sc_logic) (reshaped_256_reg_8002.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_257_read() {
    grp_dense_512_256_s_fu_248_input_257_read =  (sc_logic) (reshaped_257_reg_8007.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_258_read() {
    grp_dense_512_256_s_fu_248_input_258_read =  (sc_logic) (reshaped_258_reg_8012.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_259_read() {
    grp_dense_512_256_s_fu_248_input_259_read =  (sc_logic) (reshaped_259_reg_8017.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_25_read() {
    grp_dense_512_256_s_fu_248_input_25_read =  (sc_logic) (reshaped_25_reg_6847.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_260_read() {
    grp_dense_512_256_s_fu_248_input_260_read =  (sc_logic) (reshaped_260_reg_8022.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_261_read() {
    grp_dense_512_256_s_fu_248_input_261_read =  (sc_logic) (reshaped_261_reg_8027.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_262_read() {
    grp_dense_512_256_s_fu_248_input_262_read =  (sc_logic) (reshaped_262_reg_8032.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_263_read() {
    grp_dense_512_256_s_fu_248_input_263_read =  (sc_logic) (reshaped_263_reg_8037.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_264_read() {
    grp_dense_512_256_s_fu_248_input_264_read =  (sc_logic) (reshaped_264_reg_8042.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_265_read() {
    grp_dense_512_256_s_fu_248_input_265_read =  (sc_logic) (reshaped_265_reg_8047.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_266_read() {
    grp_dense_512_256_s_fu_248_input_266_read =  (sc_logic) (reshaped_266_reg_8052.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_267_read() {
    grp_dense_512_256_s_fu_248_input_267_read =  (sc_logic) (reshaped_267_reg_8057.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_268_read() {
    grp_dense_512_256_s_fu_248_input_268_read =  (sc_logic) (reshaped_268_reg_8062.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_269_read() {
    grp_dense_512_256_s_fu_248_input_269_read =  (sc_logic) (reshaped_269_reg_8067.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_26_read() {
    grp_dense_512_256_s_fu_248_input_26_read =  (sc_logic) (reshaped_26_reg_6852.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_270_read() {
    grp_dense_512_256_s_fu_248_input_270_read =  (sc_logic) (reshaped_270_reg_8072.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_271_read() {
    grp_dense_512_256_s_fu_248_input_271_read =  (sc_logic) (reshaped_271_reg_8077.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_272_read() {
    grp_dense_512_256_s_fu_248_input_272_read =  (sc_logic) (reshaped_272_reg_8082.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_273_read() {
    grp_dense_512_256_s_fu_248_input_273_read =  (sc_logic) (reshaped_273_reg_8087.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_274_read() {
    grp_dense_512_256_s_fu_248_input_274_read =  (sc_logic) (reshaped_274_reg_8092.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_275_read() {
    grp_dense_512_256_s_fu_248_input_275_read =  (sc_logic) (reshaped_275_reg_8097.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_276_read() {
    grp_dense_512_256_s_fu_248_input_276_read =  (sc_logic) (reshaped_276_reg_8102.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_277_read() {
    grp_dense_512_256_s_fu_248_input_277_read =  (sc_logic) (reshaped_277_reg_8107.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_278_read() {
    grp_dense_512_256_s_fu_248_input_278_read =  (sc_logic) (reshaped_278_reg_8112.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_279_read() {
    grp_dense_512_256_s_fu_248_input_279_read =  (sc_logic) (reshaped_279_reg_8117.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_27_read() {
    grp_dense_512_256_s_fu_248_input_27_read =  (sc_logic) (reshaped_27_reg_6857.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_280_read() {
    grp_dense_512_256_s_fu_248_input_280_read =  (sc_logic) (reshaped_280_reg_8122.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_281_read() {
    grp_dense_512_256_s_fu_248_input_281_read =  (sc_logic) (reshaped_281_reg_8127.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_282_read() {
    grp_dense_512_256_s_fu_248_input_282_read =  (sc_logic) (reshaped_282_reg_8132.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_283_read() {
    grp_dense_512_256_s_fu_248_input_283_read =  (sc_logic) (reshaped_283_reg_8137.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_284_read() {
    grp_dense_512_256_s_fu_248_input_284_read =  (sc_logic) (reshaped_284_reg_8142.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_285_read() {
    grp_dense_512_256_s_fu_248_input_285_read =  (sc_logic) (reshaped_285_reg_8147.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_286_read() {
    grp_dense_512_256_s_fu_248_input_286_read =  (sc_logic) (reshaped_286_reg_8152.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_287_read() {
    grp_dense_512_256_s_fu_248_input_287_read =  (sc_logic) (reshaped_287_reg_8157.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_288_read() {
    grp_dense_512_256_s_fu_248_input_288_read =  (sc_logic) (reshaped_288_reg_8162.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_289_read() {
    grp_dense_512_256_s_fu_248_input_289_read =  (sc_logic) (reshaped_289_reg_8167.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_28_read() {
    grp_dense_512_256_s_fu_248_input_28_read =  (sc_logic) (reshaped_28_reg_6862.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_290_read() {
    grp_dense_512_256_s_fu_248_input_290_read =  (sc_logic) (reshaped_290_reg_8172.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_291_read() {
    grp_dense_512_256_s_fu_248_input_291_read =  (sc_logic) (reshaped_291_reg_8177.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_292_read() {
    grp_dense_512_256_s_fu_248_input_292_read =  (sc_logic) (reshaped_292_reg_8182.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_293_read() {
    grp_dense_512_256_s_fu_248_input_293_read =  (sc_logic) (reshaped_293_reg_8187.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_294_read() {
    grp_dense_512_256_s_fu_248_input_294_read =  (sc_logic) (reshaped_294_reg_8192.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_295_read() {
    grp_dense_512_256_s_fu_248_input_295_read =  (sc_logic) (reshaped_295_reg_8197.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_296_read() {
    grp_dense_512_256_s_fu_248_input_296_read =  (sc_logic) (reshaped_296_reg_8202.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_297_read() {
    grp_dense_512_256_s_fu_248_input_297_read =  (sc_logic) (reshaped_297_reg_8207.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_298_read() {
    grp_dense_512_256_s_fu_248_input_298_read =  (sc_logic) (reshaped_298_reg_8212.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_299_read() {
    grp_dense_512_256_s_fu_248_input_299_read =  (sc_logic) (reshaped_299_reg_8217.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_29_read() {
    grp_dense_512_256_s_fu_248_input_29_read =  (sc_logic) (reshaped_29_reg_6867.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_2_read() {
    grp_dense_512_256_s_fu_248_input_2_read =  (sc_logic) (reshaped_2_reg_6732.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_300_read() {
    grp_dense_512_256_s_fu_248_input_300_read =  (sc_logic) (reshaped_300_reg_8222.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_301_read() {
    grp_dense_512_256_s_fu_248_input_301_read =  (sc_logic) (reshaped_301_reg_8227.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_302_read() {
    grp_dense_512_256_s_fu_248_input_302_read =  (sc_logic) (reshaped_302_reg_8232.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_303_read() {
    grp_dense_512_256_s_fu_248_input_303_read =  (sc_logic) (reshaped_303_reg_8237.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_304_read() {
    grp_dense_512_256_s_fu_248_input_304_read =  (sc_logic) (reshaped_304_reg_8242.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_305_read() {
    grp_dense_512_256_s_fu_248_input_305_read =  (sc_logic) (reshaped_305_reg_8247.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_306_read() {
    grp_dense_512_256_s_fu_248_input_306_read =  (sc_logic) (reshaped_306_reg_8252.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_307_read() {
    grp_dense_512_256_s_fu_248_input_307_read =  (sc_logic) (reshaped_307_reg_8257.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_308_read() {
    grp_dense_512_256_s_fu_248_input_308_read =  (sc_logic) (reshaped_308_reg_8262.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_309_read() {
    grp_dense_512_256_s_fu_248_input_309_read =  (sc_logic) (reshaped_309_reg_8267.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_30_read() {
    grp_dense_512_256_s_fu_248_input_30_read =  (sc_logic) (reshaped_30_reg_6872.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_310_read() {
    grp_dense_512_256_s_fu_248_input_310_read =  (sc_logic) (reshaped_310_reg_8272.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_311_read() {
    grp_dense_512_256_s_fu_248_input_311_read =  (sc_logic) (reshaped_311_reg_8277.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_312_read() {
    grp_dense_512_256_s_fu_248_input_312_read =  (sc_logic) (reshaped_312_reg_8282.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_313_read() {
    grp_dense_512_256_s_fu_248_input_313_read =  (sc_logic) (reshaped_313_reg_8287.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_314_read() {
    grp_dense_512_256_s_fu_248_input_314_read =  (sc_logic) (reshaped_314_reg_8292.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_315_read() {
    grp_dense_512_256_s_fu_248_input_315_read =  (sc_logic) (reshaped_315_reg_8297.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_316_read() {
    grp_dense_512_256_s_fu_248_input_316_read =  (sc_logic) (reshaped_316_reg_8302.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_317_read() {
    grp_dense_512_256_s_fu_248_input_317_read =  (sc_logic) (reshaped_317_reg_8307.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_318_read() {
    grp_dense_512_256_s_fu_248_input_318_read =  (sc_logic) (reshaped_318_reg_8312.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_319_read() {
    grp_dense_512_256_s_fu_248_input_319_read =  (sc_logic) (reshaped_319_reg_8317.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_31_read() {
    grp_dense_512_256_s_fu_248_input_31_read =  (sc_logic) (reshaped_31_reg_6877.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_320_read() {
    grp_dense_512_256_s_fu_248_input_320_read =  (sc_logic) (reshaped_320_reg_8322.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_321_read() {
    grp_dense_512_256_s_fu_248_input_321_read =  (sc_logic) (reshaped_321_reg_8327.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_322_read() {
    grp_dense_512_256_s_fu_248_input_322_read =  (sc_logic) (reshaped_322_reg_8332.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_323_read() {
    grp_dense_512_256_s_fu_248_input_323_read =  (sc_logic) (reshaped_323_reg_8337.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_324_read() {
    grp_dense_512_256_s_fu_248_input_324_read =  (sc_logic) (reshaped_324_reg_8342.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_325_read() {
    grp_dense_512_256_s_fu_248_input_325_read =  (sc_logic) (reshaped_325_reg_8347.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_326_read() {
    grp_dense_512_256_s_fu_248_input_326_read =  (sc_logic) (reshaped_326_reg_8352.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_327_read() {
    grp_dense_512_256_s_fu_248_input_327_read =  (sc_logic) (reshaped_327_reg_8357.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_328_read() {
    grp_dense_512_256_s_fu_248_input_328_read =  (sc_logic) (reshaped_328_reg_8362.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_329_read() {
    grp_dense_512_256_s_fu_248_input_329_read =  (sc_logic) (reshaped_329_reg_8367.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_32_read() {
    grp_dense_512_256_s_fu_248_input_32_read =  (sc_logic) (reshaped_32_reg_6882.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_330_read() {
    grp_dense_512_256_s_fu_248_input_330_read =  (sc_logic) (reshaped_330_reg_8372.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_331_read() {
    grp_dense_512_256_s_fu_248_input_331_read =  (sc_logic) (reshaped_331_reg_8377.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_332_read() {
    grp_dense_512_256_s_fu_248_input_332_read =  (sc_logic) (reshaped_332_reg_8382.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_333_read() {
    grp_dense_512_256_s_fu_248_input_333_read =  (sc_logic) (reshaped_333_reg_8387.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_334_read() {
    grp_dense_512_256_s_fu_248_input_334_read =  (sc_logic) (reshaped_334_reg_8392.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_335_read() {
    grp_dense_512_256_s_fu_248_input_335_read =  (sc_logic) (reshaped_335_reg_8397.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_336_read() {
    grp_dense_512_256_s_fu_248_input_336_read =  (sc_logic) (reshaped_336_reg_8402.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_337_read() {
    grp_dense_512_256_s_fu_248_input_337_read =  (sc_logic) (reshaped_337_reg_8407.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_338_read() {
    grp_dense_512_256_s_fu_248_input_338_read =  (sc_logic) (reshaped_338_reg_8412.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_339_read() {
    grp_dense_512_256_s_fu_248_input_339_read =  (sc_logic) (reshaped_339_reg_8417.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_33_read() {
    grp_dense_512_256_s_fu_248_input_33_read =  (sc_logic) (reshaped_33_reg_6887.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_340_read() {
    grp_dense_512_256_s_fu_248_input_340_read =  (sc_logic) (reshaped_340_reg_8422.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_341_read() {
    grp_dense_512_256_s_fu_248_input_341_read =  (sc_logic) (reshaped_341_reg_8427.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_342_read() {
    grp_dense_512_256_s_fu_248_input_342_read =  (sc_logic) (reshaped_342_reg_8432.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_343_read() {
    grp_dense_512_256_s_fu_248_input_343_read =  (sc_logic) (reshaped_343_reg_8437.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_344_read() {
    grp_dense_512_256_s_fu_248_input_344_read =  (sc_logic) (reshaped_344_reg_8442.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_345_read() {
    grp_dense_512_256_s_fu_248_input_345_read =  (sc_logic) (reshaped_345_reg_8447.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_346_read() {
    grp_dense_512_256_s_fu_248_input_346_read =  (sc_logic) (reshaped_346_reg_8452.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_347_read() {
    grp_dense_512_256_s_fu_248_input_347_read =  (sc_logic) (reshaped_347_reg_8457.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_348_read() {
    grp_dense_512_256_s_fu_248_input_348_read =  (sc_logic) (reshaped_348_reg_8462.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_349_read() {
    grp_dense_512_256_s_fu_248_input_349_read =  (sc_logic) (reshaped_349_reg_8467.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_34_read() {
    grp_dense_512_256_s_fu_248_input_34_read =  (sc_logic) (reshaped_34_reg_6892.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_350_read() {
    grp_dense_512_256_s_fu_248_input_350_read =  (sc_logic) (reshaped_350_reg_8472.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_351_read() {
    grp_dense_512_256_s_fu_248_input_351_read =  (sc_logic) (reshaped_351_reg_8477.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_352_read() {
    grp_dense_512_256_s_fu_248_input_352_read =  (sc_logic) (reshaped_352_reg_8482.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_353_read() {
    grp_dense_512_256_s_fu_248_input_353_read =  (sc_logic) (reshaped_353_reg_8487.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_354_read() {
    grp_dense_512_256_s_fu_248_input_354_read =  (sc_logic) (reshaped_354_reg_8492.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_355_read() {
    grp_dense_512_256_s_fu_248_input_355_read =  (sc_logic) (reshaped_355_reg_8497.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_356_read() {
    grp_dense_512_256_s_fu_248_input_356_read =  (sc_logic) (reshaped_356_reg_8502.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_357_read() {
    grp_dense_512_256_s_fu_248_input_357_read =  (sc_logic) (reshaped_357_reg_8507.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_358_read() {
    grp_dense_512_256_s_fu_248_input_358_read =  (sc_logic) (reshaped_358_reg_8512.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_359_read() {
    grp_dense_512_256_s_fu_248_input_359_read =  (sc_logic) (reshaped_359_reg_8517.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_35_read() {
    grp_dense_512_256_s_fu_248_input_35_read =  (sc_logic) (reshaped_35_reg_6897.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_360_read() {
    grp_dense_512_256_s_fu_248_input_360_read =  (sc_logic) (reshaped_360_reg_8522.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_361_read() {
    grp_dense_512_256_s_fu_248_input_361_read =  (sc_logic) (reshaped_361_reg_8527.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_362_read() {
    grp_dense_512_256_s_fu_248_input_362_read =  (sc_logic) (reshaped_362_reg_8532.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_363_read() {
    grp_dense_512_256_s_fu_248_input_363_read =  (sc_logic) (reshaped_363_reg_8537.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_364_read() {
    grp_dense_512_256_s_fu_248_input_364_read =  (sc_logic) (reshaped_364_reg_8542.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_365_read() {
    grp_dense_512_256_s_fu_248_input_365_read =  (sc_logic) (reshaped_365_reg_8547.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_366_read() {
    grp_dense_512_256_s_fu_248_input_366_read =  (sc_logic) (reshaped_366_reg_8552.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_367_read() {
    grp_dense_512_256_s_fu_248_input_367_read =  (sc_logic) (reshaped_367_reg_8557.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_368_read() {
    grp_dense_512_256_s_fu_248_input_368_read =  (sc_logic) (reshaped_368_reg_8562.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_369_read() {
    grp_dense_512_256_s_fu_248_input_369_read =  (sc_logic) (reshaped_369_reg_8567.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_36_read() {
    grp_dense_512_256_s_fu_248_input_36_read =  (sc_logic) (reshaped_36_reg_6902.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_370_read() {
    grp_dense_512_256_s_fu_248_input_370_read =  (sc_logic) (reshaped_370_reg_8572.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_371_read() {
    grp_dense_512_256_s_fu_248_input_371_read =  (sc_logic) (reshaped_371_reg_8577.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_372_read() {
    grp_dense_512_256_s_fu_248_input_372_read =  (sc_logic) (reshaped_372_reg_8582.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_373_read() {
    grp_dense_512_256_s_fu_248_input_373_read =  (sc_logic) (reshaped_373_reg_8587.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_374_read() {
    grp_dense_512_256_s_fu_248_input_374_read =  (sc_logic) (reshaped_374_reg_8592.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_375_read() {
    grp_dense_512_256_s_fu_248_input_375_read =  (sc_logic) (reshaped_375_reg_8597.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_376_read() {
    grp_dense_512_256_s_fu_248_input_376_read =  (sc_logic) (reshaped_376_reg_8602.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_377_read() {
    grp_dense_512_256_s_fu_248_input_377_read =  (sc_logic) (reshaped_377_reg_8607.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_378_read() {
    grp_dense_512_256_s_fu_248_input_378_read =  (sc_logic) (reshaped_378_reg_8612.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_379_read() {
    grp_dense_512_256_s_fu_248_input_379_read =  (sc_logic) (reshaped_379_reg_8617.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_37_read() {
    grp_dense_512_256_s_fu_248_input_37_read =  (sc_logic) (reshaped_37_reg_6907.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_380_read() {
    grp_dense_512_256_s_fu_248_input_380_read =  (sc_logic) (reshaped_380_reg_8622.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_381_read() {
    grp_dense_512_256_s_fu_248_input_381_read =  (sc_logic) (reshaped_381_reg_8627.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_382_read() {
    grp_dense_512_256_s_fu_248_input_382_read =  (sc_logic) (reshaped_382_reg_8632.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_383_read() {
    grp_dense_512_256_s_fu_248_input_383_read =  (sc_logic) (reshaped_383_reg_8637.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_384_read() {
    grp_dense_512_256_s_fu_248_input_384_read =  (sc_logic) (reshaped_384_reg_8642.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_385_read() {
    grp_dense_512_256_s_fu_248_input_385_read =  (sc_logic) (reshaped_385_reg_8647.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_386_read() {
    grp_dense_512_256_s_fu_248_input_386_read =  (sc_logic) (reshaped_386_reg_8652.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_387_read() {
    grp_dense_512_256_s_fu_248_input_387_read =  (sc_logic) (reshaped_387_reg_8657.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_388_read() {
    grp_dense_512_256_s_fu_248_input_388_read =  (sc_logic) (reshaped_388_reg_8662.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_389_read() {
    grp_dense_512_256_s_fu_248_input_389_read =  (sc_logic) (reshaped_389_reg_8667.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_38_read() {
    grp_dense_512_256_s_fu_248_input_38_read =  (sc_logic) (reshaped_38_reg_6912.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_390_read() {
    grp_dense_512_256_s_fu_248_input_390_read =  (sc_logic) (reshaped_390_reg_8672.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_391_read() {
    grp_dense_512_256_s_fu_248_input_391_read =  (sc_logic) (reshaped_391_reg_8677.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_392_read() {
    grp_dense_512_256_s_fu_248_input_392_read =  (sc_logic) (reshaped_392_reg_8682.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_393_read() {
    grp_dense_512_256_s_fu_248_input_393_read =  (sc_logic) (reshaped_393_reg_8687.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_394_read() {
    grp_dense_512_256_s_fu_248_input_394_read =  (sc_logic) (reshaped_394_reg_8692.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_395_read() {
    grp_dense_512_256_s_fu_248_input_395_read =  (sc_logic) (reshaped_395_reg_8697.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_396_read() {
    grp_dense_512_256_s_fu_248_input_396_read =  (sc_logic) (reshaped_396_reg_8702.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_397_read() {
    grp_dense_512_256_s_fu_248_input_397_read =  (sc_logic) (reshaped_397_reg_8707.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_398_read() {
    grp_dense_512_256_s_fu_248_input_398_read =  (sc_logic) (reshaped_398_reg_8712.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_399_read() {
    grp_dense_512_256_s_fu_248_input_399_read =  (sc_logic) (reshaped_399_reg_8717.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_39_read() {
    grp_dense_512_256_s_fu_248_input_39_read =  (sc_logic) (reshaped_39_reg_6917.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_3_read() {
    grp_dense_512_256_s_fu_248_input_3_read =  (sc_logic) (reshaped_3_reg_6737.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_400_read() {
    grp_dense_512_256_s_fu_248_input_400_read =  (sc_logic) (reshaped_400_reg_8722.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_401_read() {
    grp_dense_512_256_s_fu_248_input_401_read =  (sc_logic) (reshaped_401_reg_8727.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_402_read() {
    grp_dense_512_256_s_fu_248_input_402_read =  (sc_logic) (reshaped_402_reg_8732.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_403_read() {
    grp_dense_512_256_s_fu_248_input_403_read =  (sc_logic) (reshaped_403_reg_8737.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_404_read() {
    grp_dense_512_256_s_fu_248_input_404_read =  (sc_logic) (reshaped_404_reg_8742.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_405_read() {
    grp_dense_512_256_s_fu_248_input_405_read =  (sc_logic) (reshaped_405_reg_8747.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_406_read() {
    grp_dense_512_256_s_fu_248_input_406_read =  (sc_logic) (reshaped_406_reg_8752.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_407_read() {
    grp_dense_512_256_s_fu_248_input_407_read =  (sc_logic) (reshaped_407_reg_8757.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_408_read() {
    grp_dense_512_256_s_fu_248_input_408_read =  (sc_logic) (reshaped_408_reg_8762.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_409_read() {
    grp_dense_512_256_s_fu_248_input_409_read =  (sc_logic) (reshaped_409_reg_8767.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_40_read() {
    grp_dense_512_256_s_fu_248_input_40_read =  (sc_logic) (reshaped_40_reg_6922.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_410_read() {
    grp_dense_512_256_s_fu_248_input_410_read =  (sc_logic) (reshaped_410_reg_8772.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_411_read() {
    grp_dense_512_256_s_fu_248_input_411_read =  (sc_logic) (reshaped_411_reg_8777.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_412_read() {
    grp_dense_512_256_s_fu_248_input_412_read =  (sc_logic) (reshaped_412_reg_8782.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_413_read() {
    grp_dense_512_256_s_fu_248_input_413_read =  (sc_logic) (reshaped_413_reg_8787.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_414_read() {
    grp_dense_512_256_s_fu_248_input_414_read =  (sc_logic) (reshaped_414_reg_8792.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_415_read() {
    grp_dense_512_256_s_fu_248_input_415_read =  (sc_logic) (reshaped_415_reg_8797.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_416_read() {
    grp_dense_512_256_s_fu_248_input_416_read =  (sc_logic) (reshaped_416_reg_8802.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_417_read() {
    grp_dense_512_256_s_fu_248_input_417_read =  (sc_logic) (reshaped_417_reg_8807.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_418_read() {
    grp_dense_512_256_s_fu_248_input_418_read =  (sc_logic) (reshaped_418_reg_8812.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_419_read() {
    grp_dense_512_256_s_fu_248_input_419_read =  (sc_logic) (reshaped_419_reg_8817.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_41_read() {
    grp_dense_512_256_s_fu_248_input_41_read =  (sc_logic) (reshaped_41_reg_6927.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_420_read() {
    grp_dense_512_256_s_fu_248_input_420_read =  (sc_logic) (reshaped_420_reg_8822.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_421_read() {
    grp_dense_512_256_s_fu_248_input_421_read =  (sc_logic) (reshaped_421_reg_8827.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_422_read() {
    grp_dense_512_256_s_fu_248_input_422_read =  (sc_logic) (reshaped_422_reg_8832.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_423_read() {
    grp_dense_512_256_s_fu_248_input_423_read =  (sc_logic) (reshaped_423_reg_8837.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_424_read() {
    grp_dense_512_256_s_fu_248_input_424_read =  (sc_logic) (reshaped_424_reg_8842.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_425_read() {
    grp_dense_512_256_s_fu_248_input_425_read =  (sc_logic) (reshaped_425_reg_8847.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_426_read() {
    grp_dense_512_256_s_fu_248_input_426_read =  (sc_logic) (reshaped_426_reg_8852.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_427_read() {
    grp_dense_512_256_s_fu_248_input_427_read =  (sc_logic) (reshaped_427_reg_8857.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_428_read() {
    grp_dense_512_256_s_fu_248_input_428_read =  (sc_logic) (reshaped_428_reg_8862.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_429_read() {
    grp_dense_512_256_s_fu_248_input_429_read =  (sc_logic) (reshaped_429_reg_8867.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_42_read() {
    grp_dense_512_256_s_fu_248_input_42_read =  (sc_logic) (reshaped_42_reg_6932.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_430_read() {
    grp_dense_512_256_s_fu_248_input_430_read =  (sc_logic) (reshaped_430_reg_8872.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_431_read() {
    grp_dense_512_256_s_fu_248_input_431_read =  (sc_logic) (reshaped_431_reg_8877.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_432_read() {
    grp_dense_512_256_s_fu_248_input_432_read =  (sc_logic) (reshaped_432_reg_8882.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_433_read() {
    grp_dense_512_256_s_fu_248_input_433_read =  (sc_logic) (reshaped_433_reg_8887.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_434_read() {
    grp_dense_512_256_s_fu_248_input_434_read =  (sc_logic) (reshaped_434_reg_8892.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_435_read() {
    grp_dense_512_256_s_fu_248_input_435_read =  (sc_logic) (reshaped_435_reg_8897.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_436_read() {
    grp_dense_512_256_s_fu_248_input_436_read =  (sc_logic) (reshaped_436_reg_8902.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_437_read() {
    grp_dense_512_256_s_fu_248_input_437_read =  (sc_logic) (reshaped_437_reg_8907.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_438_read() {
    grp_dense_512_256_s_fu_248_input_438_read =  (sc_logic) (reshaped_438_reg_8912.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_439_read() {
    grp_dense_512_256_s_fu_248_input_439_read =  (sc_logic) (reshaped_439_reg_8917.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_43_read() {
    grp_dense_512_256_s_fu_248_input_43_read =  (sc_logic) (reshaped_43_reg_6937.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_440_read() {
    grp_dense_512_256_s_fu_248_input_440_read =  (sc_logic) (reshaped_440_reg_8922.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_441_read() {
    grp_dense_512_256_s_fu_248_input_441_read =  (sc_logic) (reshaped_441_reg_8927.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_442_read() {
    grp_dense_512_256_s_fu_248_input_442_read =  (sc_logic) (reshaped_442_reg_8932.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_443_read() {
    grp_dense_512_256_s_fu_248_input_443_read =  (sc_logic) (reshaped_443_reg_8937.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_444_read() {
    grp_dense_512_256_s_fu_248_input_444_read =  (sc_logic) (reshaped_444_reg_8942.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_445_read() {
    grp_dense_512_256_s_fu_248_input_445_read =  (sc_logic) (reshaped_445_reg_8947.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_446_read() {
    grp_dense_512_256_s_fu_248_input_446_read =  (sc_logic) (reshaped_446_reg_8952.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_447_read() {
    grp_dense_512_256_s_fu_248_input_447_read =  (sc_logic) (reshaped_447_reg_8957.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_448_read() {
    grp_dense_512_256_s_fu_248_input_448_read =  (sc_logic) (reshaped_448_reg_8962.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_449_read() {
    grp_dense_512_256_s_fu_248_input_449_read =  (sc_logic) (reshaped_449_reg_8967.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_44_read() {
    grp_dense_512_256_s_fu_248_input_44_read =  (sc_logic) (reshaped_44_reg_6942.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_450_read() {
    grp_dense_512_256_s_fu_248_input_450_read =  (sc_logic) (reshaped_450_reg_8972.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_451_read() {
    grp_dense_512_256_s_fu_248_input_451_read =  (sc_logic) (reshaped_451_reg_8977.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_452_read() {
    grp_dense_512_256_s_fu_248_input_452_read =  (sc_logic) (reshaped_452_reg_8982.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_453_read() {
    grp_dense_512_256_s_fu_248_input_453_read =  (sc_logic) (reshaped_453_reg_8987.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_454_read() {
    grp_dense_512_256_s_fu_248_input_454_read =  (sc_logic) (reshaped_454_reg_8992.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_455_read() {
    grp_dense_512_256_s_fu_248_input_455_read =  (sc_logic) (reshaped_455_reg_8997.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_456_read() {
    grp_dense_512_256_s_fu_248_input_456_read =  (sc_logic) (reshaped_456_reg_9002.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_457_read() {
    grp_dense_512_256_s_fu_248_input_457_read =  (sc_logic) (reshaped_457_reg_9007.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_458_read() {
    grp_dense_512_256_s_fu_248_input_458_read =  (sc_logic) (reshaped_458_reg_9012.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_459_read() {
    grp_dense_512_256_s_fu_248_input_459_read =  (sc_logic) (reshaped_459_reg_9017.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_45_read() {
    grp_dense_512_256_s_fu_248_input_45_read =  (sc_logic) (reshaped_45_reg_6947.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_460_read() {
    grp_dense_512_256_s_fu_248_input_460_read =  (sc_logic) (reshaped_460_reg_9022.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_461_read() {
    grp_dense_512_256_s_fu_248_input_461_read =  (sc_logic) (reshaped_461_reg_9027.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_462_read() {
    grp_dense_512_256_s_fu_248_input_462_read =  (sc_logic) (reshaped_462_reg_9032.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_463_read() {
    grp_dense_512_256_s_fu_248_input_463_read =  (sc_logic) (reshaped_463_reg_9037.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_464_read() {
    grp_dense_512_256_s_fu_248_input_464_read =  (sc_logic) (reshaped_464_reg_9042.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_465_read() {
    grp_dense_512_256_s_fu_248_input_465_read =  (sc_logic) (reshaped_465_reg_9047.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_466_read() {
    grp_dense_512_256_s_fu_248_input_466_read =  (sc_logic) (reshaped_466_reg_9052.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_467_read() {
    grp_dense_512_256_s_fu_248_input_467_read =  (sc_logic) (reshaped_467_reg_9057.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_468_read() {
    grp_dense_512_256_s_fu_248_input_468_read =  (sc_logic) (reshaped_468_reg_9062.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_469_read() {
    grp_dense_512_256_s_fu_248_input_469_read =  (sc_logic) (reshaped_469_reg_9067.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_46_read() {
    grp_dense_512_256_s_fu_248_input_46_read =  (sc_logic) (reshaped_46_reg_6952.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_470_read() {
    grp_dense_512_256_s_fu_248_input_470_read =  (sc_logic) (reshaped_470_reg_9072.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_471_read() {
    grp_dense_512_256_s_fu_248_input_471_read =  (sc_logic) (reshaped_471_reg_9077.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_472_read() {
    grp_dense_512_256_s_fu_248_input_472_read =  (sc_logic) (reshaped_472_reg_9082.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_473_read() {
    grp_dense_512_256_s_fu_248_input_473_read =  (sc_logic) (reshaped_473_reg_9087.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_474_read() {
    grp_dense_512_256_s_fu_248_input_474_read =  (sc_logic) (reshaped_474_reg_9092.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_475_read() {
    grp_dense_512_256_s_fu_248_input_475_read =  (sc_logic) (reshaped_475_reg_9097.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_476_read() {
    grp_dense_512_256_s_fu_248_input_476_read =  (sc_logic) (reshaped_476_reg_9102.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_477_read() {
    grp_dense_512_256_s_fu_248_input_477_read =  (sc_logic) (reshaped_477_reg_9107.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_478_read() {
    grp_dense_512_256_s_fu_248_input_478_read =  (sc_logic) (reshaped_478_reg_9112.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_479_read() {
    grp_dense_512_256_s_fu_248_input_479_read =  (sc_logic) (reshaped_479_reg_9117.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_47_read() {
    grp_dense_512_256_s_fu_248_input_47_read =  (sc_logic) (reshaped_47_reg_6957.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_480_read() {
    grp_dense_512_256_s_fu_248_input_480_read =  (sc_logic) (reshaped_480_reg_9122.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_481_read() {
    grp_dense_512_256_s_fu_248_input_481_read =  (sc_logic) (reshaped_481_reg_9127.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_482_read() {
    grp_dense_512_256_s_fu_248_input_482_read =  (sc_logic) (reshaped_482_reg_9132.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_483_read() {
    grp_dense_512_256_s_fu_248_input_483_read =  (sc_logic) (reshaped_483_reg_9137.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_484_read() {
    grp_dense_512_256_s_fu_248_input_484_read =  (sc_logic) (reshaped_484_reg_9142.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_485_read() {
    grp_dense_512_256_s_fu_248_input_485_read =  (sc_logic) (reshaped_485_reg_9147.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_486_read() {
    grp_dense_512_256_s_fu_248_input_486_read =  (sc_logic) (reshaped_486_reg_9152.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_487_read() {
    grp_dense_512_256_s_fu_248_input_487_read =  (sc_logic) (reshaped_487_reg_9157.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_488_read() {
    grp_dense_512_256_s_fu_248_input_488_read =  (sc_logic) (reshaped_488_reg_9162.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_489_read() {
    grp_dense_512_256_s_fu_248_input_489_read =  (sc_logic) (reshaped_489_reg_9167.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_48_read() {
    grp_dense_512_256_s_fu_248_input_48_read =  (sc_logic) (reshaped_48_reg_6962.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_490_read() {
    grp_dense_512_256_s_fu_248_input_490_read =  (sc_logic) (reshaped_490_reg_9172.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_491_read() {
    grp_dense_512_256_s_fu_248_input_491_read =  (sc_logic) (reshaped_491_reg_9177.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_492_read() {
    grp_dense_512_256_s_fu_248_input_492_read =  (sc_logic) (reshaped_492_reg_9182.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_493_read() {
    grp_dense_512_256_s_fu_248_input_493_read =  (sc_logic) (reshaped_493_reg_9187.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_494_read() {
    grp_dense_512_256_s_fu_248_input_494_read =  (sc_logic) (reshaped_494_reg_9192.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_495_read() {
    grp_dense_512_256_s_fu_248_input_495_read =  (sc_logic) (reshaped_495_reg_9197.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_496_read() {
    grp_dense_512_256_s_fu_248_input_496_read =  (sc_logic) (reshaped_496_reg_9202.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_497_read() {
    grp_dense_512_256_s_fu_248_input_497_read =  (sc_logic) (reshaped_497_reg_9207.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_498_read() {
    grp_dense_512_256_s_fu_248_input_498_read =  (sc_logic) (reshaped_498_reg_9212.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_499_read() {
    grp_dense_512_256_s_fu_248_input_499_read =  (sc_logic) (reshaped_499_reg_9217.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_49_read() {
    grp_dense_512_256_s_fu_248_input_49_read =  (sc_logic) (reshaped_49_reg_6967.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_4_read() {
    grp_dense_512_256_s_fu_248_input_4_read =  (sc_logic) (reshaped_4_reg_6742.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_500_read() {
    grp_dense_512_256_s_fu_248_input_500_read =  (sc_logic) (reshaped_500_reg_9222.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_501_read() {
    grp_dense_512_256_s_fu_248_input_501_read =  (sc_logic) (reshaped_501_reg_9227.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_502_read() {
    grp_dense_512_256_s_fu_248_input_502_read =  (sc_logic) (reshaped_502_reg_9232.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_503_read() {
    grp_dense_512_256_s_fu_248_input_503_read =  (sc_logic) (reshaped_503_reg_9237.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_504_read() {
    grp_dense_512_256_s_fu_248_input_504_read =  (sc_logic) (reshaped_504_reg_9242.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_505_read() {
    grp_dense_512_256_s_fu_248_input_505_read =  (sc_logic) (reshaped_505_reg_9247.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_506_read() {
    grp_dense_512_256_s_fu_248_input_506_read =  (sc_logic) (reshaped_506_reg_9252.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_507_read() {
    grp_dense_512_256_s_fu_248_input_507_read =  (sc_logic) (reshaped_507_reg_9257.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_508_read() {
    grp_dense_512_256_s_fu_248_input_508_read =  (sc_logic) (reshaped_508_reg_9262.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_509_read() {
    grp_dense_512_256_s_fu_248_input_509_read =  (sc_logic) (reshaped_509_reg_9267.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_50_read() {
    grp_dense_512_256_s_fu_248_input_50_read =  (sc_logic) (reshaped_50_reg_6972.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_510_read() {
    grp_dense_512_256_s_fu_248_input_510_read =  (sc_logic) (reshaped_510_reg_9272.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_511_read() {
    grp_dense_512_256_s_fu_248_input_511_read =  (sc_logic) (reshaped_511_reg_9277.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_51_read() {
    grp_dense_512_256_s_fu_248_input_51_read =  (sc_logic) (reshaped_51_reg_6977.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_52_read() {
    grp_dense_512_256_s_fu_248_input_52_read =  (sc_logic) (reshaped_52_reg_6982.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_53_read() {
    grp_dense_512_256_s_fu_248_input_53_read =  (sc_logic) (reshaped_53_reg_6987.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_54_read() {
    grp_dense_512_256_s_fu_248_input_54_read =  (sc_logic) (reshaped_54_reg_6992.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_55_read() {
    grp_dense_512_256_s_fu_248_input_55_read =  (sc_logic) (reshaped_55_reg_6997.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_56_read() {
    grp_dense_512_256_s_fu_248_input_56_read =  (sc_logic) (reshaped_56_reg_7002.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_57_read() {
    grp_dense_512_256_s_fu_248_input_57_read =  (sc_logic) (reshaped_57_reg_7007.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_58_read() {
    grp_dense_512_256_s_fu_248_input_58_read =  (sc_logic) (reshaped_58_reg_7012.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_59_read() {
    grp_dense_512_256_s_fu_248_input_59_read =  (sc_logic) (reshaped_59_reg_7017.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_5_read() {
    grp_dense_512_256_s_fu_248_input_5_read =  (sc_logic) (reshaped_5_reg_6747.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_60_read() {
    grp_dense_512_256_s_fu_248_input_60_read =  (sc_logic) (reshaped_60_reg_7022.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_61_read() {
    grp_dense_512_256_s_fu_248_input_61_read =  (sc_logic) (reshaped_61_reg_7027.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_62_read() {
    grp_dense_512_256_s_fu_248_input_62_read =  (sc_logic) (reshaped_62_reg_7032.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_63_read() {
    grp_dense_512_256_s_fu_248_input_63_read =  (sc_logic) (reshaped_63_reg_7037.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_64_read() {
    grp_dense_512_256_s_fu_248_input_64_read =  (sc_logic) (reshaped_64_reg_7042.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_65_read() {
    grp_dense_512_256_s_fu_248_input_65_read =  (sc_logic) (reshaped_65_reg_7047.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_66_read() {
    grp_dense_512_256_s_fu_248_input_66_read =  (sc_logic) (reshaped_66_reg_7052.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_67_read() {
    grp_dense_512_256_s_fu_248_input_67_read =  (sc_logic) (reshaped_67_reg_7057.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_68_read() {
    grp_dense_512_256_s_fu_248_input_68_read =  (sc_logic) (reshaped_68_reg_7062.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_69_read() {
    grp_dense_512_256_s_fu_248_input_69_read =  (sc_logic) (reshaped_69_reg_7067.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_6_read() {
    grp_dense_512_256_s_fu_248_input_6_read =  (sc_logic) (reshaped_6_reg_6752.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_70_read() {
    grp_dense_512_256_s_fu_248_input_70_read =  (sc_logic) (reshaped_70_reg_7072.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_71_read() {
    grp_dense_512_256_s_fu_248_input_71_read =  (sc_logic) (reshaped_71_reg_7077.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_72_read() {
    grp_dense_512_256_s_fu_248_input_72_read =  (sc_logic) (reshaped_72_reg_7082.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_73_read() {
    grp_dense_512_256_s_fu_248_input_73_read =  (sc_logic) (reshaped_73_reg_7087.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_74_read() {
    grp_dense_512_256_s_fu_248_input_74_read =  (sc_logic) (reshaped_74_reg_7092.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_75_read() {
    grp_dense_512_256_s_fu_248_input_75_read =  (sc_logic) (reshaped_75_reg_7097.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_76_read() {
    grp_dense_512_256_s_fu_248_input_76_read =  (sc_logic) (reshaped_76_reg_7102.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_77_read() {
    grp_dense_512_256_s_fu_248_input_77_read =  (sc_logic) (reshaped_77_reg_7107.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_78_read() {
    grp_dense_512_256_s_fu_248_input_78_read =  (sc_logic) (reshaped_78_reg_7112.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_79_read() {
    grp_dense_512_256_s_fu_248_input_79_read =  (sc_logic) (reshaped_79_reg_7117.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_7_read() {
    grp_dense_512_256_s_fu_248_input_7_read =  (sc_logic) (reshaped_7_reg_6757.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_80_read() {
    grp_dense_512_256_s_fu_248_input_80_read =  (sc_logic) (reshaped_80_reg_7122.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_81_read() {
    grp_dense_512_256_s_fu_248_input_81_read =  (sc_logic) (reshaped_81_reg_7127.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_82_read() {
    grp_dense_512_256_s_fu_248_input_82_read =  (sc_logic) (reshaped_82_reg_7132.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_83_read() {
    grp_dense_512_256_s_fu_248_input_83_read =  (sc_logic) (reshaped_83_reg_7137.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_84_read() {
    grp_dense_512_256_s_fu_248_input_84_read =  (sc_logic) (reshaped_84_reg_7142.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_85_read() {
    grp_dense_512_256_s_fu_248_input_85_read =  (sc_logic) (reshaped_85_reg_7147.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_86_read() {
    grp_dense_512_256_s_fu_248_input_86_read =  (sc_logic) (reshaped_86_reg_7152.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_87_read() {
    grp_dense_512_256_s_fu_248_input_87_read =  (sc_logic) (reshaped_87_reg_7157.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_88_read() {
    grp_dense_512_256_s_fu_248_input_88_read =  (sc_logic) (reshaped_88_reg_7162.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_89_read() {
    grp_dense_512_256_s_fu_248_input_89_read =  (sc_logic) (reshaped_89_reg_7167.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_8_read() {
    grp_dense_512_256_s_fu_248_input_8_read =  (sc_logic) (reshaped_8_reg_6762.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_90_read() {
    grp_dense_512_256_s_fu_248_input_90_read =  (sc_logic) (reshaped_90_reg_7172.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_91_read() {
    grp_dense_512_256_s_fu_248_input_91_read =  (sc_logic) (reshaped_91_reg_7177.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_92_read() {
    grp_dense_512_256_s_fu_248_input_92_read =  (sc_logic) (reshaped_92_reg_7182.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_93_read() {
    grp_dense_512_256_s_fu_248_input_93_read =  (sc_logic) (reshaped_93_reg_7187.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_94_read() {
    grp_dense_512_256_s_fu_248_input_94_read =  (sc_logic) (reshaped_94_reg_7192.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_95_read() {
    grp_dense_512_256_s_fu_248_input_95_read =  (sc_logic) (reshaped_95_reg_7197.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_96_read() {
    grp_dense_512_256_s_fu_248_input_96_read =  (sc_logic) (reshaped_96_reg_7202.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_97_read() {
    grp_dense_512_256_s_fu_248_input_97_read =  (sc_logic) (reshaped_97_reg_7207.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_98_read() {
    grp_dense_512_256_s_fu_248_input_98_read =  (sc_logic) (reshaped_98_reg_7212.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_99_read() {
    grp_dense_512_256_s_fu_248_input_99_read =  (sc_logic) (reshaped_99_reg_7217.read()[0]);
}

void bnn_xcel::thread_grp_dense_512_256_s_fu_248_input_9_read() {
    grp_dense_512_256_s_fu_248_input_9_read =  (sc_logic) (reshaped_9_reg_6767.read()[0]);
}

void bnn_xcel::thread_grp_flatten_fu_1309_ap_start() {
    grp_flatten_fu_1309_ap_start = grp_flatten_fu_1309_ap_start_reg.read();
}

void bnn_xcel::thread_grp_initialize_padded_memory_16_10_0_s_fu_1332_ap_start() {
    grp_initialize_padded_memory_16_10_0_s_fu_1332_ap_start = grp_initialize_padded_memory_16_10_0_s_fu_1332_ap_start_reg.read();
}

void bnn_xcel::thread_grp_max_pool_16_16_s_fu_1314_ap_start() {
    grp_max_pool_16_16_s_fu_1314_ap_start = grp_max_pool_16_16_s_fu_1314_ap_start_reg.read();
}

void bnn_xcel::thread_grp_max_pool_32_8_s_fu_1320_ap_start() {
    grp_max_pool_32_8_s_fu_1320_ap_start = grp_max_pool_32_8_s_fu_1320_ap_start_reg.read();
}

void bnn_xcel::thread_grp_pad_16_8_s_fu_1326_ap_start() {
    grp_pad_16_8_s_fu_1326_ap_start = grp_pad_16_8_s_fu_1326_ap_start_reg.read();
}

void bnn_xcel::thread_i_fu_6659_p2() {
    i_fu_6659_p2 = (!max_id_V_reg_236.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(max_id_V_reg_236.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void bnn_xcel::thread_icmp_ln169_fu_6622_p2() {
    icmp_ln169_fu_6622_p2 = (!max_id_V_reg_236.read().is_01() || !ap_const_lv4_A.is_01())? sc_lv<1>(): sc_lv<1>(max_id_V_reg_236.read() == ap_const_lv4_A);
}

void bnn_xcel::thread_icmp_ln24_fu_1405_p2() {
    icmp_ln24_fu_1405_p2 = (!x_0_0_i2152_reg_192.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(x_0_0_i2152_reg_192.read() == ap_const_lv5_10);
}

void bnn_xcel::thread_icmp_ln26_fu_1425_p2() {
    icmp_ln26_fu_1425_p2 = (!y_0_0_i2153_reg_203.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(y_0_0_i2153_reg_203.read() == ap_const_lv5_10);
}

void bnn_xcel::thread_icmp_ln43_fu_1337_p2() {
    icmp_ln43_fu_1337_p2 = (!x_0_0_i_reg_170.read().is_01() || !ap_const_lv5_12.is_01())? sc_lv<1>(): sc_lv<1>(x_0_0_i_reg_170.read() == ap_const_lv5_12);
}

void bnn_xcel::thread_icmp_ln45_fu_1379_p2() {
    icmp_ln45_fu_1379_p2 = (!y_0_0_i_reg_181.read().is_01() || !ap_const_lv5_12.is_01())? sc_lv<1>(): sc_lv<1>(y_0_0_i_reg_181.read() == ap_const_lv5_12);
}

void bnn_xcel::thread_icmp_ln895_fu_6637_p2() {
    icmp_ln895_fu_6637_p2 = (!max_V_1_fu_6633_p1.read().is_01() || !p_012_0_i_reg_226.read().is_01())? sc_lv<1>(): (sc_bigint<16>(max_V_1_fu_6633_p1.read()) > sc_bigint<16>(p_012_0_i_reg_226.read()));
}

void bnn_xcel::thread_input_0_address0() {
    input_0_address0 =  (sc_lv<8>) (zext_ln27_8_fu_1454_p1.read());
}

void bnn_xcel::thread_input_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        input_0_ce0 = ap_const_logic_1;
    } else {
        input_0_ce0 = ap_const_logic_0;
    }
}

void bnn_xcel::thread_input_padded_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        input_padded_address0 =  (sc_lv<9>) (zext_ln27_11_fu_1494_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        input_padded_address0 =  (sc_lv<9>) (zext_ln46_7_fu_1400_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        input_padded_address0 = grp_conv_1_16_18_s_fu_1297_input_r_address0.read();
    } else {
        input_padded_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void bnn_xcel::thread_input_padded_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()))) {
        input_padded_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        input_padded_ce0 = grp_conv_1_16_18_s_fu_1297_input_r_ce0.read();
    } else {
        input_padded_ce0 = ap_const_logic_0;
    }
}

void bnn_xcel::thread_input_padded_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        input_padded_ce1 = grp_conv_1_16_18_s_fu_1297_input_r_ce1.read();
    } else {
        input_padded_ce1 = ap_const_logic_0;
    }
}

void bnn_xcel::thread_input_padded_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        input_padded_d0 = input_0_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        input_padded_d0 = ap_const_lv1_1;
    } else {
        input_padded_d0 =  (sc_lv<1>) ("X");
    }
}

void bnn_xcel::thread_input_padded_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln45_fu_1379_p2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()))) {
        input_padded_we0 = ap_const_logic_1;
    } else {
        input_padded_we0 = ap_const_logic_0;
    }
}

void bnn_xcel::thread_max_V_1_fu_6633_p1() {
    max_V_1_fu_6633_p1 = esl_sext<16,10>(dense2_V_q0.read());
}

void bnn_xcel::thread_max_V_fu_6618_p1() {
    max_V_fu_6618_p1 = esl_sext<16,10>(dense2_V_q0.read());
}

void bnn_xcel::thread_select_ln170_1_fu_6651_p3() {
    select_ln170_1_fu_6651_p3 = (!icmp_ln895_fu_6637_p2.read()[0].is_01())? sc_lv<16>(): ((icmp_ln895_fu_6637_p2.read()[0].to_bool())? max_V_1_fu_6633_p1.read(): p_012_0_i_reg_226.read());
}

void bnn_xcel::thread_select_ln170_fu_6643_p3() {
    select_ln170_fu_6643_p3 = (!icmp_ln895_fu_6637_p2.read()[0].is_01())? sc_lv<4>(): ((icmp_ln895_fu_6637_p2.read()[0].to_bool())? max_id_V_reg_236.read(): agg_result_V_0_i_reg_214.read());
}

void bnn_xcel::thread_tmp_33_fu_1437_p3() {
    tmp_33_fu_1437_p3 = esl_concat<5,4>(y_0_0_i2153_reg_203.read(), ap_const_lv4_0);
}

void bnn_xcel::thread_tmp_34_fu_1459_p3() {
    tmp_34_fu_1459_p3 = esl_concat<5,4>(add_ln27_1_fu_1431_p2.read(), ap_const_lv4_0);
}

void bnn_xcel::thread_tmp_35_fu_1471_p3() {
    tmp_35_fu_1471_p3 = esl_concat<5,1>(add_ln27_1_fu_1431_p2.read(), ap_const_lv1_0);
}

void bnn_xcel::thread_tmp_fu_1349_p3() {
    tmp_fu_1349_p3 = esl_concat<5,4>(x_0_0_i_reg_170.read(), ap_const_lv4_0);
}

void bnn_xcel::thread_tmp_s_fu_1361_p3() {
    tmp_s_fu_1361_p3 = esl_concat<5,1>(x_0_0_i_reg_170.read(), ap_const_lv1_0);
}

void bnn_xcel::thread_zext_ln170_fu_6628_p1() {
    zext_ln170_fu_6628_p1 = esl_zext<64,4>(max_id_V_reg_236.read());
}

void bnn_xcel::thread_zext_ln26_fu_1421_p1() {
    zext_ln26_fu_1421_p1 = esl_zext<10,5>(add_ln27_fu_1411_p2.read());
}

void bnn_xcel::thread_zext_ln27_10_fu_1479_p1() {
    zext_ln27_10_fu_1479_p1 = esl_zext<10,6>(tmp_35_fu_1471_p3.read());
}

void bnn_xcel::thread_zext_ln27_11_fu_1494_p1() {
    zext_ln27_11_fu_1494_p1 = esl_zext<64,10>(add_ln27_6_reg_6717.read());
}

void bnn_xcel::thread_zext_ln27_7_fu_1445_p1() {
    zext_ln27_7_fu_1445_p1 = esl_zext<10,9>(tmp_33_fu_1437_p3.read());
}

void bnn_xcel::thread_zext_ln27_8_fu_1454_p1() {
    zext_ln27_8_fu_1454_p1 = esl_zext<64,10>(add_ln27_4_fu_1449_p2.read());
}

void bnn_xcel::thread_zext_ln27_9_fu_1467_p1() {
    zext_ln27_9_fu_1467_p1 = esl_zext<10,9>(tmp_34_fu_1459_p3.read());
}

void bnn_xcel::thread_zext_ln27_fu_1417_p1() {
    zext_ln27_fu_1417_p1 = esl_zext<10,5>(x_0_0_i2152_reg_192.read());
}

void bnn_xcel::thread_zext_ln46_5_fu_1369_p1() {
    zext_ln46_5_fu_1369_p1 = esl_zext<10,6>(tmp_s_fu_1361_p3.read());
}

void bnn_xcel::thread_zext_ln46_6_fu_1391_p1() {
    zext_ln46_6_fu_1391_p1 = esl_zext<10,5>(y_0_0_i_reg_181.read());
}

void bnn_xcel::thread_zext_ln46_7_fu_1400_p1() {
    zext_ln46_7_fu_1400_p1 = esl_zext<64,10>(add_ln46_2_fu_1395_p2.read());
}

void bnn_xcel::thread_zext_ln46_fu_1357_p1() {
    zext_ln46_fu_1357_p1 = esl_zext<10,9>(tmp_fu_1349_p3.read());
}

}

