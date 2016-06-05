// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __inference_conv2d_2_f2_0_3_4_H__
#define __inference_conv2d_2_f2_0_3_4_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct inference_conv2d_2_f2_0_3_4_ram : public sc_core::sc_module {

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


   SC_CTOR(inference_conv2d_2_f2_0_3_4_ram) {
        ram[0] = "0b10111101001110101000001001111101";
        ram[1] = "0b10111100001111111110000110010111";
        ram[2] = "0b00111101101110100011011000011010";
        ram[3] = "0b10111110010010000110011010100001";
        ram[4] = "0b00111101010000001000110101011001";
        ram[5] = "0b10111100101001000011101110110100";
        ram[6] = "0b00111101001111100010101001110011";
        ram[7] = "0b10111110000111010101101000011000";
        ram[8] = "0b00111101010001011010110100111001";
        ram[9] = "0b10111101100011011001000111111100";
        ram[10] = "0b10111100110000010100101010111001";
        ram[11] = "0b10111101100001111100111100000001";
        ram[12] = "0b00111101010010010111111100100000";
        ram[13] = "0b10111100110101100101100010011100";
        ram[14] = "0b00111101000000111000111010010101";
        ram[15] = "0b00111100001111111001100010011100";


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


SC_MODULE(inference_conv2d_2_f2_0_3_4) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 16;
static const unsigned AddressWidth = 4;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


inference_conv2d_2_f2_0_3_4_ram* meminst;


SC_CTOR(inference_conv2d_2_f2_0_3_4) {
meminst = new inference_conv2d_2_f2_0_3_4_ram("inference_conv2d_2_f2_0_3_4_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~inference_conv2d_2_f2_0_3_4() {
    delete meminst;
}


};//endmodule
#endif
