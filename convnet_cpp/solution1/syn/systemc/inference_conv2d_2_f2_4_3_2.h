// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __inference_conv2d_2_f2_4_3_2_H__
#define __inference_conv2d_2_f2_4_3_2_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct inference_conv2d_2_f2_4_3_2_ram : public sc_core::sc_module {

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


   SC_CTOR(inference_conv2d_2_f2_4_3_2_ram) {
        ram[0] = "0b00111101110100110101000110011100";
        ram[1] = "0b00111110000111101101010111110001";
        ram[2] = "0b10111010001110110100000100010010";
        ram[3] = "0b00111110001011110100111110010100";
        ram[4] = "0b00111101101111001111100110100000";
        ram[5] = "0b00111100101100011011011011000111";
        ram[6] = "0b00111101000111010000100111100001";
        ram[7] = "0b00111110000001000110010011011100";
        ram[8] = "0b10111110000100011010000010001100";
        ram[9] = "0b00111110000100111111111110101100";
        ram[10] = "0b00111100001100001011011010000001";
        ram[11] = "0b10111101110011011000010011010011";
        ram[12] = "0b00111101101101011011011000001000";
        ram[13] = "0b00111011111101101101101001100111";
        ram[14] = "0b10111101100100111000111000110111";
        ram[15] = "0b10111101000100100011101110100010";


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


SC_MODULE(inference_conv2d_2_f2_4_3_2) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 16;
static const unsigned AddressWidth = 4;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


inference_conv2d_2_f2_4_3_2_ram* meminst;


SC_CTOR(inference_conv2d_2_f2_4_3_2) {
meminst = new inference_conv2d_2_f2_4_3_2_ram("inference_conv2d_2_f2_4_3_2_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~inference_conv2d_2_f2_4_3_2() {
    delete meminst;
}


};//endmodule
#endif
