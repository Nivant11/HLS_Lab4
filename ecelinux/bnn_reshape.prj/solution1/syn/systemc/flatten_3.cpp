#include "flatten.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void flatten::thread_add_ln133_fu_7846_p2() {
    add_ln133_fu_7846_p2 = (!zext_ln133_1_fu_7842_p1.read().is_01() || !shl_ln_reg_13548.read().is_01())? sc_lv<4>(): (sc_biguint<4>(zext_ln133_1_fu_7842_p1.read()) + sc_biguint<4>(shl_ln_reg_13548.read()));
}

void flatten::thread_add_ln134_1_fu_7863_p2() {
    add_ln134_1_fu_7863_p2 = (!zext_ln134_1_fu_7859_p1.read().is_01() || !zext_ln133_2_reg_13543.read().is_01())? sc_lv<6>(): (sc_biguint<6>(zext_ln134_1_fu_7859_p1.read()) + sc_biguint<6>(zext_ln133_2_reg_13543.read()));
}

void flatten::thread_add_ln134_fu_7873_p2() {
    add_ln134_fu_7873_p2 = (!zext_ln133_reg_13525.read().is_01() || !shl_ln133_1_fu_7851_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln133_reg_13525.read()) + sc_biguint<9>(shl_ln133_1_fu_7851_p3.read()));
}

void flatten::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void flatten::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void flatten::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read()[2];
}

void flatten::thread_ap_CS_fsm_state4() {
    ap_CS_fsm_state4 = ap_CS_fsm.read()[3];
}

void flatten::thread_ap_CS_fsm_state5() {
    ap_CS_fsm_state5 = ap_CS_fsm.read()[4];
}

void flatten::thread_ap_done() {
    if (((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(icmp_ln128_fu_3166_p2.read(), ap_const_lv1_1)))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void flatten::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void flatten::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(icmp_ln128_fu_3166_p2.read(), ap_const_lv1_1))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void flatten::thread_ap_return_0() {
    ap_return_0 = output_0_write_assign_fu_3100.read();
}

void flatten::thread_ap_return_1() {
    ap_return_1 = output_1_write_assign_fu_3112.read();
}

void flatten::thread_ap_return_10() {
    ap_return_10 = output_10_write_assign_fu_3000.read();
}

void flatten::thread_ap_return_100() {
    ap_return_100 = output_100_write_assign_fu_2732.read();
}

void flatten::thread_ap_return_101() {
    ap_return_101 = output_101_write_assign_fu_2724.read();
}

void flatten::thread_ap_return_102() {
    ap_return_102 = output_102_write_assign_fu_2720.read();
}

void flatten::thread_ap_return_103() {
    ap_return_103 = output_103_write_assign_fu_2712.read();
}

void flatten::thread_ap_return_104() {
    ap_return_104 = output_104_write_assign_fu_2708.read();
}

void flatten::thread_ap_return_105() {
    ap_return_105 = output_105_write_assign_fu_2700.read();
}

void flatten::thread_ap_return_106() {
    ap_return_106 = output_106_write_assign_fu_2696.read();
}

void flatten::thread_ap_return_107() {
    ap_return_107 = output_107_write_assign_fu_2688.read();
}

void flatten::thread_ap_return_108() {
    ap_return_108 = output_108_write_assign_fu_2560.read();
}

void flatten::thread_ap_return_109() {
    ap_return_109 = output_109_write_assign_fu_2572.read();
}

void flatten::thread_ap_return_11() {
    ap_return_11 = output_11_write_assign_fu_3012.read();
}

void flatten::thread_ap_return_110() {
    ap_return_110 = output_110_write_assign_fu_2584.read();
}

void flatten::thread_ap_return_111() {
    ap_return_111 = output_111_write_assign_fu_2596.read();
}

void flatten::thread_ap_return_112() {
    ap_return_112 = output_112_write_assign_fu_2608.read();
}

void flatten::thread_ap_return_113() {
    ap_return_113 = output_113_write_assign_fu_2620.read();
}

void flatten::thread_ap_return_114() {
    ap_return_114 = output_114_write_assign_fu_2632.read();
}

void flatten::thread_ap_return_115() {
    ap_return_115 = output_115_write_assign_fu_2644.read();
}

void flatten::thread_ap_return_116() {
    ap_return_116 = output_116_write_assign_fu_2656.read();
}

void flatten::thread_ap_return_117() {
    ap_return_117 = output_117_write_assign_fu_2668.read();
}

void flatten::thread_ap_return_118() {
    ap_return_118 = output_118_write_assign_fu_2680.read();
}

void flatten::thread_ap_return_119() {
    ap_return_119 = output_119_write_assign_fu_2684.read();
}

void flatten::thread_ap_return_12() {
    ap_return_12 = output_12_write_assign_fu_3024.read();
}

void flatten::thread_ap_return_120() {
    ap_return_120 = output_120_write_assign_fu_2676.read();
}

void flatten::thread_ap_return_121() {
    ap_return_121 = output_121_write_assign_fu_2672.read();
}

void flatten::thread_ap_return_122() {
    ap_return_122 = output_122_write_assign_fu_2664.read();
}

void flatten::thread_ap_return_123() {
    ap_return_123 = output_123_write_assign_fu_2660.read();
}

void flatten::thread_ap_return_124() {
    ap_return_124 = output_124_write_assign_fu_2652.read();
}

void flatten::thread_ap_return_125() {
    ap_return_125 = output_125_write_assign_fu_2648.read();
}

void flatten::thread_ap_return_126() {
    ap_return_126 = output_126_write_assign_fu_2640.read();
}

void flatten::thread_ap_return_127() {
    ap_return_127 = output_127_write_assign_fu_2636.read();
}

void flatten::thread_ap_return_128() {
    ap_return_128 = output_128_write_assign_fu_2628.read();
}

void flatten::thread_ap_return_129() {
    ap_return_129 = output_129_write_assign_fu_2624.read();
}

void flatten::thread_ap_return_13() {
    ap_return_13 = output_13_write_assign_fu_3036.read();
}

void flatten::thread_ap_return_130() {
    ap_return_130 = output_130_write_assign_fu_2616.read();
}

void flatten::thread_ap_return_131() {
    ap_return_131 = output_131_write_assign_fu_2612.read();
}

void flatten::thread_ap_return_132() {
    ap_return_132 = output_132_write_assign_fu_2604.read();
}

void flatten::thread_ap_return_133() {
    ap_return_133 = output_133_write_assign_fu_2600.read();
}

void flatten::thread_ap_return_134() {
    ap_return_134 = output_134_write_assign_fu_2592.read();
}

void flatten::thread_ap_return_135() {
    ap_return_135 = output_135_write_assign_fu_2588.read();
}

void flatten::thread_ap_return_136() {
    ap_return_136 = output_136_write_assign_fu_2580.read();
}

void flatten::thread_ap_return_137() {
    ap_return_137 = output_137_write_assign_fu_2576.read();
}

void flatten::thread_ap_return_138() {
    ap_return_138 = output_138_write_assign_fu_2568.read();
}

void flatten::thread_ap_return_139() {
    ap_return_139 = output_139_write_assign_fu_2564.read();
}

void flatten::thread_ap_return_14() {
    ap_return_14 = output_14_write_assign_fu_3048.read();
}

void flatten::thread_ap_return_140() {
    ap_return_140 = output_140_write_assign_fu_2556.read();
}

void flatten::thread_ap_return_141() {
    ap_return_141 = output_141_write_assign_fu_2424.read();
}

void flatten::thread_ap_return_142() {
    ap_return_142 = output_142_write_assign_fu_2436.read();
}

void flatten::thread_ap_return_143() {
    ap_return_143 = output_143_write_assign_fu_2448.read();
}

void flatten::thread_ap_return_144() {
    ap_return_144 = output_144_write_assign_fu_2460.read();
}

void flatten::thread_ap_return_145() {
    ap_return_145 = output_145_write_assign_fu_2472.read();
}

void flatten::thread_ap_return_146() {
    ap_return_146 = output_146_write_assign_fu_2484.read();
}

void flatten::thread_ap_return_147() {
    ap_return_147 = output_147_write_assign_fu_2496.read();
}

void flatten::thread_ap_return_148() {
    ap_return_148 = output_148_write_assign_fu_2508.read();
}

void flatten::thread_ap_return_149() {
    ap_return_149 = output_149_write_assign_fu_2520.read();
}

void flatten::thread_ap_return_15() {
    ap_return_15 = output_15_write_assign_fu_3060.read();
}

void flatten::thread_ap_return_150() {
    ap_return_150 = output_150_write_assign_fu_2532.read();
}

void flatten::thread_ap_return_151() {
    ap_return_151 = output_151_write_assign_fu_2544.read();
}

void flatten::thread_ap_return_152() {
    ap_return_152 = output_152_write_assign_fu_2552.read();
}

void flatten::thread_ap_return_153() {
    ap_return_153 = output_153_write_assign_fu_2548.read();
}

void flatten::thread_ap_return_154() {
    ap_return_154 = output_154_write_assign_fu_2540.read();
}

void flatten::thread_ap_return_155() {
    ap_return_155 = output_155_write_assign_fu_2536.read();
}

void flatten::thread_ap_return_156() {
    ap_return_156 = output_156_write_assign_fu_2528.read();
}

void flatten::thread_ap_return_157() {
    ap_return_157 = output_157_write_assign_fu_2524.read();
}

void flatten::thread_ap_return_158() {
    ap_return_158 = output_158_write_assign_fu_2516.read();
}

void flatten::thread_ap_return_159() {
    ap_return_159 = output_159_write_assign_fu_2512.read();
}

void flatten::thread_ap_return_16() {
    ap_return_16 = output_16_write_assign_fu_3072.read();
}

void flatten::thread_ap_return_160() {
    ap_return_160 = output_160_write_assign_fu_2504.read();
}

void flatten::thread_ap_return_161() {
    ap_return_161 = output_161_write_assign_fu_2500.read();
}

void flatten::thread_ap_return_162() {
    ap_return_162 = output_162_write_assign_fu_2492.read();
}

void flatten::thread_ap_return_163() {
    ap_return_163 = output_163_write_assign_fu_2488.read();
}

void flatten::thread_ap_return_164() {
    ap_return_164 = output_164_write_assign_fu_2480.read();
}

void flatten::thread_ap_return_165() {
    ap_return_165 = output_165_write_assign_fu_2476.read();
}

void flatten::thread_ap_return_166() {
    ap_return_166 = output_166_write_assign_fu_2468.read();
}

void flatten::thread_ap_return_167() {
    ap_return_167 = output_167_write_assign_fu_2464.read();
}

void flatten::thread_ap_return_168() {
    ap_return_168 = output_168_write_assign_fu_2456.read();
}

void flatten::thread_ap_return_169() {
    ap_return_169 = output_169_write_assign_fu_2452.read();
}

void flatten::thread_ap_return_17() {
    ap_return_17 = output_17_write_assign_fu_3084.read();
}

void flatten::thread_ap_return_170() {
    ap_return_170 = output_170_write_assign_fu_2444.read();
}

void flatten::thread_ap_return_171() {
    ap_return_171 = output_171_write_assign_fu_2440.read();
}

void flatten::thread_ap_return_172() {
    ap_return_172 = output_172_write_assign_fu_2432.read();
}

void flatten::thread_ap_return_173() {
    ap_return_173 = output_173_write_assign_fu_2428.read();
}

void flatten::thread_ap_return_174() {
    ap_return_174 = output_174_write_assign_fu_2420.read();
}

void flatten::thread_ap_return_175() {
    ap_return_175 = output_175_write_assign_fu_2288.read();
}

void flatten::thread_ap_return_176() {
    ap_return_176 = output_176_write_assign_fu_2300.read();
}

void flatten::thread_ap_return_177() {
    ap_return_177 = output_177_write_assign_fu_2312.read();
}

void flatten::thread_ap_return_178() {
    ap_return_178 = output_178_write_assign_fu_2324.read();
}

void flatten::thread_ap_return_179() {
    ap_return_179 = output_179_write_assign_fu_2336.read();
}

void flatten::thread_ap_return_18() {
    ap_return_18 = output_18_write_assign_fu_3088.read();
}

void flatten::thread_ap_return_180() {
    ap_return_180 = output_180_write_assign_fu_2348.read();
}

void flatten::thread_ap_return_181() {
    ap_return_181 = output_181_write_assign_fu_2360.read();
}

void flatten::thread_ap_return_182() {
    ap_return_182 = output_182_write_assign_fu_2372.read();
}

void flatten::thread_ap_return_183() {
    ap_return_183 = output_183_write_assign_fu_2384.read();
}

void flatten::thread_ap_return_184() {
    ap_return_184 = output_184_write_assign_fu_2396.read();
}

void flatten::thread_ap_return_185() {
    ap_return_185 = output_185_write_assign_fu_2408.read();
}

void flatten::thread_ap_return_186() {
    ap_return_186 = output_186_write_assign_fu_2416.read();
}

void flatten::thread_ap_return_187() {
    ap_return_187 = output_187_write_assign_fu_2412.read();
}

void flatten::thread_ap_return_188() {
    ap_return_188 = output_188_write_assign_fu_2404.read();
}

void flatten::thread_ap_return_189() {
    ap_return_189 = output_189_write_assign_fu_2400.read();
}

void flatten::thread_ap_return_19() {
    ap_return_19 = output_19_write_assign_fu_3080.read();
}

void flatten::thread_ap_return_190() {
    ap_return_190 = output_190_write_assign_fu_2392.read();
}

void flatten::thread_ap_return_191() {
    ap_return_191 = output_191_write_assign_fu_2388.read();
}

void flatten::thread_ap_return_192() {
    ap_return_192 = output_192_write_assign_fu_2380.read();
}

void flatten::thread_ap_return_193() {
    ap_return_193 = output_193_write_assign_fu_2376.read();
}

void flatten::thread_ap_return_194() {
    ap_return_194 = output_194_write_assign_fu_2368.read();
}

void flatten::thread_ap_return_195() {
    ap_return_195 = output_195_write_assign_fu_2364.read();
}

void flatten::thread_ap_return_196() {
    ap_return_196 = output_196_write_assign_fu_2356.read();
}

void flatten::thread_ap_return_197() {
    ap_return_197 = output_197_write_assign_fu_2352.read();
}

void flatten::thread_ap_return_198() {
    ap_return_198 = output_198_write_assign_fu_2344.read();
}

void flatten::thread_ap_return_199() {
    ap_return_199 = output_199_write_assign_fu_2340.read();
}

void flatten::thread_ap_return_2() {
    ap_return_2 = output_2_write_assign_fu_3116.read();
}

void flatten::thread_ap_return_20() {
    ap_return_20 = output_20_write_assign_fu_3076.read();
}

void flatten::thread_ap_return_200() {
    ap_return_200 = output_200_write_assign_fu_2332.read();
}

void flatten::thread_ap_return_201() {
    ap_return_201 = output_201_write_assign_fu_2328.read();
}

void flatten::thread_ap_return_202() {
    ap_return_202 = output_202_write_assign_fu_2320.read();
}

void flatten::thread_ap_return_203() {
    ap_return_203 = output_203_write_assign_fu_2316.read();
}

void flatten::thread_ap_return_204() {
    ap_return_204 = output_204_write_assign_fu_2308.read();
}

void flatten::thread_ap_return_205() {
    ap_return_205 = output_205_write_assign_fu_2304.read();
}

void flatten::thread_ap_return_206() {
    ap_return_206 = output_206_write_assign_fu_2296.read();
}

void flatten::thread_ap_return_207() {
    ap_return_207 = output_207_write_assign_fu_2292.read();
}

void flatten::thread_ap_return_208() {
    ap_return_208 = output_208_write_assign_fu_2284.read();
}

void flatten::thread_ap_return_209() {
    ap_return_209 = output_209_write_assign_fu_2156.read();
}

void flatten::thread_ap_return_21() {
    ap_return_21 = output_21_write_assign_fu_3068.read();
}

void flatten::thread_ap_return_210() {
    ap_return_210 = output_210_write_assign_fu_2168.read();
}

void flatten::thread_ap_return_211() {
    ap_return_211 = output_211_write_assign_fu_2180.read();
}

void flatten::thread_ap_return_212() {
    ap_return_212 = output_212_write_assign_fu_2192.read();
}

void flatten::thread_ap_return_213() {
    ap_return_213 = output_213_write_assign_fu_2204.read();
}

void flatten::thread_ap_return_214() {
    ap_return_214 = output_214_write_assign_fu_2216.read();
}

void flatten::thread_ap_return_215() {
    ap_return_215 = output_215_write_assign_fu_2228.read();
}

void flatten::thread_ap_return_216() {
    ap_return_216 = output_216_write_assign_fu_2240.read();
}

void flatten::thread_ap_return_217() {
    ap_return_217 = output_217_write_assign_fu_2252.read();
}

void flatten::thread_ap_return_218() {
    ap_return_218 = output_218_write_assign_fu_2264.read();
}

void flatten::thread_ap_return_219() {
    ap_return_219 = output_219_write_assign_fu_2276.read();
}

void flatten::thread_ap_return_22() {
    ap_return_22 = output_22_write_assign_fu_3064.read();
}

void flatten::thread_ap_return_220() {
    ap_return_220 = output_220_write_assign_fu_2280.read();
}

void flatten::thread_ap_return_221() {
    ap_return_221 = output_221_write_assign_fu_2272.read();
}

void flatten::thread_ap_return_222() {
    ap_return_222 = output_222_write_assign_fu_2268.read();
}

void flatten::thread_ap_return_223() {
    ap_return_223 = output_223_write_assign_fu_2260.read();
}

void flatten::thread_ap_return_224() {
    ap_return_224 = output_224_write_assign_fu_2256.read();
}

void flatten::thread_ap_return_225() {
    ap_return_225 = output_225_write_assign_fu_2248.read();
}

void flatten::thread_ap_return_226() {
    ap_return_226 = output_226_write_assign_fu_2244.read();
}

void flatten::thread_ap_return_227() {
    ap_return_227 = output_227_write_assign_fu_2236.read();
}

void flatten::thread_ap_return_228() {
    ap_return_228 = output_228_write_assign_fu_2232.read();
}

void flatten::thread_ap_return_229() {
    ap_return_229 = output_229_write_assign_fu_2224.read();
}

void flatten::thread_ap_return_23() {
    ap_return_23 = output_23_write_assign_fu_3056.read();
}

void flatten::thread_ap_return_230() {
    ap_return_230 = output_230_write_assign_fu_2220.read();
}

void flatten::thread_ap_return_231() {
    ap_return_231 = output_231_write_assign_fu_2212.read();
}

void flatten::thread_ap_return_232() {
    ap_return_232 = output_232_write_assign_fu_2208.read();
}

void flatten::thread_ap_return_233() {
    ap_return_233 = output_233_write_assign_fu_2200.read();
}

void flatten::thread_ap_return_234() {
    ap_return_234 = output_234_write_assign_fu_2196.read();
}

void flatten::thread_ap_return_235() {
    ap_return_235 = output_235_write_assign_fu_2188.read();
}

void flatten::thread_ap_return_236() {
    ap_return_236 = output_236_write_assign_fu_2184.read();
}

void flatten::thread_ap_return_237() {
    ap_return_237 = output_237_write_assign_fu_2176.read();
}

void flatten::thread_ap_return_238() {
    ap_return_238 = output_238_write_assign_fu_2172.read();
}

void flatten::thread_ap_return_239() {
    ap_return_239 = output_239_write_assign_fu_2164.read();
}

void flatten::thread_ap_return_24() {
    ap_return_24 = output_24_write_assign_fu_3052.read();
}

void flatten::thread_ap_return_240() {
    ap_return_240 = output_240_write_assign_fu_2160.read();
}

void flatten::thread_ap_return_241() {
    ap_return_241 = output_241_write_assign_fu_2152.read();
}

void flatten::thread_ap_return_242() {
    ap_return_242 = output_242_write_assign_fu_2020.read();
}

void flatten::thread_ap_return_243() {
    ap_return_243 = output_243_write_assign_fu_2032.read();
}

void flatten::thread_ap_return_244() {
    ap_return_244 = output_244_write_assign_fu_2044.read();
}

void flatten::thread_ap_return_245() {
    ap_return_245 = output_245_write_assign_fu_2056.read();
}

void flatten::thread_ap_return_246() {
    ap_return_246 = output_246_write_assign_fu_2068.read();
}

void flatten::thread_ap_return_247() {
    ap_return_247 = output_247_write_assign_fu_2080.read();
}

void flatten::thread_ap_return_248() {
    ap_return_248 = output_248_write_assign_fu_2092.read();
}

void flatten::thread_ap_return_249() {
    ap_return_249 = output_249_write_assign_fu_2104.read();
}

void flatten::thread_ap_return_25() {
    ap_return_25 = output_25_write_assign_fu_3044.read();
}

void flatten::thread_ap_return_250() {
    ap_return_250 = output_250_write_assign_fu_2116.read();
}

void flatten::thread_ap_return_251() {
    ap_return_251 = output_251_write_assign_fu_2128.read();
}

void flatten::thread_ap_return_252() {
    ap_return_252 = output_252_write_assign_fu_2140.read();
}

void flatten::thread_ap_return_253() {
    ap_return_253 = output_253_write_assign_fu_2148.read();
}

void flatten::thread_ap_return_254() {
    ap_return_254 = output_254_write_assign_fu_2144.read();
}

void flatten::thread_ap_return_255() {
    ap_return_255 = output_255_write_assign_fu_2136.read();
}

void flatten::thread_ap_return_256() {
    ap_return_256 = output_256_write_assign_fu_2132.read();
}

void flatten::thread_ap_return_257() {
    ap_return_257 = output_257_write_assign_fu_2124.read();
}

void flatten::thread_ap_return_258() {
    ap_return_258 = output_258_write_assign_fu_2120.read();
}

void flatten::thread_ap_return_259() {
    ap_return_259 = output_259_write_assign_fu_2112.read();
}

void flatten::thread_ap_return_26() {
    ap_return_26 = output_26_write_assign_fu_3040.read();
}

void flatten::thread_ap_return_260() {
    ap_return_260 = output_260_write_assign_fu_2108.read();
}

void flatten::thread_ap_return_261() {
    ap_return_261 = output_261_write_assign_fu_2100.read();
}

void flatten::thread_ap_return_262() {
    ap_return_262 = output_262_write_assign_fu_2096.read();
}

void flatten::thread_ap_return_263() {
    ap_return_263 = output_263_write_assign_fu_2088.read();
}

void flatten::thread_ap_return_264() {
    ap_return_264 = output_264_write_assign_fu_2084.read();
}

void flatten::thread_ap_return_265() {
    ap_return_265 = output_265_write_assign_fu_2076.read();
}

void flatten::thread_ap_return_266() {
    ap_return_266 = output_266_write_assign_fu_2072.read();
}

void flatten::thread_ap_return_267() {
    ap_return_267 = output_267_write_assign_fu_2064.read();
}

void flatten::thread_ap_return_268() {
    ap_return_268 = output_268_write_assign_fu_2060.read();
}

void flatten::thread_ap_return_269() {
    ap_return_269 = output_269_write_assign_fu_2052.read();
}

void flatten::thread_ap_return_27() {
    ap_return_27 = output_27_write_assign_fu_3032.read();
}

void flatten::thread_ap_return_270() {
    ap_return_270 = output_270_write_assign_fu_2048.read();
}

void flatten::thread_ap_return_271() {
    ap_return_271 = output_271_write_assign_fu_2040.read();
}

void flatten::thread_ap_return_272() {
    ap_return_272 = output_272_write_assign_fu_2036.read();
}

void flatten::thread_ap_return_273() {
    ap_return_273 = output_273_write_assign_fu_2028.read();
}

void flatten::thread_ap_return_274() {
    ap_return_274 = output_274_write_assign_fu_2024.read();
}

void flatten::thread_ap_return_275() {
    ap_return_275 = output_275_write_assign_fu_2016.read();
}

void flatten::thread_ap_return_276() {
    ap_return_276 = output_276_write_assign_fu_1884.read();
}

void flatten::thread_ap_return_277() {
    ap_return_277 = output_277_write_assign_fu_1896.read();
}

void flatten::thread_ap_return_278() {
    ap_return_278 = output_278_write_assign_fu_1908.read();
}

void flatten::thread_ap_return_279() {
    ap_return_279 = output_279_write_assign_fu_1920.read();
}

void flatten::thread_ap_return_28() {
    ap_return_28 = output_28_write_assign_fu_3028.read();
}

void flatten::thread_ap_return_280() {
    ap_return_280 = output_280_write_assign_fu_1932.read();
}

void flatten::thread_ap_return_281() {
    ap_return_281 = output_281_write_assign_fu_1944.read();
}

void flatten::thread_ap_return_282() {
    ap_return_282 = output_282_write_assign_fu_1956.read();
}

void flatten::thread_ap_return_283() {
    ap_return_283 = output_283_write_assign_fu_1968.read();
}

void flatten::thread_ap_return_284() {
    ap_return_284 = output_284_write_assign_fu_1980.read();
}

void flatten::thread_ap_return_285() {
    ap_return_285 = output_285_write_assign_fu_1992.read();
}

void flatten::thread_ap_return_286() {
    ap_return_286 = output_286_write_assign_fu_2004.read();
}

void flatten::thread_ap_return_287() {
    ap_return_287 = output_287_write_assign_fu_2012.read();
}

void flatten::thread_ap_return_288() {
    ap_return_288 = output_288_write_assign_fu_2008.read();
}

void flatten::thread_ap_return_289() {
    ap_return_289 = output_289_write_assign_fu_2000.read();
}

void flatten::thread_ap_return_29() {
    ap_return_29 = output_29_write_assign_fu_3020.read();
}

void flatten::thread_ap_return_290() {
    ap_return_290 = output_290_write_assign_fu_1996.read();
}

void flatten::thread_ap_return_291() {
    ap_return_291 = output_291_write_assign_fu_1988.read();
}

void flatten::thread_ap_return_292() {
    ap_return_292 = output_292_write_assign_fu_1984.read();
}

void flatten::thread_ap_return_293() {
    ap_return_293 = output_293_write_assign_fu_1976.read();
}

void flatten::thread_ap_return_294() {
    ap_return_294 = output_294_write_assign_fu_1972.read();
}

void flatten::thread_ap_return_295() {
    ap_return_295 = output_295_write_assign_fu_1964.read();
}

void flatten::thread_ap_return_296() {
    ap_return_296 = output_296_write_assign_fu_1960.read();
}

void flatten::thread_ap_return_297() {
    ap_return_297 = output_297_write_assign_fu_1952.read();
}

void flatten::thread_ap_return_298() {
    ap_return_298 = output_298_write_assign_fu_1948.read();
}

void flatten::thread_ap_return_299() {
    ap_return_299 = output_299_write_assign_fu_1940.read();
}

void flatten::thread_ap_return_3() {
    ap_return_3 = output_3_write_assign_fu_3108.read();
}

void flatten::thread_ap_return_30() {
    ap_return_30 = output_30_write_assign_fu_3016.read();
}

void flatten::thread_ap_return_300() {
    ap_return_300 = output_300_write_assign_fu_1936.read();
}

void flatten::thread_ap_return_301() {
    ap_return_301 = output_301_write_assign_fu_1928.read();
}

void flatten::thread_ap_return_302() {
    ap_return_302 = output_302_write_assign_fu_1924.read();
}

void flatten::thread_ap_return_303() {
    ap_return_303 = output_303_write_assign_fu_1916.read();
}

void flatten::thread_ap_return_304() {
    ap_return_304 = output_304_write_assign_fu_1912.read();
}

void flatten::thread_ap_return_305() {
    ap_return_305 = output_305_write_assign_fu_1904.read();
}

void flatten::thread_ap_return_306() {
    ap_return_306 = output_306_write_assign_fu_1900.read();
}

void flatten::thread_ap_return_307() {
    ap_return_307 = output_307_write_assign_fu_1892.read();
}

void flatten::thread_ap_return_308() {
    ap_return_308 = output_308_write_assign_fu_1888.read();
}

void flatten::thread_ap_return_309() {
    ap_return_309 = output_309_write_assign_fu_1880.read();
}

void flatten::thread_ap_return_31() {
    ap_return_31 = output_31_write_assign_fu_3008.read();
}

void flatten::thread_ap_return_310() {
    ap_return_310 = output_310_write_assign_fu_1752.read();
}

void flatten::thread_ap_return_311() {
    ap_return_311 = output_311_write_assign_fu_1764.read();
}

void flatten::thread_ap_return_312() {
    ap_return_312 = output_312_write_assign_fu_1776.read();
}

void flatten::thread_ap_return_313() {
    ap_return_313 = output_313_write_assign_fu_1788.read();
}

void flatten::thread_ap_return_314() {
    ap_return_314 = output_314_write_assign_fu_1800.read();
}

void flatten::thread_ap_return_315() {
    ap_return_315 = output_315_write_assign_fu_1812.read();
}

void flatten::thread_ap_return_316() {
    ap_return_316 = output_316_write_assign_fu_1824.read();
}

void flatten::thread_ap_return_317() {
    ap_return_317 = output_317_write_assign_fu_1836.read();
}

void flatten::thread_ap_return_318() {
    ap_return_318 = output_318_write_assign_fu_1848.read();
}

void flatten::thread_ap_return_319() {
    ap_return_319 = output_319_write_assign_fu_1860.read();
}

void flatten::thread_ap_return_32() {
    ap_return_32 = output_32_write_assign_fu_3004.read();
}

void flatten::thread_ap_return_320() {
    ap_return_320 = output_320_write_assign_fu_1872.read();
}

void flatten::thread_ap_return_321() {
    ap_return_321 = output_321_write_assign_fu_1876.read();
}

void flatten::thread_ap_return_322() {
    ap_return_322 = output_322_write_assign_fu_1868.read();
}

void flatten::thread_ap_return_323() {
    ap_return_323 = output_323_write_assign_fu_1864.read();
}

void flatten::thread_ap_return_324() {
    ap_return_324 = output_324_write_assign_fu_1856.read();
}

void flatten::thread_ap_return_325() {
    ap_return_325 = output_325_write_assign_fu_1852.read();
}

void flatten::thread_ap_return_326() {
    ap_return_326 = output_326_write_assign_fu_1844.read();
}

void flatten::thread_ap_return_327() {
    ap_return_327 = output_327_write_assign_fu_1840.read();
}

void flatten::thread_ap_return_328() {
    ap_return_328 = output_328_write_assign_fu_1832.read();
}

void flatten::thread_ap_return_329() {
    ap_return_329 = output_329_write_assign_fu_1828.read();
}

void flatten::thread_ap_return_33() {
    ap_return_33 = output_33_write_assign_fu_2996.read();
}

void flatten::thread_ap_return_330() {
    ap_return_330 = output_330_write_assign_fu_1820.read();
}

void flatten::thread_ap_return_331() {
    ap_return_331 = output_331_write_assign_fu_1816.read();
}

void flatten::thread_ap_return_332() {
    ap_return_332 = output_332_write_assign_fu_1808.read();
}

void flatten::thread_ap_return_333() {
    ap_return_333 = output_333_write_assign_fu_1804.read();
}

void flatten::thread_ap_return_334() {
    ap_return_334 = output_334_write_assign_fu_1796.read();
}

void flatten::thread_ap_return_335() {
    ap_return_335 = output_335_write_assign_fu_1792.read();
}

void flatten::thread_ap_return_336() {
    ap_return_336 = output_336_write_assign_fu_1784.read();
}

void flatten::thread_ap_return_337() {
    ap_return_337 = output_337_write_assign_fu_1780.read();
}

void flatten::thread_ap_return_338() {
    ap_return_338 = output_338_write_assign_fu_1772.read();
}

void flatten::thread_ap_return_339() {
    ap_return_339 = output_339_write_assign_fu_1768.read();
}

void flatten::thread_ap_return_34() {
    ap_return_34 = output_34_write_assign_fu_2992.read();
}

void flatten::thread_ap_return_340() {
    ap_return_340 = output_340_write_assign_fu_1760.read();
}

void flatten::thread_ap_return_341() {
    ap_return_341 = output_341_write_assign_fu_1756.read();
}

void flatten::thread_ap_return_342() {
    ap_return_342 = output_342_write_assign_fu_1748.read();
}

void flatten::thread_ap_return_343() {
    ap_return_343 = output_343_write_assign_fu_1616.read();
}

void flatten::thread_ap_return_344() {
    ap_return_344 = output_344_write_assign_fu_1628.read();
}

void flatten::thread_ap_return_345() {
    ap_return_345 = output_345_write_assign_fu_1640.read();
}

void flatten::thread_ap_return_346() {
    ap_return_346 = output_346_write_assign_fu_1652.read();
}

void flatten::thread_ap_return_347() {
    ap_return_347 = output_347_write_assign_fu_1664.read();
}

void flatten::thread_ap_return_348() {
    ap_return_348 = output_348_write_assign_fu_1676.read();
}

void flatten::thread_ap_return_349() {
    ap_return_349 = output_349_write_assign_fu_1688.read();
}

void flatten::thread_ap_return_35() {
    ap_return_35 = output_35_write_assign_fu_2984.read();
}

void flatten::thread_ap_return_350() {
    ap_return_350 = output_350_write_assign_fu_1700.read();
}

void flatten::thread_ap_return_351() {
    ap_return_351 = output_351_write_assign_fu_1712.read();
}

void flatten::thread_ap_return_352() {
    ap_return_352 = output_352_write_assign_fu_1724.read();
}

void flatten::thread_ap_return_353() {
    ap_return_353 = output_353_write_assign_fu_1736.read();
}

void flatten::thread_ap_return_354() {
    ap_return_354 = output_354_write_assign_fu_1744.read();
}

void flatten::thread_ap_return_355() {
    ap_return_355 = output_355_write_assign_fu_1740.read();
}

void flatten::thread_ap_return_356() {
    ap_return_356 = output_356_write_assign_fu_1732.read();
}

void flatten::thread_ap_return_357() {
    ap_return_357 = output_357_write_assign_fu_1728.read();
}

void flatten::thread_ap_return_358() {
    ap_return_358 = output_358_write_assign_fu_1720.read();
}

void flatten::thread_ap_return_359() {
    ap_return_359 = output_359_write_assign_fu_1716.read();
}

void flatten::thread_ap_return_36() {
    ap_return_36 = output_36_write_assign_fu_2980.read();
}

void flatten::thread_ap_return_360() {
    ap_return_360 = output_360_write_assign_fu_1708.read();
}

void flatten::thread_ap_return_361() {
    ap_return_361 = output_361_write_assign_fu_1704.read();
}

void flatten::thread_ap_return_362() {
    ap_return_362 = output_362_write_assign_fu_1696.read();
}

void flatten::thread_ap_return_363() {
    ap_return_363 = output_363_write_assign_fu_1692.read();
}

void flatten::thread_ap_return_364() {
    ap_return_364 = output_364_write_assign_fu_1684.read();
}

void flatten::thread_ap_return_365() {
    ap_return_365 = output_365_write_assign_fu_1680.read();
}

void flatten::thread_ap_return_366() {
    ap_return_366 = output_366_write_assign_fu_1672.read();
}

void flatten::thread_ap_return_367() {
    ap_return_367 = output_367_write_assign_fu_1668.read();
}

void flatten::thread_ap_return_368() {
    ap_return_368 = output_368_write_assign_fu_1660.read();
}

void flatten::thread_ap_return_369() {
    ap_return_369 = output_369_write_assign_fu_1656.read();
}

void flatten::thread_ap_return_37() {
    ap_return_37 = output_37_write_assign_fu_2972.read();
}

void flatten::thread_ap_return_370() {
    ap_return_370 = output_370_write_assign_fu_1648.read();
}

void flatten::thread_ap_return_371() {
    ap_return_371 = output_371_write_assign_fu_1644.read();
}

void flatten::thread_ap_return_372() {
    ap_return_372 = output_372_write_assign_fu_1636.read();
}

void flatten::thread_ap_return_373() {
    ap_return_373 = output_373_write_assign_fu_1632.read();
}

void flatten::thread_ap_return_374() {
    ap_return_374 = output_374_write_assign_fu_1624.read();
}

void flatten::thread_ap_return_375() {
    ap_return_375 = output_375_write_assign_fu_1620.read();
}

void flatten::thread_ap_return_376() {
    ap_return_376 = output_376_write_assign_fu_1612.read();
}

void flatten::thread_ap_return_377() {
    ap_return_377 = output_377_write_assign_fu_1480.read();
}

void flatten::thread_ap_return_378() {
    ap_return_378 = output_378_write_assign_fu_1492.read();
}

void flatten::thread_ap_return_379() {
    ap_return_379 = output_379_write_assign_fu_1504.read();
}

void flatten::thread_ap_return_38() {
    ap_return_38 = output_38_write_assign_fu_2968.read();
}

void flatten::thread_ap_return_380() {
    ap_return_380 = output_380_write_assign_fu_1516.read();
}

void flatten::thread_ap_return_381() {
    ap_return_381 = output_381_write_assign_fu_1528.read();
}

void flatten::thread_ap_return_382() {
    ap_return_382 = output_382_write_assign_fu_1540.read();
}

void flatten::thread_ap_return_383() {
    ap_return_383 = output_383_write_assign_fu_1552.read();
}

void flatten::thread_ap_return_384() {
    ap_return_384 = output_384_write_assign_fu_1564.read();
}

void flatten::thread_ap_return_385() {
    ap_return_385 = output_385_write_assign_fu_1576.read();
}

void flatten::thread_ap_return_386() {
    ap_return_386 = output_386_write_assign_fu_1588.read();
}

void flatten::thread_ap_return_387() {
    ap_return_387 = output_387_write_assign_fu_1600.read();
}

void flatten::thread_ap_return_388() {
    ap_return_388 = output_388_write_assign_fu_1608.read();
}

void flatten::thread_ap_return_389() {
    ap_return_389 = output_389_write_assign_fu_1604.read();
}

void flatten::thread_ap_return_39() {
    ap_return_39 = output_39_write_assign_fu_2960.read();
}

void flatten::thread_ap_return_390() {
    ap_return_390 = output_390_write_assign_fu_1596.read();
}

void flatten::thread_ap_return_391() {
    ap_return_391 = output_391_write_assign_fu_1592.read();
}

void flatten::thread_ap_return_392() {
    ap_return_392 = output_392_write_assign_fu_1584.read();
}

void flatten::thread_ap_return_393() {
    ap_return_393 = output_393_write_assign_fu_1580.read();
}

void flatten::thread_ap_return_394() {
    ap_return_394 = output_394_write_assign_fu_1572.read();
}

void flatten::thread_ap_return_395() {
    ap_return_395 = output_395_write_assign_fu_1568.read();
}

void flatten::thread_ap_return_396() {
    ap_return_396 = output_396_write_assign_fu_1560.read();
}

void flatten::thread_ap_return_397() {
    ap_return_397 = output_397_write_assign_fu_1556.read();
}

void flatten::thread_ap_return_398() {
    ap_return_398 = output_398_write_assign_fu_1548.read();
}

void flatten::thread_ap_return_399() {
    ap_return_399 = output_399_write_assign_fu_1544.read();
}

void flatten::thread_ap_return_4() {
    ap_return_4 = output_4_write_assign_fu_3104.read();
}

void flatten::thread_ap_return_40() {
    ap_return_40 = output_40_write_assign_fu_2828.read();
}

void flatten::thread_ap_return_400() {
    ap_return_400 = output_400_write_assign_fu_1536.read();
}

void flatten::thread_ap_return_401() {
    ap_return_401 = output_401_write_assign_fu_1532.read();
}

void flatten::thread_ap_return_402() {
    ap_return_402 = output_402_write_assign_fu_1524.read();
}

void flatten::thread_ap_return_403() {
    ap_return_403 = output_403_write_assign_fu_1520.read();
}

void flatten::thread_ap_return_404() {
    ap_return_404 = output_404_write_assign_fu_1512.read();
}

void flatten::thread_ap_return_405() {
    ap_return_405 = output_405_write_assign_fu_1508.read();
}

void flatten::thread_ap_return_406() {
    ap_return_406 = output_406_write_assign_fu_1500.read();
}

void flatten::thread_ap_return_407() {
    ap_return_407 = output_407_write_assign_fu_1496.read();
}

void flatten::thread_ap_return_408() {
    ap_return_408 = output_408_write_assign_fu_1488.read();
}

void flatten::thread_ap_return_409() {
    ap_return_409 = output_409_write_assign_fu_1484.read();
}

void flatten::thread_ap_return_41() {
    ap_return_41 = output_41_write_assign_fu_2840.read();
}

void flatten::thread_ap_return_410() {
    ap_return_410 = output_410_write_assign_fu_1476.read();
}

void flatten::thread_ap_return_411() {
    ap_return_411 = output_411_write_assign_fu_1348.read();
}

void flatten::thread_ap_return_412() {
    ap_return_412 = output_412_write_assign_fu_1360.read();
}

void flatten::thread_ap_return_413() {
    ap_return_413 = output_413_write_assign_fu_1372.read();
}

void flatten::thread_ap_return_414() {
    ap_return_414 = output_414_write_assign_fu_1384.read();
}

void flatten::thread_ap_return_415() {
    ap_return_415 = output_415_write_assign_fu_1396.read();
}

void flatten::thread_ap_return_416() {
    ap_return_416 = output_416_write_assign_fu_1408.read();
}

void flatten::thread_ap_return_417() {
    ap_return_417 = output_417_write_assign_fu_1420.read();
}

void flatten::thread_ap_return_418() {
    ap_return_418 = output_418_write_assign_fu_1432.read();
}

void flatten::thread_ap_return_419() {
    ap_return_419 = output_419_write_assign_fu_1444.read();
}

void flatten::thread_ap_return_42() {
    ap_return_42 = output_42_write_assign_fu_2852.read();
}

void flatten::thread_ap_return_420() {
    ap_return_420 = output_420_write_assign_fu_1456.read();
}

void flatten::thread_ap_return_421() {
    ap_return_421 = output_421_write_assign_fu_1468.read();
}

void flatten::thread_ap_return_422() {
    ap_return_422 = output_422_write_assign_fu_1472.read();
}

void flatten::thread_ap_return_423() {
    ap_return_423 = output_423_write_assign_fu_1464.read();
}

void flatten::thread_ap_return_424() {
    ap_return_424 = output_424_write_assign_fu_1460.read();
}

void flatten::thread_ap_return_425() {
    ap_return_425 = output_425_write_assign_fu_1452.read();
}

void flatten::thread_ap_return_426() {
    ap_return_426 = output_426_write_assign_fu_1448.read();
}

void flatten::thread_ap_return_427() {
    ap_return_427 = output_427_write_assign_fu_1440.read();
}

void flatten::thread_ap_return_428() {
    ap_return_428 = output_428_write_assign_fu_1436.read();
}

void flatten::thread_ap_return_429() {
    ap_return_429 = output_429_write_assign_fu_1428.read();
}

void flatten::thread_ap_return_43() {
    ap_return_43 = output_43_write_assign_fu_2864.read();
}

void flatten::thread_ap_return_430() {
    ap_return_430 = output_430_write_assign_fu_1424.read();
}

void flatten::thread_ap_return_431() {
    ap_return_431 = output_431_write_assign_fu_1416.read();
}

void flatten::thread_ap_return_432() {
    ap_return_432 = output_432_write_assign_fu_1412.read();
}

void flatten::thread_ap_return_433() {
    ap_return_433 = output_433_write_assign_fu_1404.read();
}

void flatten::thread_ap_return_434() {
    ap_return_434 = output_434_write_assign_fu_1400.read();
}

void flatten::thread_ap_return_435() {
    ap_return_435 = output_435_write_assign_fu_1392.read();
}

void flatten::thread_ap_return_436() {
    ap_return_436 = output_436_write_assign_fu_1388.read();
}

void flatten::thread_ap_return_437() {
    ap_return_437 = output_437_write_assign_fu_1380.read();
}

void flatten::thread_ap_return_438() {
    ap_return_438 = output_438_write_assign_fu_1376.read();
}

void flatten::thread_ap_return_439() {
    ap_return_439 = output_439_write_assign_fu_1368.read();
}

void flatten::thread_ap_return_44() {
    ap_return_44 = output_44_write_assign_fu_2876.read();
}

void flatten::thread_ap_return_440() {
    ap_return_440 = output_440_write_assign_fu_1364.read();
}

void flatten::thread_ap_return_441() {
    ap_return_441 = output_441_write_assign_fu_1356.read();
}

void flatten::thread_ap_return_442() {
    ap_return_442 = output_442_write_assign_fu_1352.read();
}

void flatten::thread_ap_return_443() {
    ap_return_443 = output_443_write_assign_fu_1344.read();
}

void flatten::thread_ap_return_444() {
    ap_return_444 = output_444_write_assign_fu_1212.read();
}

void flatten::thread_ap_return_445() {
    ap_return_445 = output_445_write_assign_fu_1224.read();
}

void flatten::thread_ap_return_446() {
    ap_return_446 = output_446_write_assign_fu_1236.read();
}

void flatten::thread_ap_return_447() {
    ap_return_447 = output_447_write_assign_fu_1248.read();
}

void flatten::thread_ap_return_448() {
    ap_return_448 = output_448_write_assign_fu_1260.read();
}

void flatten::thread_ap_return_449() {
    ap_return_449 = output_449_write_assign_fu_1272.read();
}

void flatten::thread_ap_return_45() {
    ap_return_45 = output_45_write_assign_fu_2888.read();
}

void flatten::thread_ap_return_450() {
    ap_return_450 = output_450_write_assign_fu_1284.read();
}

void flatten::thread_ap_return_451() {
    ap_return_451 = output_451_write_assign_fu_1296.read();
}

void flatten::thread_ap_return_452() {
    ap_return_452 = output_452_write_assign_fu_1308.read();
}

void flatten::thread_ap_return_453() {
    ap_return_453 = output_453_write_assign_fu_1320.read();
}

void flatten::thread_ap_return_454() {
    ap_return_454 = output_454_write_assign_fu_1332.read();
}

void flatten::thread_ap_return_455() {
    ap_return_455 = output_455_write_assign_fu_1340.read();
}

void flatten::thread_ap_return_456() {
    ap_return_456 = output_456_write_assign_fu_1336.read();
}

void flatten::thread_ap_return_457() {
    ap_return_457 = output_457_write_assign_fu_1328.read();
}

void flatten::thread_ap_return_458() {
    ap_return_458 = output_458_write_assign_fu_1324.read();
}

void flatten::thread_ap_return_459() {
    ap_return_459 = output_459_write_assign_fu_1316.read();
}

void flatten::thread_ap_return_46() {
    ap_return_46 = output_46_write_assign_fu_2900.read();
}

void flatten::thread_ap_return_460() {
    ap_return_460 = output_460_write_assign_fu_1312.read();
}

void flatten::thread_ap_return_461() {
    ap_return_461 = output_461_write_assign_fu_1304.read();
}

void flatten::thread_ap_return_462() {
    ap_return_462 = output_462_write_assign_fu_1300.read();
}

void flatten::thread_ap_return_463() {
    ap_return_463 = output_463_write_assign_fu_1292.read();
}

void flatten::thread_ap_return_464() {
    ap_return_464 = output_464_write_assign_fu_1288.read();
}

void flatten::thread_ap_return_465() {
    ap_return_465 = output_465_write_assign_fu_1280.read();
}

void flatten::thread_ap_return_466() {
    ap_return_466 = output_466_write_assign_fu_1276.read();
}

void flatten::thread_ap_return_467() {
    ap_return_467 = output_467_write_assign_fu_1268.read();
}

void flatten::thread_ap_return_468() {
    ap_return_468 = output_468_write_assign_fu_1264.read();
}

void flatten::thread_ap_return_469() {
    ap_return_469 = output_469_write_assign_fu_1256.read();
}

void flatten::thread_ap_return_47() {
    ap_return_47 = output_47_write_assign_fu_2912.read();
}

void flatten::thread_ap_return_470() {
    ap_return_470 = output_470_write_assign_fu_1252.read();
}

void flatten::thread_ap_return_471() {
    ap_return_471 = output_471_write_assign_fu_1244.read();
}

void flatten::thread_ap_return_472() {
    ap_return_472 = output_472_write_assign_fu_1240.read();
}

void flatten::thread_ap_return_473() {
    ap_return_473 = output_473_write_assign_fu_1232.read();
}

void flatten::thread_ap_return_474() {
    ap_return_474 = output_474_write_assign_fu_1228.read();
}

void flatten::thread_ap_return_475() {
    ap_return_475 = output_475_write_assign_fu_1220.read();
}

void flatten::thread_ap_return_476() {
    ap_return_476 = output_476_write_assign_fu_1216.read();
}

void flatten::thread_ap_return_477() {
    ap_return_477 = output_477_write_assign_fu_1208.read();
}

void flatten::thread_ap_return_478() {
    ap_return_478 = output_478_write_assign_fu_1076.read();
}

void flatten::thread_ap_return_479() {
    ap_return_479 = output_479_write_assign_fu_1088.read();
}

void flatten::thread_ap_return_48() {
    ap_return_48 = output_48_write_assign_fu_2924.read();
}

void flatten::thread_ap_return_480() {
    ap_return_480 = output_480_write_assign_fu_1100.read();
}

void flatten::thread_ap_return_481() {
    ap_return_481 = output_481_write_assign_fu_1112.read();
}

void flatten::thread_ap_return_482() {
    ap_return_482 = output_482_write_assign_fu_1124.read();
}

void flatten::thread_ap_return_483() {
    ap_return_483 = output_483_write_assign_fu_1136.read();
}

void flatten::thread_ap_return_484() {
    ap_return_484 = output_484_write_assign_fu_1148.read();
}

void flatten::thread_ap_return_485() {
    ap_return_485 = output_485_write_assign_fu_1160.read();
}

void flatten::thread_ap_return_486() {
    ap_return_486 = output_486_write_assign_fu_1172.read();
}

void flatten::thread_ap_return_487() {
    ap_return_487 = output_487_write_assign_fu_1184.read();
}

void flatten::thread_ap_return_488() {
    ap_return_488 = output_488_write_assign_fu_1196.read();
}

void flatten::thread_ap_return_489() {
    ap_return_489 = output_489_write_assign_fu_1204.read();
}

void flatten::thread_ap_return_49() {
    ap_return_49 = output_49_write_assign_fu_2936.read();
}

void flatten::thread_ap_return_490() {
    ap_return_490 = output_490_write_assign_fu_1200.read();
}

void flatten::thread_ap_return_491() {
    ap_return_491 = output_491_write_assign_fu_1192.read();
}

void flatten::thread_ap_return_492() {
    ap_return_492 = output_492_write_assign_fu_1188.read();
}

void flatten::thread_ap_return_493() {
    ap_return_493 = output_493_write_assign_fu_1180.read();
}

void flatten::thread_ap_return_494() {
    ap_return_494 = output_494_write_assign_fu_1176.read();
}

void flatten::thread_ap_return_495() {
    ap_return_495 = output_495_write_assign_fu_1168.read();
}

void flatten::thread_ap_return_496() {
    ap_return_496 = output_496_write_assign_fu_1164.read();
}

void flatten::thread_ap_return_497() {
    ap_return_497 = output_497_write_assign_fu_1156.read();
}

void flatten::thread_ap_return_498() {
    ap_return_498 = output_498_write_assign_fu_1152.read();
}

void flatten::thread_ap_return_499() {
    ap_return_499 = output_499_write_assign_fu_1144.read();
}

void flatten::thread_ap_return_5() {
    ap_return_5 = output_5_write_assign_fu_3096.read();
}

void flatten::thread_ap_return_50() {
    ap_return_50 = output_50_write_assign_fu_2948.read();
}

void flatten::thread_ap_return_500() {
    ap_return_500 = output_500_write_assign_fu_1140.read();
}

void flatten::thread_ap_return_501() {
    ap_return_501 = output_501_write_assign_fu_1132.read();
}

void flatten::thread_ap_return_502() {
    ap_return_502 = output_502_write_assign_fu_1128.read();
}

void flatten::thread_ap_return_503() {
    ap_return_503 = output_503_write_assign_fu_1120.read();
}

void flatten::thread_ap_return_504() {
    ap_return_504 = output_504_write_assign_fu_1116.read();
}

void flatten::thread_ap_return_505() {
    ap_return_505 = output_505_write_assign_fu_1108.read();
}

void flatten::thread_ap_return_506() {
    ap_return_506 = output_506_write_assign_fu_1104.read();
}

void flatten::thread_ap_return_507() {
    ap_return_507 = output_507_write_assign_fu_1096.read();
}

void flatten::thread_ap_return_508() {
    ap_return_508 = output_508_write_assign_fu_1092.read();
}

void flatten::thread_ap_return_509() {
    ap_return_509 = output_509_write_assign_fu_1084.read();
}

void flatten::thread_ap_return_51() {
    ap_return_51 = output_51_write_assign_fu_2956.read();
}

void flatten::thread_ap_return_510() {
    ap_return_510 = output_510_write_assign_fu_1080.read();
}

void flatten::thread_ap_return_511() {
    ap_return_511 = output_511_write_assign_fu_1072.read();
}

void flatten::thread_ap_return_52() {
    ap_return_52 = output_52_write_assign_fu_2952.read();
}

void flatten::thread_ap_return_53() {
    ap_return_53 = output_53_write_assign_fu_2944.read();
}

void flatten::thread_ap_return_54() {
    ap_return_54 = output_54_write_assign_fu_2940.read();
}

void flatten::thread_ap_return_55() {
    ap_return_55 = output_55_write_assign_fu_2932.read();
}

void flatten::thread_ap_return_56() {
    ap_return_56 = output_56_write_assign_fu_2928.read();
}

void flatten::thread_ap_return_57() {
    ap_return_57 = output_57_write_assign_fu_2920.read();
}

void flatten::thread_ap_return_58() {
    ap_return_58 = output_58_write_assign_fu_2916.read();
}

void flatten::thread_ap_return_59() {
    ap_return_59 = output_59_write_assign_fu_2908.read();
}

void flatten::thread_ap_return_6() {
    ap_return_6 = output_6_write_assign_fu_3092.read();
}

void flatten::thread_ap_return_60() {
    ap_return_60 = output_60_write_assign_fu_2904.read();
}

void flatten::thread_ap_return_61() {
    ap_return_61 = output_61_write_assign_fu_2896.read();
}

void flatten::thread_ap_return_62() {
    ap_return_62 = output_62_write_assign_fu_2892.read();
}

void flatten::thread_ap_return_63() {
    ap_return_63 = output_63_write_assign_fu_2884.read();
}

void flatten::thread_ap_return_64() {
    ap_return_64 = output_64_write_assign_fu_2880.read();
}

void flatten::thread_ap_return_65() {
    ap_return_65 = output_65_write_assign_fu_2872.read();
}

void flatten::thread_ap_return_66() {
    ap_return_66 = output_66_write_assign_fu_2868.read();
}

void flatten::thread_ap_return_67() {
    ap_return_67 = output_67_write_assign_fu_2860.read();
}

void flatten::thread_ap_return_68() {
    ap_return_68 = output_68_write_assign_fu_2856.read();
}

void flatten::thread_ap_return_69() {
    ap_return_69 = output_69_write_assign_fu_2848.read();
}

void flatten::thread_ap_return_7() {
    ap_return_7 = output_7_write_assign_fu_2964.read();
}

void flatten::thread_ap_return_70() {
    ap_return_70 = output_70_write_assign_fu_2844.read();
}

void flatten::thread_ap_return_71() {
    ap_return_71 = output_71_write_assign_fu_2836.read();
}

void flatten::thread_ap_return_72() {
    ap_return_72 = output_72_write_assign_fu_2832.read();
}

void flatten::thread_ap_return_73() {
    ap_return_73 = output_73_write_assign_fu_2824.read();
}

void flatten::thread_ap_return_74() {
    ap_return_74 = output_74_write_assign_fu_2692.read();
}

void flatten::thread_ap_return_75() {
    ap_return_75 = output_75_write_assign_fu_2704.read();
}

void flatten::thread_ap_return_76() {
    ap_return_76 = output_76_write_assign_fu_2716.read();
}

void flatten::thread_ap_return_77() {
    ap_return_77 = output_77_write_assign_fu_2728.read();
}

void flatten::thread_ap_return_78() {
    ap_return_78 = output_78_write_assign_fu_2740.read();
}

void flatten::thread_ap_return_79() {
    ap_return_79 = output_79_write_assign_fu_2752.read();
}

void flatten::thread_ap_return_8() {
    ap_return_8 = output_8_write_assign_fu_2976.read();
}

void flatten::thread_ap_return_80() {
    ap_return_80 = output_80_write_assign_fu_2764.read();
}

void flatten::thread_ap_return_81() {
    ap_return_81 = output_81_write_assign_fu_2776.read();
}

void flatten::thread_ap_return_82() {
    ap_return_82 = output_82_write_assign_fu_2788.read();
}

void flatten::thread_ap_return_83() {
    ap_return_83 = output_83_write_assign_fu_2800.read();
}

void flatten::thread_ap_return_84() {
    ap_return_84 = output_84_write_assign_fu_2812.read();
}

void flatten::thread_ap_return_85() {
    ap_return_85 = output_85_write_assign_fu_2820.read();
}

void flatten::thread_ap_return_86() {
    ap_return_86 = output_86_write_assign_fu_2816.read();
}

void flatten::thread_ap_return_87() {
    ap_return_87 = output_87_write_assign_fu_2808.read();
}

void flatten::thread_ap_return_88() {
    ap_return_88 = output_88_write_assign_fu_2804.read();
}

void flatten::thread_ap_return_89() {
    ap_return_89 = output_89_write_assign_fu_2796.read();
}

void flatten::thread_ap_return_9() {
    ap_return_9 = output_9_write_assign_fu_2988.read();
}

void flatten::thread_ap_return_90() {
    ap_return_90 = output_90_write_assign_fu_2792.read();
}

void flatten::thread_ap_return_91() {
    ap_return_91 = output_91_write_assign_fu_2784.read();
}

void flatten::thread_ap_return_92() {
    ap_return_92 = output_92_write_assign_fu_2780.read();
}

void flatten::thread_ap_return_93() {
    ap_return_93 = output_93_write_assign_fu_2772.read();
}

void flatten::thread_ap_return_94() {
    ap_return_94 = output_94_write_assign_fu_2768.read();
}

void flatten::thread_ap_return_95() {
    ap_return_95 = output_95_write_assign_fu_2760.read();
}

void flatten::thread_ap_return_96() {
    ap_return_96 = output_96_write_assign_fu_2756.read();
}

void flatten::thread_ap_return_97() {
    ap_return_97 = output_97_write_assign_fu_2748.read();
}

void flatten::thread_ap_return_98() {
    ap_return_98 = output_98_write_assign_fu_2744.read();
}

void flatten::thread_ap_return_99() {
    ap_return_99 = output_99_write_assign_fu_2736.read();
}

void flatten::thread_c_fu_3172_p2() {
    c_fu_3172_p2 = (!c_0_reg_3133.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(c_0_reg_3133.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void flatten::thread_icmp_ln128_fu_3166_p2() {
    icmp_ln128_fu_3166_p2 = (!c_0_reg_3133.read().is_01() || !ap_const_lv6_20.is_01())? sc_lv<1>(): sc_lv<1>(c_0_reg_3133.read() == ap_const_lv6_20);
}

void flatten::thread_icmp_ln130_fu_7794_p2() {
    icmp_ln130_fu_7794_p2 = (!y_0_reg_3144.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(y_0_reg_3144.read() == ap_const_lv3_4);
}

void flatten::thread_icmp_ln132_fu_7830_p2() {
    icmp_ln132_fu_7830_p2 = (!x_0_reg_3155.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(x_0_reg_3155.read() == ap_const_lv3_4);
}

void flatten::thread_input_r_address0() {
    input_r_address0 =  (sc_lv<4>) (zext_ln134_2_fu_7868_p1.read());
}

void flatten::thread_input_r_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        input_r_ce0 = ap_const_logic_1;
    } else {
        input_r_ce0 = ap_const_logic_0;
    }
}

void flatten::thread_shl_ln133_1_fu_7851_p3() {
    shl_ln133_1_fu_7851_p3 = esl_concat<4,5>(add_ln133_fu_7846_p2.read(), ap_const_lv5_0);
}

void flatten::thread_shl_ln_fu_7822_p3() {
    shl_ln_fu_7822_p3 = esl_concat<2,2>(trunc_ln133_fu_7818_p1.read(), ap_const_lv2_0);
}

void flatten::thread_tmp_18_fu_7806_p3() {
    tmp_18_fu_7806_p3 = esl_concat<3,2>(y_0_reg_3144.read(), ap_const_lv2_0);
}

void flatten::thread_tmp_19_fu_7878_p3() {
    tmp_19_fu_7878_p3 = (!zext_ln134_reg_13530.read().is_01() || sc_biguint<7>(zext_ln134_reg_13530.read()).to_uint() >= 32)? sc_lv<1>(): input_r_q0.read().range(sc_biguint<7>(zext_ln134_reg_13530.read()).to_uint(), sc_biguint<7>(zext_ln134_reg_13530.read()).to_uint());
}

void flatten::thread_trunc_ln133_fu_7818_p1() {
    trunc_ln133_fu_7818_p1 = y_0_reg_3144.read().range(2-1, 0);
}

void flatten::thread_x_fu_7836_p2() {
    x_fu_7836_p2 = (!x_0_reg_3155.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(x_0_reg_3155.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void flatten::thread_y_fu_7800_p2() {
    y_fu_7800_p2 = (!y_0_reg_3144.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(y_0_reg_3144.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void flatten::thread_zext_ln133_1_fu_7842_p1() {
    zext_ln133_1_fu_7842_p1 = esl_zext<4,3>(x_0_reg_3155.read());
}

void flatten::thread_zext_ln133_2_fu_7814_p1() {
    zext_ln133_2_fu_7814_p1 = esl_zext<6,5>(tmp_18_fu_7806_p3.read());
}

void flatten::thread_zext_ln133_fu_3178_p1() {
    zext_ln133_fu_3178_p1 = esl_zext<9,6>(c_0_reg_3133.read());
}

void flatten::thread_zext_ln134_1_fu_7859_p1() {
    zext_ln134_1_fu_7859_p1 = esl_zext<6,3>(x_0_reg_3155.read());
}

void flatten::thread_zext_ln134_2_fu_7868_p1() {
    zext_ln134_2_fu_7868_p1 = esl_zext<64,6>(add_ln134_1_fu_7863_p2.read());
}

void flatten::thread_zext_ln134_fu_3182_p1() {
    zext_ln134_fu_3182_p1 = esl_zext<7,6>(c_0_reg_3133.read());
}

}

