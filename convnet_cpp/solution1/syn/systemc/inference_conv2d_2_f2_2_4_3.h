// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __inference_conv2d_2_f2_2_4_3_H__
#define __inference_conv2d_2_f2_2_4_3_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct inference_conv2d_2_f2_2_4_3_ram : public sc_core::sc_module {

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


   SC_CTOR(inference_conv2d_2_f2_2_4_3_ram) {
        ram[0] = "0b10111110011110011101111011001110";
        ram[1] = "0b10111101011010100001100101011110";
        ram[2] = "0b10111101000110110100010001000100";
        ram[3] = "0b10111110000101110111010111111011";
        ram[4] = "0b10111101111101101010000001010101";
        ram[5] = "0b00111101011101101001001111000000";
        ram[6] = "0b10111110010110111101100110001000";
        ram[7] = "0b10111101101001111111100000101001";
        ram[8] = "0b10111101111110010010001000010000";
        ram[9] = "0b10111110011010001011010100000011";
        ram[10] = "0b10111110001000010001000100100111";
        ram[11] = "0b10111110010110001010011100011110";
        ram[12] = "0b00111100100110000000011010000111";
        ram[13] = "0b00111101101110110110111101000010";
        ram[14] = "0b10111110000001010000000100011001";
        ram[15] = "0b10111110000111110100010110011110";


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


SC_MODULE(inference_conv2d_2_f2_2_4_3) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 16;
static const unsigned AddressWidth = 4;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


inference_conv2d_2_f2_2_4_3_ram* meminst;


SC_CTOR(inference_conv2d_2_f2_2_4_3) {
meminst = new inference_conv2d_2_f2_2_4_3_ram("inference_conv2d_2_f2_2_4_3_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~inference_conv2d_2_f2_2_4_3() {
    delete meminst;
}


};//endmodule
#endif
