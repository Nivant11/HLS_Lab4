// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __conv_1_16_18_s_w_conv1_2_H__
#define __conv_1_16_18_s_w_conv1_2_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct conv_1_16_18_s_w_conv1_2_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 1;
  static const unsigned AddressRange = 48;
  static const unsigned AddressWidth = 6;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(conv_1_16_18_s_w_conv1_2_ram) {
        ram[0] = "0b0";
        ram[1] = "0b1";
        ram[2] = "0b1";
        ram[3] = "0b1";
        ram[4] = "0b0";
        ram[5] = "0b0";
        ram[6] = "0b1";
        ram[7] = "0b1";
        ram[8] = "0b1";
        ram[9] = "0b1";
        ram[10] = "0b0";
        ram[11] = "0b0";
        ram[12] = "0b0";
        for (unsigned i = 13; i < 18 ; i = i + 1) {
            ram[i] = "0b1";
        }
        ram[18] = "0b0";
        ram[19] = "0b1";
        ram[20] = "0b1";
        ram[21] = "0b0";
        ram[22] = "0b0";
        ram[23] = "0b1";
        ram[24] = "0b0";
        ram[25] = "0b1";
        ram[26] = "0b1";
        ram[27] = "0b0";
        ram[28] = "0b0";
        ram[29] = "0b0";
        ram[30] = "0b1";
        ram[31] = "0b0";
        ram[32] = "0b1";
        ram[33] = "0b1";
        ram[34] = "0b1";
        ram[35] = "0b1";
        ram[36] = "0b0";
        ram[37] = "0b0";
        ram[38] = "0b1";
        ram[39] = "0b0";
        ram[40] = "0b0";
        ram[41] = "0b0";
        ram[42] = "0b0";
        ram[43] = "0b1";
        ram[44] = "0b1";
        ram[45] = "0b1";
        ram[46] = "0b1";
        ram[47] = "0b0";


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


SC_MODULE(conv_1_16_18_s_w_conv1_2) {


static const unsigned DataWidth = 1;
static const unsigned AddressRange = 48;
static const unsigned AddressWidth = 6;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


conv_1_16_18_s_w_conv1_2_ram* meminst;


SC_CTOR(conv_1_16_18_s_w_conv1_2) {
meminst = new conv_1_16_18_s_w_conv1_2_ram("conv_1_16_18_s_w_conv1_2_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~conv_1_16_18_s_w_conv1_2() {
    delete meminst;
}


};//endmodule
#endif
