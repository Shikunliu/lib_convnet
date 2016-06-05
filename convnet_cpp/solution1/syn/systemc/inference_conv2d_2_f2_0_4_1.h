// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __inference_conv2d_2_f2_0_4_1_H__
#define __inference_conv2d_2_f2_0_4_1_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct inference_conv2d_2_f2_0_4_1_ram : public sc_core::sc_module {

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


   SC_CTOR(inference_conv2d_2_f2_0_4_1_ram) {
        ram[0] = "0b00111101101011001110000011100001";
        ram[1] = "0b10111100010101111000110110000110";
        ram[2] = "0b10111101011100010110001001000011";
        ram[3] = "0b10111101001011001011001110111101";
        ram[4] = "0b10111101110001100100011110111011";
        ram[5] = "0b10111110001101101100000011010111";
        ram[6] = "0b00111101110000100110111010110010";
        ram[7] = "0b10111101111100010101110001100100";
        ram[8] = "0b00111110001000000111011011000000";
        ram[9] = "0b10111110000001101001110000100100";
        ram[10] = "0b00111110000000000010111010101001";
        ram[11] = "0b00111101101000111011111010000001";
        ram[12] = "0b00111101001000100111110100000011";
        ram[13] = "0b00111110000101000011001100001101";
        ram[14] = "0b00111101001101100100111101100010";
        ram[15] = "0b00111110010011001010001110100101";


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


SC_MODULE(inference_conv2d_2_f2_0_4_1) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 16;
static const unsigned AddressWidth = 4;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


inference_conv2d_2_f2_0_4_1_ram* meminst;


SC_CTOR(inference_conv2d_2_f2_0_4_1) {
meminst = new inference_conv2d_2_f2_0_4_1_ram("inference_conv2d_2_f2_0_4_1_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~inference_conv2d_2_f2_0_4_1() {
    delete meminst;
}


};//endmodule
#endif
