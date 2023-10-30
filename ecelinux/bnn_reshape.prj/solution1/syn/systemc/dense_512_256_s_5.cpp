#include "dense_512_256_s.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void dense_512_256_s::thread_xor_ln196_504_fu_13539_p1() {
    xor_ln196_504_fu_13539_p1 =  (sc_lv<1>) (input_252_read.read());
}

void dense_512_256_s::thread_xor_ln196_504_fu_13539_p2() {
    xor_ln196_504_fu_13539_p2 = (tmp_270_fu_13531_p3.read() ^ xor_ln196_504_fu_13539_p1.read());
}

void dense_512_256_s::thread_xor_ln196_505_fu_13544_p2() {
    xor_ln196_505_fu_13544_p2 = (xor_ln196_504_fu_13539_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_506_fu_13562_p1() {
    xor_ln196_506_fu_13562_p1 =  (sc_lv<1>) (input_253_read.read());
}

void dense_512_256_s::thread_xor_ln196_506_fu_13562_p2() {
    xor_ln196_506_fu_13562_p2 = (tmp_271_fu_13554_p3.read() ^ xor_ln196_506_fu_13562_p1.read());
}

void dense_512_256_s::thread_xor_ln196_507_fu_13567_p2() {
    xor_ln196_507_fu_13567_p2 = (xor_ln196_506_fu_13562_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_508_fu_13585_p1() {
    xor_ln196_508_fu_13585_p1 =  (sc_lv<1>) (input_254_read.read());
}

void dense_512_256_s::thread_xor_ln196_508_fu_13585_p2() {
    xor_ln196_508_fu_13585_p2 = (tmp_272_fu_13577_p3.read() ^ xor_ln196_508_fu_13585_p1.read());
}

void dense_512_256_s::thread_xor_ln196_509_fu_13590_p2() {
    xor_ln196_509_fu_13590_p2 = (xor_ln196_508_fu_13585_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_50_fu_8318_p1() {
    xor_ln196_50_fu_8318_p1 =  (sc_lv<1>) (input_25_read.read());
}

void dense_512_256_s::thread_xor_ln196_50_fu_8318_p2() {
    xor_ln196_50_fu_8318_p2 = (tmp_43_fu_8310_p3.read() ^ xor_ln196_50_fu_8318_p1.read());
}

void dense_512_256_s::thread_xor_ln196_510_fu_13608_p1() {
    xor_ln196_510_fu_13608_p1 =  (sc_lv<1>) (input_255_read.read());
}

void dense_512_256_s::thread_xor_ln196_510_fu_13608_p2() {
    xor_ln196_510_fu_13608_p2 = (tmp_273_fu_13600_p3.read() ^ xor_ln196_510_fu_13608_p1.read());
}

void dense_512_256_s::thread_xor_ln196_511_fu_13613_p2() {
    xor_ln196_511_fu_13613_p2 = (xor_ln196_510_fu_13608_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_512_fu_13631_p1() {
    xor_ln196_512_fu_13631_p1 =  (sc_lv<1>) (input_256_read.read());
}

void dense_512_256_s::thread_xor_ln196_512_fu_13631_p2() {
    xor_ln196_512_fu_13631_p2 = (tmp_274_fu_13623_p3.read() ^ xor_ln196_512_fu_13631_p1.read());
}

void dense_512_256_s::thread_xor_ln196_513_fu_13636_p2() {
    xor_ln196_513_fu_13636_p2 = (xor_ln196_512_fu_13631_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_514_fu_13654_p1() {
    xor_ln196_514_fu_13654_p1 =  (sc_lv<1>) (input_257_read.read());
}

void dense_512_256_s::thread_xor_ln196_514_fu_13654_p2() {
    xor_ln196_514_fu_13654_p2 = (tmp_275_fu_13646_p3.read() ^ xor_ln196_514_fu_13654_p1.read());
}

void dense_512_256_s::thread_xor_ln196_515_fu_13659_p2() {
    xor_ln196_515_fu_13659_p2 = (xor_ln196_514_fu_13654_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_516_fu_13677_p1() {
    xor_ln196_516_fu_13677_p1 =  (sc_lv<1>) (input_258_read.read());
}

void dense_512_256_s::thread_xor_ln196_516_fu_13677_p2() {
    xor_ln196_516_fu_13677_p2 = (tmp_276_fu_13669_p3.read() ^ xor_ln196_516_fu_13677_p1.read());
}

void dense_512_256_s::thread_xor_ln196_517_fu_13682_p2() {
    xor_ln196_517_fu_13682_p2 = (xor_ln196_516_fu_13677_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_518_fu_13700_p1() {
    xor_ln196_518_fu_13700_p1 =  (sc_lv<1>) (input_259_read.read());
}

void dense_512_256_s::thread_xor_ln196_518_fu_13700_p2() {
    xor_ln196_518_fu_13700_p2 = (tmp_277_fu_13692_p3.read() ^ xor_ln196_518_fu_13700_p1.read());
}

void dense_512_256_s::thread_xor_ln196_519_fu_13705_p2() {
    xor_ln196_519_fu_13705_p2 = (xor_ln196_518_fu_13700_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_51_fu_8323_p2() {
    xor_ln196_51_fu_8323_p2 = (xor_ln196_50_fu_8318_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_520_fu_13723_p1() {
    xor_ln196_520_fu_13723_p1 =  (sc_lv<1>) (input_260_read.read());
}

void dense_512_256_s::thread_xor_ln196_520_fu_13723_p2() {
    xor_ln196_520_fu_13723_p2 = (tmp_278_fu_13715_p3.read() ^ xor_ln196_520_fu_13723_p1.read());
}

void dense_512_256_s::thread_xor_ln196_521_fu_13728_p2() {
    xor_ln196_521_fu_13728_p2 = (xor_ln196_520_fu_13723_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_522_fu_13746_p1() {
    xor_ln196_522_fu_13746_p1 =  (sc_lv<1>) (input_261_read.read());
}

void dense_512_256_s::thread_xor_ln196_522_fu_13746_p2() {
    xor_ln196_522_fu_13746_p2 = (tmp_279_fu_13738_p3.read() ^ xor_ln196_522_fu_13746_p1.read());
}

void dense_512_256_s::thread_xor_ln196_523_fu_13751_p2() {
    xor_ln196_523_fu_13751_p2 = (xor_ln196_522_fu_13746_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_524_fu_13769_p1() {
    xor_ln196_524_fu_13769_p1 =  (sc_lv<1>) (input_262_read.read());
}

void dense_512_256_s::thread_xor_ln196_524_fu_13769_p2() {
    xor_ln196_524_fu_13769_p2 = (tmp_280_fu_13761_p3.read() ^ xor_ln196_524_fu_13769_p1.read());
}

void dense_512_256_s::thread_xor_ln196_525_fu_13774_p2() {
    xor_ln196_525_fu_13774_p2 = (xor_ln196_524_fu_13769_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_526_fu_13792_p1() {
    xor_ln196_526_fu_13792_p1 =  (sc_lv<1>) (input_263_read.read());
}

void dense_512_256_s::thread_xor_ln196_526_fu_13792_p2() {
    xor_ln196_526_fu_13792_p2 = (tmp_281_fu_13784_p3.read() ^ xor_ln196_526_fu_13792_p1.read());
}

void dense_512_256_s::thread_xor_ln196_527_fu_13797_p2() {
    xor_ln196_527_fu_13797_p2 = (xor_ln196_526_fu_13792_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_528_fu_13815_p1() {
    xor_ln196_528_fu_13815_p1 =  (sc_lv<1>) (input_264_read.read());
}

void dense_512_256_s::thread_xor_ln196_528_fu_13815_p2() {
    xor_ln196_528_fu_13815_p2 = (tmp_282_fu_13807_p3.read() ^ xor_ln196_528_fu_13815_p1.read());
}

void dense_512_256_s::thread_xor_ln196_529_fu_13820_p2() {
    xor_ln196_529_fu_13820_p2 = (xor_ln196_528_fu_13815_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_52_fu_8341_p1() {
    xor_ln196_52_fu_8341_p1 =  (sc_lv<1>) (input_26_read.read());
}

void dense_512_256_s::thread_xor_ln196_52_fu_8341_p2() {
    xor_ln196_52_fu_8341_p2 = (tmp_44_fu_8333_p3.read() ^ xor_ln196_52_fu_8341_p1.read());
}

void dense_512_256_s::thread_xor_ln196_530_fu_13838_p1() {
    xor_ln196_530_fu_13838_p1 =  (sc_lv<1>) (input_265_read.read());
}

void dense_512_256_s::thread_xor_ln196_530_fu_13838_p2() {
    xor_ln196_530_fu_13838_p2 = (tmp_283_fu_13830_p3.read() ^ xor_ln196_530_fu_13838_p1.read());
}

void dense_512_256_s::thread_xor_ln196_531_fu_13843_p2() {
    xor_ln196_531_fu_13843_p2 = (xor_ln196_530_fu_13838_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_532_fu_13861_p1() {
    xor_ln196_532_fu_13861_p1 =  (sc_lv<1>) (input_266_read.read());
}

void dense_512_256_s::thread_xor_ln196_532_fu_13861_p2() {
    xor_ln196_532_fu_13861_p2 = (tmp_284_fu_13853_p3.read() ^ xor_ln196_532_fu_13861_p1.read());
}

void dense_512_256_s::thread_xor_ln196_533_fu_13866_p2() {
    xor_ln196_533_fu_13866_p2 = (xor_ln196_532_fu_13861_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_534_fu_13884_p1() {
    xor_ln196_534_fu_13884_p1 =  (sc_lv<1>) (input_267_read.read());
}

void dense_512_256_s::thread_xor_ln196_534_fu_13884_p2() {
    xor_ln196_534_fu_13884_p2 = (tmp_285_fu_13876_p3.read() ^ xor_ln196_534_fu_13884_p1.read());
}

void dense_512_256_s::thread_xor_ln196_535_fu_13889_p2() {
    xor_ln196_535_fu_13889_p2 = (xor_ln196_534_fu_13884_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_536_fu_13907_p1() {
    xor_ln196_536_fu_13907_p1 =  (sc_lv<1>) (input_268_read.read());
}

void dense_512_256_s::thread_xor_ln196_536_fu_13907_p2() {
    xor_ln196_536_fu_13907_p2 = (tmp_286_fu_13899_p3.read() ^ xor_ln196_536_fu_13907_p1.read());
}

void dense_512_256_s::thread_xor_ln196_537_fu_13912_p2() {
    xor_ln196_537_fu_13912_p2 = (xor_ln196_536_fu_13907_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_538_fu_13930_p1() {
    xor_ln196_538_fu_13930_p1 =  (sc_lv<1>) (input_269_read.read());
}

void dense_512_256_s::thread_xor_ln196_538_fu_13930_p2() {
    xor_ln196_538_fu_13930_p2 = (tmp_287_fu_13922_p3.read() ^ xor_ln196_538_fu_13930_p1.read());
}

void dense_512_256_s::thread_xor_ln196_539_fu_13935_p2() {
    xor_ln196_539_fu_13935_p2 = (xor_ln196_538_fu_13930_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_53_fu_8346_p2() {
    xor_ln196_53_fu_8346_p2 = (xor_ln196_52_fu_8341_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_540_fu_13953_p1() {
    xor_ln196_540_fu_13953_p1 =  (sc_lv<1>) (input_270_read.read());
}

void dense_512_256_s::thread_xor_ln196_540_fu_13953_p2() {
    xor_ln196_540_fu_13953_p2 = (tmp_288_fu_13945_p3.read() ^ xor_ln196_540_fu_13953_p1.read());
}

void dense_512_256_s::thread_xor_ln196_541_fu_13958_p2() {
    xor_ln196_541_fu_13958_p2 = (xor_ln196_540_fu_13953_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_542_fu_13976_p1() {
    xor_ln196_542_fu_13976_p1 =  (sc_lv<1>) (input_271_read.read());
}

void dense_512_256_s::thread_xor_ln196_542_fu_13976_p2() {
    xor_ln196_542_fu_13976_p2 = (tmp_289_fu_13968_p3.read() ^ xor_ln196_542_fu_13976_p1.read());
}

void dense_512_256_s::thread_xor_ln196_543_fu_13981_p2() {
    xor_ln196_543_fu_13981_p2 = (xor_ln196_542_fu_13976_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_544_fu_13999_p1() {
    xor_ln196_544_fu_13999_p1 =  (sc_lv<1>) (input_272_read.read());
}

void dense_512_256_s::thread_xor_ln196_544_fu_13999_p2() {
    xor_ln196_544_fu_13999_p2 = (tmp_290_fu_13991_p3.read() ^ xor_ln196_544_fu_13999_p1.read());
}

void dense_512_256_s::thread_xor_ln196_545_fu_14004_p2() {
    xor_ln196_545_fu_14004_p2 = (xor_ln196_544_fu_13999_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_546_fu_14022_p1() {
    xor_ln196_546_fu_14022_p1 =  (sc_lv<1>) (input_273_read.read());
}

void dense_512_256_s::thread_xor_ln196_546_fu_14022_p2() {
    xor_ln196_546_fu_14022_p2 = (tmp_291_fu_14014_p3.read() ^ xor_ln196_546_fu_14022_p1.read());
}

void dense_512_256_s::thread_xor_ln196_547_fu_14027_p2() {
    xor_ln196_547_fu_14027_p2 = (xor_ln196_546_fu_14022_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_548_fu_14045_p1() {
    xor_ln196_548_fu_14045_p1 =  (sc_lv<1>) (input_274_read.read());
}

void dense_512_256_s::thread_xor_ln196_548_fu_14045_p2() {
    xor_ln196_548_fu_14045_p2 = (tmp_292_fu_14037_p3.read() ^ xor_ln196_548_fu_14045_p1.read());
}

void dense_512_256_s::thread_xor_ln196_549_fu_14050_p2() {
    xor_ln196_549_fu_14050_p2 = (xor_ln196_548_fu_14045_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_54_fu_8364_p1() {
    xor_ln196_54_fu_8364_p1 =  (sc_lv<1>) (input_27_read.read());
}

void dense_512_256_s::thread_xor_ln196_54_fu_8364_p2() {
    xor_ln196_54_fu_8364_p2 = (tmp_45_fu_8356_p3.read() ^ xor_ln196_54_fu_8364_p1.read());
}

void dense_512_256_s::thread_xor_ln196_550_fu_14068_p1() {
    xor_ln196_550_fu_14068_p1 =  (sc_lv<1>) (input_275_read.read());
}

void dense_512_256_s::thread_xor_ln196_550_fu_14068_p2() {
    xor_ln196_550_fu_14068_p2 = (tmp_293_fu_14060_p3.read() ^ xor_ln196_550_fu_14068_p1.read());
}

void dense_512_256_s::thread_xor_ln196_551_fu_14073_p2() {
    xor_ln196_551_fu_14073_p2 = (xor_ln196_550_fu_14068_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_552_fu_14091_p1() {
    xor_ln196_552_fu_14091_p1 =  (sc_lv<1>) (input_276_read.read());
}

void dense_512_256_s::thread_xor_ln196_552_fu_14091_p2() {
    xor_ln196_552_fu_14091_p2 = (tmp_294_fu_14083_p3.read() ^ xor_ln196_552_fu_14091_p1.read());
}

void dense_512_256_s::thread_xor_ln196_553_fu_14096_p2() {
    xor_ln196_553_fu_14096_p2 = (xor_ln196_552_fu_14091_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_554_fu_14114_p1() {
    xor_ln196_554_fu_14114_p1 =  (sc_lv<1>) (input_277_read.read());
}

void dense_512_256_s::thread_xor_ln196_554_fu_14114_p2() {
    xor_ln196_554_fu_14114_p2 = (tmp_295_fu_14106_p3.read() ^ xor_ln196_554_fu_14114_p1.read());
}

void dense_512_256_s::thread_xor_ln196_555_fu_14119_p2() {
    xor_ln196_555_fu_14119_p2 = (xor_ln196_554_fu_14114_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_556_fu_14137_p1() {
    xor_ln196_556_fu_14137_p1 =  (sc_lv<1>) (input_278_read.read());
}

void dense_512_256_s::thread_xor_ln196_556_fu_14137_p2() {
    xor_ln196_556_fu_14137_p2 = (tmp_296_fu_14129_p3.read() ^ xor_ln196_556_fu_14137_p1.read());
}

void dense_512_256_s::thread_xor_ln196_557_fu_14142_p2() {
    xor_ln196_557_fu_14142_p2 = (xor_ln196_556_fu_14137_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_558_fu_14160_p1() {
    xor_ln196_558_fu_14160_p1 =  (sc_lv<1>) (input_279_read.read());
}

void dense_512_256_s::thread_xor_ln196_558_fu_14160_p2() {
    xor_ln196_558_fu_14160_p2 = (tmp_297_fu_14152_p3.read() ^ xor_ln196_558_fu_14160_p1.read());
}

void dense_512_256_s::thread_xor_ln196_559_fu_14165_p2() {
    xor_ln196_559_fu_14165_p2 = (xor_ln196_558_fu_14160_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_55_fu_8369_p2() {
    xor_ln196_55_fu_8369_p2 = (xor_ln196_54_fu_8364_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_560_fu_14183_p1() {
    xor_ln196_560_fu_14183_p1 =  (sc_lv<1>) (input_280_read.read());
}

void dense_512_256_s::thread_xor_ln196_560_fu_14183_p2() {
    xor_ln196_560_fu_14183_p2 = (tmp_298_fu_14175_p3.read() ^ xor_ln196_560_fu_14183_p1.read());
}

void dense_512_256_s::thread_xor_ln196_561_fu_14188_p2() {
    xor_ln196_561_fu_14188_p2 = (xor_ln196_560_fu_14183_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_562_fu_14206_p1() {
    xor_ln196_562_fu_14206_p1 =  (sc_lv<1>) (input_281_read.read());
}

void dense_512_256_s::thread_xor_ln196_562_fu_14206_p2() {
    xor_ln196_562_fu_14206_p2 = (tmp_299_fu_14198_p3.read() ^ xor_ln196_562_fu_14206_p1.read());
}

void dense_512_256_s::thread_xor_ln196_563_fu_14211_p2() {
    xor_ln196_563_fu_14211_p2 = (xor_ln196_562_fu_14206_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_564_fu_14229_p1() {
    xor_ln196_564_fu_14229_p1 =  (sc_lv<1>) (input_282_read.read());
}

void dense_512_256_s::thread_xor_ln196_564_fu_14229_p2() {
    xor_ln196_564_fu_14229_p2 = (tmp_300_fu_14221_p3.read() ^ xor_ln196_564_fu_14229_p1.read());
}

void dense_512_256_s::thread_xor_ln196_565_fu_14234_p2() {
    xor_ln196_565_fu_14234_p2 = (xor_ln196_564_fu_14229_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_566_fu_14252_p1() {
    xor_ln196_566_fu_14252_p1 =  (sc_lv<1>) (input_283_read.read());
}

void dense_512_256_s::thread_xor_ln196_566_fu_14252_p2() {
    xor_ln196_566_fu_14252_p2 = (tmp_301_fu_14244_p3.read() ^ xor_ln196_566_fu_14252_p1.read());
}

void dense_512_256_s::thread_xor_ln196_567_fu_14257_p2() {
    xor_ln196_567_fu_14257_p2 = (xor_ln196_566_fu_14252_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_568_fu_14275_p1() {
    xor_ln196_568_fu_14275_p1 =  (sc_lv<1>) (input_284_read.read());
}

void dense_512_256_s::thread_xor_ln196_568_fu_14275_p2() {
    xor_ln196_568_fu_14275_p2 = (tmp_302_fu_14267_p3.read() ^ xor_ln196_568_fu_14275_p1.read());
}

void dense_512_256_s::thread_xor_ln196_569_fu_14280_p2() {
    xor_ln196_569_fu_14280_p2 = (xor_ln196_568_fu_14275_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_56_fu_8387_p1() {
    xor_ln196_56_fu_8387_p1 =  (sc_lv<1>) (input_28_read.read());
}

void dense_512_256_s::thread_xor_ln196_56_fu_8387_p2() {
    xor_ln196_56_fu_8387_p2 = (tmp_46_fu_8379_p3.read() ^ xor_ln196_56_fu_8387_p1.read());
}

void dense_512_256_s::thread_xor_ln196_570_fu_14298_p1() {
    xor_ln196_570_fu_14298_p1 =  (sc_lv<1>) (input_285_read.read());
}

void dense_512_256_s::thread_xor_ln196_570_fu_14298_p2() {
    xor_ln196_570_fu_14298_p2 = (tmp_303_fu_14290_p3.read() ^ xor_ln196_570_fu_14298_p1.read());
}

void dense_512_256_s::thread_xor_ln196_571_fu_14303_p2() {
    xor_ln196_571_fu_14303_p2 = (xor_ln196_570_fu_14298_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_572_fu_14321_p1() {
    xor_ln196_572_fu_14321_p1 =  (sc_lv<1>) (input_286_read.read());
}

void dense_512_256_s::thread_xor_ln196_572_fu_14321_p2() {
    xor_ln196_572_fu_14321_p2 = (tmp_304_fu_14313_p3.read() ^ xor_ln196_572_fu_14321_p1.read());
}

void dense_512_256_s::thread_xor_ln196_573_fu_14326_p2() {
    xor_ln196_573_fu_14326_p2 = (xor_ln196_572_fu_14321_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_574_fu_14344_p1() {
    xor_ln196_574_fu_14344_p1 =  (sc_lv<1>) (input_287_read.read());
}

void dense_512_256_s::thread_xor_ln196_574_fu_14344_p2() {
    xor_ln196_574_fu_14344_p2 = (tmp_305_fu_14336_p3.read() ^ xor_ln196_574_fu_14344_p1.read());
}

void dense_512_256_s::thread_xor_ln196_575_fu_14349_p2() {
    xor_ln196_575_fu_14349_p2 = (xor_ln196_574_fu_14344_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_576_fu_14367_p1() {
    xor_ln196_576_fu_14367_p1 =  (sc_lv<1>) (input_288_read.read());
}

void dense_512_256_s::thread_xor_ln196_576_fu_14367_p2() {
    xor_ln196_576_fu_14367_p2 = (tmp_306_fu_14359_p3.read() ^ xor_ln196_576_fu_14367_p1.read());
}

void dense_512_256_s::thread_xor_ln196_577_fu_14372_p2() {
    xor_ln196_577_fu_14372_p2 = (xor_ln196_576_fu_14367_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_578_fu_14390_p1() {
    xor_ln196_578_fu_14390_p1 =  (sc_lv<1>) (input_289_read.read());
}

void dense_512_256_s::thread_xor_ln196_578_fu_14390_p2() {
    xor_ln196_578_fu_14390_p2 = (tmp_307_fu_14382_p3.read() ^ xor_ln196_578_fu_14390_p1.read());
}

void dense_512_256_s::thread_xor_ln196_579_fu_14395_p2() {
    xor_ln196_579_fu_14395_p2 = (xor_ln196_578_fu_14390_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_57_fu_8392_p2() {
    xor_ln196_57_fu_8392_p2 = (xor_ln196_56_fu_8387_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_580_fu_14413_p1() {
    xor_ln196_580_fu_14413_p1 =  (sc_lv<1>) (input_290_read.read());
}

void dense_512_256_s::thread_xor_ln196_580_fu_14413_p2() {
    xor_ln196_580_fu_14413_p2 = (tmp_308_fu_14405_p3.read() ^ xor_ln196_580_fu_14413_p1.read());
}

void dense_512_256_s::thread_xor_ln196_581_fu_14418_p2() {
    xor_ln196_581_fu_14418_p2 = (xor_ln196_580_fu_14413_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_582_fu_14436_p1() {
    xor_ln196_582_fu_14436_p1 =  (sc_lv<1>) (input_291_read.read());
}

void dense_512_256_s::thread_xor_ln196_582_fu_14436_p2() {
    xor_ln196_582_fu_14436_p2 = (tmp_309_fu_14428_p3.read() ^ xor_ln196_582_fu_14436_p1.read());
}

void dense_512_256_s::thread_xor_ln196_583_fu_14441_p2() {
    xor_ln196_583_fu_14441_p2 = (xor_ln196_582_fu_14436_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_584_fu_14459_p1() {
    xor_ln196_584_fu_14459_p1 =  (sc_lv<1>) (input_292_read.read());
}

void dense_512_256_s::thread_xor_ln196_584_fu_14459_p2() {
    xor_ln196_584_fu_14459_p2 = (tmp_310_fu_14451_p3.read() ^ xor_ln196_584_fu_14459_p1.read());
}

void dense_512_256_s::thread_xor_ln196_585_fu_14464_p2() {
    xor_ln196_585_fu_14464_p2 = (xor_ln196_584_fu_14459_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_586_fu_14482_p1() {
    xor_ln196_586_fu_14482_p1 =  (sc_lv<1>) (input_293_read.read());
}

void dense_512_256_s::thread_xor_ln196_586_fu_14482_p2() {
    xor_ln196_586_fu_14482_p2 = (tmp_311_fu_14474_p3.read() ^ xor_ln196_586_fu_14482_p1.read());
}

void dense_512_256_s::thread_xor_ln196_587_fu_14487_p2() {
    xor_ln196_587_fu_14487_p2 = (xor_ln196_586_fu_14482_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_588_fu_14505_p1() {
    xor_ln196_588_fu_14505_p1 =  (sc_lv<1>) (input_294_read.read());
}

void dense_512_256_s::thread_xor_ln196_588_fu_14505_p2() {
    xor_ln196_588_fu_14505_p2 = (tmp_312_fu_14497_p3.read() ^ xor_ln196_588_fu_14505_p1.read());
}

void dense_512_256_s::thread_xor_ln196_589_fu_14510_p2() {
    xor_ln196_589_fu_14510_p2 = (xor_ln196_588_fu_14505_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_58_fu_8410_p1() {
    xor_ln196_58_fu_8410_p1 =  (sc_lv<1>) (input_29_read.read());
}

void dense_512_256_s::thread_xor_ln196_58_fu_8410_p2() {
    xor_ln196_58_fu_8410_p2 = (tmp_47_fu_8402_p3.read() ^ xor_ln196_58_fu_8410_p1.read());
}

void dense_512_256_s::thread_xor_ln196_590_fu_14528_p1() {
    xor_ln196_590_fu_14528_p1 =  (sc_lv<1>) (input_295_read.read());
}

void dense_512_256_s::thread_xor_ln196_590_fu_14528_p2() {
    xor_ln196_590_fu_14528_p2 = (tmp_313_fu_14520_p3.read() ^ xor_ln196_590_fu_14528_p1.read());
}

void dense_512_256_s::thread_xor_ln196_591_fu_14533_p2() {
    xor_ln196_591_fu_14533_p2 = (xor_ln196_590_fu_14528_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_592_fu_14551_p1() {
    xor_ln196_592_fu_14551_p1 =  (sc_lv<1>) (input_296_read.read());
}

void dense_512_256_s::thread_xor_ln196_592_fu_14551_p2() {
    xor_ln196_592_fu_14551_p2 = (tmp_314_fu_14543_p3.read() ^ xor_ln196_592_fu_14551_p1.read());
}

void dense_512_256_s::thread_xor_ln196_593_fu_14556_p2() {
    xor_ln196_593_fu_14556_p2 = (xor_ln196_592_fu_14551_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_594_fu_14574_p1() {
    xor_ln196_594_fu_14574_p1 =  (sc_lv<1>) (input_297_read.read());
}

void dense_512_256_s::thread_xor_ln196_594_fu_14574_p2() {
    xor_ln196_594_fu_14574_p2 = (tmp_315_fu_14566_p3.read() ^ xor_ln196_594_fu_14574_p1.read());
}

void dense_512_256_s::thread_xor_ln196_595_fu_14579_p2() {
    xor_ln196_595_fu_14579_p2 = (xor_ln196_594_fu_14574_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_596_fu_14597_p1() {
    xor_ln196_596_fu_14597_p1 =  (sc_lv<1>) (input_298_read.read());
}

void dense_512_256_s::thread_xor_ln196_596_fu_14597_p2() {
    xor_ln196_596_fu_14597_p2 = (tmp_316_fu_14589_p3.read() ^ xor_ln196_596_fu_14597_p1.read());
}

void dense_512_256_s::thread_xor_ln196_597_fu_14602_p2() {
    xor_ln196_597_fu_14602_p2 = (xor_ln196_596_fu_14597_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_598_fu_14620_p1() {
    xor_ln196_598_fu_14620_p1 =  (sc_lv<1>) (input_299_read.read());
}

void dense_512_256_s::thread_xor_ln196_598_fu_14620_p2() {
    xor_ln196_598_fu_14620_p2 = (tmp_317_fu_14612_p3.read() ^ xor_ln196_598_fu_14620_p1.read());
}

void dense_512_256_s::thread_xor_ln196_599_fu_14625_p2() {
    xor_ln196_599_fu_14625_p2 = (xor_ln196_598_fu_14620_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_59_fu_8415_p2() {
    xor_ln196_59_fu_8415_p2 = (xor_ln196_58_fu_8410_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_5_fu_7794_p2() {
    xor_ln196_5_fu_7794_p2 = (xor_ln196_4_fu_7789_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_600_fu_14643_p1() {
    xor_ln196_600_fu_14643_p1 =  (sc_lv<1>) (input_300_read.read());
}

void dense_512_256_s::thread_xor_ln196_600_fu_14643_p2() {
    xor_ln196_600_fu_14643_p2 = (tmp_318_fu_14635_p3.read() ^ xor_ln196_600_fu_14643_p1.read());
}

void dense_512_256_s::thread_xor_ln196_601_fu_14648_p2() {
    xor_ln196_601_fu_14648_p2 = (xor_ln196_600_fu_14643_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_602_fu_14666_p1() {
    xor_ln196_602_fu_14666_p1 =  (sc_lv<1>) (input_301_read.read());
}

void dense_512_256_s::thread_xor_ln196_602_fu_14666_p2() {
    xor_ln196_602_fu_14666_p2 = (tmp_319_fu_14658_p3.read() ^ xor_ln196_602_fu_14666_p1.read());
}

void dense_512_256_s::thread_xor_ln196_603_fu_14671_p2() {
    xor_ln196_603_fu_14671_p2 = (xor_ln196_602_fu_14666_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_604_fu_14689_p1() {
    xor_ln196_604_fu_14689_p1 =  (sc_lv<1>) (input_302_read.read());
}

void dense_512_256_s::thread_xor_ln196_604_fu_14689_p2() {
    xor_ln196_604_fu_14689_p2 = (tmp_320_fu_14681_p3.read() ^ xor_ln196_604_fu_14689_p1.read());
}

void dense_512_256_s::thread_xor_ln196_605_fu_14694_p2() {
    xor_ln196_605_fu_14694_p2 = (xor_ln196_604_fu_14689_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_606_fu_14712_p1() {
    xor_ln196_606_fu_14712_p1 =  (sc_lv<1>) (input_303_read.read());
}

void dense_512_256_s::thread_xor_ln196_606_fu_14712_p2() {
    xor_ln196_606_fu_14712_p2 = (tmp_321_fu_14704_p3.read() ^ xor_ln196_606_fu_14712_p1.read());
}

void dense_512_256_s::thread_xor_ln196_607_fu_14717_p2() {
    xor_ln196_607_fu_14717_p2 = (xor_ln196_606_fu_14712_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_608_fu_14735_p1() {
    xor_ln196_608_fu_14735_p1 =  (sc_lv<1>) (input_304_read.read());
}

void dense_512_256_s::thread_xor_ln196_608_fu_14735_p2() {
    xor_ln196_608_fu_14735_p2 = (tmp_322_fu_14727_p3.read() ^ xor_ln196_608_fu_14735_p1.read());
}

void dense_512_256_s::thread_xor_ln196_609_fu_14740_p2() {
    xor_ln196_609_fu_14740_p2 = (xor_ln196_608_fu_14735_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_60_fu_8433_p1() {
    xor_ln196_60_fu_8433_p1 =  (sc_lv<1>) (input_30_read.read());
}

void dense_512_256_s::thread_xor_ln196_60_fu_8433_p2() {
    xor_ln196_60_fu_8433_p2 = (tmp_48_fu_8425_p3.read() ^ xor_ln196_60_fu_8433_p1.read());
}

void dense_512_256_s::thread_xor_ln196_610_fu_14758_p1() {
    xor_ln196_610_fu_14758_p1 =  (sc_lv<1>) (input_305_read.read());
}

void dense_512_256_s::thread_xor_ln196_610_fu_14758_p2() {
    xor_ln196_610_fu_14758_p2 = (tmp_323_fu_14750_p3.read() ^ xor_ln196_610_fu_14758_p1.read());
}

void dense_512_256_s::thread_xor_ln196_611_fu_14763_p2() {
    xor_ln196_611_fu_14763_p2 = (xor_ln196_610_fu_14758_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_612_fu_14781_p1() {
    xor_ln196_612_fu_14781_p1 =  (sc_lv<1>) (input_306_read.read());
}

void dense_512_256_s::thread_xor_ln196_612_fu_14781_p2() {
    xor_ln196_612_fu_14781_p2 = (tmp_324_fu_14773_p3.read() ^ xor_ln196_612_fu_14781_p1.read());
}

void dense_512_256_s::thread_xor_ln196_613_fu_14786_p2() {
    xor_ln196_613_fu_14786_p2 = (xor_ln196_612_fu_14781_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_614_fu_14804_p1() {
    xor_ln196_614_fu_14804_p1 =  (sc_lv<1>) (input_307_read.read());
}

void dense_512_256_s::thread_xor_ln196_614_fu_14804_p2() {
    xor_ln196_614_fu_14804_p2 = (tmp_325_fu_14796_p3.read() ^ xor_ln196_614_fu_14804_p1.read());
}

void dense_512_256_s::thread_xor_ln196_615_fu_14809_p2() {
    xor_ln196_615_fu_14809_p2 = (xor_ln196_614_fu_14804_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_616_fu_14827_p1() {
    xor_ln196_616_fu_14827_p1 =  (sc_lv<1>) (input_308_read.read());
}

void dense_512_256_s::thread_xor_ln196_616_fu_14827_p2() {
    xor_ln196_616_fu_14827_p2 = (tmp_326_fu_14819_p3.read() ^ xor_ln196_616_fu_14827_p1.read());
}

void dense_512_256_s::thread_xor_ln196_617_fu_14832_p2() {
    xor_ln196_617_fu_14832_p2 = (xor_ln196_616_fu_14827_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_618_fu_14850_p1() {
    xor_ln196_618_fu_14850_p1 =  (sc_lv<1>) (input_309_read.read());
}

void dense_512_256_s::thread_xor_ln196_618_fu_14850_p2() {
    xor_ln196_618_fu_14850_p2 = (tmp_327_fu_14842_p3.read() ^ xor_ln196_618_fu_14850_p1.read());
}

void dense_512_256_s::thread_xor_ln196_619_fu_14855_p2() {
    xor_ln196_619_fu_14855_p2 = (xor_ln196_618_fu_14850_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_61_fu_8438_p2() {
    xor_ln196_61_fu_8438_p2 = (xor_ln196_60_fu_8433_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_620_fu_14873_p1() {
    xor_ln196_620_fu_14873_p1 =  (sc_lv<1>) (input_310_read.read());
}

void dense_512_256_s::thread_xor_ln196_620_fu_14873_p2() {
    xor_ln196_620_fu_14873_p2 = (tmp_328_fu_14865_p3.read() ^ xor_ln196_620_fu_14873_p1.read());
}

void dense_512_256_s::thread_xor_ln196_621_fu_14878_p2() {
    xor_ln196_621_fu_14878_p2 = (xor_ln196_620_fu_14873_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_622_fu_14896_p1() {
    xor_ln196_622_fu_14896_p1 =  (sc_lv<1>) (input_311_read.read());
}

void dense_512_256_s::thread_xor_ln196_622_fu_14896_p2() {
    xor_ln196_622_fu_14896_p2 = (tmp_329_fu_14888_p3.read() ^ xor_ln196_622_fu_14896_p1.read());
}

void dense_512_256_s::thread_xor_ln196_623_fu_14901_p2() {
    xor_ln196_623_fu_14901_p2 = (xor_ln196_622_fu_14896_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_624_fu_14919_p1() {
    xor_ln196_624_fu_14919_p1 =  (sc_lv<1>) (input_312_read.read());
}

void dense_512_256_s::thread_xor_ln196_624_fu_14919_p2() {
    xor_ln196_624_fu_14919_p2 = (tmp_330_fu_14911_p3.read() ^ xor_ln196_624_fu_14919_p1.read());
}

void dense_512_256_s::thread_xor_ln196_625_fu_14924_p2() {
    xor_ln196_625_fu_14924_p2 = (xor_ln196_624_fu_14919_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_626_fu_14942_p1() {
    xor_ln196_626_fu_14942_p1 =  (sc_lv<1>) (input_313_read.read());
}

void dense_512_256_s::thread_xor_ln196_626_fu_14942_p2() {
    xor_ln196_626_fu_14942_p2 = (tmp_331_fu_14934_p3.read() ^ xor_ln196_626_fu_14942_p1.read());
}

void dense_512_256_s::thread_xor_ln196_627_fu_14947_p2() {
    xor_ln196_627_fu_14947_p2 = (xor_ln196_626_fu_14942_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_628_fu_14965_p1() {
    xor_ln196_628_fu_14965_p1 =  (sc_lv<1>) (input_314_read.read());
}

void dense_512_256_s::thread_xor_ln196_628_fu_14965_p2() {
    xor_ln196_628_fu_14965_p2 = (tmp_332_fu_14957_p3.read() ^ xor_ln196_628_fu_14965_p1.read());
}

void dense_512_256_s::thread_xor_ln196_629_fu_14970_p2() {
    xor_ln196_629_fu_14970_p2 = (xor_ln196_628_fu_14965_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_62_fu_8456_p1() {
    xor_ln196_62_fu_8456_p1 =  (sc_lv<1>) (input_31_read.read());
}

void dense_512_256_s::thread_xor_ln196_62_fu_8456_p2() {
    xor_ln196_62_fu_8456_p2 = (tmp_49_fu_8448_p3.read() ^ xor_ln196_62_fu_8456_p1.read());
}

void dense_512_256_s::thread_xor_ln196_630_fu_14988_p1() {
    xor_ln196_630_fu_14988_p1 =  (sc_lv<1>) (input_315_read.read());
}

void dense_512_256_s::thread_xor_ln196_630_fu_14988_p2() {
    xor_ln196_630_fu_14988_p2 = (tmp_333_fu_14980_p3.read() ^ xor_ln196_630_fu_14988_p1.read());
}

void dense_512_256_s::thread_xor_ln196_631_fu_14993_p2() {
    xor_ln196_631_fu_14993_p2 = (xor_ln196_630_fu_14988_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_632_fu_15011_p1() {
    xor_ln196_632_fu_15011_p1 =  (sc_lv<1>) (input_316_read.read());
}

void dense_512_256_s::thread_xor_ln196_632_fu_15011_p2() {
    xor_ln196_632_fu_15011_p2 = (tmp_334_fu_15003_p3.read() ^ xor_ln196_632_fu_15011_p1.read());
}

void dense_512_256_s::thread_xor_ln196_633_fu_15016_p2() {
    xor_ln196_633_fu_15016_p2 = (xor_ln196_632_fu_15011_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_634_fu_15034_p1() {
    xor_ln196_634_fu_15034_p1 =  (sc_lv<1>) (input_317_read.read());
}

void dense_512_256_s::thread_xor_ln196_634_fu_15034_p2() {
    xor_ln196_634_fu_15034_p2 = (tmp_335_fu_15026_p3.read() ^ xor_ln196_634_fu_15034_p1.read());
}

void dense_512_256_s::thread_xor_ln196_635_fu_15039_p2() {
    xor_ln196_635_fu_15039_p2 = (xor_ln196_634_fu_15034_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_636_fu_15057_p1() {
    xor_ln196_636_fu_15057_p1 =  (sc_lv<1>) (input_318_read.read());
}

void dense_512_256_s::thread_xor_ln196_636_fu_15057_p2() {
    xor_ln196_636_fu_15057_p2 = (tmp_336_fu_15049_p3.read() ^ xor_ln196_636_fu_15057_p1.read());
}

void dense_512_256_s::thread_xor_ln196_637_fu_15062_p2() {
    xor_ln196_637_fu_15062_p2 = (xor_ln196_636_fu_15057_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_638_fu_15080_p1() {
    xor_ln196_638_fu_15080_p1 =  (sc_lv<1>) (input_319_read.read());
}

void dense_512_256_s::thread_xor_ln196_638_fu_15080_p2() {
    xor_ln196_638_fu_15080_p2 = (tmp_337_fu_15072_p3.read() ^ xor_ln196_638_fu_15080_p1.read());
}

void dense_512_256_s::thread_xor_ln196_639_fu_15085_p2() {
    xor_ln196_639_fu_15085_p2 = (xor_ln196_638_fu_15080_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_63_fu_8461_p2() {
    xor_ln196_63_fu_8461_p2 = (xor_ln196_62_fu_8456_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_640_fu_15103_p1() {
    xor_ln196_640_fu_15103_p1 =  (sc_lv<1>) (input_320_read.read());
}

void dense_512_256_s::thread_xor_ln196_640_fu_15103_p2() {
    xor_ln196_640_fu_15103_p2 = (tmp_338_fu_15095_p3.read() ^ xor_ln196_640_fu_15103_p1.read());
}

void dense_512_256_s::thread_xor_ln196_641_fu_15108_p2() {
    xor_ln196_641_fu_15108_p2 = (xor_ln196_640_fu_15103_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_642_fu_15126_p1() {
    xor_ln196_642_fu_15126_p1 =  (sc_lv<1>) (input_321_read.read());
}

void dense_512_256_s::thread_xor_ln196_642_fu_15126_p2() {
    xor_ln196_642_fu_15126_p2 = (tmp_339_fu_15118_p3.read() ^ xor_ln196_642_fu_15126_p1.read());
}

void dense_512_256_s::thread_xor_ln196_643_fu_15131_p2() {
    xor_ln196_643_fu_15131_p2 = (xor_ln196_642_fu_15126_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_644_fu_15149_p1() {
    xor_ln196_644_fu_15149_p1 =  (sc_lv<1>) (input_322_read.read());
}

void dense_512_256_s::thread_xor_ln196_644_fu_15149_p2() {
    xor_ln196_644_fu_15149_p2 = (tmp_340_fu_15141_p3.read() ^ xor_ln196_644_fu_15149_p1.read());
}

void dense_512_256_s::thread_xor_ln196_645_fu_15154_p2() {
    xor_ln196_645_fu_15154_p2 = (xor_ln196_644_fu_15149_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_646_fu_15172_p1() {
    xor_ln196_646_fu_15172_p1 =  (sc_lv<1>) (input_323_read.read());
}

void dense_512_256_s::thread_xor_ln196_646_fu_15172_p2() {
    xor_ln196_646_fu_15172_p2 = (tmp_341_fu_15164_p3.read() ^ xor_ln196_646_fu_15172_p1.read());
}

void dense_512_256_s::thread_xor_ln196_647_fu_15177_p2() {
    xor_ln196_647_fu_15177_p2 = (xor_ln196_646_fu_15172_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_648_fu_15195_p1() {
    xor_ln196_648_fu_15195_p1 =  (sc_lv<1>) (input_324_read.read());
}

void dense_512_256_s::thread_xor_ln196_648_fu_15195_p2() {
    xor_ln196_648_fu_15195_p2 = (tmp_342_fu_15187_p3.read() ^ xor_ln196_648_fu_15195_p1.read());
}

void dense_512_256_s::thread_xor_ln196_649_fu_15200_p2() {
    xor_ln196_649_fu_15200_p2 = (xor_ln196_648_fu_15195_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_64_fu_8479_p1() {
    xor_ln196_64_fu_8479_p1 =  (sc_lv<1>) (input_32_read.read());
}

void dense_512_256_s::thread_xor_ln196_64_fu_8479_p2() {
    xor_ln196_64_fu_8479_p2 = (tmp_50_fu_8471_p3.read() ^ xor_ln196_64_fu_8479_p1.read());
}

void dense_512_256_s::thread_xor_ln196_650_fu_15218_p1() {
    xor_ln196_650_fu_15218_p1 =  (sc_lv<1>) (input_325_read.read());
}

void dense_512_256_s::thread_xor_ln196_650_fu_15218_p2() {
    xor_ln196_650_fu_15218_p2 = (tmp_343_fu_15210_p3.read() ^ xor_ln196_650_fu_15218_p1.read());
}

void dense_512_256_s::thread_xor_ln196_651_fu_15223_p2() {
    xor_ln196_651_fu_15223_p2 = (xor_ln196_650_fu_15218_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_652_fu_15241_p1() {
    xor_ln196_652_fu_15241_p1 =  (sc_lv<1>) (input_326_read.read());
}

void dense_512_256_s::thread_xor_ln196_652_fu_15241_p2() {
    xor_ln196_652_fu_15241_p2 = (tmp_344_fu_15233_p3.read() ^ xor_ln196_652_fu_15241_p1.read());
}

void dense_512_256_s::thread_xor_ln196_653_fu_15246_p2() {
    xor_ln196_653_fu_15246_p2 = (xor_ln196_652_fu_15241_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_654_fu_15264_p1() {
    xor_ln196_654_fu_15264_p1 =  (sc_lv<1>) (input_327_read.read());
}

void dense_512_256_s::thread_xor_ln196_654_fu_15264_p2() {
    xor_ln196_654_fu_15264_p2 = (tmp_345_fu_15256_p3.read() ^ xor_ln196_654_fu_15264_p1.read());
}

void dense_512_256_s::thread_xor_ln196_655_fu_15269_p2() {
    xor_ln196_655_fu_15269_p2 = (xor_ln196_654_fu_15264_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_656_fu_15287_p1() {
    xor_ln196_656_fu_15287_p1 =  (sc_lv<1>) (input_328_read.read());
}

void dense_512_256_s::thread_xor_ln196_656_fu_15287_p2() {
    xor_ln196_656_fu_15287_p2 = (tmp_346_fu_15279_p3.read() ^ xor_ln196_656_fu_15287_p1.read());
}

void dense_512_256_s::thread_xor_ln196_657_fu_15292_p2() {
    xor_ln196_657_fu_15292_p2 = (xor_ln196_656_fu_15287_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_658_fu_15310_p1() {
    xor_ln196_658_fu_15310_p1 =  (sc_lv<1>) (input_329_read.read());
}

void dense_512_256_s::thread_xor_ln196_658_fu_15310_p2() {
    xor_ln196_658_fu_15310_p2 = (tmp_347_fu_15302_p3.read() ^ xor_ln196_658_fu_15310_p1.read());
}

void dense_512_256_s::thread_xor_ln196_659_fu_15315_p2() {
    xor_ln196_659_fu_15315_p2 = (xor_ln196_658_fu_15310_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_65_fu_8484_p2() {
    xor_ln196_65_fu_8484_p2 = (xor_ln196_64_fu_8479_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_660_fu_15333_p1() {
    xor_ln196_660_fu_15333_p1 =  (sc_lv<1>) (input_330_read.read());
}

void dense_512_256_s::thread_xor_ln196_660_fu_15333_p2() {
    xor_ln196_660_fu_15333_p2 = (tmp_348_fu_15325_p3.read() ^ xor_ln196_660_fu_15333_p1.read());
}

void dense_512_256_s::thread_xor_ln196_661_fu_15338_p2() {
    xor_ln196_661_fu_15338_p2 = (xor_ln196_660_fu_15333_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_662_fu_15356_p1() {
    xor_ln196_662_fu_15356_p1 =  (sc_lv<1>) (input_331_read.read());
}

void dense_512_256_s::thread_xor_ln196_662_fu_15356_p2() {
    xor_ln196_662_fu_15356_p2 = (tmp_349_fu_15348_p3.read() ^ xor_ln196_662_fu_15356_p1.read());
}

void dense_512_256_s::thread_xor_ln196_663_fu_15361_p2() {
    xor_ln196_663_fu_15361_p2 = (xor_ln196_662_fu_15356_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_664_fu_15379_p1() {
    xor_ln196_664_fu_15379_p1 =  (sc_lv<1>) (input_332_read.read());
}

void dense_512_256_s::thread_xor_ln196_664_fu_15379_p2() {
    xor_ln196_664_fu_15379_p2 = (tmp_350_fu_15371_p3.read() ^ xor_ln196_664_fu_15379_p1.read());
}

void dense_512_256_s::thread_xor_ln196_665_fu_15384_p2() {
    xor_ln196_665_fu_15384_p2 = (xor_ln196_664_fu_15379_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_666_fu_15402_p1() {
    xor_ln196_666_fu_15402_p1 =  (sc_lv<1>) (input_333_read.read());
}

void dense_512_256_s::thread_xor_ln196_666_fu_15402_p2() {
    xor_ln196_666_fu_15402_p2 = (tmp_351_fu_15394_p3.read() ^ xor_ln196_666_fu_15402_p1.read());
}

void dense_512_256_s::thread_xor_ln196_667_fu_15407_p2() {
    xor_ln196_667_fu_15407_p2 = (xor_ln196_666_fu_15402_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_668_fu_15425_p1() {
    xor_ln196_668_fu_15425_p1 =  (sc_lv<1>) (input_334_read.read());
}

void dense_512_256_s::thread_xor_ln196_668_fu_15425_p2() {
    xor_ln196_668_fu_15425_p2 = (tmp_352_fu_15417_p3.read() ^ xor_ln196_668_fu_15425_p1.read());
}

void dense_512_256_s::thread_xor_ln196_669_fu_15430_p2() {
    xor_ln196_669_fu_15430_p2 = (xor_ln196_668_fu_15425_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_66_fu_8502_p1() {
    xor_ln196_66_fu_8502_p1 =  (sc_lv<1>) (input_33_read.read());
}

void dense_512_256_s::thread_xor_ln196_66_fu_8502_p2() {
    xor_ln196_66_fu_8502_p2 = (tmp_51_fu_8494_p3.read() ^ xor_ln196_66_fu_8502_p1.read());
}

void dense_512_256_s::thread_xor_ln196_670_fu_15448_p1() {
    xor_ln196_670_fu_15448_p1 =  (sc_lv<1>) (input_335_read.read());
}

void dense_512_256_s::thread_xor_ln196_670_fu_15448_p2() {
    xor_ln196_670_fu_15448_p2 = (tmp_353_fu_15440_p3.read() ^ xor_ln196_670_fu_15448_p1.read());
}

void dense_512_256_s::thread_xor_ln196_671_fu_15453_p2() {
    xor_ln196_671_fu_15453_p2 = (xor_ln196_670_fu_15448_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_672_fu_15471_p1() {
    xor_ln196_672_fu_15471_p1 =  (sc_lv<1>) (input_336_read.read());
}

void dense_512_256_s::thread_xor_ln196_672_fu_15471_p2() {
    xor_ln196_672_fu_15471_p2 = (tmp_354_fu_15463_p3.read() ^ xor_ln196_672_fu_15471_p1.read());
}

void dense_512_256_s::thread_xor_ln196_673_fu_15476_p2() {
    xor_ln196_673_fu_15476_p2 = (xor_ln196_672_fu_15471_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_674_fu_15494_p1() {
    xor_ln196_674_fu_15494_p1 =  (sc_lv<1>) (input_337_read.read());
}

void dense_512_256_s::thread_xor_ln196_674_fu_15494_p2() {
    xor_ln196_674_fu_15494_p2 = (tmp_355_fu_15486_p3.read() ^ xor_ln196_674_fu_15494_p1.read());
}

void dense_512_256_s::thread_xor_ln196_675_fu_15499_p2() {
    xor_ln196_675_fu_15499_p2 = (xor_ln196_674_fu_15494_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_676_fu_15517_p1() {
    xor_ln196_676_fu_15517_p1 =  (sc_lv<1>) (input_338_read.read());
}

void dense_512_256_s::thread_xor_ln196_676_fu_15517_p2() {
    xor_ln196_676_fu_15517_p2 = (tmp_356_fu_15509_p3.read() ^ xor_ln196_676_fu_15517_p1.read());
}

void dense_512_256_s::thread_xor_ln196_677_fu_15522_p2() {
    xor_ln196_677_fu_15522_p2 = (xor_ln196_676_fu_15517_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_678_fu_15540_p1() {
    xor_ln196_678_fu_15540_p1 =  (sc_lv<1>) (input_339_read.read());
}

void dense_512_256_s::thread_xor_ln196_678_fu_15540_p2() {
    xor_ln196_678_fu_15540_p2 = (tmp_357_fu_15532_p3.read() ^ xor_ln196_678_fu_15540_p1.read());
}

void dense_512_256_s::thread_xor_ln196_679_fu_15545_p2() {
    xor_ln196_679_fu_15545_p2 = (xor_ln196_678_fu_15540_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_67_fu_8507_p2() {
    xor_ln196_67_fu_8507_p2 = (xor_ln196_66_fu_8502_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_680_fu_15563_p1() {
    xor_ln196_680_fu_15563_p1 =  (sc_lv<1>) (input_340_read.read());
}

void dense_512_256_s::thread_xor_ln196_680_fu_15563_p2() {
    xor_ln196_680_fu_15563_p2 = (tmp_358_fu_15555_p3.read() ^ xor_ln196_680_fu_15563_p1.read());
}

void dense_512_256_s::thread_xor_ln196_681_fu_15568_p2() {
    xor_ln196_681_fu_15568_p2 = (xor_ln196_680_fu_15563_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_682_fu_15586_p1() {
    xor_ln196_682_fu_15586_p1 =  (sc_lv<1>) (input_341_read.read());
}

void dense_512_256_s::thread_xor_ln196_682_fu_15586_p2() {
    xor_ln196_682_fu_15586_p2 = (tmp_359_fu_15578_p3.read() ^ xor_ln196_682_fu_15586_p1.read());
}

void dense_512_256_s::thread_xor_ln196_683_fu_15591_p2() {
    xor_ln196_683_fu_15591_p2 = (xor_ln196_682_fu_15586_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_684_fu_15609_p1() {
    xor_ln196_684_fu_15609_p1 =  (sc_lv<1>) (input_342_read.read());
}

void dense_512_256_s::thread_xor_ln196_684_fu_15609_p2() {
    xor_ln196_684_fu_15609_p2 = (tmp_360_fu_15601_p3.read() ^ xor_ln196_684_fu_15609_p1.read());
}

void dense_512_256_s::thread_xor_ln196_685_fu_15614_p2() {
    xor_ln196_685_fu_15614_p2 = (xor_ln196_684_fu_15609_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_686_fu_15632_p1() {
    xor_ln196_686_fu_15632_p1 =  (sc_lv<1>) (input_343_read.read());
}

void dense_512_256_s::thread_xor_ln196_686_fu_15632_p2() {
    xor_ln196_686_fu_15632_p2 = (tmp_361_fu_15624_p3.read() ^ xor_ln196_686_fu_15632_p1.read());
}

void dense_512_256_s::thread_xor_ln196_687_fu_15637_p2() {
    xor_ln196_687_fu_15637_p2 = (xor_ln196_686_fu_15632_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_688_fu_15655_p1() {
    xor_ln196_688_fu_15655_p1 =  (sc_lv<1>) (input_344_read.read());
}

void dense_512_256_s::thread_xor_ln196_688_fu_15655_p2() {
    xor_ln196_688_fu_15655_p2 = (tmp_362_fu_15647_p3.read() ^ xor_ln196_688_fu_15655_p1.read());
}

void dense_512_256_s::thread_xor_ln196_689_fu_15660_p2() {
    xor_ln196_689_fu_15660_p2 = (xor_ln196_688_fu_15655_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_68_fu_8525_p1() {
    xor_ln196_68_fu_8525_p1 =  (sc_lv<1>) (input_34_read.read());
}

void dense_512_256_s::thread_xor_ln196_68_fu_8525_p2() {
    xor_ln196_68_fu_8525_p2 = (tmp_52_fu_8517_p3.read() ^ xor_ln196_68_fu_8525_p1.read());
}

void dense_512_256_s::thread_xor_ln196_690_fu_15678_p1() {
    xor_ln196_690_fu_15678_p1 =  (sc_lv<1>) (input_345_read.read());
}

void dense_512_256_s::thread_xor_ln196_690_fu_15678_p2() {
    xor_ln196_690_fu_15678_p2 = (tmp_363_fu_15670_p3.read() ^ xor_ln196_690_fu_15678_p1.read());
}

void dense_512_256_s::thread_xor_ln196_691_fu_15683_p2() {
    xor_ln196_691_fu_15683_p2 = (xor_ln196_690_fu_15678_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_692_fu_15701_p1() {
    xor_ln196_692_fu_15701_p1 =  (sc_lv<1>) (input_346_read.read());
}

void dense_512_256_s::thread_xor_ln196_692_fu_15701_p2() {
    xor_ln196_692_fu_15701_p2 = (tmp_364_fu_15693_p3.read() ^ xor_ln196_692_fu_15701_p1.read());
}

void dense_512_256_s::thread_xor_ln196_693_fu_15706_p2() {
    xor_ln196_693_fu_15706_p2 = (xor_ln196_692_fu_15701_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_694_fu_15724_p1() {
    xor_ln196_694_fu_15724_p1 =  (sc_lv<1>) (input_347_read.read());
}

void dense_512_256_s::thread_xor_ln196_694_fu_15724_p2() {
    xor_ln196_694_fu_15724_p2 = (tmp_365_fu_15716_p3.read() ^ xor_ln196_694_fu_15724_p1.read());
}

void dense_512_256_s::thread_xor_ln196_695_fu_15729_p2() {
    xor_ln196_695_fu_15729_p2 = (xor_ln196_694_fu_15724_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_696_fu_15747_p1() {
    xor_ln196_696_fu_15747_p1 =  (sc_lv<1>) (input_348_read.read());
}

void dense_512_256_s::thread_xor_ln196_696_fu_15747_p2() {
    xor_ln196_696_fu_15747_p2 = (tmp_366_fu_15739_p3.read() ^ xor_ln196_696_fu_15747_p1.read());
}

void dense_512_256_s::thread_xor_ln196_697_fu_15752_p2() {
    xor_ln196_697_fu_15752_p2 = (xor_ln196_696_fu_15747_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_698_fu_15770_p1() {
    xor_ln196_698_fu_15770_p1 =  (sc_lv<1>) (input_349_read.read());
}

void dense_512_256_s::thread_xor_ln196_698_fu_15770_p2() {
    xor_ln196_698_fu_15770_p2 = (tmp_367_fu_15762_p3.read() ^ xor_ln196_698_fu_15770_p1.read());
}

void dense_512_256_s::thread_xor_ln196_699_fu_15775_p2() {
    xor_ln196_699_fu_15775_p2 = (xor_ln196_698_fu_15770_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_69_fu_8530_p2() {
    xor_ln196_69_fu_8530_p2 = (xor_ln196_68_fu_8525_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_6_fu_7812_p1() {
    xor_ln196_6_fu_7812_p1 =  (sc_lv<1>) (input_3_read.read());
}

void dense_512_256_s::thread_xor_ln196_6_fu_7812_p2() {
    xor_ln196_6_fu_7812_p2 = (tmp_21_fu_7804_p3.read() ^ xor_ln196_6_fu_7812_p1.read());
}

void dense_512_256_s::thread_xor_ln196_700_fu_15793_p1() {
    xor_ln196_700_fu_15793_p1 =  (sc_lv<1>) (input_350_read.read());
}

void dense_512_256_s::thread_xor_ln196_700_fu_15793_p2() {
    xor_ln196_700_fu_15793_p2 = (tmp_368_fu_15785_p3.read() ^ xor_ln196_700_fu_15793_p1.read());
}

void dense_512_256_s::thread_xor_ln196_701_fu_15798_p2() {
    xor_ln196_701_fu_15798_p2 = (xor_ln196_700_fu_15793_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_702_fu_15816_p1() {
    xor_ln196_702_fu_15816_p1 =  (sc_lv<1>) (input_351_read.read());
}

void dense_512_256_s::thread_xor_ln196_702_fu_15816_p2() {
    xor_ln196_702_fu_15816_p2 = (tmp_369_fu_15808_p3.read() ^ xor_ln196_702_fu_15816_p1.read());
}

void dense_512_256_s::thread_xor_ln196_703_fu_15821_p2() {
    xor_ln196_703_fu_15821_p2 = (xor_ln196_702_fu_15816_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_704_fu_15839_p1() {
    xor_ln196_704_fu_15839_p1 =  (sc_lv<1>) (input_352_read.read());
}

void dense_512_256_s::thread_xor_ln196_704_fu_15839_p2() {
    xor_ln196_704_fu_15839_p2 = (tmp_370_fu_15831_p3.read() ^ xor_ln196_704_fu_15839_p1.read());
}

void dense_512_256_s::thread_xor_ln196_705_fu_15844_p2() {
    xor_ln196_705_fu_15844_p2 = (xor_ln196_704_fu_15839_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_706_fu_15862_p1() {
    xor_ln196_706_fu_15862_p1 =  (sc_lv<1>) (input_353_read.read());
}

void dense_512_256_s::thread_xor_ln196_706_fu_15862_p2() {
    xor_ln196_706_fu_15862_p2 = (tmp_371_fu_15854_p3.read() ^ xor_ln196_706_fu_15862_p1.read());
}

void dense_512_256_s::thread_xor_ln196_707_fu_15867_p2() {
    xor_ln196_707_fu_15867_p2 = (xor_ln196_706_fu_15862_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_708_fu_15885_p1() {
    xor_ln196_708_fu_15885_p1 =  (sc_lv<1>) (input_354_read.read());
}

void dense_512_256_s::thread_xor_ln196_708_fu_15885_p2() {
    xor_ln196_708_fu_15885_p2 = (tmp_372_fu_15877_p3.read() ^ xor_ln196_708_fu_15885_p1.read());
}

void dense_512_256_s::thread_xor_ln196_709_fu_15890_p2() {
    xor_ln196_709_fu_15890_p2 = (xor_ln196_708_fu_15885_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_70_fu_8548_p1() {
    xor_ln196_70_fu_8548_p1 =  (sc_lv<1>) (input_35_read.read());
}

void dense_512_256_s::thread_xor_ln196_70_fu_8548_p2() {
    xor_ln196_70_fu_8548_p2 = (tmp_53_fu_8540_p3.read() ^ xor_ln196_70_fu_8548_p1.read());
}

void dense_512_256_s::thread_xor_ln196_710_fu_15908_p1() {
    xor_ln196_710_fu_15908_p1 =  (sc_lv<1>) (input_355_read.read());
}

void dense_512_256_s::thread_xor_ln196_710_fu_15908_p2() {
    xor_ln196_710_fu_15908_p2 = (tmp_373_fu_15900_p3.read() ^ xor_ln196_710_fu_15908_p1.read());
}

void dense_512_256_s::thread_xor_ln196_711_fu_15913_p2() {
    xor_ln196_711_fu_15913_p2 = (xor_ln196_710_fu_15908_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_712_fu_15931_p1() {
    xor_ln196_712_fu_15931_p1 =  (sc_lv<1>) (input_356_read.read());
}

void dense_512_256_s::thread_xor_ln196_712_fu_15931_p2() {
    xor_ln196_712_fu_15931_p2 = (tmp_374_fu_15923_p3.read() ^ xor_ln196_712_fu_15931_p1.read());
}

void dense_512_256_s::thread_xor_ln196_713_fu_15936_p2() {
    xor_ln196_713_fu_15936_p2 = (xor_ln196_712_fu_15931_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_714_fu_15954_p1() {
    xor_ln196_714_fu_15954_p1 =  (sc_lv<1>) (input_357_read.read());
}

void dense_512_256_s::thread_xor_ln196_714_fu_15954_p2() {
    xor_ln196_714_fu_15954_p2 = (tmp_375_fu_15946_p3.read() ^ xor_ln196_714_fu_15954_p1.read());
}

void dense_512_256_s::thread_xor_ln196_715_fu_15959_p2() {
    xor_ln196_715_fu_15959_p2 = (xor_ln196_714_fu_15954_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_716_fu_15977_p1() {
    xor_ln196_716_fu_15977_p1 =  (sc_lv<1>) (input_358_read.read());
}

void dense_512_256_s::thread_xor_ln196_716_fu_15977_p2() {
    xor_ln196_716_fu_15977_p2 = (tmp_376_fu_15969_p3.read() ^ xor_ln196_716_fu_15977_p1.read());
}

void dense_512_256_s::thread_xor_ln196_717_fu_15982_p2() {
    xor_ln196_717_fu_15982_p2 = (xor_ln196_716_fu_15977_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_718_fu_16000_p1() {
    xor_ln196_718_fu_16000_p1 =  (sc_lv<1>) (input_359_read.read());
}

void dense_512_256_s::thread_xor_ln196_718_fu_16000_p2() {
    xor_ln196_718_fu_16000_p2 = (tmp_377_fu_15992_p3.read() ^ xor_ln196_718_fu_16000_p1.read());
}

void dense_512_256_s::thread_xor_ln196_719_fu_16005_p2() {
    xor_ln196_719_fu_16005_p2 = (xor_ln196_718_fu_16000_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_71_fu_8553_p2() {
    xor_ln196_71_fu_8553_p2 = (xor_ln196_70_fu_8548_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_720_fu_16023_p1() {
    xor_ln196_720_fu_16023_p1 =  (sc_lv<1>) (input_360_read.read());
}

void dense_512_256_s::thread_xor_ln196_720_fu_16023_p2() {
    xor_ln196_720_fu_16023_p2 = (tmp_378_fu_16015_p3.read() ^ xor_ln196_720_fu_16023_p1.read());
}

void dense_512_256_s::thread_xor_ln196_721_fu_16028_p2() {
    xor_ln196_721_fu_16028_p2 = (xor_ln196_720_fu_16023_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_722_fu_16046_p1() {
    xor_ln196_722_fu_16046_p1 =  (sc_lv<1>) (input_361_read.read());
}

void dense_512_256_s::thread_xor_ln196_722_fu_16046_p2() {
    xor_ln196_722_fu_16046_p2 = (tmp_379_fu_16038_p3.read() ^ xor_ln196_722_fu_16046_p1.read());
}

void dense_512_256_s::thread_xor_ln196_723_fu_16051_p2() {
    xor_ln196_723_fu_16051_p2 = (xor_ln196_722_fu_16046_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_724_fu_16069_p1() {
    xor_ln196_724_fu_16069_p1 =  (sc_lv<1>) (input_362_read.read());
}

void dense_512_256_s::thread_xor_ln196_724_fu_16069_p2() {
    xor_ln196_724_fu_16069_p2 = (tmp_380_fu_16061_p3.read() ^ xor_ln196_724_fu_16069_p1.read());
}

void dense_512_256_s::thread_xor_ln196_725_fu_16074_p2() {
    xor_ln196_725_fu_16074_p2 = (xor_ln196_724_fu_16069_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_726_fu_16092_p1() {
    xor_ln196_726_fu_16092_p1 =  (sc_lv<1>) (input_363_read.read());
}

void dense_512_256_s::thread_xor_ln196_726_fu_16092_p2() {
    xor_ln196_726_fu_16092_p2 = (tmp_381_fu_16084_p3.read() ^ xor_ln196_726_fu_16092_p1.read());
}

void dense_512_256_s::thread_xor_ln196_727_fu_16097_p2() {
    xor_ln196_727_fu_16097_p2 = (xor_ln196_726_fu_16092_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_728_fu_16115_p1() {
    xor_ln196_728_fu_16115_p1 =  (sc_lv<1>) (input_364_read.read());
}

void dense_512_256_s::thread_xor_ln196_728_fu_16115_p2() {
    xor_ln196_728_fu_16115_p2 = (tmp_382_fu_16107_p3.read() ^ xor_ln196_728_fu_16115_p1.read());
}

void dense_512_256_s::thread_xor_ln196_729_fu_16120_p2() {
    xor_ln196_729_fu_16120_p2 = (xor_ln196_728_fu_16115_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_72_fu_8571_p1() {
    xor_ln196_72_fu_8571_p1 =  (sc_lv<1>) (input_36_read.read());
}

void dense_512_256_s::thread_xor_ln196_72_fu_8571_p2() {
    xor_ln196_72_fu_8571_p2 = (tmp_54_fu_8563_p3.read() ^ xor_ln196_72_fu_8571_p1.read());
}

void dense_512_256_s::thread_xor_ln196_730_fu_16138_p1() {
    xor_ln196_730_fu_16138_p1 =  (sc_lv<1>) (input_365_read.read());
}

void dense_512_256_s::thread_xor_ln196_730_fu_16138_p2() {
    xor_ln196_730_fu_16138_p2 = (tmp_383_fu_16130_p3.read() ^ xor_ln196_730_fu_16138_p1.read());
}

void dense_512_256_s::thread_xor_ln196_731_fu_16143_p2() {
    xor_ln196_731_fu_16143_p2 = (xor_ln196_730_fu_16138_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_732_fu_16161_p1() {
    xor_ln196_732_fu_16161_p1 =  (sc_lv<1>) (input_366_read.read());
}

void dense_512_256_s::thread_xor_ln196_732_fu_16161_p2() {
    xor_ln196_732_fu_16161_p2 = (tmp_384_fu_16153_p3.read() ^ xor_ln196_732_fu_16161_p1.read());
}

void dense_512_256_s::thread_xor_ln196_733_fu_16166_p2() {
    xor_ln196_733_fu_16166_p2 = (xor_ln196_732_fu_16161_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_734_fu_16184_p1() {
    xor_ln196_734_fu_16184_p1 =  (sc_lv<1>) (input_367_read.read());
}

void dense_512_256_s::thread_xor_ln196_734_fu_16184_p2() {
    xor_ln196_734_fu_16184_p2 = (tmp_385_fu_16176_p3.read() ^ xor_ln196_734_fu_16184_p1.read());
}

void dense_512_256_s::thread_xor_ln196_735_fu_16189_p2() {
    xor_ln196_735_fu_16189_p2 = (xor_ln196_734_fu_16184_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_736_fu_16207_p1() {
    xor_ln196_736_fu_16207_p1 =  (sc_lv<1>) (input_368_read.read());
}

void dense_512_256_s::thread_xor_ln196_736_fu_16207_p2() {
    xor_ln196_736_fu_16207_p2 = (tmp_386_fu_16199_p3.read() ^ xor_ln196_736_fu_16207_p1.read());
}

void dense_512_256_s::thread_xor_ln196_737_fu_16212_p2() {
    xor_ln196_737_fu_16212_p2 = (xor_ln196_736_fu_16207_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_738_fu_16230_p1() {
    xor_ln196_738_fu_16230_p1 =  (sc_lv<1>) (input_369_read.read());
}

void dense_512_256_s::thread_xor_ln196_738_fu_16230_p2() {
    xor_ln196_738_fu_16230_p2 = (tmp_387_fu_16222_p3.read() ^ xor_ln196_738_fu_16230_p1.read());
}

void dense_512_256_s::thread_xor_ln196_739_fu_16235_p2() {
    xor_ln196_739_fu_16235_p2 = (xor_ln196_738_fu_16230_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_73_fu_8576_p2() {
    xor_ln196_73_fu_8576_p2 = (xor_ln196_72_fu_8571_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_740_fu_16253_p1() {
    xor_ln196_740_fu_16253_p1 =  (sc_lv<1>) (input_370_read.read());
}

void dense_512_256_s::thread_xor_ln196_740_fu_16253_p2() {
    xor_ln196_740_fu_16253_p2 = (tmp_388_fu_16245_p3.read() ^ xor_ln196_740_fu_16253_p1.read());
}

void dense_512_256_s::thread_xor_ln196_741_fu_16258_p2() {
    xor_ln196_741_fu_16258_p2 = (xor_ln196_740_fu_16253_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_742_fu_16276_p1() {
    xor_ln196_742_fu_16276_p1 =  (sc_lv<1>) (input_371_read.read());
}

void dense_512_256_s::thread_xor_ln196_742_fu_16276_p2() {
    xor_ln196_742_fu_16276_p2 = (tmp_389_fu_16268_p3.read() ^ xor_ln196_742_fu_16276_p1.read());
}

void dense_512_256_s::thread_xor_ln196_743_fu_16281_p2() {
    xor_ln196_743_fu_16281_p2 = (xor_ln196_742_fu_16276_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_744_fu_16299_p1() {
    xor_ln196_744_fu_16299_p1 =  (sc_lv<1>) (input_372_read.read());
}

void dense_512_256_s::thread_xor_ln196_744_fu_16299_p2() {
    xor_ln196_744_fu_16299_p2 = (tmp_390_fu_16291_p3.read() ^ xor_ln196_744_fu_16299_p1.read());
}

void dense_512_256_s::thread_xor_ln196_745_fu_16304_p2() {
    xor_ln196_745_fu_16304_p2 = (xor_ln196_744_fu_16299_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_746_fu_16322_p1() {
    xor_ln196_746_fu_16322_p1 =  (sc_lv<1>) (input_373_read.read());
}

void dense_512_256_s::thread_xor_ln196_746_fu_16322_p2() {
    xor_ln196_746_fu_16322_p2 = (tmp_391_fu_16314_p3.read() ^ xor_ln196_746_fu_16322_p1.read());
}

void dense_512_256_s::thread_xor_ln196_747_fu_16327_p2() {
    xor_ln196_747_fu_16327_p2 = (xor_ln196_746_fu_16322_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_748_fu_16345_p1() {
    xor_ln196_748_fu_16345_p1 =  (sc_lv<1>) (input_374_read.read());
}

void dense_512_256_s::thread_xor_ln196_748_fu_16345_p2() {
    xor_ln196_748_fu_16345_p2 = (tmp_392_fu_16337_p3.read() ^ xor_ln196_748_fu_16345_p1.read());
}

void dense_512_256_s::thread_xor_ln196_749_fu_16350_p2() {
    xor_ln196_749_fu_16350_p2 = (xor_ln196_748_fu_16345_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_74_fu_8594_p1() {
    xor_ln196_74_fu_8594_p1 =  (sc_lv<1>) (input_37_read.read());
}

void dense_512_256_s::thread_xor_ln196_74_fu_8594_p2() {
    xor_ln196_74_fu_8594_p2 = (tmp_55_fu_8586_p3.read() ^ xor_ln196_74_fu_8594_p1.read());
}

void dense_512_256_s::thread_xor_ln196_750_fu_16368_p1() {
    xor_ln196_750_fu_16368_p1 =  (sc_lv<1>) (input_375_read.read());
}

void dense_512_256_s::thread_xor_ln196_750_fu_16368_p2() {
    xor_ln196_750_fu_16368_p2 = (tmp_393_fu_16360_p3.read() ^ xor_ln196_750_fu_16368_p1.read());
}

void dense_512_256_s::thread_xor_ln196_751_fu_16373_p2() {
    xor_ln196_751_fu_16373_p2 = (xor_ln196_750_fu_16368_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_752_fu_16391_p1() {
    xor_ln196_752_fu_16391_p1 =  (sc_lv<1>) (input_376_read.read());
}

void dense_512_256_s::thread_xor_ln196_752_fu_16391_p2() {
    xor_ln196_752_fu_16391_p2 = (tmp_394_fu_16383_p3.read() ^ xor_ln196_752_fu_16391_p1.read());
}

void dense_512_256_s::thread_xor_ln196_753_fu_16396_p2() {
    xor_ln196_753_fu_16396_p2 = (xor_ln196_752_fu_16391_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_754_fu_16414_p1() {
    xor_ln196_754_fu_16414_p1 =  (sc_lv<1>) (input_377_read.read());
}

void dense_512_256_s::thread_xor_ln196_754_fu_16414_p2() {
    xor_ln196_754_fu_16414_p2 = (tmp_395_fu_16406_p3.read() ^ xor_ln196_754_fu_16414_p1.read());
}

void dense_512_256_s::thread_xor_ln196_755_fu_16419_p2() {
    xor_ln196_755_fu_16419_p2 = (xor_ln196_754_fu_16414_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_756_fu_16437_p1() {
    xor_ln196_756_fu_16437_p1 =  (sc_lv<1>) (input_378_read.read());
}

void dense_512_256_s::thread_xor_ln196_756_fu_16437_p2() {
    xor_ln196_756_fu_16437_p2 = (tmp_396_fu_16429_p3.read() ^ xor_ln196_756_fu_16437_p1.read());
}

void dense_512_256_s::thread_xor_ln196_757_fu_16442_p2() {
    xor_ln196_757_fu_16442_p2 = (xor_ln196_756_fu_16437_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_758_fu_16460_p1() {
    xor_ln196_758_fu_16460_p1 =  (sc_lv<1>) (input_379_read.read());
}

void dense_512_256_s::thread_xor_ln196_758_fu_16460_p2() {
    xor_ln196_758_fu_16460_p2 = (tmp_397_fu_16452_p3.read() ^ xor_ln196_758_fu_16460_p1.read());
}

void dense_512_256_s::thread_xor_ln196_759_fu_16465_p2() {
    xor_ln196_759_fu_16465_p2 = (xor_ln196_758_fu_16460_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_75_fu_8599_p2() {
    xor_ln196_75_fu_8599_p2 = (xor_ln196_74_fu_8594_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_760_fu_16483_p1() {
    xor_ln196_760_fu_16483_p1 =  (sc_lv<1>) (input_380_read.read());
}

void dense_512_256_s::thread_xor_ln196_760_fu_16483_p2() {
    xor_ln196_760_fu_16483_p2 = (tmp_398_fu_16475_p3.read() ^ xor_ln196_760_fu_16483_p1.read());
}

void dense_512_256_s::thread_xor_ln196_761_fu_16488_p2() {
    xor_ln196_761_fu_16488_p2 = (xor_ln196_760_fu_16483_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_762_fu_16506_p1() {
    xor_ln196_762_fu_16506_p1 =  (sc_lv<1>) (input_381_read.read());
}

void dense_512_256_s::thread_xor_ln196_762_fu_16506_p2() {
    xor_ln196_762_fu_16506_p2 = (tmp_399_fu_16498_p3.read() ^ xor_ln196_762_fu_16506_p1.read());
}

void dense_512_256_s::thread_xor_ln196_763_fu_16511_p2() {
    xor_ln196_763_fu_16511_p2 = (xor_ln196_762_fu_16506_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_764_fu_16529_p1() {
    xor_ln196_764_fu_16529_p1 =  (sc_lv<1>) (input_382_read.read());
}

void dense_512_256_s::thread_xor_ln196_764_fu_16529_p2() {
    xor_ln196_764_fu_16529_p2 = (tmp_400_fu_16521_p3.read() ^ xor_ln196_764_fu_16529_p1.read());
}

void dense_512_256_s::thread_xor_ln196_765_fu_16534_p2() {
    xor_ln196_765_fu_16534_p2 = (xor_ln196_764_fu_16529_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_766_fu_16552_p1() {
    xor_ln196_766_fu_16552_p1 =  (sc_lv<1>) (input_383_read.read());
}

void dense_512_256_s::thread_xor_ln196_766_fu_16552_p2() {
    xor_ln196_766_fu_16552_p2 = (tmp_401_fu_16544_p3.read() ^ xor_ln196_766_fu_16552_p1.read());
}

void dense_512_256_s::thread_xor_ln196_767_fu_16557_p2() {
    xor_ln196_767_fu_16557_p2 = (xor_ln196_766_fu_16552_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_768_fu_16575_p1() {
    xor_ln196_768_fu_16575_p1 =  (sc_lv<1>) (input_384_read.read());
}

void dense_512_256_s::thread_xor_ln196_768_fu_16575_p2() {
    xor_ln196_768_fu_16575_p2 = (tmp_402_fu_16567_p3.read() ^ xor_ln196_768_fu_16575_p1.read());
}

void dense_512_256_s::thread_xor_ln196_769_fu_16580_p2() {
    xor_ln196_769_fu_16580_p2 = (xor_ln196_768_fu_16575_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_76_fu_8617_p1() {
    xor_ln196_76_fu_8617_p1 =  (sc_lv<1>) (input_38_read.read());
}

void dense_512_256_s::thread_xor_ln196_76_fu_8617_p2() {
    xor_ln196_76_fu_8617_p2 = (tmp_56_fu_8609_p3.read() ^ xor_ln196_76_fu_8617_p1.read());
}

void dense_512_256_s::thread_xor_ln196_770_fu_16598_p1() {
    xor_ln196_770_fu_16598_p1 =  (sc_lv<1>) (input_385_read.read());
}

void dense_512_256_s::thread_xor_ln196_770_fu_16598_p2() {
    xor_ln196_770_fu_16598_p2 = (tmp_403_fu_16590_p3.read() ^ xor_ln196_770_fu_16598_p1.read());
}

void dense_512_256_s::thread_xor_ln196_771_fu_16603_p2() {
    xor_ln196_771_fu_16603_p2 = (xor_ln196_770_fu_16598_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_772_fu_16621_p1() {
    xor_ln196_772_fu_16621_p1 =  (sc_lv<1>) (input_386_read.read());
}

void dense_512_256_s::thread_xor_ln196_772_fu_16621_p2() {
    xor_ln196_772_fu_16621_p2 = (tmp_404_fu_16613_p3.read() ^ xor_ln196_772_fu_16621_p1.read());
}

void dense_512_256_s::thread_xor_ln196_773_fu_16626_p2() {
    xor_ln196_773_fu_16626_p2 = (xor_ln196_772_fu_16621_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_774_fu_16644_p1() {
    xor_ln196_774_fu_16644_p1 =  (sc_lv<1>) (input_387_read.read());
}

void dense_512_256_s::thread_xor_ln196_774_fu_16644_p2() {
    xor_ln196_774_fu_16644_p2 = (tmp_405_fu_16636_p3.read() ^ xor_ln196_774_fu_16644_p1.read());
}

void dense_512_256_s::thread_xor_ln196_775_fu_16649_p2() {
    xor_ln196_775_fu_16649_p2 = (xor_ln196_774_fu_16644_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_776_fu_16667_p1() {
    xor_ln196_776_fu_16667_p1 =  (sc_lv<1>) (input_388_read.read());
}

void dense_512_256_s::thread_xor_ln196_776_fu_16667_p2() {
    xor_ln196_776_fu_16667_p2 = (tmp_406_fu_16659_p3.read() ^ xor_ln196_776_fu_16667_p1.read());
}

void dense_512_256_s::thread_xor_ln196_777_fu_16672_p2() {
    xor_ln196_777_fu_16672_p2 = (xor_ln196_776_fu_16667_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_778_fu_16690_p1() {
    xor_ln196_778_fu_16690_p1 =  (sc_lv<1>) (input_389_read.read());
}

void dense_512_256_s::thread_xor_ln196_778_fu_16690_p2() {
    xor_ln196_778_fu_16690_p2 = (tmp_407_fu_16682_p3.read() ^ xor_ln196_778_fu_16690_p1.read());
}

void dense_512_256_s::thread_xor_ln196_779_fu_16695_p2() {
    xor_ln196_779_fu_16695_p2 = (xor_ln196_778_fu_16690_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_77_fu_8622_p2() {
    xor_ln196_77_fu_8622_p2 = (xor_ln196_76_fu_8617_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_780_fu_16713_p1() {
    xor_ln196_780_fu_16713_p1 =  (sc_lv<1>) (input_390_read.read());
}

void dense_512_256_s::thread_xor_ln196_780_fu_16713_p2() {
    xor_ln196_780_fu_16713_p2 = (tmp_408_fu_16705_p3.read() ^ xor_ln196_780_fu_16713_p1.read());
}

void dense_512_256_s::thread_xor_ln196_781_fu_16718_p2() {
    xor_ln196_781_fu_16718_p2 = (xor_ln196_780_fu_16713_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_782_fu_16736_p1() {
    xor_ln196_782_fu_16736_p1 =  (sc_lv<1>) (input_391_read.read());
}

void dense_512_256_s::thread_xor_ln196_782_fu_16736_p2() {
    xor_ln196_782_fu_16736_p2 = (tmp_409_fu_16728_p3.read() ^ xor_ln196_782_fu_16736_p1.read());
}

void dense_512_256_s::thread_xor_ln196_783_fu_16741_p2() {
    xor_ln196_783_fu_16741_p2 = (xor_ln196_782_fu_16736_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_784_fu_16759_p1() {
    xor_ln196_784_fu_16759_p1 =  (sc_lv<1>) (input_392_read.read());
}

void dense_512_256_s::thread_xor_ln196_784_fu_16759_p2() {
    xor_ln196_784_fu_16759_p2 = (tmp_410_fu_16751_p3.read() ^ xor_ln196_784_fu_16759_p1.read());
}

void dense_512_256_s::thread_xor_ln196_785_fu_16764_p2() {
    xor_ln196_785_fu_16764_p2 = (xor_ln196_784_fu_16759_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_786_fu_16782_p1() {
    xor_ln196_786_fu_16782_p1 =  (sc_lv<1>) (input_393_read.read());
}

void dense_512_256_s::thread_xor_ln196_786_fu_16782_p2() {
    xor_ln196_786_fu_16782_p2 = (tmp_411_fu_16774_p3.read() ^ xor_ln196_786_fu_16782_p1.read());
}

void dense_512_256_s::thread_xor_ln196_787_fu_16787_p2() {
    xor_ln196_787_fu_16787_p2 = (xor_ln196_786_fu_16782_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_788_fu_16805_p1() {
    xor_ln196_788_fu_16805_p1 =  (sc_lv<1>) (input_394_read.read());
}

void dense_512_256_s::thread_xor_ln196_788_fu_16805_p2() {
    xor_ln196_788_fu_16805_p2 = (tmp_412_fu_16797_p3.read() ^ xor_ln196_788_fu_16805_p1.read());
}

void dense_512_256_s::thread_xor_ln196_789_fu_16810_p2() {
    xor_ln196_789_fu_16810_p2 = (xor_ln196_788_fu_16805_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_78_fu_8640_p1() {
    xor_ln196_78_fu_8640_p1 =  (sc_lv<1>) (input_39_read.read());
}

void dense_512_256_s::thread_xor_ln196_78_fu_8640_p2() {
    xor_ln196_78_fu_8640_p2 = (tmp_57_fu_8632_p3.read() ^ xor_ln196_78_fu_8640_p1.read());
}

void dense_512_256_s::thread_xor_ln196_790_fu_16828_p1() {
    xor_ln196_790_fu_16828_p1 =  (sc_lv<1>) (input_395_read.read());
}

void dense_512_256_s::thread_xor_ln196_790_fu_16828_p2() {
    xor_ln196_790_fu_16828_p2 = (tmp_413_fu_16820_p3.read() ^ xor_ln196_790_fu_16828_p1.read());
}

void dense_512_256_s::thread_xor_ln196_791_fu_16833_p2() {
    xor_ln196_791_fu_16833_p2 = (xor_ln196_790_fu_16828_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_792_fu_16851_p1() {
    xor_ln196_792_fu_16851_p1 =  (sc_lv<1>) (input_396_read.read());
}

void dense_512_256_s::thread_xor_ln196_792_fu_16851_p2() {
    xor_ln196_792_fu_16851_p2 = (tmp_414_fu_16843_p3.read() ^ xor_ln196_792_fu_16851_p1.read());
}

void dense_512_256_s::thread_xor_ln196_793_fu_16856_p2() {
    xor_ln196_793_fu_16856_p2 = (xor_ln196_792_fu_16851_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_794_fu_16874_p1() {
    xor_ln196_794_fu_16874_p1 =  (sc_lv<1>) (input_397_read.read());
}

void dense_512_256_s::thread_xor_ln196_794_fu_16874_p2() {
    xor_ln196_794_fu_16874_p2 = (tmp_415_fu_16866_p3.read() ^ xor_ln196_794_fu_16874_p1.read());
}

void dense_512_256_s::thread_xor_ln196_795_fu_16879_p2() {
    xor_ln196_795_fu_16879_p2 = (xor_ln196_794_fu_16874_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_796_fu_16897_p1() {
    xor_ln196_796_fu_16897_p1 =  (sc_lv<1>) (input_398_read.read());
}

void dense_512_256_s::thread_xor_ln196_796_fu_16897_p2() {
    xor_ln196_796_fu_16897_p2 = (tmp_416_fu_16889_p3.read() ^ xor_ln196_796_fu_16897_p1.read());
}

void dense_512_256_s::thread_xor_ln196_797_fu_16902_p2() {
    xor_ln196_797_fu_16902_p2 = (xor_ln196_796_fu_16897_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_798_fu_16920_p1() {
    xor_ln196_798_fu_16920_p1 =  (sc_lv<1>) (input_399_read.read());
}

void dense_512_256_s::thread_xor_ln196_798_fu_16920_p2() {
    xor_ln196_798_fu_16920_p2 = (tmp_417_fu_16912_p3.read() ^ xor_ln196_798_fu_16920_p1.read());
}

void dense_512_256_s::thread_xor_ln196_799_fu_16925_p2() {
    xor_ln196_799_fu_16925_p2 = (xor_ln196_798_fu_16920_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_79_fu_8645_p2() {
    xor_ln196_79_fu_8645_p2 = (xor_ln196_78_fu_8640_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_7_fu_7817_p2() {
    xor_ln196_7_fu_7817_p2 = (xor_ln196_6_fu_7812_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_800_fu_16943_p1() {
    xor_ln196_800_fu_16943_p1 =  (sc_lv<1>) (input_400_read.read());
}

void dense_512_256_s::thread_xor_ln196_800_fu_16943_p2() {
    xor_ln196_800_fu_16943_p2 = (tmp_418_fu_16935_p3.read() ^ xor_ln196_800_fu_16943_p1.read());
}

void dense_512_256_s::thread_xor_ln196_801_fu_16948_p2() {
    xor_ln196_801_fu_16948_p2 = (xor_ln196_800_fu_16943_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_802_fu_16966_p1() {
    xor_ln196_802_fu_16966_p1 =  (sc_lv<1>) (input_401_read.read());
}

void dense_512_256_s::thread_xor_ln196_802_fu_16966_p2() {
    xor_ln196_802_fu_16966_p2 = (tmp_419_fu_16958_p3.read() ^ xor_ln196_802_fu_16966_p1.read());
}

void dense_512_256_s::thread_xor_ln196_803_fu_16971_p2() {
    xor_ln196_803_fu_16971_p2 = (xor_ln196_802_fu_16966_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_804_fu_16989_p1() {
    xor_ln196_804_fu_16989_p1 =  (sc_lv<1>) (input_402_read.read());
}

void dense_512_256_s::thread_xor_ln196_804_fu_16989_p2() {
    xor_ln196_804_fu_16989_p2 = (tmp_420_fu_16981_p3.read() ^ xor_ln196_804_fu_16989_p1.read());
}

void dense_512_256_s::thread_xor_ln196_805_fu_16994_p2() {
    xor_ln196_805_fu_16994_p2 = (xor_ln196_804_fu_16989_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_806_fu_17012_p1() {
    xor_ln196_806_fu_17012_p1 =  (sc_lv<1>) (input_403_read.read());
}

void dense_512_256_s::thread_xor_ln196_806_fu_17012_p2() {
    xor_ln196_806_fu_17012_p2 = (tmp_421_fu_17004_p3.read() ^ xor_ln196_806_fu_17012_p1.read());
}

void dense_512_256_s::thread_xor_ln196_807_fu_17017_p2() {
    xor_ln196_807_fu_17017_p2 = (xor_ln196_806_fu_17012_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_808_fu_17035_p1() {
    xor_ln196_808_fu_17035_p1 =  (sc_lv<1>) (input_404_read.read());
}

void dense_512_256_s::thread_xor_ln196_808_fu_17035_p2() {
    xor_ln196_808_fu_17035_p2 = (tmp_422_fu_17027_p3.read() ^ xor_ln196_808_fu_17035_p1.read());
}

void dense_512_256_s::thread_xor_ln196_809_fu_17040_p2() {
    xor_ln196_809_fu_17040_p2 = (xor_ln196_808_fu_17035_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_80_fu_8663_p1() {
    xor_ln196_80_fu_8663_p1 =  (sc_lv<1>) (input_40_read.read());
}

void dense_512_256_s::thread_xor_ln196_80_fu_8663_p2() {
    xor_ln196_80_fu_8663_p2 = (tmp_58_fu_8655_p3.read() ^ xor_ln196_80_fu_8663_p1.read());
}

void dense_512_256_s::thread_xor_ln196_810_fu_17058_p1() {
    xor_ln196_810_fu_17058_p1 =  (sc_lv<1>) (input_405_read.read());
}

void dense_512_256_s::thread_xor_ln196_810_fu_17058_p2() {
    xor_ln196_810_fu_17058_p2 = (tmp_423_fu_17050_p3.read() ^ xor_ln196_810_fu_17058_p1.read());
}

void dense_512_256_s::thread_xor_ln196_811_fu_17063_p2() {
    xor_ln196_811_fu_17063_p2 = (xor_ln196_810_fu_17058_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_812_fu_17081_p1() {
    xor_ln196_812_fu_17081_p1 =  (sc_lv<1>) (input_406_read.read());
}

void dense_512_256_s::thread_xor_ln196_812_fu_17081_p2() {
    xor_ln196_812_fu_17081_p2 = (tmp_424_fu_17073_p3.read() ^ xor_ln196_812_fu_17081_p1.read());
}

void dense_512_256_s::thread_xor_ln196_813_fu_17086_p2() {
    xor_ln196_813_fu_17086_p2 = (xor_ln196_812_fu_17081_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_814_fu_17104_p1() {
    xor_ln196_814_fu_17104_p1 =  (sc_lv<1>) (input_407_read.read());
}

void dense_512_256_s::thread_xor_ln196_814_fu_17104_p2() {
    xor_ln196_814_fu_17104_p2 = (tmp_425_fu_17096_p3.read() ^ xor_ln196_814_fu_17104_p1.read());
}

void dense_512_256_s::thread_xor_ln196_815_fu_17109_p2() {
    xor_ln196_815_fu_17109_p2 = (xor_ln196_814_fu_17104_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_816_fu_17127_p1() {
    xor_ln196_816_fu_17127_p1 =  (sc_lv<1>) (input_408_read.read());
}

void dense_512_256_s::thread_xor_ln196_816_fu_17127_p2() {
    xor_ln196_816_fu_17127_p2 = (tmp_426_fu_17119_p3.read() ^ xor_ln196_816_fu_17127_p1.read());
}

void dense_512_256_s::thread_xor_ln196_817_fu_17132_p2() {
    xor_ln196_817_fu_17132_p2 = (xor_ln196_816_fu_17127_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_818_fu_17150_p1() {
    xor_ln196_818_fu_17150_p1 =  (sc_lv<1>) (input_409_read.read());
}

void dense_512_256_s::thread_xor_ln196_818_fu_17150_p2() {
    xor_ln196_818_fu_17150_p2 = (tmp_427_fu_17142_p3.read() ^ xor_ln196_818_fu_17150_p1.read());
}

void dense_512_256_s::thread_xor_ln196_819_fu_17155_p2() {
    xor_ln196_819_fu_17155_p2 = (xor_ln196_818_fu_17150_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_81_fu_8668_p2() {
    xor_ln196_81_fu_8668_p2 = (xor_ln196_80_fu_8663_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_820_fu_17173_p1() {
    xor_ln196_820_fu_17173_p1 =  (sc_lv<1>) (input_410_read.read());
}

void dense_512_256_s::thread_xor_ln196_820_fu_17173_p2() {
    xor_ln196_820_fu_17173_p2 = (tmp_428_fu_17165_p3.read() ^ xor_ln196_820_fu_17173_p1.read());
}

void dense_512_256_s::thread_xor_ln196_821_fu_17178_p2() {
    xor_ln196_821_fu_17178_p2 = (xor_ln196_820_fu_17173_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_822_fu_17196_p1() {
    xor_ln196_822_fu_17196_p1 =  (sc_lv<1>) (input_411_read.read());
}

void dense_512_256_s::thread_xor_ln196_822_fu_17196_p2() {
    xor_ln196_822_fu_17196_p2 = (tmp_429_fu_17188_p3.read() ^ xor_ln196_822_fu_17196_p1.read());
}

void dense_512_256_s::thread_xor_ln196_823_fu_17201_p2() {
    xor_ln196_823_fu_17201_p2 = (xor_ln196_822_fu_17196_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_824_fu_17219_p1() {
    xor_ln196_824_fu_17219_p1 =  (sc_lv<1>) (input_412_read.read());
}

void dense_512_256_s::thread_xor_ln196_824_fu_17219_p2() {
    xor_ln196_824_fu_17219_p2 = (tmp_430_fu_17211_p3.read() ^ xor_ln196_824_fu_17219_p1.read());
}

void dense_512_256_s::thread_xor_ln196_825_fu_17224_p2() {
    xor_ln196_825_fu_17224_p2 = (xor_ln196_824_fu_17219_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_826_fu_17242_p1() {
    xor_ln196_826_fu_17242_p1 =  (sc_lv<1>) (input_413_read.read());
}

void dense_512_256_s::thread_xor_ln196_826_fu_17242_p2() {
    xor_ln196_826_fu_17242_p2 = (tmp_431_fu_17234_p3.read() ^ xor_ln196_826_fu_17242_p1.read());
}

void dense_512_256_s::thread_xor_ln196_827_fu_17247_p2() {
    xor_ln196_827_fu_17247_p2 = (xor_ln196_826_fu_17242_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_828_fu_17265_p1() {
    xor_ln196_828_fu_17265_p1 =  (sc_lv<1>) (input_414_read.read());
}

void dense_512_256_s::thread_xor_ln196_828_fu_17265_p2() {
    xor_ln196_828_fu_17265_p2 = (tmp_432_fu_17257_p3.read() ^ xor_ln196_828_fu_17265_p1.read());
}

void dense_512_256_s::thread_xor_ln196_829_fu_17270_p2() {
    xor_ln196_829_fu_17270_p2 = (xor_ln196_828_fu_17265_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_82_fu_8686_p1() {
    xor_ln196_82_fu_8686_p1 =  (sc_lv<1>) (input_41_read.read());
}

void dense_512_256_s::thread_xor_ln196_82_fu_8686_p2() {
    xor_ln196_82_fu_8686_p2 = (tmp_59_fu_8678_p3.read() ^ xor_ln196_82_fu_8686_p1.read());
}

void dense_512_256_s::thread_xor_ln196_830_fu_17288_p1() {
    xor_ln196_830_fu_17288_p1 =  (sc_lv<1>) (input_415_read.read());
}

void dense_512_256_s::thread_xor_ln196_830_fu_17288_p2() {
    xor_ln196_830_fu_17288_p2 = (tmp_433_fu_17280_p3.read() ^ xor_ln196_830_fu_17288_p1.read());
}

void dense_512_256_s::thread_xor_ln196_831_fu_17293_p2() {
    xor_ln196_831_fu_17293_p2 = (xor_ln196_830_fu_17288_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_832_fu_17311_p1() {
    xor_ln196_832_fu_17311_p1 =  (sc_lv<1>) (input_416_read.read());
}

void dense_512_256_s::thread_xor_ln196_832_fu_17311_p2() {
    xor_ln196_832_fu_17311_p2 = (tmp_434_fu_17303_p3.read() ^ xor_ln196_832_fu_17311_p1.read());
}

void dense_512_256_s::thread_xor_ln196_833_fu_17316_p2() {
    xor_ln196_833_fu_17316_p2 = (xor_ln196_832_fu_17311_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_834_fu_17334_p1() {
    xor_ln196_834_fu_17334_p1 =  (sc_lv<1>) (input_417_read.read());
}

void dense_512_256_s::thread_xor_ln196_834_fu_17334_p2() {
    xor_ln196_834_fu_17334_p2 = (tmp_435_fu_17326_p3.read() ^ xor_ln196_834_fu_17334_p1.read());
}

void dense_512_256_s::thread_xor_ln196_835_fu_17339_p2() {
    xor_ln196_835_fu_17339_p2 = (xor_ln196_834_fu_17334_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_836_fu_17357_p1() {
    xor_ln196_836_fu_17357_p1 =  (sc_lv<1>) (input_418_read.read());
}

void dense_512_256_s::thread_xor_ln196_836_fu_17357_p2() {
    xor_ln196_836_fu_17357_p2 = (tmp_436_fu_17349_p3.read() ^ xor_ln196_836_fu_17357_p1.read());
}

void dense_512_256_s::thread_xor_ln196_837_fu_17362_p2() {
    xor_ln196_837_fu_17362_p2 = (xor_ln196_836_fu_17357_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_838_fu_17380_p1() {
    xor_ln196_838_fu_17380_p1 =  (sc_lv<1>) (input_419_read.read());
}

void dense_512_256_s::thread_xor_ln196_838_fu_17380_p2() {
    xor_ln196_838_fu_17380_p2 = (tmp_437_fu_17372_p3.read() ^ xor_ln196_838_fu_17380_p1.read());
}

void dense_512_256_s::thread_xor_ln196_839_fu_17385_p2() {
    xor_ln196_839_fu_17385_p2 = (xor_ln196_838_fu_17380_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_83_fu_8691_p2() {
    xor_ln196_83_fu_8691_p2 = (xor_ln196_82_fu_8686_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_840_fu_17403_p1() {
    xor_ln196_840_fu_17403_p1 =  (sc_lv<1>) (input_420_read.read());
}

void dense_512_256_s::thread_xor_ln196_840_fu_17403_p2() {
    xor_ln196_840_fu_17403_p2 = (tmp_438_fu_17395_p3.read() ^ xor_ln196_840_fu_17403_p1.read());
}

void dense_512_256_s::thread_xor_ln196_841_fu_17408_p2() {
    xor_ln196_841_fu_17408_p2 = (xor_ln196_840_fu_17403_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_842_fu_17426_p1() {
    xor_ln196_842_fu_17426_p1 =  (sc_lv<1>) (input_421_read.read());
}

void dense_512_256_s::thread_xor_ln196_842_fu_17426_p2() {
    xor_ln196_842_fu_17426_p2 = (tmp_439_fu_17418_p3.read() ^ xor_ln196_842_fu_17426_p1.read());
}

void dense_512_256_s::thread_xor_ln196_843_fu_17431_p2() {
    xor_ln196_843_fu_17431_p2 = (xor_ln196_842_fu_17426_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_844_fu_17449_p1() {
    xor_ln196_844_fu_17449_p1 =  (sc_lv<1>) (input_422_read.read());
}

void dense_512_256_s::thread_xor_ln196_844_fu_17449_p2() {
    xor_ln196_844_fu_17449_p2 = (tmp_440_fu_17441_p3.read() ^ xor_ln196_844_fu_17449_p1.read());
}

void dense_512_256_s::thread_xor_ln196_845_fu_17454_p2() {
    xor_ln196_845_fu_17454_p2 = (xor_ln196_844_fu_17449_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_846_fu_17472_p1() {
    xor_ln196_846_fu_17472_p1 =  (sc_lv<1>) (input_423_read.read());
}

void dense_512_256_s::thread_xor_ln196_846_fu_17472_p2() {
    xor_ln196_846_fu_17472_p2 = (tmp_441_fu_17464_p3.read() ^ xor_ln196_846_fu_17472_p1.read());
}

void dense_512_256_s::thread_xor_ln196_847_fu_17477_p2() {
    xor_ln196_847_fu_17477_p2 = (xor_ln196_846_fu_17472_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_848_fu_17495_p1() {
    xor_ln196_848_fu_17495_p1 =  (sc_lv<1>) (input_424_read.read());
}

void dense_512_256_s::thread_xor_ln196_848_fu_17495_p2() {
    xor_ln196_848_fu_17495_p2 = (tmp_442_fu_17487_p3.read() ^ xor_ln196_848_fu_17495_p1.read());
}

void dense_512_256_s::thread_xor_ln196_849_fu_17500_p2() {
    xor_ln196_849_fu_17500_p2 = (xor_ln196_848_fu_17495_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_84_fu_8709_p1() {
    xor_ln196_84_fu_8709_p1 =  (sc_lv<1>) (input_42_read.read());
}

void dense_512_256_s::thread_xor_ln196_84_fu_8709_p2() {
    xor_ln196_84_fu_8709_p2 = (tmp_60_fu_8701_p3.read() ^ xor_ln196_84_fu_8709_p1.read());
}

void dense_512_256_s::thread_xor_ln196_850_fu_17518_p1() {
    xor_ln196_850_fu_17518_p1 =  (sc_lv<1>) (input_425_read.read());
}

void dense_512_256_s::thread_xor_ln196_850_fu_17518_p2() {
    xor_ln196_850_fu_17518_p2 = (tmp_443_fu_17510_p3.read() ^ xor_ln196_850_fu_17518_p1.read());
}

void dense_512_256_s::thread_xor_ln196_851_fu_17523_p2() {
    xor_ln196_851_fu_17523_p2 = (xor_ln196_850_fu_17518_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_852_fu_17541_p1() {
    xor_ln196_852_fu_17541_p1 =  (sc_lv<1>) (input_426_read.read());
}

void dense_512_256_s::thread_xor_ln196_852_fu_17541_p2() {
    xor_ln196_852_fu_17541_p2 = (tmp_444_fu_17533_p3.read() ^ xor_ln196_852_fu_17541_p1.read());
}

void dense_512_256_s::thread_xor_ln196_853_fu_17546_p2() {
    xor_ln196_853_fu_17546_p2 = (xor_ln196_852_fu_17541_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_854_fu_17564_p1() {
    xor_ln196_854_fu_17564_p1 =  (sc_lv<1>) (input_427_read.read());
}

void dense_512_256_s::thread_xor_ln196_854_fu_17564_p2() {
    xor_ln196_854_fu_17564_p2 = (tmp_445_fu_17556_p3.read() ^ xor_ln196_854_fu_17564_p1.read());
}

void dense_512_256_s::thread_xor_ln196_855_fu_17569_p2() {
    xor_ln196_855_fu_17569_p2 = (xor_ln196_854_fu_17564_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_856_fu_17587_p1() {
    xor_ln196_856_fu_17587_p1 =  (sc_lv<1>) (input_428_read.read());
}

void dense_512_256_s::thread_xor_ln196_856_fu_17587_p2() {
    xor_ln196_856_fu_17587_p2 = (tmp_446_fu_17579_p3.read() ^ xor_ln196_856_fu_17587_p1.read());
}

void dense_512_256_s::thread_xor_ln196_857_fu_17592_p2() {
    xor_ln196_857_fu_17592_p2 = (xor_ln196_856_fu_17587_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_858_fu_17610_p1() {
    xor_ln196_858_fu_17610_p1 =  (sc_lv<1>) (input_429_read.read());
}

void dense_512_256_s::thread_xor_ln196_858_fu_17610_p2() {
    xor_ln196_858_fu_17610_p2 = (tmp_447_fu_17602_p3.read() ^ xor_ln196_858_fu_17610_p1.read());
}

void dense_512_256_s::thread_xor_ln196_859_fu_17615_p2() {
    xor_ln196_859_fu_17615_p2 = (xor_ln196_858_fu_17610_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_85_fu_8714_p2() {
    xor_ln196_85_fu_8714_p2 = (xor_ln196_84_fu_8709_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_860_fu_17633_p1() {
    xor_ln196_860_fu_17633_p1 =  (sc_lv<1>) (input_430_read.read());
}

void dense_512_256_s::thread_xor_ln196_860_fu_17633_p2() {
    xor_ln196_860_fu_17633_p2 = (tmp_448_fu_17625_p3.read() ^ xor_ln196_860_fu_17633_p1.read());
}

void dense_512_256_s::thread_xor_ln196_861_fu_17638_p2() {
    xor_ln196_861_fu_17638_p2 = (xor_ln196_860_fu_17633_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_862_fu_17656_p1() {
    xor_ln196_862_fu_17656_p1 =  (sc_lv<1>) (input_431_read.read());
}

void dense_512_256_s::thread_xor_ln196_862_fu_17656_p2() {
    xor_ln196_862_fu_17656_p2 = (tmp_449_fu_17648_p3.read() ^ xor_ln196_862_fu_17656_p1.read());
}

void dense_512_256_s::thread_xor_ln196_863_fu_17661_p2() {
    xor_ln196_863_fu_17661_p2 = (xor_ln196_862_fu_17656_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_864_fu_17679_p1() {
    xor_ln196_864_fu_17679_p1 =  (sc_lv<1>) (input_432_read.read());
}

void dense_512_256_s::thread_xor_ln196_864_fu_17679_p2() {
    xor_ln196_864_fu_17679_p2 = (tmp_450_fu_17671_p3.read() ^ xor_ln196_864_fu_17679_p1.read());
}

void dense_512_256_s::thread_xor_ln196_865_fu_17684_p2() {
    xor_ln196_865_fu_17684_p2 = (xor_ln196_864_fu_17679_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_866_fu_17702_p1() {
    xor_ln196_866_fu_17702_p1 =  (sc_lv<1>) (input_433_read.read());
}

void dense_512_256_s::thread_xor_ln196_866_fu_17702_p2() {
    xor_ln196_866_fu_17702_p2 = (tmp_451_fu_17694_p3.read() ^ xor_ln196_866_fu_17702_p1.read());
}

void dense_512_256_s::thread_xor_ln196_867_fu_17707_p2() {
    xor_ln196_867_fu_17707_p2 = (xor_ln196_866_fu_17702_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_868_fu_17725_p1() {
    xor_ln196_868_fu_17725_p1 =  (sc_lv<1>) (input_434_read.read());
}

void dense_512_256_s::thread_xor_ln196_868_fu_17725_p2() {
    xor_ln196_868_fu_17725_p2 = (tmp_452_fu_17717_p3.read() ^ xor_ln196_868_fu_17725_p1.read());
}

void dense_512_256_s::thread_xor_ln196_869_fu_17730_p2() {
    xor_ln196_869_fu_17730_p2 = (xor_ln196_868_fu_17725_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_86_fu_8732_p1() {
    xor_ln196_86_fu_8732_p1 =  (sc_lv<1>) (input_43_read.read());
}

void dense_512_256_s::thread_xor_ln196_86_fu_8732_p2() {
    xor_ln196_86_fu_8732_p2 = (tmp_61_fu_8724_p3.read() ^ xor_ln196_86_fu_8732_p1.read());
}

void dense_512_256_s::thread_xor_ln196_870_fu_17748_p1() {
    xor_ln196_870_fu_17748_p1 =  (sc_lv<1>) (input_435_read.read());
}

void dense_512_256_s::thread_xor_ln196_870_fu_17748_p2() {
    xor_ln196_870_fu_17748_p2 = (tmp_453_fu_17740_p3.read() ^ xor_ln196_870_fu_17748_p1.read());
}

void dense_512_256_s::thread_xor_ln196_871_fu_17753_p2() {
    xor_ln196_871_fu_17753_p2 = (xor_ln196_870_fu_17748_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_872_fu_17771_p1() {
    xor_ln196_872_fu_17771_p1 =  (sc_lv<1>) (input_436_read.read());
}

void dense_512_256_s::thread_xor_ln196_872_fu_17771_p2() {
    xor_ln196_872_fu_17771_p2 = (tmp_454_fu_17763_p3.read() ^ xor_ln196_872_fu_17771_p1.read());
}

void dense_512_256_s::thread_xor_ln196_873_fu_17776_p2() {
    xor_ln196_873_fu_17776_p2 = (xor_ln196_872_fu_17771_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_874_fu_17794_p1() {
    xor_ln196_874_fu_17794_p1 =  (sc_lv<1>) (input_437_read.read());
}

void dense_512_256_s::thread_xor_ln196_874_fu_17794_p2() {
    xor_ln196_874_fu_17794_p2 = (tmp_455_fu_17786_p3.read() ^ xor_ln196_874_fu_17794_p1.read());
}

void dense_512_256_s::thread_xor_ln196_875_fu_17799_p2() {
    xor_ln196_875_fu_17799_p2 = (xor_ln196_874_fu_17794_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_876_fu_17817_p1() {
    xor_ln196_876_fu_17817_p1 =  (sc_lv<1>) (input_438_read.read());
}

void dense_512_256_s::thread_xor_ln196_876_fu_17817_p2() {
    xor_ln196_876_fu_17817_p2 = (tmp_456_fu_17809_p3.read() ^ xor_ln196_876_fu_17817_p1.read());
}

void dense_512_256_s::thread_xor_ln196_877_fu_17822_p2() {
    xor_ln196_877_fu_17822_p2 = (xor_ln196_876_fu_17817_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_878_fu_17840_p1() {
    xor_ln196_878_fu_17840_p1 =  (sc_lv<1>) (input_439_read.read());
}

void dense_512_256_s::thread_xor_ln196_878_fu_17840_p2() {
    xor_ln196_878_fu_17840_p2 = (tmp_457_fu_17832_p3.read() ^ xor_ln196_878_fu_17840_p1.read());
}

void dense_512_256_s::thread_xor_ln196_879_fu_17845_p2() {
    xor_ln196_879_fu_17845_p2 = (xor_ln196_878_fu_17840_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_87_fu_8737_p2() {
    xor_ln196_87_fu_8737_p2 = (xor_ln196_86_fu_8732_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_880_fu_17863_p1() {
    xor_ln196_880_fu_17863_p1 =  (sc_lv<1>) (input_440_read.read());
}

void dense_512_256_s::thread_xor_ln196_880_fu_17863_p2() {
    xor_ln196_880_fu_17863_p2 = (tmp_458_fu_17855_p3.read() ^ xor_ln196_880_fu_17863_p1.read());
}

void dense_512_256_s::thread_xor_ln196_881_fu_17868_p2() {
    xor_ln196_881_fu_17868_p2 = (xor_ln196_880_fu_17863_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_882_fu_17886_p1() {
    xor_ln196_882_fu_17886_p1 =  (sc_lv<1>) (input_441_read.read());
}

void dense_512_256_s::thread_xor_ln196_882_fu_17886_p2() {
    xor_ln196_882_fu_17886_p2 = (tmp_459_fu_17878_p3.read() ^ xor_ln196_882_fu_17886_p1.read());
}

void dense_512_256_s::thread_xor_ln196_883_fu_17891_p2() {
    xor_ln196_883_fu_17891_p2 = (xor_ln196_882_fu_17886_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_884_fu_17909_p1() {
    xor_ln196_884_fu_17909_p1 =  (sc_lv<1>) (input_442_read.read());
}

void dense_512_256_s::thread_xor_ln196_884_fu_17909_p2() {
    xor_ln196_884_fu_17909_p2 = (tmp_460_fu_17901_p3.read() ^ xor_ln196_884_fu_17909_p1.read());
}

void dense_512_256_s::thread_xor_ln196_885_fu_17914_p2() {
    xor_ln196_885_fu_17914_p2 = (xor_ln196_884_fu_17909_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_886_fu_17932_p1() {
    xor_ln196_886_fu_17932_p1 =  (sc_lv<1>) (input_443_read.read());
}

void dense_512_256_s::thread_xor_ln196_886_fu_17932_p2() {
    xor_ln196_886_fu_17932_p2 = (tmp_461_fu_17924_p3.read() ^ xor_ln196_886_fu_17932_p1.read());
}

void dense_512_256_s::thread_xor_ln196_887_fu_17937_p2() {
    xor_ln196_887_fu_17937_p2 = (xor_ln196_886_fu_17932_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_888_fu_17955_p1() {
    xor_ln196_888_fu_17955_p1 =  (sc_lv<1>) (input_444_read.read());
}

void dense_512_256_s::thread_xor_ln196_888_fu_17955_p2() {
    xor_ln196_888_fu_17955_p2 = (tmp_462_fu_17947_p3.read() ^ xor_ln196_888_fu_17955_p1.read());
}

void dense_512_256_s::thread_xor_ln196_889_fu_17960_p2() {
    xor_ln196_889_fu_17960_p2 = (xor_ln196_888_fu_17955_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_88_fu_8755_p1() {
    xor_ln196_88_fu_8755_p1 =  (sc_lv<1>) (input_44_read.read());
}

void dense_512_256_s::thread_xor_ln196_88_fu_8755_p2() {
    xor_ln196_88_fu_8755_p2 = (tmp_62_fu_8747_p3.read() ^ xor_ln196_88_fu_8755_p1.read());
}

void dense_512_256_s::thread_xor_ln196_890_fu_17978_p1() {
    xor_ln196_890_fu_17978_p1 =  (sc_lv<1>) (input_445_read.read());
}

void dense_512_256_s::thread_xor_ln196_890_fu_17978_p2() {
    xor_ln196_890_fu_17978_p2 = (tmp_463_fu_17970_p3.read() ^ xor_ln196_890_fu_17978_p1.read());
}

void dense_512_256_s::thread_xor_ln196_891_fu_17983_p2() {
    xor_ln196_891_fu_17983_p2 = (xor_ln196_890_fu_17978_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_892_fu_18001_p1() {
    xor_ln196_892_fu_18001_p1 =  (sc_lv<1>) (input_446_read.read());
}

void dense_512_256_s::thread_xor_ln196_892_fu_18001_p2() {
    xor_ln196_892_fu_18001_p2 = (tmp_464_fu_17993_p3.read() ^ xor_ln196_892_fu_18001_p1.read());
}

void dense_512_256_s::thread_xor_ln196_893_fu_18006_p2() {
    xor_ln196_893_fu_18006_p2 = (xor_ln196_892_fu_18001_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_894_fu_18024_p1() {
    xor_ln196_894_fu_18024_p1 =  (sc_lv<1>) (input_447_read.read());
}

void dense_512_256_s::thread_xor_ln196_894_fu_18024_p2() {
    xor_ln196_894_fu_18024_p2 = (tmp_465_fu_18016_p3.read() ^ xor_ln196_894_fu_18024_p1.read());
}

void dense_512_256_s::thread_xor_ln196_895_fu_18029_p2() {
    xor_ln196_895_fu_18029_p2 = (xor_ln196_894_fu_18024_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_896_fu_18047_p1() {
    xor_ln196_896_fu_18047_p1 =  (sc_lv<1>) (input_448_read.read());
}

void dense_512_256_s::thread_xor_ln196_896_fu_18047_p2() {
    xor_ln196_896_fu_18047_p2 = (tmp_466_fu_18039_p3.read() ^ xor_ln196_896_fu_18047_p1.read());
}

void dense_512_256_s::thread_xor_ln196_897_fu_18052_p2() {
    xor_ln196_897_fu_18052_p2 = (xor_ln196_896_fu_18047_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_898_fu_18070_p1() {
    xor_ln196_898_fu_18070_p1 =  (sc_lv<1>) (input_449_read.read());
}

void dense_512_256_s::thread_xor_ln196_898_fu_18070_p2() {
    xor_ln196_898_fu_18070_p2 = (tmp_467_fu_18062_p3.read() ^ xor_ln196_898_fu_18070_p1.read());
}

void dense_512_256_s::thread_xor_ln196_899_fu_18075_p2() {
    xor_ln196_899_fu_18075_p2 = (xor_ln196_898_fu_18070_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_89_fu_8760_p2() {
    xor_ln196_89_fu_8760_p2 = (xor_ln196_88_fu_8755_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_8_fu_7835_p1() {
    xor_ln196_8_fu_7835_p1 =  (sc_lv<1>) (input_4_read.read());
}

void dense_512_256_s::thread_xor_ln196_8_fu_7835_p2() {
    xor_ln196_8_fu_7835_p2 = (tmp_22_fu_7827_p3.read() ^ xor_ln196_8_fu_7835_p1.read());
}

void dense_512_256_s::thread_xor_ln196_900_fu_18093_p1() {
    xor_ln196_900_fu_18093_p1 =  (sc_lv<1>) (input_450_read.read());
}

void dense_512_256_s::thread_xor_ln196_900_fu_18093_p2() {
    xor_ln196_900_fu_18093_p2 = (tmp_468_fu_18085_p3.read() ^ xor_ln196_900_fu_18093_p1.read());
}

void dense_512_256_s::thread_xor_ln196_901_fu_18098_p2() {
    xor_ln196_901_fu_18098_p2 = (xor_ln196_900_fu_18093_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_902_fu_18116_p1() {
    xor_ln196_902_fu_18116_p1 =  (sc_lv<1>) (input_451_read.read());
}

void dense_512_256_s::thread_xor_ln196_902_fu_18116_p2() {
    xor_ln196_902_fu_18116_p2 = (tmp_469_fu_18108_p3.read() ^ xor_ln196_902_fu_18116_p1.read());
}

void dense_512_256_s::thread_xor_ln196_903_fu_18121_p2() {
    xor_ln196_903_fu_18121_p2 = (xor_ln196_902_fu_18116_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_904_fu_18139_p1() {
    xor_ln196_904_fu_18139_p1 =  (sc_lv<1>) (input_452_read.read());
}

void dense_512_256_s::thread_xor_ln196_904_fu_18139_p2() {
    xor_ln196_904_fu_18139_p2 = (tmp_470_fu_18131_p3.read() ^ xor_ln196_904_fu_18139_p1.read());
}

void dense_512_256_s::thread_xor_ln196_905_fu_18144_p2() {
    xor_ln196_905_fu_18144_p2 = (xor_ln196_904_fu_18139_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_906_fu_18162_p1() {
    xor_ln196_906_fu_18162_p1 =  (sc_lv<1>) (input_453_read.read());
}

void dense_512_256_s::thread_xor_ln196_906_fu_18162_p2() {
    xor_ln196_906_fu_18162_p2 = (tmp_471_fu_18154_p3.read() ^ xor_ln196_906_fu_18162_p1.read());
}

void dense_512_256_s::thread_xor_ln196_907_fu_18167_p2() {
    xor_ln196_907_fu_18167_p2 = (xor_ln196_906_fu_18162_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_908_fu_18185_p1() {
    xor_ln196_908_fu_18185_p1 =  (sc_lv<1>) (input_454_read.read());
}

void dense_512_256_s::thread_xor_ln196_908_fu_18185_p2() {
    xor_ln196_908_fu_18185_p2 = (tmp_472_fu_18177_p3.read() ^ xor_ln196_908_fu_18185_p1.read());
}

void dense_512_256_s::thread_xor_ln196_909_fu_18190_p2() {
    xor_ln196_909_fu_18190_p2 = (xor_ln196_908_fu_18185_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_90_fu_8778_p1() {
    xor_ln196_90_fu_8778_p1 =  (sc_lv<1>) (input_45_read.read());
}

void dense_512_256_s::thread_xor_ln196_90_fu_8778_p2() {
    xor_ln196_90_fu_8778_p2 = (tmp_63_fu_8770_p3.read() ^ xor_ln196_90_fu_8778_p1.read());
}

void dense_512_256_s::thread_xor_ln196_910_fu_18208_p1() {
    xor_ln196_910_fu_18208_p1 =  (sc_lv<1>) (input_455_read.read());
}

void dense_512_256_s::thread_xor_ln196_910_fu_18208_p2() {
    xor_ln196_910_fu_18208_p2 = (tmp_473_fu_18200_p3.read() ^ xor_ln196_910_fu_18208_p1.read());
}

void dense_512_256_s::thread_xor_ln196_911_fu_18213_p2() {
    xor_ln196_911_fu_18213_p2 = (xor_ln196_910_fu_18208_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_912_fu_18231_p1() {
    xor_ln196_912_fu_18231_p1 =  (sc_lv<1>) (input_456_read.read());
}

void dense_512_256_s::thread_xor_ln196_912_fu_18231_p2() {
    xor_ln196_912_fu_18231_p2 = (tmp_474_fu_18223_p3.read() ^ xor_ln196_912_fu_18231_p1.read());
}

void dense_512_256_s::thread_xor_ln196_913_fu_18236_p2() {
    xor_ln196_913_fu_18236_p2 = (xor_ln196_912_fu_18231_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_914_fu_18254_p1() {
    xor_ln196_914_fu_18254_p1 =  (sc_lv<1>) (input_457_read.read());
}

void dense_512_256_s::thread_xor_ln196_914_fu_18254_p2() {
    xor_ln196_914_fu_18254_p2 = (tmp_475_fu_18246_p3.read() ^ xor_ln196_914_fu_18254_p1.read());
}

void dense_512_256_s::thread_xor_ln196_915_fu_18259_p2() {
    xor_ln196_915_fu_18259_p2 = (xor_ln196_914_fu_18254_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_916_fu_18277_p1() {
    xor_ln196_916_fu_18277_p1 =  (sc_lv<1>) (input_458_read.read());
}

void dense_512_256_s::thread_xor_ln196_916_fu_18277_p2() {
    xor_ln196_916_fu_18277_p2 = (tmp_476_fu_18269_p3.read() ^ xor_ln196_916_fu_18277_p1.read());
}

void dense_512_256_s::thread_xor_ln196_917_fu_18282_p2() {
    xor_ln196_917_fu_18282_p2 = (xor_ln196_916_fu_18277_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_918_fu_18300_p1() {
    xor_ln196_918_fu_18300_p1 =  (sc_lv<1>) (input_459_read.read());
}

void dense_512_256_s::thread_xor_ln196_918_fu_18300_p2() {
    xor_ln196_918_fu_18300_p2 = (tmp_477_fu_18292_p3.read() ^ xor_ln196_918_fu_18300_p1.read());
}

void dense_512_256_s::thread_xor_ln196_919_fu_18305_p2() {
    xor_ln196_919_fu_18305_p2 = (xor_ln196_918_fu_18300_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_91_fu_8783_p2() {
    xor_ln196_91_fu_8783_p2 = (xor_ln196_90_fu_8778_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_920_fu_18323_p1() {
    xor_ln196_920_fu_18323_p1 =  (sc_lv<1>) (input_460_read.read());
}

void dense_512_256_s::thread_xor_ln196_920_fu_18323_p2() {
    xor_ln196_920_fu_18323_p2 = (tmp_478_fu_18315_p3.read() ^ xor_ln196_920_fu_18323_p1.read());
}

void dense_512_256_s::thread_xor_ln196_921_fu_18328_p2() {
    xor_ln196_921_fu_18328_p2 = (xor_ln196_920_fu_18323_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_922_fu_18346_p1() {
    xor_ln196_922_fu_18346_p1 =  (sc_lv<1>) (input_461_read.read());
}

void dense_512_256_s::thread_xor_ln196_922_fu_18346_p2() {
    xor_ln196_922_fu_18346_p2 = (tmp_479_fu_18338_p3.read() ^ xor_ln196_922_fu_18346_p1.read());
}

void dense_512_256_s::thread_xor_ln196_923_fu_18351_p2() {
    xor_ln196_923_fu_18351_p2 = (xor_ln196_922_fu_18346_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_924_fu_18369_p1() {
    xor_ln196_924_fu_18369_p1 =  (sc_lv<1>) (input_462_read.read());
}

void dense_512_256_s::thread_xor_ln196_924_fu_18369_p2() {
    xor_ln196_924_fu_18369_p2 = (tmp_480_fu_18361_p3.read() ^ xor_ln196_924_fu_18369_p1.read());
}

void dense_512_256_s::thread_xor_ln196_925_fu_18374_p2() {
    xor_ln196_925_fu_18374_p2 = (xor_ln196_924_fu_18369_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_926_fu_18392_p1() {
    xor_ln196_926_fu_18392_p1 =  (sc_lv<1>) (input_463_read.read());
}

void dense_512_256_s::thread_xor_ln196_926_fu_18392_p2() {
    xor_ln196_926_fu_18392_p2 = (tmp_481_fu_18384_p3.read() ^ xor_ln196_926_fu_18392_p1.read());
}

void dense_512_256_s::thread_xor_ln196_927_fu_18397_p2() {
    xor_ln196_927_fu_18397_p2 = (xor_ln196_926_fu_18392_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_928_fu_18415_p1() {
    xor_ln196_928_fu_18415_p1 =  (sc_lv<1>) (input_464_read.read());
}

void dense_512_256_s::thread_xor_ln196_928_fu_18415_p2() {
    xor_ln196_928_fu_18415_p2 = (tmp_482_fu_18407_p3.read() ^ xor_ln196_928_fu_18415_p1.read());
}

void dense_512_256_s::thread_xor_ln196_929_fu_18420_p2() {
    xor_ln196_929_fu_18420_p2 = (xor_ln196_928_fu_18415_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_92_fu_8801_p1() {
    xor_ln196_92_fu_8801_p1 =  (sc_lv<1>) (input_46_read.read());
}

void dense_512_256_s::thread_xor_ln196_92_fu_8801_p2() {
    xor_ln196_92_fu_8801_p2 = (tmp_64_fu_8793_p3.read() ^ xor_ln196_92_fu_8801_p1.read());
}

void dense_512_256_s::thread_xor_ln196_930_fu_18438_p1() {
    xor_ln196_930_fu_18438_p1 =  (sc_lv<1>) (input_465_read.read());
}

void dense_512_256_s::thread_xor_ln196_930_fu_18438_p2() {
    xor_ln196_930_fu_18438_p2 = (tmp_483_fu_18430_p3.read() ^ xor_ln196_930_fu_18438_p1.read());
}

void dense_512_256_s::thread_xor_ln196_931_fu_18443_p2() {
    xor_ln196_931_fu_18443_p2 = (xor_ln196_930_fu_18438_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_932_fu_18461_p1() {
    xor_ln196_932_fu_18461_p1 =  (sc_lv<1>) (input_466_read.read());
}

void dense_512_256_s::thread_xor_ln196_932_fu_18461_p2() {
    xor_ln196_932_fu_18461_p2 = (tmp_484_fu_18453_p3.read() ^ xor_ln196_932_fu_18461_p1.read());
}

void dense_512_256_s::thread_xor_ln196_933_fu_18466_p2() {
    xor_ln196_933_fu_18466_p2 = (xor_ln196_932_fu_18461_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_934_fu_18484_p1() {
    xor_ln196_934_fu_18484_p1 =  (sc_lv<1>) (input_467_read.read());
}

void dense_512_256_s::thread_xor_ln196_934_fu_18484_p2() {
    xor_ln196_934_fu_18484_p2 = (tmp_485_fu_18476_p3.read() ^ xor_ln196_934_fu_18484_p1.read());
}

void dense_512_256_s::thread_xor_ln196_935_fu_18489_p2() {
    xor_ln196_935_fu_18489_p2 = (xor_ln196_934_fu_18484_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_936_fu_18507_p1() {
    xor_ln196_936_fu_18507_p1 =  (sc_lv<1>) (input_468_read.read());
}

void dense_512_256_s::thread_xor_ln196_936_fu_18507_p2() {
    xor_ln196_936_fu_18507_p2 = (tmp_486_fu_18499_p3.read() ^ xor_ln196_936_fu_18507_p1.read());
}

void dense_512_256_s::thread_xor_ln196_937_fu_18512_p2() {
    xor_ln196_937_fu_18512_p2 = (xor_ln196_936_fu_18507_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_938_fu_18530_p1() {
    xor_ln196_938_fu_18530_p1 =  (sc_lv<1>) (input_469_read.read());
}

void dense_512_256_s::thread_xor_ln196_938_fu_18530_p2() {
    xor_ln196_938_fu_18530_p2 = (tmp_487_fu_18522_p3.read() ^ xor_ln196_938_fu_18530_p1.read());
}

void dense_512_256_s::thread_xor_ln196_939_fu_18535_p2() {
    xor_ln196_939_fu_18535_p2 = (xor_ln196_938_fu_18530_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_93_fu_8806_p2() {
    xor_ln196_93_fu_8806_p2 = (xor_ln196_92_fu_8801_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_940_fu_18553_p1() {
    xor_ln196_940_fu_18553_p1 =  (sc_lv<1>) (input_470_read.read());
}

void dense_512_256_s::thread_xor_ln196_940_fu_18553_p2() {
    xor_ln196_940_fu_18553_p2 = (tmp_488_fu_18545_p3.read() ^ xor_ln196_940_fu_18553_p1.read());
}

void dense_512_256_s::thread_xor_ln196_941_fu_18558_p2() {
    xor_ln196_941_fu_18558_p2 = (xor_ln196_940_fu_18553_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_942_fu_18576_p1() {
    xor_ln196_942_fu_18576_p1 =  (sc_lv<1>) (input_471_read.read());
}

void dense_512_256_s::thread_xor_ln196_942_fu_18576_p2() {
    xor_ln196_942_fu_18576_p2 = (tmp_489_fu_18568_p3.read() ^ xor_ln196_942_fu_18576_p1.read());
}

void dense_512_256_s::thread_xor_ln196_943_fu_18581_p2() {
    xor_ln196_943_fu_18581_p2 = (xor_ln196_942_fu_18576_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_944_fu_18599_p1() {
    xor_ln196_944_fu_18599_p1 =  (sc_lv<1>) (input_472_read.read());
}

void dense_512_256_s::thread_xor_ln196_944_fu_18599_p2() {
    xor_ln196_944_fu_18599_p2 = (tmp_490_fu_18591_p3.read() ^ xor_ln196_944_fu_18599_p1.read());
}

void dense_512_256_s::thread_xor_ln196_945_fu_18604_p2() {
    xor_ln196_945_fu_18604_p2 = (xor_ln196_944_fu_18599_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_946_fu_18622_p1() {
    xor_ln196_946_fu_18622_p1 =  (sc_lv<1>) (input_473_read.read());
}

void dense_512_256_s::thread_xor_ln196_946_fu_18622_p2() {
    xor_ln196_946_fu_18622_p2 = (tmp_491_fu_18614_p3.read() ^ xor_ln196_946_fu_18622_p1.read());
}

void dense_512_256_s::thread_xor_ln196_947_fu_18627_p2() {
    xor_ln196_947_fu_18627_p2 = (xor_ln196_946_fu_18622_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_948_fu_18645_p1() {
    xor_ln196_948_fu_18645_p1 =  (sc_lv<1>) (input_474_read.read());
}

void dense_512_256_s::thread_xor_ln196_948_fu_18645_p2() {
    xor_ln196_948_fu_18645_p2 = (tmp_492_fu_18637_p3.read() ^ xor_ln196_948_fu_18645_p1.read());
}

void dense_512_256_s::thread_xor_ln196_949_fu_18650_p2() {
    xor_ln196_949_fu_18650_p2 = (xor_ln196_948_fu_18645_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_94_fu_8824_p1() {
    xor_ln196_94_fu_8824_p1 =  (sc_lv<1>) (input_47_read.read());
}

void dense_512_256_s::thread_xor_ln196_94_fu_8824_p2() {
    xor_ln196_94_fu_8824_p2 = (tmp_65_fu_8816_p3.read() ^ xor_ln196_94_fu_8824_p1.read());
}

void dense_512_256_s::thread_xor_ln196_950_fu_18668_p1() {
    xor_ln196_950_fu_18668_p1 =  (sc_lv<1>) (input_475_read.read());
}

void dense_512_256_s::thread_xor_ln196_950_fu_18668_p2() {
    xor_ln196_950_fu_18668_p2 = (tmp_493_fu_18660_p3.read() ^ xor_ln196_950_fu_18668_p1.read());
}

void dense_512_256_s::thread_xor_ln196_951_fu_18673_p2() {
    xor_ln196_951_fu_18673_p2 = (xor_ln196_950_fu_18668_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_952_fu_18691_p1() {
    xor_ln196_952_fu_18691_p1 =  (sc_lv<1>) (input_476_read.read());
}

void dense_512_256_s::thread_xor_ln196_952_fu_18691_p2() {
    xor_ln196_952_fu_18691_p2 = (tmp_494_fu_18683_p3.read() ^ xor_ln196_952_fu_18691_p1.read());
}

void dense_512_256_s::thread_xor_ln196_953_fu_18696_p2() {
    xor_ln196_953_fu_18696_p2 = (xor_ln196_952_fu_18691_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_954_fu_18714_p1() {
    xor_ln196_954_fu_18714_p1 =  (sc_lv<1>) (input_477_read.read());
}

void dense_512_256_s::thread_xor_ln196_954_fu_18714_p2() {
    xor_ln196_954_fu_18714_p2 = (tmp_495_fu_18706_p3.read() ^ xor_ln196_954_fu_18714_p1.read());
}

void dense_512_256_s::thread_xor_ln196_955_fu_18719_p2() {
    xor_ln196_955_fu_18719_p2 = (xor_ln196_954_fu_18714_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_956_fu_18737_p1() {
    xor_ln196_956_fu_18737_p1 =  (sc_lv<1>) (input_478_read.read());
}

void dense_512_256_s::thread_xor_ln196_956_fu_18737_p2() {
    xor_ln196_956_fu_18737_p2 = (tmp_496_fu_18729_p3.read() ^ xor_ln196_956_fu_18737_p1.read());
}

void dense_512_256_s::thread_xor_ln196_957_fu_18742_p2() {
    xor_ln196_957_fu_18742_p2 = (xor_ln196_956_fu_18737_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_958_fu_18760_p1() {
    xor_ln196_958_fu_18760_p1 =  (sc_lv<1>) (input_479_read.read());
}

void dense_512_256_s::thread_xor_ln196_958_fu_18760_p2() {
    xor_ln196_958_fu_18760_p2 = (tmp_497_fu_18752_p3.read() ^ xor_ln196_958_fu_18760_p1.read());
}

void dense_512_256_s::thread_xor_ln196_959_fu_18765_p2() {
    xor_ln196_959_fu_18765_p2 = (xor_ln196_958_fu_18760_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_95_fu_8829_p2() {
    xor_ln196_95_fu_8829_p2 = (xor_ln196_94_fu_8824_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_960_fu_18783_p1() {
    xor_ln196_960_fu_18783_p1 =  (sc_lv<1>) (input_480_read.read());
}

void dense_512_256_s::thread_xor_ln196_960_fu_18783_p2() {
    xor_ln196_960_fu_18783_p2 = (tmp_498_fu_18775_p3.read() ^ xor_ln196_960_fu_18783_p1.read());
}

void dense_512_256_s::thread_xor_ln196_961_fu_18788_p2() {
    xor_ln196_961_fu_18788_p2 = (xor_ln196_960_fu_18783_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_962_fu_18806_p1() {
    xor_ln196_962_fu_18806_p1 =  (sc_lv<1>) (input_481_read.read());
}

void dense_512_256_s::thread_xor_ln196_962_fu_18806_p2() {
    xor_ln196_962_fu_18806_p2 = (tmp_499_fu_18798_p3.read() ^ xor_ln196_962_fu_18806_p1.read());
}

void dense_512_256_s::thread_xor_ln196_963_fu_18811_p2() {
    xor_ln196_963_fu_18811_p2 = (xor_ln196_962_fu_18806_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_964_fu_18829_p1() {
    xor_ln196_964_fu_18829_p1 =  (sc_lv<1>) (input_482_read.read());
}

void dense_512_256_s::thread_xor_ln196_964_fu_18829_p2() {
    xor_ln196_964_fu_18829_p2 = (tmp_500_fu_18821_p3.read() ^ xor_ln196_964_fu_18829_p1.read());
}

void dense_512_256_s::thread_xor_ln196_965_fu_18834_p2() {
    xor_ln196_965_fu_18834_p2 = (xor_ln196_964_fu_18829_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_966_fu_18852_p1() {
    xor_ln196_966_fu_18852_p1 =  (sc_lv<1>) (input_483_read.read());
}

void dense_512_256_s::thread_xor_ln196_966_fu_18852_p2() {
    xor_ln196_966_fu_18852_p2 = (tmp_501_fu_18844_p3.read() ^ xor_ln196_966_fu_18852_p1.read());
}

void dense_512_256_s::thread_xor_ln196_967_fu_18857_p2() {
    xor_ln196_967_fu_18857_p2 = (xor_ln196_966_fu_18852_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_968_fu_18875_p1() {
    xor_ln196_968_fu_18875_p1 =  (sc_lv<1>) (input_484_read.read());
}

void dense_512_256_s::thread_xor_ln196_968_fu_18875_p2() {
    xor_ln196_968_fu_18875_p2 = (tmp_502_fu_18867_p3.read() ^ xor_ln196_968_fu_18875_p1.read());
}

void dense_512_256_s::thread_xor_ln196_969_fu_18880_p2() {
    xor_ln196_969_fu_18880_p2 = (xor_ln196_968_fu_18875_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_96_fu_8847_p1() {
    xor_ln196_96_fu_8847_p1 =  (sc_lv<1>) (input_48_read.read());
}

void dense_512_256_s::thread_xor_ln196_96_fu_8847_p2() {
    xor_ln196_96_fu_8847_p2 = (tmp_66_fu_8839_p3.read() ^ xor_ln196_96_fu_8847_p1.read());
}

void dense_512_256_s::thread_xor_ln196_970_fu_18898_p1() {
    xor_ln196_970_fu_18898_p1 =  (sc_lv<1>) (input_485_read.read());
}

void dense_512_256_s::thread_xor_ln196_970_fu_18898_p2() {
    xor_ln196_970_fu_18898_p2 = (tmp_503_fu_18890_p3.read() ^ xor_ln196_970_fu_18898_p1.read());
}

void dense_512_256_s::thread_xor_ln196_971_fu_18903_p2() {
    xor_ln196_971_fu_18903_p2 = (xor_ln196_970_fu_18898_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_972_fu_18921_p1() {
    xor_ln196_972_fu_18921_p1 =  (sc_lv<1>) (input_486_read.read());
}

void dense_512_256_s::thread_xor_ln196_972_fu_18921_p2() {
    xor_ln196_972_fu_18921_p2 = (tmp_504_fu_18913_p3.read() ^ xor_ln196_972_fu_18921_p1.read());
}

void dense_512_256_s::thread_xor_ln196_973_fu_18926_p2() {
    xor_ln196_973_fu_18926_p2 = (xor_ln196_972_fu_18921_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_974_fu_18944_p1() {
    xor_ln196_974_fu_18944_p1 =  (sc_lv<1>) (input_487_read.read());
}

void dense_512_256_s::thread_xor_ln196_974_fu_18944_p2() {
    xor_ln196_974_fu_18944_p2 = (tmp_505_fu_18936_p3.read() ^ xor_ln196_974_fu_18944_p1.read());
}

void dense_512_256_s::thread_xor_ln196_975_fu_18949_p2() {
    xor_ln196_975_fu_18949_p2 = (xor_ln196_974_fu_18944_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_976_fu_18967_p1() {
    xor_ln196_976_fu_18967_p1 =  (sc_lv<1>) (input_488_read.read());
}

void dense_512_256_s::thread_xor_ln196_976_fu_18967_p2() {
    xor_ln196_976_fu_18967_p2 = (tmp_506_fu_18959_p3.read() ^ xor_ln196_976_fu_18967_p1.read());
}

void dense_512_256_s::thread_xor_ln196_977_fu_18972_p2() {
    xor_ln196_977_fu_18972_p2 = (xor_ln196_976_fu_18967_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_978_fu_18990_p1() {
    xor_ln196_978_fu_18990_p1 =  (sc_lv<1>) (input_489_read.read());
}

void dense_512_256_s::thread_xor_ln196_978_fu_18990_p2() {
    xor_ln196_978_fu_18990_p2 = (tmp_507_fu_18982_p3.read() ^ xor_ln196_978_fu_18990_p1.read());
}

void dense_512_256_s::thread_xor_ln196_979_fu_18995_p2() {
    xor_ln196_979_fu_18995_p2 = (xor_ln196_978_fu_18990_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_97_fu_8852_p2() {
    xor_ln196_97_fu_8852_p2 = (xor_ln196_96_fu_8847_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_980_fu_19013_p1() {
    xor_ln196_980_fu_19013_p1 =  (sc_lv<1>) (input_490_read.read());
}

void dense_512_256_s::thread_xor_ln196_980_fu_19013_p2() {
    xor_ln196_980_fu_19013_p2 = (tmp_508_fu_19005_p3.read() ^ xor_ln196_980_fu_19013_p1.read());
}

void dense_512_256_s::thread_xor_ln196_981_fu_19018_p2() {
    xor_ln196_981_fu_19018_p2 = (xor_ln196_980_fu_19013_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_982_fu_19036_p1() {
    xor_ln196_982_fu_19036_p1 =  (sc_lv<1>) (input_491_read.read());
}

void dense_512_256_s::thread_xor_ln196_982_fu_19036_p2() {
    xor_ln196_982_fu_19036_p2 = (tmp_509_fu_19028_p3.read() ^ xor_ln196_982_fu_19036_p1.read());
}

void dense_512_256_s::thread_xor_ln196_983_fu_19041_p2() {
    xor_ln196_983_fu_19041_p2 = (xor_ln196_982_fu_19036_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_984_fu_19059_p1() {
    xor_ln196_984_fu_19059_p1 =  (sc_lv<1>) (input_492_read.read());
}

void dense_512_256_s::thread_xor_ln196_984_fu_19059_p2() {
    xor_ln196_984_fu_19059_p2 = (tmp_510_fu_19051_p3.read() ^ xor_ln196_984_fu_19059_p1.read());
}

void dense_512_256_s::thread_xor_ln196_985_fu_19064_p2() {
    xor_ln196_985_fu_19064_p2 = (xor_ln196_984_fu_19059_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_986_fu_19082_p1() {
    xor_ln196_986_fu_19082_p1 =  (sc_lv<1>) (input_493_read.read());
}

void dense_512_256_s::thread_xor_ln196_986_fu_19082_p2() {
    xor_ln196_986_fu_19082_p2 = (tmp_511_fu_19074_p3.read() ^ xor_ln196_986_fu_19082_p1.read());
}

void dense_512_256_s::thread_xor_ln196_987_fu_19087_p2() {
    xor_ln196_987_fu_19087_p2 = (xor_ln196_986_fu_19082_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_988_fu_19105_p1() {
    xor_ln196_988_fu_19105_p1 =  (sc_lv<1>) (input_494_read.read());
}

void dense_512_256_s::thread_xor_ln196_988_fu_19105_p2() {
    xor_ln196_988_fu_19105_p2 = (tmp_512_fu_19097_p3.read() ^ xor_ln196_988_fu_19105_p1.read());
}

void dense_512_256_s::thread_xor_ln196_989_fu_19110_p2() {
    xor_ln196_989_fu_19110_p2 = (xor_ln196_988_fu_19105_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_98_fu_8870_p1() {
    xor_ln196_98_fu_8870_p1 =  (sc_lv<1>) (input_49_read.read());
}

void dense_512_256_s::thread_xor_ln196_98_fu_8870_p2() {
    xor_ln196_98_fu_8870_p2 = (tmp_67_fu_8862_p3.read() ^ xor_ln196_98_fu_8870_p1.read());
}

void dense_512_256_s::thread_xor_ln196_990_fu_19128_p1() {
    xor_ln196_990_fu_19128_p1 =  (sc_lv<1>) (input_495_read.read());
}

void dense_512_256_s::thread_xor_ln196_990_fu_19128_p2() {
    xor_ln196_990_fu_19128_p2 = (tmp_513_fu_19120_p3.read() ^ xor_ln196_990_fu_19128_p1.read());
}

void dense_512_256_s::thread_xor_ln196_991_fu_19133_p2() {
    xor_ln196_991_fu_19133_p2 = (xor_ln196_990_fu_19128_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_992_fu_19151_p1() {
    xor_ln196_992_fu_19151_p1 =  (sc_lv<1>) (input_496_read.read());
}

void dense_512_256_s::thread_xor_ln196_992_fu_19151_p2() {
    xor_ln196_992_fu_19151_p2 = (tmp_514_fu_19143_p3.read() ^ xor_ln196_992_fu_19151_p1.read());
}

void dense_512_256_s::thread_xor_ln196_993_fu_19156_p2() {
    xor_ln196_993_fu_19156_p2 = (xor_ln196_992_fu_19151_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_994_fu_19174_p1() {
    xor_ln196_994_fu_19174_p1 =  (sc_lv<1>) (input_497_read.read());
}

void dense_512_256_s::thread_xor_ln196_994_fu_19174_p2() {
    xor_ln196_994_fu_19174_p2 = (tmp_515_fu_19166_p3.read() ^ xor_ln196_994_fu_19174_p1.read());
}

void dense_512_256_s::thread_xor_ln196_995_fu_19179_p2() {
    xor_ln196_995_fu_19179_p2 = (xor_ln196_994_fu_19174_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_996_fu_19197_p1() {
    xor_ln196_996_fu_19197_p1 =  (sc_lv<1>) (input_498_read.read());
}

void dense_512_256_s::thread_xor_ln196_996_fu_19197_p2() {
    xor_ln196_996_fu_19197_p2 = (tmp_516_fu_19189_p3.read() ^ xor_ln196_996_fu_19197_p1.read());
}

void dense_512_256_s::thread_xor_ln196_997_fu_19202_p2() {
    xor_ln196_997_fu_19202_p2 = (xor_ln196_996_fu_19197_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_998_fu_19220_p1() {
    xor_ln196_998_fu_19220_p1 =  (sc_lv<1>) (input_499_read.read());
}

void dense_512_256_s::thread_xor_ln196_998_fu_19220_p2() {
    xor_ln196_998_fu_19220_p2 = (tmp_517_fu_19212_p3.read() ^ xor_ln196_998_fu_19220_p1.read());
}

void dense_512_256_s::thread_xor_ln196_999_fu_19225_p2() {
    xor_ln196_999_fu_19225_p2 = (xor_ln196_998_fu_19220_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_99_fu_8875_p2() {
    xor_ln196_99_fu_8875_p2 = (xor_ln196_98_fu_8870_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_9_fu_7840_p2() {
    xor_ln196_9_fu_7840_p2 = (xor_ln196_8_fu_7835_p2.read() ^ ap_const_lv1_1);
}

void dense_512_256_s::thread_xor_ln196_fu_7743_p1() {
    xor_ln196_fu_7743_p1 =  (sc_lv<1>) (input_0_read.read());
}

void dense_512_256_s::thread_xor_ln196_fu_7743_p2() {
    xor_ln196_fu_7743_p2 = (trunc_ln196_1_fu_7739_p1.read() ^ xor_ln196_fu_7743_p1.read());
}

void dense_512_256_s::thread_zext_ln1503_100_fu_25434_p1() {
    zext_ln1503_100_fu_25434_p1 = esl_zext<4,3>(add_ln1503_101_reg_32316.read());
}

void dense_512_256_s::thread_zext_ln1503_101_fu_25443_p1() {
    zext_ln1503_101_fu_25443_p1 = esl_zext<5,4>(add_ln1503_102_fu_25437_p2.read());
}

void dense_512_256_s::thread_zext_ln1503_102_fu_20193_p1() {
    zext_ln1503_102_fu_20193_p1 = esl_zext<3,2>(add_ln1503_103_fu_20187_p2.read());
}

void dense_512_256_s::thread_zext_ln1503_103_fu_20203_p1() {
    zext_ln1503_103_fu_20203_p1 = esl_zext<3,2>(add_ln1503_104_fu_20197_p2.read());
}

void dense_512_256_s::thread_zext_ln1503_104_fu_25447_p1() {
    zext_ln1503_104_fu_25447_p1 = esl_zext<4,3>(add_ln1503_105_reg_32321.read());
}

void dense_512_256_s::thread_zext_ln1503_105_fu_20219_p1() {
    zext_ln1503_105_fu_20219_p1 = esl_zext<3,2>(add_ln1503_106_fu_20213_p2.read());
}

void dense_512_256_s::thread_zext_ln1503_106_fu_20229_p1() {
    zext_ln1503_106_fu_20229_p1 = esl_zext<3,2>(add_ln1503_107_fu_20223_p2.read());
}

void dense_512_256_s::thread_zext_ln1503_107_fu_25450_p1() {
    zext_ln1503_107_fu_25450_p1 = esl_zext<4,3>(add_ln1503_108_reg_32326.read());
}

void dense_512_256_s::thread_zext_ln1503_108_fu_25459_p1() {
    zext_ln1503_108_fu_25459_p1 = esl_zext<5,4>(add_ln1503_109_fu_25453_p2.read());
}

void dense_512_256_s::thread_zext_ln1503_109_fu_25469_p1() {
    zext_ln1503_109_fu_25469_p1 = esl_zext<6,5>(add_ln1503_110_fu_25463_p2.read());
}

void dense_512_256_s::thread_zext_ln1503_10_fu_25159_p1() {
    zext_ln1503_10_fu_25159_p1 = esl_zext<4,3>(add_ln1503_11_reg_32201.read());
}

void dense_512_256_s::thread_zext_ln1503_110_fu_20245_p1() {
    zext_ln1503_110_fu_20245_p1 = esl_zext<3,2>(add_ln1503_111_fu_20239_p2.read());
}

void dense_512_256_s::thread_zext_ln1503_111_fu_20255_p1() {
    zext_ln1503_111_fu_20255_p1 = esl_zext<3,2>(add_ln1503_112_fu_20249_p2.read());
}

void dense_512_256_s::thread_zext_ln1503_112_fu_25473_p1() {
    zext_ln1503_112_fu_25473_p1 = esl_zext<4,3>(add_ln1503_113_reg_32331.read());
}

void dense_512_256_s::thread_zext_ln1503_113_fu_20271_p1() {
    zext_ln1503_113_fu_20271_p1 = esl_zext<3,2>(add_ln1503_114_fu_20265_p2.read());
}

void dense_512_256_s::thread_zext_ln1503_114_fu_20281_p1() {
    zext_ln1503_114_fu_20281_p1 = esl_zext<3,2>(add_ln1503_115_fu_20275_p2.read());
}

void dense_512_256_s::thread_zext_ln1503_115_fu_25476_p1() {
    zext_ln1503_115_fu_25476_p1 = esl_zext<4,3>(add_ln1503_116_reg_32336.read());
}

void dense_512_256_s::thread_zext_ln1503_116_fu_25485_p1() {
    zext_ln1503_116_fu_25485_p1 = esl_zext<5,4>(add_ln1503_117_fu_25479_p2.read());
}

void dense_512_256_s::thread_zext_ln1503_117_fu_20297_p1() {
    zext_ln1503_117_fu_20297_p1 = esl_zext<3,2>(add_ln1503_118_fu_20291_p2.read());
}

void dense_512_256_s::thread_zext_ln1503_118_fu_20307_p1() {
    zext_ln1503_118_fu_20307_p1 = esl_zext<3,2>(add_ln1503_119_fu_20301_p2.read());
}

void dense_512_256_s::thread_zext_ln1503_119_fu_25489_p1() {
    zext_ln1503_119_fu_25489_p1 = esl_zext<4,3>(add_ln1503_120_reg_32341.read());
}

void dense_512_256_s::thread_zext_ln1503_11_fu_19595_p1() {
    zext_ln1503_11_fu_19595_p1 = esl_zext<3,2>(add_ln1503_12_fu_19589_p2.read());
}

void dense_512_256_s::thread_zext_ln1503_120_fu_20323_p1() {
    zext_ln1503_120_fu_20323_p1 = esl_zext<3,2>(add_ln1503_121_fu_20317_p2.read());
}

void dense_512_256_s::thread_zext_ln1503_121_fu_20333_p1() {
    zext_ln1503_121_fu_20333_p1 = esl_zext<3,2>(add_ln1503_122_fu_20327_p2.read());
}

void dense_512_256_s::thread_zext_ln1503_122_fu_25492_p1() {
    zext_ln1503_122_fu_25492_p1 = esl_zext<4,3>(add_ln1503_123_reg_32346.read());
}

void dense_512_256_s::thread_zext_ln1503_123_fu_25501_p1() {
    zext_ln1503_123_fu_25501_p1 = esl_zext<5,4>(add_ln1503_124_fu_25495_p2.read());
}

void dense_512_256_s::thread_zext_ln1503_124_fu_25511_p1() {
    zext_ln1503_124_fu_25511_p1 = esl_zext<6,5>(add_ln1503_125_fu_25505_p2.read());
}

void dense_512_256_s::thread_zext_ln1503_125_fu_25521_p1() {
    zext_ln1503_125_fu_25521_p1 = esl_zext<7,6>(add_ln1503_126_fu_25515_p2.read());
}

void dense_512_256_s::thread_zext_ln1503_126_fu_26698_p1() {
    zext_ln1503_126_fu_26698_p1 = esl_zext<8,7>(add_ln1503_127_reg_32836.read());
}

void dense_512_256_s::thread_zext_ln1503_127_fu_26707_p1() {
    zext_ln1503_127_fu_26707_p1 = esl_zext<9,8>(add_ln1503_128_fu_26701_p2.read());
}

void dense_512_256_s::thread_zext_ln1503_128_fu_20349_p1() {
    zext_ln1503_128_fu_20349_p1 = esl_zext<3,2>(add_ln1503_129_fu_20343_p2.read());
}

void dense_512_256_s::thread_zext_ln1503_129_fu_20359_p1() {
    zext_ln1503_129_fu_20359_p1 = esl_zext<3,2>(add_ln1503_130_fu_20353_p2.read());
}

void dense_512_256_s::thread_zext_ln1503_12_fu_19605_p1() {
    zext_ln1503_12_fu_19605_p1 = esl_zext<3,2>(add_ln1503_13_fu_19599_p2.read());
}

void dense_512_256_s::thread_zext_ln1503_130_fu_25531_p1() {
    zext_ln1503_130_fu_25531_p1 = esl_zext<4,3>(add_ln1503_131_reg_32351.read());
}

void dense_512_256_s::thread_zext_ln1503_131_fu_20375_p1() {
    zext_ln1503_131_fu_20375_p1 = esl_zext<3,2>(add_ln1503_132_fu_20369_p2.read());
}

void dense_512_256_s::thread_zext_ln1503_132_fu_20385_p1() {
    zext_ln1503_132_fu_20385_p1 = esl_zext<3,2>(add_ln1503_133_fu_20379_p2.read());
}

void dense_512_256_s::thread_zext_ln1503_133_fu_25534_p1() {
    zext_ln1503_133_fu_25534_p1 = esl_zext<4,3>(add_ln1503_134_reg_32356.read());
}

void dense_512_256_s::thread_zext_ln1503_134_fu_25543_p1() {
    zext_ln1503_134_fu_25543_p1 = esl_zext<5,4>(add_ln1503_135_fu_25537_p2.read());
}

void dense_512_256_s::thread_zext_ln1503_135_fu_20401_p1() {
    zext_ln1503_135_fu_20401_p1 = esl_zext<3,2>(add_ln1503_136_fu_20395_p2.read());
}

void dense_512_256_s::thread_zext_ln1503_136_fu_20411_p1() {
    zext_ln1503_136_fu_20411_p1 = esl_zext<3,2>(add_ln1503_137_fu_20405_p2.read());
}

void dense_512_256_s::thread_zext_ln1503_137_fu_25547_p1() {
    zext_ln1503_137_fu_25547_p1 = esl_zext<4,3>(add_ln1503_138_reg_32361.read());
}

void dense_512_256_s::thread_zext_ln1503_138_fu_20427_p1() {
    zext_ln1503_138_fu_20427_p1 = esl_zext<3,2>(add_ln1503_139_fu_20421_p2.read());
}

void dense_512_256_s::thread_zext_ln1503_139_fu_20437_p1() {
    zext_ln1503_139_fu_20437_p1 = esl_zext<3,2>(add_ln1503_140_fu_20431_p2.read());
}

void dense_512_256_s::thread_zext_ln1503_13_fu_25162_p1() {
    zext_ln1503_13_fu_25162_p1 = esl_zext<4,3>(add_ln1503_14_reg_32206.read());
}

void dense_512_256_s::thread_zext_ln1503_140_fu_25550_p1() {
    zext_ln1503_140_fu_25550_p1 = esl_zext<4,3>(add_ln1503_141_reg_32366.read());
}

void dense_512_256_s::thread_zext_ln1503_141_fu_25559_p1() {
    zext_ln1503_141_fu_25559_p1 = esl_zext<5,4>(add_ln1503_142_fu_25553_p2.read());
}

void dense_512_256_s::thread_zext_ln1503_142_fu_25569_p1() {
    zext_ln1503_142_fu_25569_p1 = esl_zext<6,5>(add_ln1503_143_fu_25563_p2.read());
}

void dense_512_256_s::thread_zext_ln1503_143_fu_20453_p1() {
    zext_ln1503_143_fu_20453_p1 = esl_zext<3,2>(add_ln1503_144_fu_20447_p2.read());
}

void dense_512_256_s::thread_zext_ln1503_144_fu_20463_p1() {
    zext_ln1503_144_fu_20463_p1 = esl_zext<3,2>(add_ln1503_145_fu_20457_p2.read());
}

void dense_512_256_s::thread_zext_ln1503_145_fu_25573_p1() {
    zext_ln1503_145_fu_25573_p1 = esl_zext<4,3>(add_ln1503_146_reg_32371.read());
}

void dense_512_256_s::thread_zext_ln1503_146_fu_20479_p1() {
    zext_ln1503_146_fu_20479_p1 = esl_zext<3,2>(add_ln1503_147_fu_20473_p2.read());
}

void dense_512_256_s::thread_zext_ln1503_147_fu_20489_p1() {
    zext_ln1503_147_fu_20489_p1 = esl_zext<3,2>(add_ln1503_148_fu_20483_p2.read());
}

void dense_512_256_s::thread_zext_ln1503_148_fu_25576_p1() {
    zext_ln1503_148_fu_25576_p1 = esl_zext<4,3>(add_ln1503_149_reg_32376.read());
}

void dense_512_256_s::thread_zext_ln1503_149_fu_25585_p1() {
    zext_ln1503_149_fu_25585_p1 = esl_zext<5,4>(add_ln1503_150_fu_25579_p2.read());
}

void dense_512_256_s::thread_zext_ln1503_14_fu_25171_p1() {
    zext_ln1503_14_fu_25171_p1 = esl_zext<5,4>(add_ln1503_15_fu_25165_p2.read());
}

void dense_512_256_s::thread_zext_ln1503_150_fu_20505_p1() {
    zext_ln1503_150_fu_20505_p1 = esl_zext<3,2>(add_ln1503_151_fu_20499_p2.read());
}

void dense_512_256_s::thread_zext_ln1503_151_fu_20515_p1() {
    zext_ln1503_151_fu_20515_p1 = esl_zext<3,2>(add_ln1503_152_fu_20509_p2.read());
}

void dense_512_256_s::thread_zext_ln1503_152_fu_25589_p1() {
    zext_ln1503_152_fu_25589_p1 = esl_zext<4,3>(add_ln1503_153_reg_32381.read());
}

void dense_512_256_s::thread_zext_ln1503_153_fu_20531_p1() {
    zext_ln1503_153_fu_20531_p1 = esl_zext<3,2>(add_ln1503_154_fu_20525_p2.read());
}

void dense_512_256_s::thread_zext_ln1503_154_fu_20541_p1() {
    zext_ln1503_154_fu_20541_p1 = esl_zext<3,2>(add_ln1503_155_fu_20535_p2.read());
}

void dense_512_256_s::thread_zext_ln1503_155_fu_25592_p1() {
    zext_ln1503_155_fu_25592_p1 = esl_zext<4,3>(add_ln1503_156_reg_32386.read());
}

void dense_512_256_s::thread_zext_ln1503_156_fu_25601_p1() {
    zext_ln1503_156_fu_25601_p1 = esl_zext<5,4>(add_ln1503_157_fu_25595_p2.read());
}

void dense_512_256_s::thread_zext_ln1503_157_fu_25611_p1() {
    zext_ln1503_157_fu_25611_p1 = esl_zext<6,5>(add_ln1503_158_fu_25605_p2.read());
}

void dense_512_256_s::thread_zext_ln1503_158_fu_25621_p1() {
    zext_ln1503_158_fu_25621_p1 = esl_zext<7,6>(add_ln1503_159_fu_25615_p2.read());
}

void dense_512_256_s::thread_zext_ln1503_159_fu_20557_p1() {
    zext_ln1503_159_fu_20557_p1 = esl_zext<3,2>(add_ln1503_160_fu_20551_p2.read());
}

void dense_512_256_s::thread_zext_ln1503_15_fu_25181_p1() {
    zext_ln1503_15_fu_25181_p1 = esl_zext<6,5>(add_ln1503_16_fu_25175_p2.read());
}

void dense_512_256_s::thread_zext_ln1503_160_fu_20567_p1() {
    zext_ln1503_160_fu_20567_p1 = esl_zext<3,2>(add_ln1503_161_fu_20561_p2.read());
}

void dense_512_256_s::thread_zext_ln1503_161_fu_25625_p1() {
    zext_ln1503_161_fu_25625_p1 = esl_zext<4,3>(add_ln1503_162_reg_32391.read());
}

void dense_512_256_s::thread_zext_ln1503_162_fu_20583_p1() {
    zext_ln1503_162_fu_20583_p1 = esl_zext<3,2>(add_ln1503_163_fu_20577_p2.read());
}

void dense_512_256_s::thread_zext_ln1503_163_fu_20593_p1() {
    zext_ln1503_163_fu_20593_p1 = esl_zext<3,2>(add_ln1503_164_fu_20587_p2.read());
}

void dense_512_256_s::thread_zext_ln1503_164_fu_25628_p1() {
    zext_ln1503_164_fu_25628_p1 = esl_zext<4,3>(add_ln1503_165_reg_32396.read());
}

void dense_512_256_s::thread_zext_ln1503_165_fu_25637_p1() {
    zext_ln1503_165_fu_25637_p1 = esl_zext<5,4>(add_ln1503_166_fu_25631_p2.read());
}

void dense_512_256_s::thread_zext_ln1503_166_fu_20609_p1() {
    zext_ln1503_166_fu_20609_p1 = esl_zext<3,2>(add_ln1503_167_fu_20603_p2.read());
}

void dense_512_256_s::thread_zext_ln1503_167_fu_20619_p1() {
    zext_ln1503_167_fu_20619_p1 = esl_zext<3,2>(add_ln1503_168_fu_20613_p2.read());
}

void dense_512_256_s::thread_zext_ln1503_168_fu_25641_p1() {
    zext_ln1503_168_fu_25641_p1 = esl_zext<4,3>(add_ln1503_169_reg_32401.read());
}

void dense_512_256_s::thread_zext_ln1503_169_fu_20635_p1() {
    zext_ln1503_169_fu_20635_p1 = esl_zext<3,2>(add_ln1503_170_fu_20629_p2.read());
}

void dense_512_256_s::thread_zext_ln1503_16_fu_19621_p1() {
    zext_ln1503_16_fu_19621_p1 = esl_zext<3,2>(add_ln1503_17_fu_19615_p2.read());
}

void dense_512_256_s::thread_zext_ln1503_170_fu_20645_p1() {
    zext_ln1503_170_fu_20645_p1 = esl_zext<3,2>(add_ln1503_171_fu_20639_p2.read());
}

void dense_512_256_s::thread_zext_ln1503_171_fu_25644_p1() {
    zext_ln1503_171_fu_25644_p1 = esl_zext<4,3>(add_ln1503_172_reg_32406.read());
}

void dense_512_256_s::thread_zext_ln1503_172_fu_25653_p1() {
    zext_ln1503_172_fu_25653_p1 = esl_zext<5,4>(add_ln1503_173_fu_25647_p2.read());
}

void dense_512_256_s::thread_zext_ln1503_173_fu_25663_p1() {
    zext_ln1503_173_fu_25663_p1 = esl_zext<6,5>(add_ln1503_174_fu_25657_p2.read());
}

void dense_512_256_s::thread_zext_ln1503_174_fu_20661_p1() {
    zext_ln1503_174_fu_20661_p1 = esl_zext<3,2>(add_ln1503_175_fu_20655_p2.read());
}

void dense_512_256_s::thread_zext_ln1503_175_fu_20671_p1() {
    zext_ln1503_175_fu_20671_p1 = esl_zext<3,2>(add_ln1503_176_fu_20665_p2.read());
}

void dense_512_256_s::thread_zext_ln1503_176_fu_25667_p1() {
    zext_ln1503_176_fu_25667_p1 = esl_zext<4,3>(add_ln1503_177_reg_32411.read());
}

void dense_512_256_s::thread_zext_ln1503_177_fu_20687_p1() {
    zext_ln1503_177_fu_20687_p1 = esl_zext<3,2>(add_ln1503_178_fu_20681_p2.read());
}

void dense_512_256_s::thread_zext_ln1503_178_fu_20697_p1() {
    zext_ln1503_178_fu_20697_p1 = esl_zext<3,2>(add_ln1503_179_fu_20691_p2.read());
}

void dense_512_256_s::thread_zext_ln1503_179_fu_25670_p1() {
    zext_ln1503_179_fu_25670_p1 = esl_zext<4,3>(add_ln1503_180_reg_32416.read());
}

void dense_512_256_s::thread_zext_ln1503_17_fu_19631_p1() {
    zext_ln1503_17_fu_19631_p1 = esl_zext<3,2>(add_ln1503_18_fu_19625_p2.read());
}

void dense_512_256_s::thread_zext_ln1503_180_fu_25679_p1() {
    zext_ln1503_180_fu_25679_p1 = esl_zext<5,4>(add_ln1503_181_fu_25673_p2.read());
}

void dense_512_256_s::thread_zext_ln1503_181_fu_20713_p1() {
    zext_ln1503_181_fu_20713_p1 = esl_zext<3,2>(add_ln1503_182_fu_20707_p2.read());
}

void dense_512_256_s::thread_zext_ln1503_182_fu_20723_p1() {
    zext_ln1503_182_fu_20723_p1 = esl_zext<3,2>(add_ln1503_183_fu_20717_p2.read());
}

void dense_512_256_s::thread_zext_ln1503_183_fu_25683_p1() {
    zext_ln1503_183_fu_25683_p1 = esl_zext<4,3>(add_ln1503_184_reg_32421.read());
}

void dense_512_256_s::thread_zext_ln1503_184_fu_20739_p1() {
    zext_ln1503_184_fu_20739_p1 = esl_zext<3,2>(add_ln1503_185_fu_20733_p2.read());
}

void dense_512_256_s::thread_zext_ln1503_185_fu_20749_p1() {
    zext_ln1503_185_fu_20749_p1 = esl_zext<3,2>(add_ln1503_186_fu_20743_p2.read());
}

void dense_512_256_s::thread_zext_ln1503_186_fu_25686_p1() {
    zext_ln1503_186_fu_25686_p1 = esl_zext<4,3>(add_ln1503_187_reg_32426.read());
}

void dense_512_256_s::thread_zext_ln1503_187_fu_25695_p1() {
    zext_ln1503_187_fu_25695_p1 = esl_zext<5,4>(add_ln1503_188_fu_25689_p2.read());
}

void dense_512_256_s::thread_zext_ln1503_188_fu_25705_p1() {
    zext_ln1503_188_fu_25705_p1 = esl_zext<6,5>(add_ln1503_189_fu_25699_p2.read());
}

void dense_512_256_s::thread_zext_ln1503_189_fu_25715_p1() {
    zext_ln1503_189_fu_25715_p1 = esl_zext<7,6>(add_ln1503_190_fu_25709_p2.read());
}

void dense_512_256_s::thread_zext_ln1503_18_fu_25185_p1() {
    zext_ln1503_18_fu_25185_p1 = esl_zext<4,3>(add_ln1503_19_reg_32211.read());
}

void dense_512_256_s::thread_zext_ln1503_190_fu_26711_p1() {
    zext_ln1503_190_fu_26711_p1 = esl_zext<8,7>(add_ln1503_191_reg_32841.read());
}

void dense_512_256_s::thread_zext_ln1503_191_fu_20765_p1() {
    zext_ln1503_191_fu_20765_p1 = esl_zext<3,2>(add_ln1503_192_fu_20759_p2.read());
}

void dense_512_256_s::thread_zext_ln1503_192_fu_20775_p1() {
    zext_ln1503_192_fu_20775_p1 = esl_zext<3,2>(add_ln1503_193_fu_20769_p2.read());
}

void dense_512_256_s::thread_zext_ln1503_193_fu_25725_p1() {
    zext_ln1503_193_fu_25725_p1 = esl_zext<4,3>(add_ln1503_194_reg_32431.read());
}

void dense_512_256_s::thread_zext_ln1503_194_fu_20791_p1() {
    zext_ln1503_194_fu_20791_p1 = esl_zext<3,2>(add_ln1503_195_fu_20785_p2.read());
}

void dense_512_256_s::thread_zext_ln1503_195_fu_20801_p1() {
    zext_ln1503_195_fu_20801_p1 = esl_zext<3,2>(add_ln1503_196_fu_20795_p2.read());
}

void dense_512_256_s::thread_zext_ln1503_196_fu_25728_p1() {
    zext_ln1503_196_fu_25728_p1 = esl_zext<4,3>(add_ln1503_197_reg_32436.read());
}

void dense_512_256_s::thread_zext_ln1503_197_fu_25737_p1() {
    zext_ln1503_197_fu_25737_p1 = esl_zext<5,4>(add_ln1503_198_fu_25731_p2.read());
}

void dense_512_256_s::thread_zext_ln1503_198_fu_20817_p1() {
    zext_ln1503_198_fu_20817_p1 = esl_zext<3,2>(add_ln1503_199_fu_20811_p2.read());
}

void dense_512_256_s::thread_zext_ln1503_199_fu_20827_p1() {
    zext_ln1503_199_fu_20827_p1 = esl_zext<3,2>(add_ln1503_200_fu_20821_p2.read());
}

void dense_512_256_s::thread_zext_ln1503_19_fu_19647_p1() {
    zext_ln1503_19_fu_19647_p1 = esl_zext<3,2>(add_ln1503_20_fu_19641_p2.read());
}

void dense_512_256_s::thread_zext_ln1503_1_fu_19517_p1() {
    zext_ln1503_1_fu_19517_p1 = esl_zext<3,2>(add_ln1503_2_fu_19511_p2.read());
}

void dense_512_256_s::thread_zext_ln1503_200_fu_25741_p1() {
    zext_ln1503_200_fu_25741_p1 = esl_zext<4,3>(add_ln1503_201_reg_32441.read());
}

void dense_512_256_s::thread_zext_ln1503_201_fu_20843_p1() {
    zext_ln1503_201_fu_20843_p1 = esl_zext<3,2>(add_ln1503_202_fu_20837_p2.read());
}

void dense_512_256_s::thread_zext_ln1503_202_fu_20853_p1() {
    zext_ln1503_202_fu_20853_p1 = esl_zext<3,2>(add_ln1503_203_fu_20847_p2.read());
}

void dense_512_256_s::thread_zext_ln1503_203_fu_25744_p1() {
    zext_ln1503_203_fu_25744_p1 = esl_zext<4,3>(add_ln1503_204_reg_32446.read());
}

void dense_512_256_s::thread_zext_ln1503_204_fu_25753_p1() {
    zext_ln1503_204_fu_25753_p1 = esl_zext<5,4>(add_ln1503_205_fu_25747_p2.read());
}

void dense_512_256_s::thread_zext_ln1503_205_fu_25763_p1() {
    zext_ln1503_205_fu_25763_p1 = esl_zext<6,5>(add_ln1503_206_fu_25757_p2.read());
}

void dense_512_256_s::thread_zext_ln1503_206_fu_20869_p1() {
    zext_ln1503_206_fu_20869_p1 = esl_zext<3,2>(add_ln1503_207_fu_20863_p2.read());
}

void dense_512_256_s::thread_zext_ln1503_207_fu_20879_p1() {
    zext_ln1503_207_fu_20879_p1 = esl_zext<3,2>(add_ln1503_208_fu_20873_p2.read());
}

void dense_512_256_s::thread_zext_ln1503_208_fu_25767_p1() {
    zext_ln1503_208_fu_25767_p1 = esl_zext<4,3>(add_ln1503_209_reg_32451.read());
}

void dense_512_256_s::thread_zext_ln1503_209_fu_20895_p1() {
    zext_ln1503_209_fu_20895_p1 = esl_zext<3,2>(add_ln1503_210_fu_20889_p2.read());
}

void dense_512_256_s::thread_zext_ln1503_20_fu_19657_p1() {
    zext_ln1503_20_fu_19657_p1 = esl_zext<3,2>(add_ln1503_21_fu_19651_p2.read());
}

void dense_512_256_s::thread_zext_ln1503_210_fu_20905_p1() {
    zext_ln1503_210_fu_20905_p1 = esl_zext<3,2>(add_ln1503_211_fu_20899_p2.read());
}

void dense_512_256_s::thread_zext_ln1503_211_fu_25770_p1() {
    zext_ln1503_211_fu_25770_p1 = esl_zext<4,3>(add_ln1503_212_reg_32456.read());
}

void dense_512_256_s::thread_zext_ln1503_212_fu_25779_p1() {
    zext_ln1503_212_fu_25779_p1 = esl_zext<5,4>(add_ln1503_213_fu_25773_p2.read());
}

void dense_512_256_s::thread_zext_ln1503_213_fu_20921_p1() {
    zext_ln1503_213_fu_20921_p1 = esl_zext<3,2>(add_ln1503_214_fu_20915_p2.read());
}

void dense_512_256_s::thread_zext_ln1503_214_fu_20931_p1() {
    zext_ln1503_214_fu_20931_p1 = esl_zext<3,2>(add_ln1503_215_fu_20925_p2.read());
}

void dense_512_256_s::thread_zext_ln1503_215_fu_25783_p1() {
    zext_ln1503_215_fu_25783_p1 = esl_zext<4,3>(add_ln1503_216_reg_32461.read());
}

void dense_512_256_s::thread_zext_ln1503_216_fu_20947_p1() {
    zext_ln1503_216_fu_20947_p1 = esl_zext<3,2>(add_ln1503_217_fu_20941_p2.read());
}

void dense_512_256_s::thread_zext_ln1503_217_fu_20957_p1() {
    zext_ln1503_217_fu_20957_p1 = esl_zext<3,2>(add_ln1503_218_fu_20951_p2.read());
}

void dense_512_256_s::thread_zext_ln1503_218_fu_25786_p1() {
    zext_ln1503_218_fu_25786_p1 = esl_zext<4,3>(add_ln1503_219_reg_32466.read());
}

void dense_512_256_s::thread_zext_ln1503_219_fu_25795_p1() {
    zext_ln1503_219_fu_25795_p1 = esl_zext<5,4>(add_ln1503_220_fu_25789_p2.read());
}

void dense_512_256_s::thread_zext_ln1503_21_fu_25188_p1() {
    zext_ln1503_21_fu_25188_p1 = esl_zext<4,3>(add_ln1503_22_reg_32216.read());
}

void dense_512_256_s::thread_zext_ln1503_220_fu_25805_p1() {
    zext_ln1503_220_fu_25805_p1 = esl_zext<6,5>(add_ln1503_221_fu_25799_p2.read());
}

void dense_512_256_s::thread_zext_ln1503_221_fu_25815_p1() {
    zext_ln1503_221_fu_25815_p1 = esl_zext<7,6>(add_ln1503_222_fu_25809_p2.read());
}

void dense_512_256_s::thread_zext_ln1503_222_fu_20973_p1() {
    zext_ln1503_222_fu_20973_p1 = esl_zext<3,2>(add_ln1503_223_fu_20967_p2.read());
}

void dense_512_256_s::thread_zext_ln1503_223_fu_20983_p1() {
    zext_ln1503_223_fu_20983_p1 = esl_zext<3,2>(add_ln1503_224_fu_20977_p2.read());
}

void dense_512_256_s::thread_zext_ln1503_224_fu_25819_p1() {
    zext_ln1503_224_fu_25819_p1 = esl_zext<4,3>(add_ln1503_225_reg_32471.read());
}

void dense_512_256_s::thread_zext_ln1503_225_fu_20999_p1() {
    zext_ln1503_225_fu_20999_p1 = esl_zext<3,2>(add_ln1503_226_fu_20993_p2.read());
}

void dense_512_256_s::thread_zext_ln1503_226_fu_21009_p1() {
    zext_ln1503_226_fu_21009_p1 = esl_zext<3,2>(add_ln1503_227_fu_21003_p2.read());
}

void dense_512_256_s::thread_zext_ln1503_227_fu_25822_p1() {
    zext_ln1503_227_fu_25822_p1 = esl_zext<4,3>(add_ln1503_228_reg_32476.read());
}

void dense_512_256_s::thread_zext_ln1503_228_fu_25831_p1() {
    zext_ln1503_228_fu_25831_p1 = esl_zext<5,4>(add_ln1503_229_fu_25825_p2.read());
}

void dense_512_256_s::thread_zext_ln1503_229_fu_21025_p1() {
    zext_ln1503_229_fu_21025_p1 = esl_zext<3,2>(add_ln1503_230_fu_21019_p2.read());
}

void dense_512_256_s::thread_zext_ln1503_22_fu_25197_p1() {
    zext_ln1503_22_fu_25197_p1 = esl_zext<5,4>(add_ln1503_23_fu_25191_p2.read());
}

void dense_512_256_s::thread_zext_ln1503_230_fu_21035_p1() {
    zext_ln1503_230_fu_21035_p1 = esl_zext<3,2>(add_ln1503_231_fu_21029_p2.read());
}

void dense_512_256_s::thread_zext_ln1503_231_fu_25835_p1() {
    zext_ln1503_231_fu_25835_p1 = esl_zext<4,3>(add_ln1503_232_reg_32481.read());
}

void dense_512_256_s::thread_zext_ln1503_232_fu_21051_p1() {
    zext_ln1503_232_fu_21051_p1 = esl_zext<3,2>(add_ln1503_233_fu_21045_p2.read());
}

void dense_512_256_s::thread_zext_ln1503_233_fu_21061_p1() {
    zext_ln1503_233_fu_21061_p1 = esl_zext<3,2>(add_ln1503_234_fu_21055_p2.read());
}

void dense_512_256_s::thread_zext_ln1503_234_fu_25838_p1() {
    zext_ln1503_234_fu_25838_p1 = esl_zext<4,3>(add_ln1503_235_reg_32486.read());
}

void dense_512_256_s::thread_zext_ln1503_235_fu_25847_p1() {
    zext_ln1503_235_fu_25847_p1 = esl_zext<5,4>(add_ln1503_236_fu_25841_p2.read());
}

void dense_512_256_s::thread_zext_ln1503_236_fu_25857_p1() {
    zext_ln1503_236_fu_25857_p1 = esl_zext<6,5>(add_ln1503_237_fu_25851_p2.read());
}

void dense_512_256_s::thread_zext_ln1503_237_fu_21077_p1() {
    zext_ln1503_237_fu_21077_p1 = esl_zext<3,2>(add_ln1503_238_fu_21071_p2.read());
}

void dense_512_256_s::thread_zext_ln1503_238_fu_21087_p1() {
    zext_ln1503_238_fu_21087_p1 = esl_zext<3,2>(add_ln1503_239_fu_21081_p2.read());
}

void dense_512_256_s::thread_zext_ln1503_239_fu_25861_p1() {
    zext_ln1503_239_fu_25861_p1 = esl_zext<4,3>(add_ln1503_240_reg_32491.read());
}

void dense_512_256_s::thread_zext_ln1503_23_fu_19673_p1() {
    zext_ln1503_23_fu_19673_p1 = esl_zext<3,2>(add_ln1503_24_fu_19667_p2.read());
}

void dense_512_256_s::thread_zext_ln1503_240_fu_21103_p1() {
    zext_ln1503_240_fu_21103_p1 = esl_zext<3,2>(add_ln1503_241_fu_21097_p2.read());
}

void dense_512_256_s::thread_zext_ln1503_241_fu_21113_p1() {
    zext_ln1503_241_fu_21113_p1 = esl_zext<3,2>(add_ln1503_242_fu_21107_p2.read());
}

void dense_512_256_s::thread_zext_ln1503_242_fu_25864_p1() {
    zext_ln1503_242_fu_25864_p1 = esl_zext<4,3>(add_ln1503_243_reg_32496.read());
}

void dense_512_256_s::thread_zext_ln1503_243_fu_25873_p1() {
    zext_ln1503_243_fu_25873_p1 = esl_zext<5,4>(add_ln1503_244_fu_25867_p2.read());
}

void dense_512_256_s::thread_zext_ln1503_244_fu_21129_p1() {
    zext_ln1503_244_fu_21129_p1 = esl_zext<3,2>(add_ln1503_245_fu_21123_p2.read());
}

void dense_512_256_s::thread_zext_ln1503_245_fu_21139_p1() {
    zext_ln1503_245_fu_21139_p1 = esl_zext<3,2>(add_ln1503_246_fu_21133_p2.read());
}

void dense_512_256_s::thread_zext_ln1503_246_fu_25877_p1() {
    zext_ln1503_246_fu_25877_p1 = esl_zext<4,3>(add_ln1503_247_reg_32501.read());
}

void dense_512_256_s::thread_zext_ln1503_247_fu_21155_p1() {
    zext_ln1503_247_fu_21155_p1 = esl_zext<3,2>(add_ln1503_248_fu_21149_p2.read());
}

void dense_512_256_s::thread_zext_ln1503_248_fu_21165_p1() {
    zext_ln1503_248_fu_21165_p1 = esl_zext<3,2>(add_ln1503_249_fu_21159_p2.read());
}

void dense_512_256_s::thread_zext_ln1503_249_fu_25880_p1() {
    zext_ln1503_249_fu_25880_p1 = esl_zext<4,3>(add_ln1503_250_reg_32506.read());
}

void dense_512_256_s::thread_zext_ln1503_24_fu_19683_p1() {
    zext_ln1503_24_fu_19683_p1 = esl_zext<3,2>(add_ln1503_25_fu_19677_p2.read());
}

void dense_512_256_s::thread_zext_ln1503_250_fu_25889_p1() {
    zext_ln1503_250_fu_25889_p1 = esl_zext<5,4>(add_ln1503_251_fu_25883_p2.read());
}

void dense_512_256_s::thread_zext_ln1503_251_fu_25899_p1() {
    zext_ln1503_251_fu_25899_p1 = esl_zext<6,5>(add_ln1503_252_fu_25893_p2.read());
}

void dense_512_256_s::thread_zext_ln1503_252_fu_25909_p1() {
    zext_ln1503_252_fu_25909_p1 = esl_zext<7,6>(add_ln1503_253_fu_25903_p2.read());
}

void dense_512_256_s::thread_zext_ln1503_253_fu_26714_p1() {
    zext_ln1503_253_fu_26714_p1 = esl_zext<8,7>(add_ln1503_254_reg_32846.read());
}

void dense_512_256_s::thread_zext_ln1503_254_fu_26723_p1() {
    zext_ln1503_254_fu_26723_p1 = esl_zext<9,8>(add_ln1503_255_fu_26717_p2.read());
}

void dense_512_256_s::thread_zext_ln1503_255_fu_26733_p1() {
    zext_ln1503_255_fu_26733_p1 = esl_zext<10,9>(add_ln1503_256_fu_26727_p2.read());
}

}

