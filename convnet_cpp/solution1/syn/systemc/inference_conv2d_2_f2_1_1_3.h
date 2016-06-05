// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __inference_conv2d_2_f2_1_1_3_H__
#define __inference_conv2d_2_f2_1_1_3_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct inference_conv2d_2_f2_1_1_3_ram : public sc_core::sc_module {

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


   SC_CTOR(inference_conv2d_2_f2_1_1_3_ram) {
        ram[0] = "0b00111100011100001101111000100100";
        ram[1] = "0b10111110011110101100010101111110";
        ram[2] = "0b10111110011100010000011111111011";
        ram[3] = "0b00111101100100110110111100101110";
        ram[4] = "0b00111100001011101000101110011001";
        ram[5] = "0b10111110010001111111010011011100";
        ram[6] = "0b00111110011000000100000000111010";
        ram[7] = "0b00111100001111011101111111001010";
        ram[8] = "0b10111101101000110010010100001011";
        ram[9] = "0b10111110000010000001010100011010";
        ram[10] = "0b00111110001111001001001110100111";
        ram[11] = "0b10111101110111010010110110001000";
        ram[12] = "0b10111110001001100010000000100101";
        ram[13] = "0b10111101100011010011101101010010";
        ram[14] = "0b10111101101110100011101110011011";
        ram[15] = "0b10111110010100111011000000111110";


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


SC_MODULE(inference_conv2d_2_f2_1_1_3) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 16;
static const unsigned AddressWidth = 4;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


inference_conv2d_2_f2_1_1_3_ram* meminst;


SC_CTOR(inference_conv2d_2_f2_1_1_3) {
meminst = new inference_conv2d_2_f2_1_1_3_ram("inference_conv2d_2_f2_1_1_3_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~inference_conv2d_2_f2_1_1_3() {
    delete meminst;
}


};//endmodule
#endif
