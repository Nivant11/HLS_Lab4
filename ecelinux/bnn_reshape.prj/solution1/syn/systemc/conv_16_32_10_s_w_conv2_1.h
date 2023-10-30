// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __conv_16_32_10_s_w_conv2_1_H__
#define __conv_16_32_10_s_w_conv2_1_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct conv_16_32_10_s_w_conv2_1_ram : public sc_core::sc_module {

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


   SC_CTOR(conv_16_32_10_s_w_conv2_1_ram) {
        ram[0] = "0b1010001100001000";
        ram[1] = "0b1000001100001000";
        ram[2] = "0b1010001100011000";
        ram[3] = "0b0011000001011101";
        ram[4] = "0b1101110010000110";
        ram[5] = "0b1110001010010010";
        ram[6] = "0b1011111010011001";
        ram[7] = "0b1000000000010101";
        ram[8] = "0b1001010100001011";
        ram[9] = "0b1110001111110100";
        ram[10] = "0b1010001110110010";
        ram[11] = "0b1010001110110010";
        ram[12] = "0b1000110111110101";
        ram[13] = "0b1100110111110101";
        ram[14] = "0b0010000110000101";
        ram[15] = "0b0011000010001000";
        ram[16] = "0b0101010111101111";
        ram[17] = "0b1000100010110111";
        ram[18] = "0b1001001100001000";
        ram[19] = "0b0011011010101001";
        ram[20] = "0b1100110111100010";
        ram[21] = "0b0101000100101100";
        ram[22] = "0b0001110011001011";
        ram[23] = "0b0101000010010100";
        ram[24] = "0b1100110111110110";
        ram[25] = "0b0010110100101011";
        ram[26] = "0b0111100110110000";
        ram[27] = "0b1010001111110000";
        ram[28] = "0b1010001100110010";
        ram[29] = "0b1010001111110010";
        ram[30] = "0b1011110001001111";
        ram[31] = "0b0011110110111111";
        ram[32] = "0b1010100111110011";
        ram[33] = "0b0011001110001000";
        ram[34] = "0b1010001101001011";
        ram[35] = "0b1101011110111010";
        ram[36] = "0b1110001101000100";
        ram[37] = "0b0010111010011000";
        ram[38] = "0b1011001010001000";
        ram[39] = "0b1000110110101001";
        ram[40] = "0b0111111100001010";
        ram[41] = "0b1010101110011010";
        ram[42] = "0b1001110000110101";
        ram[43] = "0b0001110001101000";
        ram[44] = "0b0001011101011000";
        ram[45] = "0b1110000010011100";
        ram[46] = "0b0111111011011110";
        ram[47] = "0b0011110010101000";
        ram[48] = "0b0001110101101101";
        ram[49] = "0b1101110111100101";
        ram[50] = "0b1010001110001110";
        ram[51] = "0b0110111100101101";
        ram[52] = "0b1110011110010010";
        ram[53] = "0b1110100111110010";
        ram[54] = "0b0011110011010001";
        ram[55] = "0b1110000111110111";
        ram[56] = "0b1110111101100111";
        ram[57] = "0b0100110110001110";
        ram[58] = "0b1010011111000011";
        ram[59] = "0b1111001001001001";
        ram[60] = "0b0100110000110111";
        ram[61] = "0b0100001110000110";
        ram[62] = "0b0101110111101101";
        ram[63] = "0b0100111101000100";
        ram[64] = "0b1010101100110000";
        ram[65] = "0b1010101111010000";
        ram[66] = "0b1001101110111101";
        ram[67] = "0b1010101110010110";
        ram[68] = "0b0100001011110010";
        ram[69] = "0b0010011111110111";
        ram[70] = "0b0110110111000111";
        ram[71] = "0b0110000111110111";
        ram[72] = "0b0111111000101011";
        ram[73] = "0b0101111000101101";
        ram[74] = "0b1011100110010110";
        ram[75] = "0b1001010110010110";
        ram[76] = "0b1100001110110110";
        ram[77] = "0b1010101111110110";
        ram[78] = "0b0001100111000110";
        ram[79] = "0b0101000001001000";
        ram[80] = "0b0001110011101101";
        ram[81] = "0b0101000000111101";
        ram[82] = "0b0011111010011011";
        ram[83] = "0b1110110111110010";
        ram[84] = "0b0011110010101010";
        ram[85] = "0b0101110001101101";
        ram[86] = "0b0001000000011100";
        ram[87] = "0b1010101111100010";
        ram[88] = "0b1110001110011001";
        ram[89] = "0b1101100011110111";
        ram[90] = "0b0001001101001000";
        ram[91] = "0b0001011000001000";
        ram[92] = "0b1010011100001000";
        ram[93] = "0b0011111001001100";
        ram[94] = "0b1001110110100011";
        ram[95] = "0b1010001110010110";


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


SC_MODULE(conv_16_32_10_s_w_conv2_1) {


static const unsigned DataWidth = 16;
static const unsigned AddressRange = 96;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


conv_16_32_10_s_w_conv2_1_ram* meminst;


SC_CTOR(conv_16_32_10_s_w_conv2_1) {
meminst = new conv_16_32_10_s_w_conv2_1_ram("conv_16_32_10_s_w_conv2_1_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~conv_16_32_10_s_w_conv2_1() {
    delete meminst;
}


};//endmodule
#endif
