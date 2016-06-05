// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __inference_conv2d_2_f2_0_2_5_H__
#define __inference_conv2d_2_f2_0_2_5_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct inference_conv2d_2_f2_0_2_5_ram : public sc_core::sc_module {

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


   SC_CTOR(inference_conv2d_2_f2_0_2_5_ram) {
        ram[0] = "0b00111110000100111001111011110001";
        ram[1] = "0b00111101001100111100011001010001";
        ram[2] = "0b00111110001010100111001101110001";
        ram[3] = "0b10111101100101110101111001100011";
        ram[4] = "0b00111010101110100100111110011101";
        ram[5] = "0b10111110001001100010000011101111";
        ram[6] = "0b10111100101000100011000101001101";
        ram[7] = "0b10111101100010101011110000101001";
        ram[8] = "0b10111100100100001010001010110000";
        ram[9] = "0b10111101101001001110001001010010";
        ram[10] = "0b10111110010000100110011010111010";
        ram[11] = "0b10111101111010001110111001101100";
        ram[12] = "0b00111100001010011101000010110100";
        ram[13] = "0b10111101010111110011000110111111";
        ram[14] = "0b10111110010000100011000000110100";
        ram[15] = "0b00111101111001111111011001101111";


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


SC_MODULE(inference_conv2d_2_f2_0_2_5) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 16;
static const unsigned AddressWidth = 4;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


inference_conv2d_2_f2_0_2_5_ram* meminst;


SC_CTOR(inference_conv2d_2_f2_0_2_5) {
meminst = new inference_conv2d_2_f2_0_2_5_ram("inference_conv2d_2_f2_0_2_5_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~inference_conv2d_2_f2_0_2_5() {
    delete meminst;
}


};//endmodule
#endif
