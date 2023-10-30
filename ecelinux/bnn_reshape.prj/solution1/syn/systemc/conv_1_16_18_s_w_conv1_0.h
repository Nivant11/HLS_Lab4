// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __conv_1_16_18_s_w_conv1_0_H__
#define __conv_1_16_18_s_w_conv1_0_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct conv_1_16_18_s_w_conv1_0_ram : public sc_core::sc_module {

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


   SC_CTOR(conv_1_16_18_s_w_conv1_0_ram) {
        ram[0] = "0b1";
        for (unsigned i = 1; i < 12 ; i = i + 1) {
            ram[i] = "0b0";
        }
        ram[12] = "0b1";
        ram[13] = "0b0";
        ram[14] = "0b1";
        ram[15] = "0b0";
        ram[16] = "0b0";
        ram[17] = "0b0";
        ram[18] = "0b1";
        ram[19] = "0b1";
        ram[20] = "0b0";
        ram[21] = "0b0";
        for (unsigned i = 22; i < 30 ; i = i + 1) {
            ram[i] = "0b1";
        }
        for (unsigned i = 30; i < 40 ; i = i + 1) {
            ram[i] = "0b0";
        }
        ram[40] = "0b1";
        ram[41] = "0b1";
        ram[42] = "0b0";
        ram[43] = "0b1";
        ram[44] = "0b0";
        ram[45] = "0b0";
        ram[46] = "0b0";
        ram[47] = "0b1";


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


SC_MODULE(conv_1_16_18_s_w_conv1_0) {


static const unsigned DataWidth = 1;
static const unsigned AddressRange = 48;
static const unsigned AddressWidth = 6;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


conv_1_16_18_s_w_conv1_0_ram* meminst;


SC_CTOR(conv_1_16_18_s_w_conv1_0) {
meminst = new conv_1_16_18_s_w_conv1_0_ram("conv_1_16_18_s_w_conv1_0_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~conv_1_16_18_s_w_conv1_0() {
    delete meminst;
}


};//endmodule
#endif
