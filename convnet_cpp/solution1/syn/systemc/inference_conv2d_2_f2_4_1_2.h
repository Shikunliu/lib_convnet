// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __inference_conv2d_2_f2_4_1_2_H__
#define __inference_conv2d_2_f2_4_1_2_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct inference_conv2d_2_f2_4_1_2_ram : public sc_core::sc_module {

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


   SC_CTOR(inference_conv2d_2_f2_4_1_2_ram) {
        ram[0] = "0b10111101110010111110110011010011";
        ram[1] = "0b10111011100011011111000100101111";
        ram[2] = "0b10111101011010000001001010111110";
        ram[3] = "0b10111101111001001110110101110000";
        ram[4] = "0b00111100010011001001100011001010";
        ram[5] = "0b00111101001010011001100110001100";
        ram[6] = "0b00111101101110000101101101110110";
        ram[7] = "0b00111101010110010110001011011101";
        ram[8] = "0b00111100001101001001000101101101";
        ram[9] = "0b10111101011101011001001100101010";
        ram[10] = "0b10111101100001101110101110010010";
        ram[11] = "0b00111101001111111000101010101010";
        ram[12] = "0b00111110000111101111111011010110";
        ram[13] = "0b10111101100011110101001010101100";
        ram[14] = "0b00111110010111101110010010011111";
        ram[15] = "0b10111110001110000111001000101010";


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


SC_MODULE(inference_conv2d_2_f2_4_1_2) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 16;
static const unsigned AddressWidth = 4;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


inference_conv2d_2_f2_4_1_2_ram* meminst;


SC_CTOR(inference_conv2d_2_f2_4_1_2) {
meminst = new inference_conv2d_2_f2_4_1_2_ram("inference_conv2d_2_f2_4_1_2_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~inference_conv2d_2_f2_4_1_2() {
    delete meminst;
}


};//endmodule
#endif
