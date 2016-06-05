// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __inference_conv2d_2_f2_4_3_0_H__
#define __inference_conv2d_2_f2_4_3_0_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct inference_conv2d_2_f2_4_3_0_ram : public sc_core::sc_module {

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


   SC_CTOR(inference_conv2d_2_f2_4_3_0_ram) {
        ram[0] = "0b00111101111110110111111010010001";
        ram[1] = "0b10111100010111001001110001001110";
        ram[2] = "0b10111110000111100011100001100101";
        ram[3] = "0b10111101010001100011100001000011";
        ram[4] = "0b10111110010000100100001011010000";
        ram[5] = "0b10111101011000010110110101010011";
        ram[6] = "0b00111110010011101010100001010100";
        ram[7] = "0b10111101110010001110000111001001";
        ram[8] = "0b00111101110110101010100000100010";
        ram[9] = "0b10111110001011011111001000100100";
        ram[10] = "0b00111101101010110100011000110101";
        ram[11] = "0b00111101101000011101110000101001";
        ram[12] = "0b00111101001011110110111010111000";
        ram[13] = "0b00111110000000000000101001111100";
        ram[14] = "0b10111101110000110010010011010110";
        ram[15] = "0b10111110010000101110000000011010";


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


SC_MODULE(inference_conv2d_2_f2_4_3_0) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 16;
static const unsigned AddressWidth = 4;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


inference_conv2d_2_f2_4_3_0_ram* meminst;


SC_CTOR(inference_conv2d_2_f2_4_3_0) {
meminst = new inference_conv2d_2_f2_4_3_0_ram("inference_conv2d_2_f2_4_3_0_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~inference_conv2d_2_f2_4_3_0() {
    delete meminst;
}


};//endmodule
#endif
