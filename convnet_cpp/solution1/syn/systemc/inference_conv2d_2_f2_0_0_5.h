// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __inference_conv2d_2_f2_0_0_5_H__
#define __inference_conv2d_2_f2_0_0_5_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct inference_conv2d_2_f2_0_0_5_ram : public sc_core::sc_module {

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


   SC_CTOR(inference_conv2d_2_f2_0_0_5_ram) {
        ram[0] = "0b00111100011011010101001011101010";
        ram[1] = "0b00111110000010011110000000011110";
        ram[2] = "0b00111011101100010111000011111100";
        ram[3] = "0b10111101000010101101111110101000";
        ram[4] = "0b00111100011011100010110100000100";
        ram[5] = "0b00111101100000011101100110111111";
        ram[6] = "0b10111011100010111000101110001111";
        ram[7] = "0b10111101100110000111101001011000";
        ram[8] = "0b00111101110100000000110001010010";
        ram[9] = "0b10111101101000111011110111000101";
        ram[10] = "0b00111100111010011111001011100011";
        ram[11] = "0b00111110001001001100101111100010";
        ram[12] = "0b10111110000001011111000101111100";
        ram[13] = "0b10111100011010001000000111001010";
        ram[14] = "0b10111101000101000010011111110000";
        ram[15] = "0b10111101111010111100001110000011";


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


SC_MODULE(inference_conv2d_2_f2_0_0_5) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 16;
static const unsigned AddressWidth = 4;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


inference_conv2d_2_f2_0_0_5_ram* meminst;


SC_CTOR(inference_conv2d_2_f2_0_0_5) {
meminst = new inference_conv2d_2_f2_0_0_5_ram("inference_conv2d_2_f2_0_0_5_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~inference_conv2d_2_f2_0_0_5() {
    delete meminst;
}


};//endmodule
#endif
