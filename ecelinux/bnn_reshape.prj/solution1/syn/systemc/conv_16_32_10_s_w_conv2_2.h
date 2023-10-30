// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __conv_16_32_10_s_w_conv2_2_H__
#define __conv_16_32_10_s_w_conv2_2_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct conv_16_32_10_s_w_conv2_2_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 16;
  static const unsigned AddressRange = 96;
  static const unsigned AddressWidth = 7;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(conv_16_32_10_s_w_conv2_2_ram) {
        ram[0] = "0b0100111001001110";
        ram[1] = "0b0011111000101000";
        ram[2] = "0b1101111000001111";
        ram[3] = "0b0101111011111101";
        ram[4] = "0b0010001101000000";
        ram[5] = "0b0111011101001001";
        ram[6] = "0b1011111011101010";
        ram[7] = "0b0110000010100000";
        ram[8] = "0b1101110001111011";
        ram[9] = "0b1001010000100001";
        ram[10] = "0b1101110000101001";
        ram[11] = "0b1101110000101101";
        ram[12] = "0b0111001010001010";
        ram[13] = "0b1111110111110111";
        ram[14] = "0b1111110101111111";
        ram[15] = "0b0001000001001111";
        ram[16] = "0b0101100111100110";
        ram[17] = "0b1110001110011100";
        ram[18] = "0b1101110001101111";
        ram[19] = "0b1101110101100101";
        ram[20] = "0b1000111000010110";
        ram[21] = "0b1100000100101100";
        ram[22] = "0b0001110111011000";
        ram[23] = "0b1111000111110111";
        ram[24] = "0b1010000100000110";
        ram[25] = "0b1111100011111001";
        ram[26] = "0b1101000111110110";
        ram[27] = "0b0111011100001101";
        ram[28] = "0b0011111000001001";
        ram[29] = "0b0101111000101101";
        ram[30] = "0b1101100011001111";
        ram[31] = "0b1011001011100100";
        ram[32] = "0b1011001001111000";
        ram[33] = "0b1001111000001111";
        ram[34] = "0b0101111000001100";
        ram[35] = "0b1101010000111111";
        ram[36] = "0b1100000001110110";
        ram[37] = "0b1100110100111111";
        ram[38] = "0b1101110000101111";
        ram[39] = "0b1100100101010110";
        ram[40] = "0b1100110101111101";
        ram[41] = "0b1001111101001100";
        ram[42] = "0b1110100011000010";
        ram[43] = "0b1101110100110111";
        ram[44] = "0b1101110001110111";
        ram[45] = "0b0100000111100111";
        ram[46] = "0b1100110011110111";
        ram[47] = "0b1100100000101110";
        ram[48] = "0b0011101010100111";
        ram[49] = "0b1100000011110110";
        ram[50] = "0b1101110111111101";
        ram[51] = "0b1010101001001100";
        ram[52] = "0b1011111100001000";
        ram[53] = "0b1011111100101001";
        ram[54] = "0b0101111101111111";
        ram[55] = "0b1110100111110111";
        ram[56] = "0b0111110101111101";
        ram[57] = "0b1001010100101010";
        ram[58] = "0b0001010000101011";
        ram[59] = "0b0101110111110001";
        ram[60] = "0b1100000010110110";
        ram[61] = "0b0111111010001001";
        ram[62] = "0b0111110011110110";
        ram[63] = "0b1000111000000011";
        ram[64] = "0b0001111000001100";
        ram[65] = "0b0011111000101011";
        ram[66] = "0b1101010001101111";
        ram[67] = "0b0001010000001111";
        ram[68] = "0b0010101100011011";
        ram[69] = "0b0111111101111000";
        ram[70] = "0b1111100100010101";
        ram[71] = "0b1110001110011010";
        ram[72] = "0b1101010101111101";
        ram[73] = "0b1111110110101111";
        ram[74] = "0b0111111110001100";
        ram[75] = "0b0101100000010111";
        ram[76] = "0b0001111100001101";
        ram[77] = "0b1001110000101111";
        ram[78] = "0b1010100000010110";
        ram[79] = "0b1100100010100010";
        ram[80] = "0b1100100001110010";
        ram[81] = "0b1001010110110100";
        ram[82] = "0b1111011011001101";
        ram[83] = "0b0101101010001001";
        ram[84] = "0b1111101000001010";
        ram[85] = "0b1101100000011010";
        ram[86] = "0b0101001011110101";
        ram[87] = "0b1001110100101101";
        ram[88] = "0b1001110000101110";
        ram[89] = "0b1101110111110111";
        ram[90] = "0b1100101100011100";
        ram[91] = "0b0101111100011111";
        ram[92] = "0b1001111100101111";
        ram[93] = "0b1101110100111011";
        ram[94] = "0b1010110100110110";
        ram[95] = "0b0001111101101101";


SC_METHOD(prc_write_0);
  sensitive<<clk.pos();
   }


void prc_write_0()
{
    if (ce0.read() == sc_dt::Log_1) 
    {
            if(address0.read().is_01() && address0.read().to_uint()<AddressRange)
              q0 = ram[address0.read().to_uint()];
            else
              q0 = sc_lv<DataWidth>();
    }
}


}; //endmodule


SC_MODULE(conv_16_32_10_s_w_conv2_2) {


static const unsigned DataWidth = 16;
static const unsigned AddressRange = 96;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


conv_16_32_10_s_w_conv2_2_ram* meminst;


SC_CTOR(conv_16_32_10_s_w_conv2_2) {
meminst = new conv_16_32_10_s_w_conv2_2_ram("conv_16_32_10_s_w_conv2_2_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~conv_16_32_10_s_w_conv2_2() {
    delete meminst;
}


};//endmodule
#endif
