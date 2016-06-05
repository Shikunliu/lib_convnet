// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __inference_conv2d_2_f2_3_1_1_H__
#define __inference_conv2d_2_f2_3_1_1_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct inference_conv2d_2_f2_3_1_1_ram : public sc_core::sc_module {

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


   SC_CTOR(inference_conv2d_2_f2_3_1_1_ram) {
        ram[0] = "0b10111110010111011110000111100011";
        ram[1] = "0b10111100011110001100001111001100";
        ram[2] = "0b00111110010100010010010010001101";
        ram[3] = "0b10111110000101011100110101001111";
        ram[4] = "0b10111110001010001001011010011010";
        ram[5] = "0b00111101011111110000001100010101";
        ram[6] = "0b00111110010001101100000100011010";
        ram[7] = "0b10111101010101100101010101110111";
        ram[8] = "0b00111101010011101111000001000011";
        ram[9] = "0b00111101110011110001111001001011";
        ram[10] = "0b00111101000101000001001000000110";
        ram[11] = "0b00111101000011011001010101111111";
        ram[12] = "0b10111101010111001100011011000101";
        ram[13] = "0b00111110001001001111101010001011";
        ram[14] = "0b10111100111111100110101000110011";
        ram[15] = "0b10111101010001000000011011000000";


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


SC_MODULE(inference_conv2d_2_f2_3_1_1) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 16;
static const unsigned AddressWidth = 4;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


inference_conv2d_2_f2_3_1_1_ram* meminst;


SC_CTOR(inference_conv2d_2_f2_3_1_1) {
meminst = new inference_conv2d_2_f2_3_1_1_ram("inference_conv2d_2_f2_3_1_1_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~inference_conv2d_2_f2_3_1_1() {
    delete meminst;
}


};//endmodule
#endif
