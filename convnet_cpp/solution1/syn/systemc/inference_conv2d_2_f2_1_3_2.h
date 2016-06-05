// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __inference_conv2d_2_f2_1_3_2_H__
#define __inference_conv2d_2_f2_1_3_2_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct inference_conv2d_2_f2_1_3_2_ram : public sc_core::sc_module {

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


   SC_CTOR(inference_conv2d_2_f2_1_3_2_ram) {
        ram[0] = "0b10111110011000011110110110011110";
        ram[1] = "0b00111101000001010000111000100111";
        ram[2] = "0b00111100101000101010100001101100";
        ram[3] = "0b00111101111000011111101110000011";
        ram[4] = "0b10111101000010100101001001101001";
        ram[5] = "0b10111101001110000110001111110101";
        ram[6] = "0b10111100110001000100000000000001";
        ram[7] = "0b00111110000100000000110011011000";
        ram[8] = "0b00111101110110101011111110111010";
        ram[9] = "0b00111110001001100111110110111011";
        ram[10] = "0b10111101100100011000100001101110";
        ram[11] = "0b00111101010000111101100000010111";
        ram[12] = "0b00111101010010011001111111110010";
        ram[13] = "0b10111101000010011111010000001010";
        ram[14] = "0b00111100111001110100011001100000";
        ram[15] = "0b10111101100111011001001011100000";


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


SC_MODULE(inference_conv2d_2_f2_1_3_2) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 16;
static const unsigned AddressWidth = 4;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


inference_conv2d_2_f2_1_3_2_ram* meminst;


SC_CTOR(inference_conv2d_2_f2_1_3_2) {
meminst = new inference_conv2d_2_f2_1_3_2_ram("inference_conv2d_2_f2_1_3_2_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~inference_conv2d_2_f2_1_3_2() {
    delete meminst;
}


};//endmodule
#endif
