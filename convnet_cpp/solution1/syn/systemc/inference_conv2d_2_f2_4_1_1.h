// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __inference_conv2d_2_f2_4_1_1_H__
#define __inference_conv2d_2_f2_4_1_1_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct inference_conv2d_2_f2_4_1_1_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 32;
  static const unsigned AddressRange = 16;
  static const unsigned AddressWidth = 4;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(inference_conv2d_2_f2_4_1_1_ram) {
        ram[0] = "0b10111101100110001111111010011111";
        ram[1] = "0b10111101101101001100010011101001";
        ram[2] = "0b00111110000110001110000101010000";
        ram[3] = "0b00111101001000101011100100011000";
        ram[4] = "0b10111101111110110100011110000100";
        ram[5] = "0b10111101010110110110111001101011";
        ram[6] = "0b00111110100010110110010000010111";
        ram[7] = "0b00111101011110110101111111011000";
        ram[8] = "0b00111110011011001110000100111111";
        ram[9] = "0b00111100111000100110001111011000";
        ram[10] = "0b00111101010111111010010111101101";
        ram[11] = "0b00111101111001110111001001010000";
        ram[12] = "0b00111101001100010010011000101110";
        ram[13] = "0b00111101110010001111111110010000";
        ram[14] = "0b00111101111011000010100000101100";
        ram[15] = "0b00111110001100111100001101100001";


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


SC_MODULE(inference_conv2d_2_f2_4_1_1) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 16;
static const unsigned AddressWidth = 4;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


inference_conv2d_2_f2_4_1_1_ram* meminst;


SC_CTOR(inference_conv2d_2_f2_4_1_1) {
meminst = new inference_conv2d_2_f2_4_1_1_ram("inference_conv2d_2_f2_4_1_1_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~inference_conv2d_2_f2_4_1_1() {
    delete meminst;
}


};//endmodule
#endif
