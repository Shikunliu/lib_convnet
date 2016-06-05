// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __inference_conv2d_2_f2_4_1_4_H__
#define __inference_conv2d_2_f2_4_1_4_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct inference_conv2d_2_f2_4_1_4_ram : public sc_core::sc_module {

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


   SC_CTOR(inference_conv2d_2_f2_4_1_4_ram) {
        ram[0] = "0b10111101011111000111101010001010";
        ram[1] = "0b00111101001111011110111000001101";
        ram[2] = "0b10111101001000001011110011110100";
        ram[3] = "0b10111101100110101100000110101010";
        ram[4] = "0b00111101110110001110011011010001";
        ram[5] = "0b00111110011011010001100001001100";
        ram[6] = "0b10111101100110001011001011001111";
        ram[7] = "0b00111101110011101100100101011100";
        ram[8] = "0b10111110000100111000110000010001";
        ram[9] = "0b10111100011101001110101010001110";
        ram[10] = "0b10111110001000011101110111100011";
        ram[11] = "0b00111101100011100000000100100010";
        ram[12] = "0b00111110000110111010000111110101";
        ram[13] = "0b00111101100010101000100111101111";
        ram[14] = "0b10111100101001000000001011011111";
        ram[15] = "0b10111100001110101010100101001001";


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


SC_MODULE(inference_conv2d_2_f2_4_1_4) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 16;
static const unsigned AddressWidth = 4;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


inference_conv2d_2_f2_4_1_4_ram* meminst;


SC_CTOR(inference_conv2d_2_f2_4_1_4) {
meminst = new inference_conv2d_2_f2_4_1_4_ram("inference_conv2d_2_f2_4_1_4_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~inference_conv2d_2_f2_4_1_4() {
    delete meminst;
}


};//endmodule
#endif
