// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __inference_conv2d_2_f2_4_1_5_H__
#define __inference_conv2d_2_f2_4_1_5_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct inference_conv2d_2_f2_4_1_5_ram : public sc_core::sc_module {

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


   SC_CTOR(inference_conv2d_2_f2_4_1_5_ram) {
        ram[0] = "0b00111101110010111110110110110111";
        ram[1] = "0b00111101101110111001100111010100";
        ram[2] = "0b10111101011000101010000100010101";
        ram[3] = "0b10111011110100111100001101110111";
        ram[4] = "0b00111110000111000101001110110001";
        ram[5] = "0b00111110000011011101100011111001";
        ram[6] = "0b10111110011010000111011010011111";
        ram[7] = "0b10111110010011000111000101010000";
        ram[8] = "0b00111101100100011011000010111111";
        ram[9] = "0b00111101101111100011111101000011";
        ram[10] = "0b10111100101110001000100000000111";
        ram[11] = "0b10111101011101111101000111111110";
        ram[12] = "0b00111101101100000000000100110101";
        ram[13] = "0b00111101100110000001111111001100";
        ram[14] = "0b10111110000100010001000101101011";
        ram[15] = "0b00111101011001010000001000110011";


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


SC_MODULE(inference_conv2d_2_f2_4_1_5) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 16;
static const unsigned AddressWidth = 4;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


inference_conv2d_2_f2_4_1_5_ram* meminst;


SC_CTOR(inference_conv2d_2_f2_4_1_5) {
meminst = new inference_conv2d_2_f2_4_1_5_ram("inference_conv2d_2_f2_4_1_5_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~inference_conv2d_2_f2_4_1_5() {
    delete meminst;
}


};//endmodule
#endif
