// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __inference_conv2d_2_f2_2_0_4_H__
#define __inference_conv2d_2_f2_2_0_4_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct inference_conv2d_2_f2_2_0_4_ram : public sc_core::sc_module {

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


   SC_CTOR(inference_conv2d_2_f2_2_0_4_ram) {
        ram[0] = "0b00111110000101010111101110000101";
        ram[1] = "0b00111110000111000011011101100001";
        ram[2] = "0b10111110000110110101001010000111";
        ram[3] = "0b00111101011101000001101111111100";
        ram[4] = "0b00111101111010110110011100111100";
        ram[5] = "0b00111101111111001110101011110010";
        ram[6] = "0b00111101111000111010001110101001";
        ram[7] = "0b00111110000010110111111011010100";
        ram[8] = "0b00111101111110111001001100000011";
        ram[9] = "0b10111101110000101000000010000110";
        ram[10] = "0b00111110000001010011110001011000";
        ram[11] = "0b00111011111100010000110001110010";
        ram[12] = "0b00111101001111110110100100000001";
        ram[13] = "0b00111011100100010011000101000000";
        ram[14] = "0b10111100111000000101100100000110";
        ram[15] = "0b00111110001011000001000100011011";


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


SC_MODULE(inference_conv2d_2_f2_2_0_4) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 16;
static const unsigned AddressWidth = 4;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


inference_conv2d_2_f2_2_0_4_ram* meminst;


SC_CTOR(inference_conv2d_2_f2_2_0_4) {
meminst = new inference_conv2d_2_f2_2_0_4_ram("inference_conv2d_2_f2_2_0_4_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~inference_conv2d_2_f2_2_0_4() {
    delete meminst;
}


};//endmodule
#endif
