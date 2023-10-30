#include "dense_256_10_s.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void dense_256_10_s::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        n_0_reg_2623 = n_reg_12401.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        n_0_reg_2623 = ap_const_lv4_0;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        add_ln1503_2_reg_12486 = add_ln1503_2_fu_11093_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(icmp_ln192_fu_2635_p2.read(), ap_const_lv1_0))) {
        add_ln1503_526_reg_12406 = add_ln1503_526_fu_8709_p2.read();
        add_ln1503_541_reg_12411 = add_ln1503_541_fu_8855_p2.read();
        add_ln1503_557_reg_12416 = add_ln1503_557_fu_9001_p2.read();
        add_ln1503_572_reg_12421 = add_ln1503_572_fu_9147_p2.read();
        add_ln1503_589_reg_12426 = add_ln1503_589_fu_9293_p2.read();
        add_ln1503_604_reg_12431 = add_ln1503_604_fu_9439_p2.read();
        add_ln1503_620_reg_12436 = add_ln1503_620_fu_9585_p2.read();
        add_ln1503_635_reg_12441 = add_ln1503_635_fu_9731_p2.read();
        add_ln1503_653_reg_12446 = add_ln1503_653_fu_9877_p2.read();
        add_ln1503_668_reg_12451 = add_ln1503_668_fu_10023_p2.read();
        add_ln1503_684_reg_12456 = add_ln1503_684_fu_10169_p2.read();
        add_ln1503_699_reg_12461 = add_ln1503_699_fu_10315_p2.read();
        add_ln1503_716_reg_12466 = add_ln1503_716_fu_10461_p2.read();
        add_ln1503_731_reg_12471 = add_ln1503_731_fu_10607_p2.read();
        add_ln1503_747_reg_12476 = add_ln1503_747_fu_10753_p2.read();
        add_ln1503_762_reg_12481 = add_ln1503_762_fu_10899_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        n_reg_12401 = n_fu_2641_p2.read();
    }
}

void dense_256_10_s::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(icmp_ln192_fu_2635_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state1;
            } else {
                ap_NS_fsm = ap_ST_fsm_state3;
            }
            break;
        case 4 : 
            ap_NS_fsm = ap_ST_fsm_state4;
            break;
        case 8 : 
            ap_NS_fsm = ap_ST_fsm_state2;
            break;
        default : 
            ap_NS_fsm = "XXXX";
            break;
    }
}

}

