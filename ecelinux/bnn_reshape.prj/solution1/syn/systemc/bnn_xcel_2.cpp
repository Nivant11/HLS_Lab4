#include "bnn_xcel.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void bnn_xcel::thread_ap_clk_no_reset_() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read())) {
        agg_result_V_0_i_reg_214 = select_ln170_fu_6643_p3.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read())) {
        agg_result_V_0_i_reg_214 = ap_const_lv4_0;
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_return_preg = ap_const_lv4_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) && 
             esl_seteq<1,1,1>(icmp_ln169_fu_6622_p2.read(), ap_const_lv1_1))) {
            ap_return_preg = agg_result_V_0_i_reg_214.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_conv_16_32_10_s_fu_1285_ap_start_reg = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
            grp_conv_16_32_10_s_fu_1285_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_conv_16_32_10_s_fu_1285_ap_ready.read())) {
            grp_conv_16_32_10_s_fu_1285_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_conv_1_16_18_s_fu_1297_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
             esl_seteq<1,1,1>(icmp_ln24_fu_1405_p2.read(), ap_const_lv1_1))) {
            grp_conv_1_16_18_s_fu_1297_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_conv_1_16_18_s_fu_1297_ap_ready.read())) {
            grp_conv_1_16_18_s_fu_1297_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_dense_256_10_s_fu_764_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) && 
             esl_seteq<1,1,1>(grp_dense_512_256_s_fu_248_ap_done.read(), ap_const_logic_1))) {
            grp_dense_256_10_s_fu_764_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_dense_256_10_s_fu_764_ap_ready.read())) {
            grp_dense_256_10_s_fu_764_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_dense_512_256_s_fu_248_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) && 
             esl_seteq<1,1,1>(grp_flatten_fu_1309_ap_done.read(), ap_const_logic_1))) {
            grp_dense_512_256_s_fu_248_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_dense_512_256_s_fu_248_ap_ready.read())) {
            grp_dense_512_256_s_fu_248_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_flatten_fu_1309_ap_start_reg = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
            grp_flatten_fu_1309_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_flatten_fu_1309_ap_ready.read())) {
            grp_flatten_fu_1309_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_initialize_padded_memory_16_10_0_s_fu_1332_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
             esl_seteq<1,1,1>(icmp_ln43_fu_1337_p2.read(), ap_const_lv1_1))) {
            grp_initialize_padded_memory_16_10_0_s_fu_1332_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_initialize_padded_memory_16_10_0_s_fu_1332_ap_ready.read())) {
            grp_initialize_padded_memory_16_10_0_s_fu_1332_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_max_pool_16_16_s_fu_1314_ap_start_reg = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
            grp_max_pool_16_16_s_fu_1314_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_max_pool_16_16_s_fu_1314_ap_ready.read())) {
            grp_max_pool_16_16_s_fu_1314_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_max_pool_32_8_s_fu_1320_ap_start_reg = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
            grp_max_pool_32_8_s_fu_1320_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_max_pool_32_8_s_fu_1320_ap_ready.read())) {
            grp_max_pool_32_8_s_fu_1320_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_pad_16_8_s_fu_1326_ap_start_reg = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
            grp_pad_16_8_s_fu_1326_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_pad_16_8_s_fu_1326_ap_ready.read())) {
            grp_pad_16_8_s_fu_1326_ap_start_reg = ap_const_logic_0;
        }
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read())) {
        max_id_V_reg_236 = i_fu_6659_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read())) {
        max_id_V_reg_236 = ap_const_lv4_1;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read())) {
        p_012_0_i_reg_226 = select_ln170_1_fu_6651_p3.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read())) {
        p_012_0_i_reg_226 = max_V_fu_6618_p1.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         esl_seteq<1,1,1>(icmp_ln26_fu_1425_p2.read(), ap_const_lv1_1))) {
        x_0_0_i2152_reg_192 = add_ln27_reg_6689.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                esl_seteq<1,1,1>(grp_initialize_padded_memory_16_10_0_s_fu_1332_ap_done.read(), ap_const_logic_1))) {
        x_0_0_i2152_reg_192 = ap_const_lv5_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(icmp_ln45_fu_1379_p2.read(), ap_const_lv1_1))) {
        x_0_0_i_reg_170 = add_ln43_reg_6668.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        x_0_0_i_reg_170 = ap_const_lv5_0;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        y_0_0_i2153_reg_203 = add_ln27_1_reg_6707.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln24_fu_1405_p2.read()))) {
        y_0_0_i2153_reg_203 = ap_const_lv5_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln45_fu_1379_p2.read()))) {
        y_0_0_i_reg_181 = add_ln45_fu_1385_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                esl_seteq<1,1,1>(icmp_ln43_fu_1337_p2.read(), ap_const_lv1_0))) {
        y_0_0_i_reg_181 = ap_const_lv5_0;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        add_ln27_1_reg_6707 = add_ln27_1_fu_1431_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln26_fu_1425_p2.read()))) {
        add_ln27_6_reg_6717 = add_ln27_6_fu_1489_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        add_ln27_reg_6689 = add_ln27_fu_1411_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        add_ln43_reg_6668 = add_ln43_fu_1343_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(icmp_ln43_fu_1337_p2.read(), ap_const_lv1_0))) {
        add_ln46_reg_6673 = add_ln46_fu_1373_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) && esl_seteq<1,1,1>(grp_flatten_fu_1309_ap_done.read(), ap_const_logic_1))) {
        reshaped_0_reg_6722 = grp_flatten_fu_1309_ap_return_0.read();
        reshaped_100_reg_7222 = grp_flatten_fu_1309_ap_return_100.read();
        reshaped_101_reg_7227 = grp_flatten_fu_1309_ap_return_101.read();
        reshaped_102_reg_7232 = grp_flatten_fu_1309_ap_return_102.read();
        reshaped_103_reg_7237 = grp_flatten_fu_1309_ap_return_103.read();
        reshaped_104_reg_7242 = grp_flatten_fu_1309_ap_return_104.read();
        reshaped_105_reg_7247 = grp_flatten_fu_1309_ap_return_105.read();
        reshaped_106_reg_7252 = grp_flatten_fu_1309_ap_return_106.read();
        reshaped_107_reg_7257 = grp_flatten_fu_1309_ap_return_107.read();
        reshaped_108_reg_7262 = grp_flatten_fu_1309_ap_return_108.read();
        reshaped_109_reg_7267 = grp_flatten_fu_1309_ap_return_109.read();
        reshaped_10_reg_6772 = grp_flatten_fu_1309_ap_return_10.read();
        reshaped_110_reg_7272 = grp_flatten_fu_1309_ap_return_110.read();
        reshaped_111_reg_7277 = grp_flatten_fu_1309_ap_return_111.read();
        reshaped_112_reg_7282 = grp_flatten_fu_1309_ap_return_112.read();
        reshaped_113_reg_7287 = grp_flatten_fu_1309_ap_return_113.read();
        reshaped_114_reg_7292 = grp_flatten_fu_1309_ap_return_114.read();
        reshaped_115_reg_7297 = grp_flatten_fu_1309_ap_return_115.read();
        reshaped_116_reg_7302 = grp_flatten_fu_1309_ap_return_116.read();
        reshaped_117_reg_7307 = grp_flatten_fu_1309_ap_return_117.read();
        reshaped_118_reg_7312 = grp_flatten_fu_1309_ap_return_118.read();
        reshaped_119_reg_7317 = grp_flatten_fu_1309_ap_return_119.read();
        reshaped_11_reg_6777 = grp_flatten_fu_1309_ap_return_11.read();
        reshaped_120_reg_7322 = grp_flatten_fu_1309_ap_return_120.read();
        reshaped_121_reg_7327 = grp_flatten_fu_1309_ap_return_121.read();
        reshaped_122_reg_7332 = grp_flatten_fu_1309_ap_return_122.read();
        reshaped_123_reg_7337 = grp_flatten_fu_1309_ap_return_123.read();
        reshaped_124_reg_7342 = grp_flatten_fu_1309_ap_return_124.read();
        reshaped_125_reg_7347 = grp_flatten_fu_1309_ap_return_125.read();
        reshaped_126_reg_7352 = grp_flatten_fu_1309_ap_return_126.read();
        reshaped_127_reg_7357 = grp_flatten_fu_1309_ap_return_127.read();
        reshaped_128_reg_7362 = grp_flatten_fu_1309_ap_return_128.read();
        reshaped_129_reg_7367 = grp_flatten_fu_1309_ap_return_129.read();
        reshaped_12_reg_6782 = grp_flatten_fu_1309_ap_return_12.read();
        reshaped_130_reg_7372 = grp_flatten_fu_1309_ap_return_130.read();
        reshaped_131_reg_7377 = grp_flatten_fu_1309_ap_return_131.read();
        reshaped_132_reg_7382 = grp_flatten_fu_1309_ap_return_132.read();
        reshaped_133_reg_7387 = grp_flatten_fu_1309_ap_return_133.read();
        reshaped_134_reg_7392 = grp_flatten_fu_1309_ap_return_134.read();
        reshaped_135_reg_7397 = grp_flatten_fu_1309_ap_return_135.read();
        reshaped_136_reg_7402 = grp_flatten_fu_1309_ap_return_136.read();
        reshaped_137_reg_7407 = grp_flatten_fu_1309_ap_return_137.read();
        reshaped_138_reg_7412 = grp_flatten_fu_1309_ap_return_138.read();
        reshaped_139_reg_7417 = grp_flatten_fu_1309_ap_return_139.read();
        reshaped_13_reg_6787 = grp_flatten_fu_1309_ap_return_13.read();
        reshaped_140_reg_7422 = grp_flatten_fu_1309_ap_return_140.read();
        reshaped_141_reg_7427 = grp_flatten_fu_1309_ap_return_141.read();
        reshaped_142_reg_7432 = grp_flatten_fu_1309_ap_return_142.read();
        reshaped_143_reg_7437 = grp_flatten_fu_1309_ap_return_143.read();
        reshaped_144_reg_7442 = grp_flatten_fu_1309_ap_return_144.read();
        reshaped_145_reg_7447 = grp_flatten_fu_1309_ap_return_145.read();
        reshaped_146_reg_7452 = grp_flatten_fu_1309_ap_return_146.read();
        reshaped_147_reg_7457 = grp_flatten_fu_1309_ap_return_147.read();
        reshaped_148_reg_7462 = grp_flatten_fu_1309_ap_return_148.read();
        reshaped_149_reg_7467 = grp_flatten_fu_1309_ap_return_149.read();
        reshaped_14_reg_6792 = grp_flatten_fu_1309_ap_return_14.read();
        reshaped_150_reg_7472 = grp_flatten_fu_1309_ap_return_150.read();
        reshaped_151_reg_7477 = grp_flatten_fu_1309_ap_return_151.read();
        reshaped_152_reg_7482 = grp_flatten_fu_1309_ap_return_152.read();
        reshaped_153_reg_7487 = grp_flatten_fu_1309_ap_return_153.read();
        reshaped_154_reg_7492 = grp_flatten_fu_1309_ap_return_154.read();
        reshaped_155_reg_7497 = grp_flatten_fu_1309_ap_return_155.read();
        reshaped_156_reg_7502 = grp_flatten_fu_1309_ap_return_156.read();
        reshaped_157_reg_7507 = grp_flatten_fu_1309_ap_return_157.read();
        reshaped_158_reg_7512 = grp_flatten_fu_1309_ap_return_158.read();
        reshaped_159_reg_7517 = grp_flatten_fu_1309_ap_return_159.read();
        reshaped_15_reg_6797 = grp_flatten_fu_1309_ap_return_15.read();
        reshaped_160_reg_7522 = grp_flatten_fu_1309_ap_return_160.read();
        reshaped_161_reg_7527 = grp_flatten_fu_1309_ap_return_161.read();
        reshaped_162_reg_7532 = grp_flatten_fu_1309_ap_return_162.read();
        reshaped_163_reg_7537 = grp_flatten_fu_1309_ap_return_163.read();
        reshaped_164_reg_7542 = grp_flatten_fu_1309_ap_return_164.read();
        reshaped_165_reg_7547 = grp_flatten_fu_1309_ap_return_165.read();
        reshaped_166_reg_7552 = grp_flatten_fu_1309_ap_return_166.read();
        reshaped_167_reg_7557 = grp_flatten_fu_1309_ap_return_167.read();
        reshaped_168_reg_7562 = grp_flatten_fu_1309_ap_return_168.read();
        reshaped_169_reg_7567 = grp_flatten_fu_1309_ap_return_169.read();
        reshaped_16_reg_6802 = grp_flatten_fu_1309_ap_return_16.read();
        reshaped_170_reg_7572 = grp_flatten_fu_1309_ap_return_170.read();
        reshaped_171_reg_7577 = grp_flatten_fu_1309_ap_return_171.read();
        reshaped_172_reg_7582 = grp_flatten_fu_1309_ap_return_172.read();
        reshaped_173_reg_7587 = grp_flatten_fu_1309_ap_return_173.read();
        reshaped_174_reg_7592 = grp_flatten_fu_1309_ap_return_174.read();
        reshaped_175_reg_7597 = grp_flatten_fu_1309_ap_return_175.read();
        reshaped_176_reg_7602 = grp_flatten_fu_1309_ap_return_176.read();
        reshaped_177_reg_7607 = grp_flatten_fu_1309_ap_return_177.read();
        reshaped_178_reg_7612 = grp_flatten_fu_1309_ap_return_178.read();
        reshaped_179_reg_7617 = grp_flatten_fu_1309_ap_return_179.read();
        reshaped_17_reg_6807 = grp_flatten_fu_1309_ap_return_17.read();
        reshaped_180_reg_7622 = grp_flatten_fu_1309_ap_return_180.read();
        reshaped_181_reg_7627 = grp_flatten_fu_1309_ap_return_181.read();
        reshaped_182_reg_7632 = grp_flatten_fu_1309_ap_return_182.read();
        reshaped_183_reg_7637 = grp_flatten_fu_1309_ap_return_183.read();
        reshaped_184_reg_7642 = grp_flatten_fu_1309_ap_return_184.read();
        reshaped_185_reg_7647 = grp_flatten_fu_1309_ap_return_185.read();
        reshaped_186_reg_7652 = grp_flatten_fu_1309_ap_return_186.read();
        reshaped_187_reg_7657 = grp_flatten_fu_1309_ap_return_187.read();
        reshaped_188_reg_7662 = grp_flatten_fu_1309_ap_return_188.read();
        reshaped_189_reg_7667 = grp_flatten_fu_1309_ap_return_189.read();
        reshaped_18_reg_6812 = grp_flatten_fu_1309_ap_return_18.read();
        reshaped_190_reg_7672 = grp_flatten_fu_1309_ap_return_190.read();
        reshaped_191_reg_7677 = grp_flatten_fu_1309_ap_return_191.read();
        reshaped_192_reg_7682 = grp_flatten_fu_1309_ap_return_192.read();
        reshaped_193_reg_7687 = grp_flatten_fu_1309_ap_return_193.read();
        reshaped_194_reg_7692 = grp_flatten_fu_1309_ap_return_194.read();
        reshaped_195_reg_7697 = grp_flatten_fu_1309_ap_return_195.read();
        reshaped_196_reg_7702 = grp_flatten_fu_1309_ap_return_196.read();
        reshaped_197_reg_7707 = grp_flatten_fu_1309_ap_return_197.read();
        reshaped_198_reg_7712 = grp_flatten_fu_1309_ap_return_198.read();
        reshaped_199_reg_7717 = grp_flatten_fu_1309_ap_return_199.read();
        reshaped_19_reg_6817 = grp_flatten_fu_1309_ap_return_19.read();
        reshaped_1_reg_6727 = grp_flatten_fu_1309_ap_return_1.read();
        reshaped_200_reg_7722 = grp_flatten_fu_1309_ap_return_200.read();
        reshaped_201_reg_7727 = grp_flatten_fu_1309_ap_return_201.read();
        reshaped_202_reg_7732 = grp_flatten_fu_1309_ap_return_202.read();
        reshaped_203_reg_7737 = grp_flatten_fu_1309_ap_return_203.read();
        reshaped_204_reg_7742 = grp_flatten_fu_1309_ap_return_204.read();
        reshaped_205_reg_7747 = grp_flatten_fu_1309_ap_return_205.read();
        reshaped_206_reg_7752 = grp_flatten_fu_1309_ap_return_206.read();
        reshaped_207_reg_7757 = grp_flatten_fu_1309_ap_return_207.read();
        reshaped_208_reg_7762 = grp_flatten_fu_1309_ap_return_208.read();
        reshaped_209_reg_7767 = grp_flatten_fu_1309_ap_return_209.read();
        reshaped_20_reg_6822 = grp_flatten_fu_1309_ap_return_20.read();
        reshaped_210_reg_7772 = grp_flatten_fu_1309_ap_return_210.read();
        reshaped_211_reg_7777 = grp_flatten_fu_1309_ap_return_211.read();
        reshaped_212_reg_7782 = grp_flatten_fu_1309_ap_return_212.read();
        reshaped_213_reg_7787 = grp_flatten_fu_1309_ap_return_213.read();
        reshaped_214_reg_7792 = grp_flatten_fu_1309_ap_return_214.read();
        reshaped_215_reg_7797 = grp_flatten_fu_1309_ap_return_215.read();
        reshaped_216_reg_7802 = grp_flatten_fu_1309_ap_return_216.read();
        reshaped_217_reg_7807 = grp_flatten_fu_1309_ap_return_217.read();
        reshaped_218_reg_7812 = grp_flatten_fu_1309_ap_return_218.read();
        reshaped_219_reg_7817 = grp_flatten_fu_1309_ap_return_219.read();
        reshaped_21_reg_6827 = grp_flatten_fu_1309_ap_return_21.read();
        reshaped_220_reg_7822 = grp_flatten_fu_1309_ap_return_220.read();
        reshaped_221_reg_7827 = grp_flatten_fu_1309_ap_return_221.read();
        reshaped_222_reg_7832 = grp_flatten_fu_1309_ap_return_222.read();
        reshaped_223_reg_7837 = grp_flatten_fu_1309_ap_return_223.read();
        reshaped_224_reg_7842 = grp_flatten_fu_1309_ap_return_224.read();
        reshaped_225_reg_7847 = grp_flatten_fu_1309_ap_return_225.read();
        reshaped_226_reg_7852 = grp_flatten_fu_1309_ap_return_226.read();
        reshaped_227_reg_7857 = grp_flatten_fu_1309_ap_return_227.read();
        reshaped_228_reg_7862 = grp_flatten_fu_1309_ap_return_228.read();
        reshaped_229_reg_7867 = grp_flatten_fu_1309_ap_return_229.read();
        reshaped_22_reg_6832 = grp_flatten_fu_1309_ap_return_22.read();
        reshaped_230_reg_7872 = grp_flatten_fu_1309_ap_return_230.read();
        reshaped_231_reg_7877 = grp_flatten_fu_1309_ap_return_231.read();
        reshaped_232_reg_7882 = grp_flatten_fu_1309_ap_return_232.read();
        reshaped_233_reg_7887 = grp_flatten_fu_1309_ap_return_233.read();
        reshaped_234_reg_7892 = grp_flatten_fu_1309_ap_return_234.read();
        reshaped_235_reg_7897 = grp_flatten_fu_1309_ap_return_235.read();
        reshaped_236_reg_7902 = grp_flatten_fu_1309_ap_return_236.read();
        reshaped_237_reg_7907 = grp_flatten_fu_1309_ap_return_237.read();
        reshaped_238_reg_7912 = grp_flatten_fu_1309_ap_return_238.read();
        reshaped_239_reg_7917 = grp_flatten_fu_1309_ap_return_239.read();
        reshaped_23_reg_6837 = grp_flatten_fu_1309_ap_return_23.read();
        reshaped_240_reg_7922 = grp_flatten_fu_1309_ap_return_240.read();
        reshaped_241_reg_7927 = grp_flatten_fu_1309_ap_return_241.read();
        reshaped_242_reg_7932 = grp_flatten_fu_1309_ap_return_242.read();
        reshaped_243_reg_7937 = grp_flatten_fu_1309_ap_return_243.read();
        reshaped_244_reg_7942 = grp_flatten_fu_1309_ap_return_244.read();
        reshaped_245_reg_7947 = grp_flatten_fu_1309_ap_return_245.read();
        reshaped_246_reg_7952 = grp_flatten_fu_1309_ap_return_246.read();
        reshaped_247_reg_7957 = grp_flatten_fu_1309_ap_return_247.read();
        reshaped_248_reg_7962 = grp_flatten_fu_1309_ap_return_248.read();
        reshaped_249_reg_7967 = grp_flatten_fu_1309_ap_return_249.read();
        reshaped_24_reg_6842 = grp_flatten_fu_1309_ap_return_24.read();
        reshaped_250_reg_7972 = grp_flatten_fu_1309_ap_return_250.read();
        reshaped_251_reg_7977 = grp_flatten_fu_1309_ap_return_251.read();
        reshaped_252_reg_7982 = grp_flatten_fu_1309_ap_return_252.read();
        reshaped_253_reg_7987 = grp_flatten_fu_1309_ap_return_253.read();
        reshaped_254_reg_7992 = grp_flatten_fu_1309_ap_return_254.read();
        reshaped_255_reg_7997 = grp_flatten_fu_1309_ap_return_255.read();
        reshaped_256_reg_8002 = grp_flatten_fu_1309_ap_return_256.read();
        reshaped_257_reg_8007 = grp_flatten_fu_1309_ap_return_257.read();
        reshaped_258_reg_8012 = grp_flatten_fu_1309_ap_return_258.read();
        reshaped_259_reg_8017 = grp_flatten_fu_1309_ap_return_259.read();
        reshaped_25_reg_6847 = grp_flatten_fu_1309_ap_return_25.read();
        reshaped_260_reg_8022 = grp_flatten_fu_1309_ap_return_260.read();
        reshaped_261_reg_8027 = grp_flatten_fu_1309_ap_return_261.read();
        reshaped_262_reg_8032 = grp_flatten_fu_1309_ap_return_262.read();
        reshaped_263_reg_8037 = grp_flatten_fu_1309_ap_return_263.read();
        reshaped_264_reg_8042 = grp_flatten_fu_1309_ap_return_264.read();
        reshaped_265_reg_8047 = grp_flatten_fu_1309_ap_return_265.read();
        reshaped_266_reg_8052 = grp_flatten_fu_1309_ap_return_266.read();
        reshaped_267_reg_8057 = grp_flatten_fu_1309_ap_return_267.read();
        reshaped_268_reg_8062 = grp_flatten_fu_1309_ap_return_268.read();
        reshaped_269_reg_8067 = grp_flatten_fu_1309_ap_return_269.read();
        reshaped_26_reg_6852 = grp_flatten_fu_1309_ap_return_26.read();
        reshaped_270_reg_8072 = grp_flatten_fu_1309_ap_return_270.read();
        reshaped_271_reg_8077 = grp_flatten_fu_1309_ap_return_271.read();
        reshaped_272_reg_8082 = grp_flatten_fu_1309_ap_return_272.read();
        reshaped_273_reg_8087 = grp_flatten_fu_1309_ap_return_273.read();
        reshaped_274_reg_8092 = grp_flatten_fu_1309_ap_return_274.read();
        reshaped_275_reg_8097 = grp_flatten_fu_1309_ap_return_275.read();
        reshaped_276_reg_8102 = grp_flatten_fu_1309_ap_return_276.read();
        reshaped_277_reg_8107 = grp_flatten_fu_1309_ap_return_277.read();
        reshaped_278_reg_8112 = grp_flatten_fu_1309_ap_return_278.read();
        reshaped_279_reg_8117 = grp_flatten_fu_1309_ap_return_279.read();
        reshaped_27_reg_6857 = grp_flatten_fu_1309_ap_return_27.read();
        reshaped_280_reg_8122 = grp_flatten_fu_1309_ap_return_280.read();
        reshaped_281_reg_8127 = grp_flatten_fu_1309_ap_return_281.read();
        reshaped_282_reg_8132 = grp_flatten_fu_1309_ap_return_282.read();
        reshaped_283_reg_8137 = grp_flatten_fu_1309_ap_return_283.read();
        reshaped_284_reg_8142 = grp_flatten_fu_1309_ap_return_284.read();
        reshaped_285_reg_8147 = grp_flatten_fu_1309_ap_return_285.read();
        reshaped_286_reg_8152 = grp_flatten_fu_1309_ap_return_286.read();
        reshaped_287_reg_8157 = grp_flatten_fu_1309_ap_return_287.read();
        reshaped_288_reg_8162 = grp_flatten_fu_1309_ap_return_288.read();
        reshaped_289_reg_8167 = grp_flatten_fu_1309_ap_return_289.read();
        reshaped_28_reg_6862 = grp_flatten_fu_1309_ap_return_28.read();
        reshaped_290_reg_8172 = grp_flatten_fu_1309_ap_return_290.read();
        reshaped_291_reg_8177 = grp_flatten_fu_1309_ap_return_291.read();
        reshaped_292_reg_8182 = grp_flatten_fu_1309_ap_return_292.read();
        reshaped_293_reg_8187 = grp_flatten_fu_1309_ap_return_293.read();
        reshaped_294_reg_8192 = grp_flatten_fu_1309_ap_return_294.read();
        reshaped_295_reg_8197 = grp_flatten_fu_1309_ap_return_295.read();
        reshaped_296_reg_8202 = grp_flatten_fu_1309_ap_return_296.read();
        reshaped_297_reg_8207 = grp_flatten_fu_1309_ap_return_297.read();
        reshaped_298_reg_8212 = grp_flatten_fu_1309_ap_return_298.read();
        reshaped_299_reg_8217 = grp_flatten_fu_1309_ap_return_299.read();
        reshaped_29_reg_6867 = grp_flatten_fu_1309_ap_return_29.read();
        reshaped_2_reg_6732 = grp_flatten_fu_1309_ap_return_2.read();
        reshaped_300_reg_8222 = grp_flatten_fu_1309_ap_return_300.read();
        reshaped_301_reg_8227 = grp_flatten_fu_1309_ap_return_301.read();
        reshaped_302_reg_8232 = grp_flatten_fu_1309_ap_return_302.read();
        reshaped_303_reg_8237 = grp_flatten_fu_1309_ap_return_303.read();
        reshaped_304_reg_8242 = grp_flatten_fu_1309_ap_return_304.read();
        reshaped_305_reg_8247 = grp_flatten_fu_1309_ap_return_305.read();
        reshaped_306_reg_8252 = grp_flatten_fu_1309_ap_return_306.read();
        reshaped_307_reg_8257 = grp_flatten_fu_1309_ap_return_307.read();
        reshaped_308_reg_8262 = grp_flatten_fu_1309_ap_return_308.read();
        reshaped_309_reg_8267 = grp_flatten_fu_1309_ap_return_309.read();
        reshaped_30_reg_6872 = grp_flatten_fu_1309_ap_return_30.read();
        reshaped_310_reg_8272 = grp_flatten_fu_1309_ap_return_310.read();
        reshaped_311_reg_8277 = grp_flatten_fu_1309_ap_return_311.read();
        reshaped_312_reg_8282 = grp_flatten_fu_1309_ap_return_312.read();
        reshaped_313_reg_8287 = grp_flatten_fu_1309_ap_return_313.read();
        reshaped_314_reg_8292 = grp_flatten_fu_1309_ap_return_314.read();
        reshaped_315_reg_8297 = grp_flatten_fu_1309_ap_return_315.read();
        reshaped_316_reg_8302 = grp_flatten_fu_1309_ap_return_316.read();
        reshaped_317_reg_8307 = grp_flatten_fu_1309_ap_return_317.read();
        reshaped_318_reg_8312 = grp_flatten_fu_1309_ap_return_318.read();
        reshaped_319_reg_8317 = grp_flatten_fu_1309_ap_return_319.read();
        reshaped_31_reg_6877 = grp_flatten_fu_1309_ap_return_31.read();
        reshaped_320_reg_8322 = grp_flatten_fu_1309_ap_return_320.read();
        reshaped_321_reg_8327 = grp_flatten_fu_1309_ap_return_321.read();
        reshaped_322_reg_8332 = grp_flatten_fu_1309_ap_return_322.read();
        reshaped_323_reg_8337 = grp_flatten_fu_1309_ap_return_323.read();
        reshaped_324_reg_8342 = grp_flatten_fu_1309_ap_return_324.read();
        reshaped_325_reg_8347 = grp_flatten_fu_1309_ap_return_325.read();
        reshaped_326_reg_8352 = grp_flatten_fu_1309_ap_return_326.read();
        reshaped_327_reg_8357 = grp_flatten_fu_1309_ap_return_327.read();
        reshaped_328_reg_8362 = grp_flatten_fu_1309_ap_return_328.read();
        reshaped_329_reg_8367 = grp_flatten_fu_1309_ap_return_329.read();
        reshaped_32_reg_6882 = grp_flatten_fu_1309_ap_return_32.read();
        reshaped_330_reg_8372 = grp_flatten_fu_1309_ap_return_330.read();
        reshaped_331_reg_8377 = grp_flatten_fu_1309_ap_return_331.read();
        reshaped_332_reg_8382 = grp_flatten_fu_1309_ap_return_332.read();
        reshaped_333_reg_8387 = grp_flatten_fu_1309_ap_return_333.read();
        reshaped_334_reg_8392 = grp_flatten_fu_1309_ap_return_334.read();
        reshaped_335_reg_8397 = grp_flatten_fu_1309_ap_return_335.read();
        reshaped_336_reg_8402 = grp_flatten_fu_1309_ap_return_336.read();
        reshaped_337_reg_8407 = grp_flatten_fu_1309_ap_return_337.read();
        reshaped_338_reg_8412 = grp_flatten_fu_1309_ap_return_338.read();
        reshaped_339_reg_8417 = grp_flatten_fu_1309_ap_return_339.read();
        reshaped_33_reg_6887 = grp_flatten_fu_1309_ap_return_33.read();
        reshaped_340_reg_8422 = grp_flatten_fu_1309_ap_return_340.read();
        reshaped_341_reg_8427 = grp_flatten_fu_1309_ap_return_341.read();
        reshaped_342_reg_8432 = grp_flatten_fu_1309_ap_return_342.read();
        reshaped_343_reg_8437 = grp_flatten_fu_1309_ap_return_343.read();
        reshaped_344_reg_8442 = grp_flatten_fu_1309_ap_return_344.read();
        reshaped_345_reg_8447 = grp_flatten_fu_1309_ap_return_345.read();
        reshaped_346_reg_8452 = grp_flatten_fu_1309_ap_return_346.read();
        reshaped_347_reg_8457 = grp_flatten_fu_1309_ap_return_347.read();
        reshaped_348_reg_8462 = grp_flatten_fu_1309_ap_return_348.read();
        reshaped_349_reg_8467 = grp_flatten_fu_1309_ap_return_349.read();
        reshaped_34_reg_6892 = grp_flatten_fu_1309_ap_return_34.read();
        reshaped_350_reg_8472 = grp_flatten_fu_1309_ap_return_350.read();
        reshaped_351_reg_8477 = grp_flatten_fu_1309_ap_return_351.read();
        reshaped_352_reg_8482 = grp_flatten_fu_1309_ap_return_352.read();
        reshaped_353_reg_8487 = grp_flatten_fu_1309_ap_return_353.read();
        reshaped_354_reg_8492 = grp_flatten_fu_1309_ap_return_354.read();
        reshaped_355_reg_8497 = grp_flatten_fu_1309_ap_return_355.read();
        reshaped_356_reg_8502 = grp_flatten_fu_1309_ap_return_356.read();
        reshaped_357_reg_8507 = grp_flatten_fu_1309_ap_return_357.read();
        reshaped_358_reg_8512 = grp_flatten_fu_1309_ap_return_358.read();
        reshaped_359_reg_8517 = grp_flatten_fu_1309_ap_return_359.read();
        reshaped_35_reg_6897 = grp_flatten_fu_1309_ap_return_35.read();
        reshaped_360_reg_8522 = grp_flatten_fu_1309_ap_return_360.read();
        reshaped_361_reg_8527 = grp_flatten_fu_1309_ap_return_361.read();
        reshaped_362_reg_8532 = grp_flatten_fu_1309_ap_return_362.read();
        reshaped_363_reg_8537 = grp_flatten_fu_1309_ap_return_363.read();
        reshaped_364_reg_8542 = grp_flatten_fu_1309_ap_return_364.read();
        reshaped_365_reg_8547 = grp_flatten_fu_1309_ap_return_365.read();
        reshaped_366_reg_8552 = grp_flatten_fu_1309_ap_return_366.read();
        reshaped_367_reg_8557 = grp_flatten_fu_1309_ap_return_367.read();
        reshaped_368_reg_8562 = grp_flatten_fu_1309_ap_return_368.read();
        reshaped_369_reg_8567 = grp_flatten_fu_1309_ap_return_369.read();
        reshaped_36_reg_6902 = grp_flatten_fu_1309_ap_return_36.read();
        reshaped_370_reg_8572 = grp_flatten_fu_1309_ap_return_370.read();
        reshaped_371_reg_8577 = grp_flatten_fu_1309_ap_return_371.read();
        reshaped_372_reg_8582 = grp_flatten_fu_1309_ap_return_372.read();
        reshaped_373_reg_8587 = grp_flatten_fu_1309_ap_return_373.read();
        reshaped_374_reg_8592 = grp_flatten_fu_1309_ap_return_374.read();
        reshaped_375_reg_8597 = grp_flatten_fu_1309_ap_return_375.read();
        reshaped_376_reg_8602 = grp_flatten_fu_1309_ap_return_376.read();
        reshaped_377_reg_8607 = grp_flatten_fu_1309_ap_return_377.read();
        reshaped_378_reg_8612 = grp_flatten_fu_1309_ap_return_378.read();
        reshaped_379_reg_8617 = grp_flatten_fu_1309_ap_return_379.read();
        reshaped_37_reg_6907 = grp_flatten_fu_1309_ap_return_37.read();
        reshaped_380_reg_8622 = grp_flatten_fu_1309_ap_return_380.read();
        reshaped_381_reg_8627 = grp_flatten_fu_1309_ap_return_381.read();
        reshaped_382_reg_8632 = grp_flatten_fu_1309_ap_return_382.read();
        reshaped_383_reg_8637 = grp_flatten_fu_1309_ap_return_383.read();
        reshaped_384_reg_8642 = grp_flatten_fu_1309_ap_return_384.read();
        reshaped_385_reg_8647 = grp_flatten_fu_1309_ap_return_385.read();
        reshaped_386_reg_8652 = grp_flatten_fu_1309_ap_return_386.read();
        reshaped_387_reg_8657 = grp_flatten_fu_1309_ap_return_387.read();
        reshaped_388_reg_8662 = grp_flatten_fu_1309_ap_return_388.read();
        reshaped_389_reg_8667 = grp_flatten_fu_1309_ap_return_389.read();
        reshaped_38_reg_6912 = grp_flatten_fu_1309_ap_return_38.read();
        reshaped_390_reg_8672 = grp_flatten_fu_1309_ap_return_390.read();
        reshaped_391_reg_8677 = grp_flatten_fu_1309_ap_return_391.read();
        reshaped_392_reg_8682 = grp_flatten_fu_1309_ap_return_392.read();
        reshaped_393_reg_8687 = grp_flatten_fu_1309_ap_return_393.read();
        reshaped_394_reg_8692 = grp_flatten_fu_1309_ap_return_394.read();
        reshaped_395_reg_8697 = grp_flatten_fu_1309_ap_return_395.read();
        reshaped_396_reg_8702 = grp_flatten_fu_1309_ap_return_396.read();
        reshaped_397_reg_8707 = grp_flatten_fu_1309_ap_return_397.read();
        reshaped_398_reg_8712 = grp_flatten_fu_1309_ap_return_398.read();
        reshaped_399_reg_8717 = grp_flatten_fu_1309_ap_return_399.read();
        reshaped_39_reg_6917 = grp_flatten_fu_1309_ap_return_39.read();
        reshaped_3_reg_6737 = grp_flatten_fu_1309_ap_return_3.read();
        reshaped_400_reg_8722 = grp_flatten_fu_1309_ap_return_400.read();
        reshaped_401_reg_8727 = grp_flatten_fu_1309_ap_return_401.read();
        reshaped_402_reg_8732 = grp_flatten_fu_1309_ap_return_402.read();
        reshaped_403_reg_8737 = grp_flatten_fu_1309_ap_return_403.read();
        reshaped_404_reg_8742 = grp_flatten_fu_1309_ap_return_404.read();
        reshaped_405_reg_8747 = grp_flatten_fu_1309_ap_return_405.read();
        reshaped_406_reg_8752 = grp_flatten_fu_1309_ap_return_406.read();
        reshaped_407_reg_8757 = grp_flatten_fu_1309_ap_return_407.read();
        reshaped_408_reg_8762 = grp_flatten_fu_1309_ap_return_408.read();
        reshaped_409_reg_8767 = grp_flatten_fu_1309_ap_return_409.read();
        reshaped_40_reg_6922 = grp_flatten_fu_1309_ap_return_40.read();
        reshaped_410_reg_8772 = grp_flatten_fu_1309_ap_return_410.read();
        reshaped_411_reg_8777 = grp_flatten_fu_1309_ap_return_411.read();
        reshaped_412_reg_8782 = grp_flatten_fu_1309_ap_return_412.read();
        reshaped_413_reg_8787 = grp_flatten_fu_1309_ap_return_413.read();
        reshaped_414_reg_8792 = grp_flatten_fu_1309_ap_return_414.read();
        reshaped_415_reg_8797 = grp_flatten_fu_1309_ap_return_415.read();
        reshaped_416_reg_8802 = grp_flatten_fu_1309_ap_return_416.read();
        reshaped_417_reg_8807 = grp_flatten_fu_1309_ap_return_417.read();
        reshaped_418_reg_8812 = grp_flatten_fu_1309_ap_return_418.read();
        reshaped_419_reg_8817 = grp_flatten_fu_1309_ap_return_419.read();
        reshaped_41_reg_6927 = grp_flatten_fu_1309_ap_return_41.read();
        reshaped_420_reg_8822 = grp_flatten_fu_1309_ap_return_420.read();
        reshaped_421_reg_8827 = grp_flatten_fu_1309_ap_return_421.read();
        reshaped_422_reg_8832 = grp_flatten_fu_1309_ap_return_422.read();
        reshaped_423_reg_8837 = grp_flatten_fu_1309_ap_return_423.read();
        reshaped_424_reg_8842 = grp_flatten_fu_1309_ap_return_424.read();
        reshaped_425_reg_8847 = grp_flatten_fu_1309_ap_return_425.read();
        reshaped_426_reg_8852 = grp_flatten_fu_1309_ap_return_426.read();
        reshaped_427_reg_8857 = grp_flatten_fu_1309_ap_return_427.read();
        reshaped_428_reg_8862 = grp_flatten_fu_1309_ap_return_428.read();
        reshaped_429_reg_8867 = grp_flatten_fu_1309_ap_return_429.read();
        reshaped_42_reg_6932 = grp_flatten_fu_1309_ap_return_42.read();
        reshaped_430_reg_8872 = grp_flatten_fu_1309_ap_return_430.read();
        reshaped_431_reg_8877 = grp_flatten_fu_1309_ap_return_431.read();
        reshaped_432_reg_8882 = grp_flatten_fu_1309_ap_return_432.read();
        reshaped_433_reg_8887 = grp_flatten_fu_1309_ap_return_433.read();
        reshaped_434_reg_8892 = grp_flatten_fu_1309_ap_return_434.read();
        reshaped_435_reg_8897 = grp_flatten_fu_1309_ap_return_435.read();
        reshaped_436_reg_8902 = grp_flatten_fu_1309_ap_return_436.read();
        reshaped_437_reg_8907 = grp_flatten_fu_1309_ap_return_437.read();
        reshaped_438_reg_8912 = grp_flatten_fu_1309_ap_return_438.read();
        reshaped_439_reg_8917 = grp_flatten_fu_1309_ap_return_439.read();
        reshaped_43_reg_6937 = grp_flatten_fu_1309_ap_return_43.read();
        reshaped_440_reg_8922 = grp_flatten_fu_1309_ap_return_440.read();
        reshaped_441_reg_8927 = grp_flatten_fu_1309_ap_return_441.read();
        reshaped_442_reg_8932 = grp_flatten_fu_1309_ap_return_442.read();
        reshaped_443_reg_8937 = grp_flatten_fu_1309_ap_return_443.read();
        reshaped_444_reg_8942 = grp_flatten_fu_1309_ap_return_444.read();
        reshaped_445_reg_8947 = grp_flatten_fu_1309_ap_return_445.read();
        reshaped_446_reg_8952 = grp_flatten_fu_1309_ap_return_446.read();
        reshaped_447_reg_8957 = grp_flatten_fu_1309_ap_return_447.read();
        reshaped_448_reg_8962 = grp_flatten_fu_1309_ap_return_448.read();
        reshaped_449_reg_8967 = grp_flatten_fu_1309_ap_return_449.read();
        reshaped_44_reg_6942 = grp_flatten_fu_1309_ap_return_44.read();
        reshaped_450_reg_8972 = grp_flatten_fu_1309_ap_return_450.read();
        reshaped_451_reg_8977 = grp_flatten_fu_1309_ap_return_451.read();
        reshaped_452_reg_8982 = grp_flatten_fu_1309_ap_return_452.read();
        reshaped_453_reg_8987 = grp_flatten_fu_1309_ap_return_453.read();
        reshaped_454_reg_8992 = grp_flatten_fu_1309_ap_return_454.read();
        reshaped_455_reg_8997 = grp_flatten_fu_1309_ap_return_455.read();
        reshaped_456_reg_9002 = grp_flatten_fu_1309_ap_return_456.read();
        reshaped_457_reg_9007 = grp_flatten_fu_1309_ap_return_457.read();
        reshaped_458_reg_9012 = grp_flatten_fu_1309_ap_return_458.read();
        reshaped_459_reg_9017 = grp_flatten_fu_1309_ap_return_459.read();
        reshaped_45_reg_6947 = grp_flatten_fu_1309_ap_return_45.read();
        reshaped_460_reg_9022 = grp_flatten_fu_1309_ap_return_460.read();
        reshaped_461_reg_9027 = grp_flatten_fu_1309_ap_return_461.read();
        reshaped_462_reg_9032 = grp_flatten_fu_1309_ap_return_462.read();
        reshaped_463_reg_9037 = grp_flatten_fu_1309_ap_return_463.read();
        reshaped_464_reg_9042 = grp_flatten_fu_1309_ap_return_464.read();
        reshaped_465_reg_9047 = grp_flatten_fu_1309_ap_return_465.read();
        reshaped_466_reg_9052 = grp_flatten_fu_1309_ap_return_466.read();
        reshaped_467_reg_9057 = grp_flatten_fu_1309_ap_return_467.read();
        reshaped_468_reg_9062 = grp_flatten_fu_1309_ap_return_468.read();
        reshaped_469_reg_9067 = grp_flatten_fu_1309_ap_return_469.read();
        reshaped_46_reg_6952 = grp_flatten_fu_1309_ap_return_46.read();
        reshaped_470_reg_9072 = grp_flatten_fu_1309_ap_return_470.read();
        reshaped_471_reg_9077 = grp_flatten_fu_1309_ap_return_471.read();
        reshaped_472_reg_9082 = grp_flatten_fu_1309_ap_return_472.read();
        reshaped_473_reg_9087 = grp_flatten_fu_1309_ap_return_473.read();
        reshaped_474_reg_9092 = grp_flatten_fu_1309_ap_return_474.read();
        reshaped_475_reg_9097 = grp_flatten_fu_1309_ap_return_475.read();
        reshaped_476_reg_9102 = grp_flatten_fu_1309_ap_return_476.read();
        reshaped_477_reg_9107 = grp_flatten_fu_1309_ap_return_477.read();
        reshaped_478_reg_9112 = grp_flatten_fu_1309_ap_return_478.read();
        reshaped_479_reg_9117 = grp_flatten_fu_1309_ap_return_479.read();
        reshaped_47_reg_6957 = grp_flatten_fu_1309_ap_return_47.read();
        reshaped_480_reg_9122 = grp_flatten_fu_1309_ap_return_480.read();
        reshaped_481_reg_9127 = grp_flatten_fu_1309_ap_return_481.read();
        reshaped_482_reg_9132 = grp_flatten_fu_1309_ap_return_482.read();
        reshaped_483_reg_9137 = grp_flatten_fu_1309_ap_return_483.read();
        reshaped_484_reg_9142 = grp_flatten_fu_1309_ap_return_484.read();
        reshaped_485_reg_9147 = grp_flatten_fu_1309_ap_return_485.read();
        reshaped_486_reg_9152 = grp_flatten_fu_1309_ap_return_486.read();
        reshaped_487_reg_9157 = grp_flatten_fu_1309_ap_return_487.read();
        reshaped_488_reg_9162 = grp_flatten_fu_1309_ap_return_488.read();
        reshaped_489_reg_9167 = grp_flatten_fu_1309_ap_return_489.read();
        reshaped_48_reg_6962 = grp_flatten_fu_1309_ap_return_48.read();
        reshaped_490_reg_9172 = grp_flatten_fu_1309_ap_return_490.read();
        reshaped_491_reg_9177 = grp_flatten_fu_1309_ap_return_491.read();
        reshaped_492_reg_9182 = grp_flatten_fu_1309_ap_return_492.read();
        reshaped_493_reg_9187 = grp_flatten_fu_1309_ap_return_493.read();
        reshaped_494_reg_9192 = grp_flatten_fu_1309_ap_return_494.read();
        reshaped_495_reg_9197 = grp_flatten_fu_1309_ap_return_495.read();
        reshaped_496_reg_9202 = grp_flatten_fu_1309_ap_return_496.read();
        reshaped_497_reg_9207 = grp_flatten_fu_1309_ap_return_497.read();
        reshaped_498_reg_9212 = grp_flatten_fu_1309_ap_return_498.read();
        reshaped_499_reg_9217 = grp_flatten_fu_1309_ap_return_499.read();
        reshaped_49_reg_6967 = grp_flatten_fu_1309_ap_return_49.read();
        reshaped_4_reg_6742 = grp_flatten_fu_1309_ap_return_4.read();
        reshaped_500_reg_9222 = grp_flatten_fu_1309_ap_return_500.read();
        reshaped_501_reg_9227 = grp_flatten_fu_1309_ap_return_501.read();
        reshaped_502_reg_9232 = grp_flatten_fu_1309_ap_return_502.read();
        reshaped_503_reg_9237 = grp_flatten_fu_1309_ap_return_503.read();
        reshaped_504_reg_9242 = grp_flatten_fu_1309_ap_return_504.read();
        reshaped_505_reg_9247 = grp_flatten_fu_1309_ap_return_505.read();
        reshaped_506_reg_9252 = grp_flatten_fu_1309_ap_return_506.read();
        reshaped_507_reg_9257 = grp_flatten_fu_1309_ap_return_507.read();
        reshaped_508_reg_9262 = grp_flatten_fu_1309_ap_return_508.read();
        reshaped_509_reg_9267 = grp_flatten_fu_1309_ap_return_509.read();
        reshaped_50_reg_6972 = grp_flatten_fu_1309_ap_return_50.read();
        reshaped_510_reg_9272 = grp_flatten_fu_1309_ap_return_510.read();
        reshaped_511_reg_9277 = grp_flatten_fu_1309_ap_return_511.read();
        reshaped_51_reg_6977 = grp_flatten_fu_1309_ap_return_51.read();
        reshaped_52_reg_6982 = grp_flatten_fu_1309_ap_return_52.read();
        reshaped_53_reg_6987 = grp_flatten_fu_1309_ap_return_53.read();
        reshaped_54_reg_6992 = grp_flatten_fu_1309_ap_return_54.read();
        reshaped_55_reg_6997 = grp_flatten_fu_1309_ap_return_55.read();
        reshaped_56_reg_7002 = grp_flatten_fu_1309_ap_return_56.read();
        reshaped_57_reg_7007 = grp_flatten_fu_1309_ap_return_57.read();
        reshaped_58_reg_7012 = grp_flatten_fu_1309_ap_return_58.read();
        reshaped_59_reg_7017 = grp_flatten_fu_1309_ap_return_59.read();
        reshaped_5_reg_6747 = grp_flatten_fu_1309_ap_return_5.read();
        reshaped_60_reg_7022 = grp_flatten_fu_1309_ap_return_60.read();
        reshaped_61_reg_7027 = grp_flatten_fu_1309_ap_return_61.read();
        reshaped_62_reg_7032 = grp_flatten_fu_1309_ap_return_62.read();
        reshaped_63_reg_7037 = grp_flatten_fu_1309_ap_return_63.read();
        reshaped_64_reg_7042 = grp_flatten_fu_1309_ap_return_64.read();
        reshaped_65_reg_7047 = grp_flatten_fu_1309_ap_return_65.read();
        reshaped_66_reg_7052 = grp_flatten_fu_1309_ap_return_66.read();
        reshaped_67_reg_7057 = grp_flatten_fu_1309_ap_return_67.read();
        reshaped_68_reg_7062 = grp_flatten_fu_1309_ap_return_68.read();
        reshaped_69_reg_7067 = grp_flatten_fu_1309_ap_return_69.read();
        reshaped_6_reg_6752 = grp_flatten_fu_1309_ap_return_6.read();
        reshaped_70_reg_7072 = grp_flatten_fu_1309_ap_return_70.read();
        reshaped_71_reg_7077 = grp_flatten_fu_1309_ap_return_71.read();
        reshaped_72_reg_7082 = grp_flatten_fu_1309_ap_return_72.read();
        reshaped_73_reg_7087 = grp_flatten_fu_1309_ap_return_73.read();
        reshaped_74_reg_7092 = grp_flatten_fu_1309_ap_return_74.read();
        reshaped_75_reg_7097 = grp_flatten_fu_1309_ap_return_75.read();
        reshaped_76_reg_7102 = grp_flatten_fu_1309_ap_return_76.read();
        reshaped_77_reg_7107 = grp_flatten_fu_1309_ap_return_77.read();
        reshaped_78_reg_7112 = grp_flatten_fu_1309_ap_return_78.read();
        reshaped_79_reg_7117 = grp_flatten_fu_1309_ap_return_79.read();
        reshaped_7_reg_6757 = grp_flatten_fu_1309_ap_return_7.read();
        reshaped_80_reg_7122 = grp_flatten_fu_1309_ap_return_80.read();
        reshaped_81_reg_7127 = grp_flatten_fu_1309_ap_return_81.read();
        reshaped_82_reg_7132 = grp_flatten_fu_1309_ap_return_82.read();
        reshaped_83_reg_7137 = grp_flatten_fu_1309_ap_return_83.read();
        reshaped_84_reg_7142 = grp_flatten_fu_1309_ap_return_84.read();
        reshaped_85_reg_7147 = grp_flatten_fu_1309_ap_return_85.read();
        reshaped_86_reg_7152 = grp_flatten_fu_1309_ap_return_86.read();
        reshaped_87_reg_7157 = grp_flatten_fu_1309_ap_return_87.read();
        reshaped_88_reg_7162 = grp_flatten_fu_1309_ap_return_88.read();
        reshaped_89_reg_7167 = grp_flatten_fu_1309_ap_return_89.read();
        reshaped_8_reg_6762 = grp_flatten_fu_1309_ap_return_8.read();
        reshaped_90_reg_7172 = grp_flatten_fu_1309_ap_return_90.read();
        reshaped_91_reg_7177 = grp_flatten_fu_1309_ap_return_91.read();
        reshaped_92_reg_7182 = grp_flatten_fu_1309_ap_return_92.read();
        reshaped_93_reg_7187 = grp_flatten_fu_1309_ap_return_93.read();
        reshaped_94_reg_7192 = grp_flatten_fu_1309_ap_return_94.read();
        reshaped_95_reg_7197 = grp_flatten_fu_1309_ap_return_95.read();
        reshaped_96_reg_7202 = grp_flatten_fu_1309_ap_return_96.read();
        reshaped_97_reg_7207 = grp_flatten_fu_1309_ap_return_97.read();
        reshaped_98_reg_7212 = grp_flatten_fu_1309_ap_return_98.read();
        reshaped_99_reg_7217 = grp_flatten_fu_1309_ap_return_99.read();
        reshaped_9_reg_6767 = grp_flatten_fu_1309_ap_return_9.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) && esl_seteq<1,1,1>(grp_dense_512_256_s_fu_248_ap_done.read(), ap_const_logic_1))) {
        signed1_0_reg_9282 = call_ret_sign_256_s_fu_1025_ap_return_0.read();
        signed1_100_reg_9782 = call_ret_sign_256_s_fu_1025_ap_return_100.read();
        signed1_101_reg_9787 = call_ret_sign_256_s_fu_1025_ap_return_101.read();
        signed1_102_reg_9792 = call_ret_sign_256_s_fu_1025_ap_return_102.read();
        signed1_103_reg_9797 = call_ret_sign_256_s_fu_1025_ap_return_103.read();
        signed1_104_reg_9802 = call_ret_sign_256_s_fu_1025_ap_return_104.read();
        signed1_105_reg_9807 = call_ret_sign_256_s_fu_1025_ap_return_105.read();
        signed1_106_reg_9812 = call_ret_sign_256_s_fu_1025_ap_return_106.read();
        signed1_107_reg_9817 = call_ret_sign_256_s_fu_1025_ap_return_107.read();
        signed1_108_reg_9822 = call_ret_sign_256_s_fu_1025_ap_return_108.read();
        signed1_109_reg_9827 = call_ret_sign_256_s_fu_1025_ap_return_109.read();
        signed1_10_reg_9332 = call_ret_sign_256_s_fu_1025_ap_return_10.read();
        signed1_110_reg_9832 = call_ret_sign_256_s_fu_1025_ap_return_110.read();
        signed1_111_reg_9837 = call_ret_sign_256_s_fu_1025_ap_return_111.read();
        signed1_112_reg_9842 = call_ret_sign_256_s_fu_1025_ap_return_112.read();
        signed1_113_reg_9847 = call_ret_sign_256_s_fu_1025_ap_return_113.read();
        signed1_114_reg_9852 = call_ret_sign_256_s_fu_1025_ap_return_114.read();
        signed1_115_reg_9857 = call_ret_sign_256_s_fu_1025_ap_return_115.read();
        signed1_116_reg_9862 = call_ret_sign_256_s_fu_1025_ap_return_116.read();
        signed1_117_reg_9867 = call_ret_sign_256_s_fu_1025_ap_return_117.read();
        signed1_118_reg_9872 = call_ret_sign_256_s_fu_1025_ap_return_118.read();
        signed1_119_reg_9877 = call_ret_sign_256_s_fu_1025_ap_return_119.read();
        signed1_11_reg_9337 = call_ret_sign_256_s_fu_1025_ap_return_11.read();
        signed1_120_reg_9882 = call_ret_sign_256_s_fu_1025_ap_return_120.read();
        signed1_121_reg_9887 = call_ret_sign_256_s_fu_1025_ap_return_121.read();
        signed1_122_reg_9892 = call_ret_sign_256_s_fu_1025_ap_return_122.read();
        signed1_123_reg_9897 = call_ret_sign_256_s_fu_1025_ap_return_123.read();
        signed1_124_reg_9902 = call_ret_sign_256_s_fu_1025_ap_return_124.read();
        signed1_125_reg_9907 = call_ret_sign_256_s_fu_1025_ap_return_125.read();
        signed1_126_reg_9912 = call_ret_sign_256_s_fu_1025_ap_return_126.read();
        signed1_127_reg_9917 = call_ret_sign_256_s_fu_1025_ap_return_127.read();
        signed1_128_reg_9922 = call_ret_sign_256_s_fu_1025_ap_return_128.read();
        signed1_129_reg_9927 = call_ret_sign_256_s_fu_1025_ap_return_129.read();
        signed1_12_reg_9342 = call_ret_sign_256_s_fu_1025_ap_return_12.read();
        signed1_130_reg_9932 = call_ret_sign_256_s_fu_1025_ap_return_130.read();
        signed1_131_reg_9937 = call_ret_sign_256_s_fu_1025_ap_return_131.read();
        signed1_132_reg_9942 = call_ret_sign_256_s_fu_1025_ap_return_132.read();
        signed1_133_reg_9947 = call_ret_sign_256_s_fu_1025_ap_return_133.read();
        signed1_134_reg_9952 = call_ret_sign_256_s_fu_1025_ap_return_134.read();
        signed1_135_reg_9957 = call_ret_sign_256_s_fu_1025_ap_return_135.read();
        signed1_136_reg_9962 = call_ret_sign_256_s_fu_1025_ap_return_136.read();
        signed1_137_reg_9967 = call_ret_sign_256_s_fu_1025_ap_return_137.read();
        signed1_138_reg_9972 = call_ret_sign_256_s_fu_1025_ap_return_138.read();
        signed1_139_reg_9977 = call_ret_sign_256_s_fu_1025_ap_return_139.read();
        signed1_13_reg_9347 = call_ret_sign_256_s_fu_1025_ap_return_13.read();
        signed1_140_reg_9982 = call_ret_sign_256_s_fu_1025_ap_return_140.read();
        signed1_141_reg_9987 = call_ret_sign_256_s_fu_1025_ap_return_141.read();
        signed1_142_reg_9992 = call_ret_sign_256_s_fu_1025_ap_return_142.read();
        signed1_143_reg_9997 = call_ret_sign_256_s_fu_1025_ap_return_143.read();
        signed1_144_reg_10002 = call_ret_sign_256_s_fu_1025_ap_return_144.read();
        signed1_145_reg_10007 = call_ret_sign_256_s_fu_1025_ap_return_145.read();
        signed1_146_reg_10012 = call_ret_sign_256_s_fu_1025_ap_return_146.read();
        signed1_147_reg_10017 = call_ret_sign_256_s_fu_1025_ap_return_147.read();
        signed1_148_reg_10022 = call_ret_sign_256_s_fu_1025_ap_return_148.read();
        signed1_149_reg_10027 = call_ret_sign_256_s_fu_1025_ap_return_149.read();
        signed1_14_reg_9352 = call_ret_sign_256_s_fu_1025_ap_return_14.read();
        signed1_150_reg_10032 = call_ret_sign_256_s_fu_1025_ap_return_150.read();
        signed1_151_reg_10037 = call_ret_sign_256_s_fu_1025_ap_return_151.read();
        signed1_152_reg_10042 = call_ret_sign_256_s_fu_1025_ap_return_152.read();
        signed1_153_reg_10047 = call_ret_sign_256_s_fu_1025_ap_return_153.read();
        signed1_154_reg_10052 = call_ret_sign_256_s_fu_1025_ap_return_154.read();
        signed1_155_reg_10057 = call_ret_sign_256_s_fu_1025_ap_return_155.read();
        signed1_156_reg_10062 = call_ret_sign_256_s_fu_1025_ap_return_156.read();
        signed1_157_reg_10067 = call_ret_sign_256_s_fu_1025_ap_return_157.read();
        signed1_158_reg_10072 = call_ret_sign_256_s_fu_1025_ap_return_158.read();
        signed1_159_reg_10077 = call_ret_sign_256_s_fu_1025_ap_return_159.read();
        signed1_15_reg_9357 = call_ret_sign_256_s_fu_1025_ap_return_15.read();
        signed1_160_reg_10082 = call_ret_sign_256_s_fu_1025_ap_return_160.read();
        signed1_161_reg_10087 = call_ret_sign_256_s_fu_1025_ap_return_161.read();
        signed1_162_reg_10092 = call_ret_sign_256_s_fu_1025_ap_return_162.read();
        signed1_163_reg_10097 = call_ret_sign_256_s_fu_1025_ap_return_163.read();
        signed1_164_reg_10102 = call_ret_sign_256_s_fu_1025_ap_return_164.read();
        signed1_165_reg_10107 = call_ret_sign_256_s_fu_1025_ap_return_165.read();
        signed1_166_reg_10112 = call_ret_sign_256_s_fu_1025_ap_return_166.read();
        signed1_167_reg_10117 = call_ret_sign_256_s_fu_1025_ap_return_167.read();
        signed1_168_reg_10122 = call_ret_sign_256_s_fu_1025_ap_return_168.read();
        signed1_169_reg_10127 = call_ret_sign_256_s_fu_1025_ap_return_169.read();
        signed1_16_reg_9362 = call_ret_sign_256_s_fu_1025_ap_return_16.read();
        signed1_170_reg_10132 = call_ret_sign_256_s_fu_1025_ap_return_170.read();
        signed1_171_reg_10137 = call_ret_sign_256_s_fu_1025_ap_return_171.read();
        signed1_172_reg_10142 = call_ret_sign_256_s_fu_1025_ap_return_172.read();
        signed1_173_reg_10147 = call_ret_sign_256_s_fu_1025_ap_return_173.read();
        signed1_174_reg_10152 = call_ret_sign_256_s_fu_1025_ap_return_174.read();
        signed1_175_reg_10157 = call_ret_sign_256_s_fu_1025_ap_return_175.read();
        signed1_176_reg_10162 = call_ret_sign_256_s_fu_1025_ap_return_176.read();
        signed1_177_reg_10167 = call_ret_sign_256_s_fu_1025_ap_return_177.read();
        signed1_178_reg_10172 = call_ret_sign_256_s_fu_1025_ap_return_178.read();
        signed1_179_reg_10177 = call_ret_sign_256_s_fu_1025_ap_return_179.read();
        signed1_17_reg_9367 = call_ret_sign_256_s_fu_1025_ap_return_17.read();
        signed1_180_reg_10182 = call_ret_sign_256_s_fu_1025_ap_return_180.read();
        signed1_181_reg_10187 = call_ret_sign_256_s_fu_1025_ap_return_181.read();
        signed1_182_reg_10192 = call_ret_sign_256_s_fu_1025_ap_return_182.read();
        signed1_183_reg_10197 = call_ret_sign_256_s_fu_1025_ap_return_183.read();
        signed1_184_reg_10202 = call_ret_sign_256_s_fu_1025_ap_return_184.read();
        signed1_185_reg_10207 = call_ret_sign_256_s_fu_1025_ap_return_185.read();
        signed1_186_reg_10212 = call_ret_sign_256_s_fu_1025_ap_return_186.read();
        signed1_187_reg_10217 = call_ret_sign_256_s_fu_1025_ap_return_187.read();
        signed1_188_reg_10222 = call_ret_sign_256_s_fu_1025_ap_return_188.read();
        signed1_189_reg_10227 = call_ret_sign_256_s_fu_1025_ap_return_189.read();
        signed1_18_reg_9372 = call_ret_sign_256_s_fu_1025_ap_return_18.read();
        signed1_190_reg_10232 = call_ret_sign_256_s_fu_1025_ap_return_190.read();
        signed1_191_reg_10237 = call_ret_sign_256_s_fu_1025_ap_return_191.read();
        signed1_192_reg_10242 = call_ret_sign_256_s_fu_1025_ap_return_192.read();
        signed1_193_reg_10247 = call_ret_sign_256_s_fu_1025_ap_return_193.read();
        signed1_194_reg_10252 = call_ret_sign_256_s_fu_1025_ap_return_194.read();
        signed1_195_reg_10257 = call_ret_sign_256_s_fu_1025_ap_return_195.read();
        signed1_196_reg_10262 = call_ret_sign_256_s_fu_1025_ap_return_196.read();
        signed1_197_reg_10267 = call_ret_sign_256_s_fu_1025_ap_return_197.read();
        signed1_198_reg_10272 = call_ret_sign_256_s_fu_1025_ap_return_198.read();
        signed1_199_reg_10277 = call_ret_sign_256_s_fu_1025_ap_return_199.read();
        signed1_19_reg_9377 = call_ret_sign_256_s_fu_1025_ap_return_19.read();
        signed1_1_reg_9287 = call_ret_sign_256_s_fu_1025_ap_return_1.read();
        signed1_200_reg_10282 = call_ret_sign_256_s_fu_1025_ap_return_200.read();
        signed1_201_reg_10287 = call_ret_sign_256_s_fu_1025_ap_return_201.read();
        signed1_202_reg_10292 = call_ret_sign_256_s_fu_1025_ap_return_202.read();
        signed1_203_reg_10297 = call_ret_sign_256_s_fu_1025_ap_return_203.read();
        signed1_204_reg_10302 = call_ret_sign_256_s_fu_1025_ap_return_204.read();
        signed1_205_reg_10307 = call_ret_sign_256_s_fu_1025_ap_return_205.read();
        signed1_206_reg_10312 = call_ret_sign_256_s_fu_1025_ap_return_206.read();
        signed1_207_reg_10317 = call_ret_sign_256_s_fu_1025_ap_return_207.read();
        signed1_208_reg_10322 = call_ret_sign_256_s_fu_1025_ap_return_208.read();
        signed1_209_reg_10327 = call_ret_sign_256_s_fu_1025_ap_return_209.read();
        signed1_20_reg_9382 = call_ret_sign_256_s_fu_1025_ap_return_20.read();
        signed1_210_reg_10332 = call_ret_sign_256_s_fu_1025_ap_return_210.read();
        signed1_211_reg_10337 = call_ret_sign_256_s_fu_1025_ap_return_211.read();
        signed1_212_reg_10342 = call_ret_sign_256_s_fu_1025_ap_return_212.read();
        signed1_213_reg_10347 = call_ret_sign_256_s_fu_1025_ap_return_213.read();
        signed1_214_reg_10352 = call_ret_sign_256_s_fu_1025_ap_return_214.read();
        signed1_215_reg_10357 = call_ret_sign_256_s_fu_1025_ap_return_215.read();
        signed1_216_reg_10362 = call_ret_sign_256_s_fu_1025_ap_return_216.read();
        signed1_217_reg_10367 = call_ret_sign_256_s_fu_1025_ap_return_217.read();
        signed1_218_reg_10372 = call_ret_sign_256_s_fu_1025_ap_return_218.read();
        signed1_219_reg_10377 = call_ret_sign_256_s_fu_1025_ap_return_219.read();
        signed1_21_reg_9387 = call_ret_sign_256_s_fu_1025_ap_return_21.read();
        signed1_220_reg_10382 = call_ret_sign_256_s_fu_1025_ap_return_220.read();
        signed1_221_reg_10387 = call_ret_sign_256_s_fu_1025_ap_return_221.read();
        signed1_222_reg_10392 = call_ret_sign_256_s_fu_1025_ap_return_222.read();
        signed1_223_reg_10397 = call_ret_sign_256_s_fu_1025_ap_return_223.read();
        signed1_224_reg_10402 = call_ret_sign_256_s_fu_1025_ap_return_224.read();
        signed1_225_reg_10407 = call_ret_sign_256_s_fu_1025_ap_return_225.read();
        signed1_226_reg_10412 = call_ret_sign_256_s_fu_1025_ap_return_226.read();
        signed1_227_reg_10417 = call_ret_sign_256_s_fu_1025_ap_return_227.read();
        signed1_228_reg_10422 = call_ret_sign_256_s_fu_1025_ap_return_228.read();
        signed1_229_reg_10427 = call_ret_sign_256_s_fu_1025_ap_return_229.read();
        signed1_22_reg_9392 = call_ret_sign_256_s_fu_1025_ap_return_22.read();
        signed1_230_reg_10432 = call_ret_sign_256_s_fu_1025_ap_return_230.read();
        signed1_231_reg_10437 = call_ret_sign_256_s_fu_1025_ap_return_231.read();
        signed1_232_reg_10442 = call_ret_sign_256_s_fu_1025_ap_return_232.read();
        signed1_233_reg_10447 = call_ret_sign_256_s_fu_1025_ap_return_233.read();
        signed1_234_reg_10452 = call_ret_sign_256_s_fu_1025_ap_return_234.read();
        signed1_235_reg_10457 = call_ret_sign_256_s_fu_1025_ap_return_235.read();
        signed1_236_reg_10462 = call_ret_sign_256_s_fu_1025_ap_return_236.read();
        signed1_237_reg_10467 = call_ret_sign_256_s_fu_1025_ap_return_237.read();
        signed1_238_reg_10472 = call_ret_sign_256_s_fu_1025_ap_return_238.read();
        signed1_239_reg_10477 = call_ret_sign_256_s_fu_1025_ap_return_239.read();
        signed1_23_reg_9397 = call_ret_sign_256_s_fu_1025_ap_return_23.read();
        signed1_240_reg_10482 = call_ret_sign_256_s_fu_1025_ap_return_240.read();
        signed1_241_reg_10487 = call_ret_sign_256_s_fu_1025_ap_return_241.read();
        signed1_242_reg_10492 = call_ret_sign_256_s_fu_1025_ap_return_242.read();
        signed1_243_reg_10497 = call_ret_sign_256_s_fu_1025_ap_return_243.read();
        signed1_244_reg_10502 = call_ret_sign_256_s_fu_1025_ap_return_244.read();
        signed1_245_reg_10507 = call_ret_sign_256_s_fu_1025_ap_return_245.read();
        signed1_246_reg_10512 = call_ret_sign_256_s_fu_1025_ap_return_246.read();
        signed1_247_reg_10517 = call_ret_sign_256_s_fu_1025_ap_return_247.read();
        signed1_248_reg_10522 = call_ret_sign_256_s_fu_1025_ap_return_248.read();
        signed1_249_reg_10527 = call_ret_sign_256_s_fu_1025_ap_return_249.read();
        signed1_24_reg_9402 = call_ret_sign_256_s_fu_1025_ap_return_24.read();
        signed1_250_reg_10532 = call_ret_sign_256_s_fu_1025_ap_return_250.read();
        signed1_251_reg_10537 = call_ret_sign_256_s_fu_1025_ap_return_251.read();
        signed1_252_reg_10542 = call_ret_sign_256_s_fu_1025_ap_return_252.read();
        signed1_253_reg_10547 = call_ret_sign_256_s_fu_1025_ap_return_253.read();
        signed1_254_reg_10552 = call_ret_sign_256_s_fu_1025_ap_return_254.read();
        signed1_255_reg_10557 = call_ret_sign_256_s_fu_1025_ap_return_255.read();
        signed1_25_reg_9407 = call_ret_sign_256_s_fu_1025_ap_return_25.read();
        signed1_26_reg_9412 = call_ret_sign_256_s_fu_1025_ap_return_26.read();
        signed1_27_reg_9417 = call_ret_sign_256_s_fu_1025_ap_return_27.read();
        signed1_28_reg_9422 = call_ret_sign_256_s_fu_1025_ap_return_28.read();
        signed1_29_reg_9427 = call_ret_sign_256_s_fu_1025_ap_return_29.read();
        signed1_2_reg_9292 = call_ret_sign_256_s_fu_1025_ap_return_2.read();
        signed1_30_reg_9432 = call_ret_sign_256_s_fu_1025_ap_return_30.read();
        signed1_31_reg_9437 = call_ret_sign_256_s_fu_1025_ap_return_31.read();
        signed1_32_reg_9442 = call_ret_sign_256_s_fu_1025_ap_return_32.read();
        signed1_33_reg_9447 = call_ret_sign_256_s_fu_1025_ap_return_33.read();
        signed1_34_reg_9452 = call_ret_sign_256_s_fu_1025_ap_return_34.read();
        signed1_35_reg_9457 = call_ret_sign_256_s_fu_1025_ap_return_35.read();
        signed1_36_reg_9462 = call_ret_sign_256_s_fu_1025_ap_return_36.read();
        signed1_37_reg_9467 = call_ret_sign_256_s_fu_1025_ap_return_37.read();
        signed1_38_reg_9472 = call_ret_sign_256_s_fu_1025_ap_return_38.read();
        signed1_39_reg_9477 = call_ret_sign_256_s_fu_1025_ap_return_39.read();
        signed1_3_reg_9297 = call_ret_sign_256_s_fu_1025_ap_return_3.read();
        signed1_40_reg_9482 = call_ret_sign_256_s_fu_1025_ap_return_40.read();
        signed1_41_reg_9487 = call_ret_sign_256_s_fu_1025_ap_return_41.read();
        signed1_42_reg_9492 = call_ret_sign_256_s_fu_1025_ap_return_42.read();
        signed1_43_reg_9497 = call_ret_sign_256_s_fu_1025_ap_return_43.read();
        signed1_44_reg_9502 = call_ret_sign_256_s_fu_1025_ap_return_44.read();
        signed1_45_reg_9507 = call_ret_sign_256_s_fu_1025_ap_return_45.read();
        signed1_46_reg_9512 = call_ret_sign_256_s_fu_1025_ap_return_46.read();
        signed1_47_reg_9517 = call_ret_sign_256_s_fu_1025_ap_return_47.read();
        signed1_48_reg_9522 = call_ret_sign_256_s_fu_1025_ap_return_48.read();
        signed1_49_reg_9527 = call_ret_sign_256_s_fu_1025_ap_return_49.read();
        signed1_4_reg_9302 = call_ret_sign_256_s_fu_1025_ap_return_4.read();
        signed1_50_reg_9532 = call_ret_sign_256_s_fu_1025_ap_return_50.read();
        signed1_51_reg_9537 = call_ret_sign_256_s_fu_1025_ap_return_51.read();
        signed1_52_reg_9542 = call_ret_sign_256_s_fu_1025_ap_return_52.read();
        signed1_53_reg_9547 = call_ret_sign_256_s_fu_1025_ap_return_53.read();
        signed1_54_reg_9552 = call_ret_sign_256_s_fu_1025_ap_return_54.read();
        signed1_55_reg_9557 = call_ret_sign_256_s_fu_1025_ap_return_55.read();
        signed1_56_reg_9562 = call_ret_sign_256_s_fu_1025_ap_return_56.read();
        signed1_57_reg_9567 = call_ret_sign_256_s_fu_1025_ap_return_57.read();
        signed1_58_reg_9572 = call_ret_sign_256_s_fu_1025_ap_return_58.read();
        signed1_59_reg_9577 = call_ret_sign_256_s_fu_1025_ap_return_59.read();
        signed1_5_reg_9307 = call_ret_sign_256_s_fu_1025_ap_return_5.read();
        signed1_60_reg_9582 = call_ret_sign_256_s_fu_1025_ap_return_60.read();
        signed1_61_reg_9587 = call_ret_sign_256_s_fu_1025_ap_return_61.read();
        signed1_62_reg_9592 = call_ret_sign_256_s_fu_1025_ap_return_62.read();
        signed1_63_reg_9597 = call_ret_sign_256_s_fu_1025_ap_return_63.read();
        signed1_64_reg_9602 = call_ret_sign_256_s_fu_1025_ap_return_64.read();
        signed1_65_reg_9607 = call_ret_sign_256_s_fu_1025_ap_return_65.read();
        signed1_66_reg_9612 = call_ret_sign_256_s_fu_1025_ap_return_66.read();
        signed1_67_reg_9617 = call_ret_sign_256_s_fu_1025_ap_return_67.read();
        signed1_68_reg_9622 = call_ret_sign_256_s_fu_1025_ap_return_68.read();
        signed1_69_reg_9627 = call_ret_sign_256_s_fu_1025_ap_return_69.read();
        signed1_6_reg_9312 = call_ret_sign_256_s_fu_1025_ap_return_6.read();
        signed1_70_reg_9632 = call_ret_sign_256_s_fu_1025_ap_return_70.read();
        signed1_71_reg_9637 = call_ret_sign_256_s_fu_1025_ap_return_71.read();
        signed1_72_reg_9642 = call_ret_sign_256_s_fu_1025_ap_return_72.read();
        signed1_73_reg_9647 = call_ret_sign_256_s_fu_1025_ap_return_73.read();
        signed1_74_reg_9652 = call_ret_sign_256_s_fu_1025_ap_return_74.read();
        signed1_75_reg_9657 = call_ret_sign_256_s_fu_1025_ap_return_75.read();
        signed1_76_reg_9662 = call_ret_sign_256_s_fu_1025_ap_return_76.read();
        signed1_77_reg_9667 = call_ret_sign_256_s_fu_1025_ap_return_77.read();
        signed1_78_reg_9672 = call_ret_sign_256_s_fu_1025_ap_return_78.read();
        signed1_79_reg_9677 = call_ret_sign_256_s_fu_1025_ap_return_79.read();
        signed1_7_reg_9317 = call_ret_sign_256_s_fu_1025_ap_return_7.read();
        signed1_80_reg_9682 = call_ret_sign_256_s_fu_1025_ap_return_80.read();
        signed1_81_reg_9687 = call_ret_sign_256_s_fu_1025_ap_return_81.read();
        signed1_82_reg_9692 = call_ret_sign_256_s_fu_1025_ap_return_82.read();
        signed1_83_reg_9697 = call_ret_sign_256_s_fu_1025_ap_return_83.read();
        signed1_84_reg_9702 = call_ret_sign_256_s_fu_1025_ap_return_84.read();
        signed1_85_reg_9707 = call_ret_sign_256_s_fu_1025_ap_return_85.read();
        signed1_86_reg_9712 = call_ret_sign_256_s_fu_1025_ap_return_86.read();
        signed1_87_reg_9717 = call_ret_sign_256_s_fu_1025_ap_return_87.read();
        signed1_88_reg_9722 = call_ret_sign_256_s_fu_1025_ap_return_88.read();
        signed1_89_reg_9727 = call_ret_sign_256_s_fu_1025_ap_return_89.read();
        signed1_8_reg_9322 = call_ret_sign_256_s_fu_1025_ap_return_8.read();
        signed1_90_reg_9732 = call_ret_sign_256_s_fu_1025_ap_return_90.read();
        signed1_91_reg_9737 = call_ret_sign_256_s_fu_1025_ap_return_91.read();
        signed1_92_reg_9742 = call_ret_sign_256_s_fu_1025_ap_return_92.read();
        signed1_93_reg_9747 = call_ret_sign_256_s_fu_1025_ap_return_93.read();
        signed1_94_reg_9752 = call_ret_sign_256_s_fu_1025_ap_return_94.read();
        signed1_95_reg_9757 = call_ret_sign_256_s_fu_1025_ap_return_95.read();
        signed1_96_reg_9762 = call_ret_sign_256_s_fu_1025_ap_return_96.read();
        signed1_97_reg_9767 = call_ret_sign_256_s_fu_1025_ap_return_97.read();
        signed1_98_reg_9772 = call_ret_sign_256_s_fu_1025_ap_return_98.read();
        signed1_99_reg_9777 = call_ret_sign_256_s_fu_1025_ap_return_99.read();
        signed1_9_reg_9327 = call_ret_sign_256_s_fu_1025_ap_return_9.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln24_fu_1405_p2.read()))) {
        zext_ln26_reg_6699 = zext_ln26_fu_1421_p1.read();
        zext_ln27_reg_6694 = zext_ln27_fu_1417_p1.read();
    }
}

void bnn_xcel::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(icmp_ln43_fu_1337_p2.read(), ap_const_lv1_0))) {
                ap_NS_fsm = ap_ST_fsm_state3;
            } else {
                ap_NS_fsm = ap_ST_fsm_state4;
            }
            break;
        case 4 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && esl_seteq<1,1,1>(icmp_ln45_fu_1379_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state3;
            }
            break;
        case 8 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && esl_seteq<1,1,1>(grp_initialize_padded_memory_16_10_0_s_fu_1332_ap_done.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state5;
            } else {
                ap_NS_fsm = ap_ST_fsm_state4;
            }
            break;
        case 16 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln24_fu_1405_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state6;
            } else {
                ap_NS_fsm = ap_ST_fsm_state8;
            }
            break;
        case 32 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && esl_seteq<1,1,1>(icmp_ln26_fu_1425_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state5;
            } else {
                ap_NS_fsm = ap_ST_fsm_state7;
            }
            break;
        case 64 : 
            ap_NS_fsm = ap_ST_fsm_state6;
            break;
        case 128 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) && esl_seteq<1,1,1>(grp_conv_1_16_18_s_fu_1297_ap_done.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state9;
            } else {
                ap_NS_fsm = ap_ST_fsm_state8;
            }
            break;
        case 256 : 
            ap_NS_fsm = ap_ST_fsm_state10;
            break;
        case 512 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && esl_seteq<1,1,1>(grp_max_pool_16_16_s_fu_1314_ap_done.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state11;
            } else {
                ap_NS_fsm = ap_ST_fsm_state10;
            }
            break;
        case 1024 : 
            ap_NS_fsm = ap_ST_fsm_state12;
            break;
        case 2048 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) && esl_seteq<1,1,1>(grp_pad_16_8_s_fu_1326_ap_done.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state13;
            } else {
                ap_NS_fsm = ap_ST_fsm_state12;
            }
            break;
        case 4096 : 
            ap_NS_fsm = ap_ST_fsm_state14;
            break;
        case 8192 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) && esl_seteq<1,1,1>(grp_conv_16_32_10_s_fu_1285_ap_done.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state15;
            } else {
                ap_NS_fsm = ap_ST_fsm_state14;
            }
            break;
        case 16384 : 
            ap_NS_fsm = ap_ST_fsm_state16;
            break;
        case 32768 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read()) && esl_seteq<1,1,1>(grp_max_pool_32_8_s_fu_1320_ap_done.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state17;
            } else {
                ap_NS_fsm = ap_ST_fsm_state16;
            }
            break;
        case 65536 : 
            ap_NS_fsm = ap_ST_fsm_state18;
            break;
        case 131072 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) && esl_seteq<1,1,1>(grp_flatten_fu_1309_ap_done.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state19;
            } else {
                ap_NS_fsm = ap_ST_fsm_state18;
            }
            break;
        case 262144 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) && esl_seteq<1,1,1>(grp_dense_512_256_s_fu_248_ap_done.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state20;
            } else {
                ap_NS_fsm = ap_ST_fsm_state19;
            }
            break;
        case 524288 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) && esl_seteq<1,1,1>(grp_dense_256_10_s_fu_764_ap_done.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state21;
            } else {
                ap_NS_fsm = ap_ST_fsm_state20;
            }
            break;
        case 1048576 : 
            ap_NS_fsm = ap_ST_fsm_state22;
            break;
        case 2097152 : 
            ap_NS_fsm = ap_ST_fsm_state23;
            break;
        case 4194304 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) && esl_seteq<1,1,1>(icmp_ln169_fu_6622_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state1;
            } else {
                ap_NS_fsm = ap_ST_fsm_state24;
            }
            break;
        case 8388608 : 
            ap_NS_fsm = ap_ST_fsm_state23;
            break;
        default : 
            ap_NS_fsm =  (sc_lv<24>) ("XXXXXXXXXXXXXXXXXXXXXXXX");
            break;
    }
}

}

