// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __conv_16_32_10_s_w_conv2_0_H__
#define __conv_16_32_10_s_w_conv2_0_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct conv_16_32_10_s_w_conv2_0_ram : public sc_core::sc_module {

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


   SC_CTOR(conv_16_32_10_s_w_conv2_0_ram) {
        ram[0] = "0b0001111011111011";
        ram[1] = "0b0110000111110110";
        ram[2] = "0b0101110111110011";
        ram[3] = "0b1001111000101010";
        ram[4] = "0b1101100100100000";
        ram[5] = "0b0100101010110100";
        ram[6] = "0b0011111000001011";
        ram[7] = "0b1100000111100110";
        ram[8] = "0b0010001110010110";
        ram[9] = "0b1100111000101011";
        ram[10] = "0b0000000011101011";
        ram[11] = "0b1111110111101011";
        ram[12] = "0b1110100010001001";
        ram[13] = "0b0001001100011100";
        ram[14] = "0b0011111001101101";
        ram[15] = "0b1101100111110101";
        ram[16] = "0b1001111000011110";
        ram[17] = "0b0111111001111110";
        ram[18] = "0b1100010011110011";
        ram[19] = "0b1010000111000010";
        ram[20] = "0b1101110101111111";
        ram[21] = "0b1101100101000100";
        ram[22] = "0b0110011010001100";
        ram[23] = "0b0101010011111101";
        ram[24] = "0b1101110001001101";
        ram[25] = "0b1101111100101110";
        ram[26] = "0b1101110101101101";
        ram[27] = "0b1010111001011011";
        ram[28] = "0b1101111100100010";
        ram[29] = "0b1101110101100001";
        ram[30] = "0b1011100000100000";
        ram[31] = "0b0101011011101101";
        ram[32] = "0b1101111101101111";
        ram[33] = "0b1110110001010011";
        ram[34] = "0b0110100111010101";
        ram[35] = "0b0010110111111100";
        ram[36] = "0b1000110000001001";
        ram[37] = "0b0001011010101000";
        ram[38] = "0b0101110011110111";
        ram[39] = "0b1100111100101101";
        ram[40] = "0b0101110100011010";
        ram[41] = "0b0101110001111111";
        ram[42] = "0b0100101000011101";
        ram[43] = "0b0001111101011100";
        ram[44] = "0b0011101100001100";
        ram[45] = "0b1100111100101110";
        ram[46] = "0b0011011000001000";
        ram[47] = "0b1111111101101001";
        ram[48] = "0b1010000110100101";
        ram[49] = "0b0011001001000101";
        ram[50] = "0b0111100001110000";
        ram[51] = "0b0010111100100000";
        ram[52] = "0b0011011110110101";
        ram[53] = "0b0101111101011101";
        ram[54] = "0b0111110000111011";
        ram[55] = "0b1000111100100100";
        ram[56] = "0b1011011100001101";
        ram[57] = "0b0110011001101001";
        ram[58] = "0b0111111111111100";
        ram[59] = "0b0101110010111110";
        ram[60] = "0b0101111000101100";
        ram[61] = "0b1100110001110111";
        ram[62] = "0b1110001110000101";
        ram[63] = "0b0001111011101101";
        ram[64] = "0b0101110011101101";
        ram[65] = "0b0111010111110101";
        ram[66] = "0b0110101110010010";
        ram[67] = "0b0110000111110101";
        ram[68] = "0b1100110000101101";
        ram[69] = "0b0101001100001010";
        ram[70] = "0b1111001100100101";
        ram[71] = "0b1111011001001101";
        ram[72] = "0b0010001110011000";
        ram[73] = "0b1010001101001000";
        ram[74] = "0b0101111011110001";
        ram[75] = "0b0011011001111001";
        ram[76] = "0b1011110011000110";
        ram[77] = "0b0110011110000101";
        ram[78] = "0b0101111001110101";
        ram[79] = "0b0001101101111110";
        ram[80] = "0b0001111001001100";
        ram[81] = "0b0100111000011010";
        ram[82] = "0b1010001110100000";
        ram[83] = "0b1101110011110101";
        ram[84] = "0b1110100011010111";
        ram[85] = "0b1110001110001000";
        ram[86] = "0b0111111100001000";
        ram[87] = "0b1001110100100111";
        ram[88] = "0b1100110110011111";
        ram[89] = "0b1100110100010111";
        ram[90] = "0b0101010011110010";
        ram[91] = "0b0010001111010101";
        ram[92] = "0b1110101011110010";
        ram[93] = "0b0110000111010100";
        ram[94] = "0b0000011101000101";
        ram[95] = "0b1110110011110011";


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


SC_MODULE(conv_16_32_10_s_w_conv2_0) {


static const unsigned DataWidth = 16;
static const unsigned AddressRange = 96;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


conv_16_32_10_s_w_conv2_0_ram* meminst;


SC_CTOR(conv_16_32_10_s_w_conv2_0) {
meminst = new conv_16_32_10_s_w_conv2_0_ram("conv_16_32_10_s_w_conv2_0_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~conv_16_32_10_s_w_conv2_0() {
    delete meminst;
}


};//endmodule
#endif
