// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __inference_mult_1_84_84_10_s_W5_54_H__
#define __inference_mult_1_84_84_10_s_W5_54_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct inference_mult_1_84_84_10_s_W5_54_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 32;
  static const unsigned AddressRange = 10;
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


   SC_CTOR(inference_mult_1_84_84_10_s_W5_54_ram) {
        ram[0] = "0b00111101101001101001100101000010";
        ram[1] = "0b10111101110000001110110010001111";
        ram[2] = "0b00111011000110110110111110001000";
        ram[3] = "0b10111101110000100010100101001000";
        ram[4] = "0b00111101001101111010001110001011";
        ram[5] = "0b10111101001011010001010000000000";
        ram[6] = "0b00111011000100101011001001001010";
        ram[7] = "0b10111101000110000101011000000010";
        ram[8] = "0b00111110000010111011011101110100";
        ram[9] = "0b10111110010010000000100010000101";


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


SC_MODULE(inference_mult_1_84_84_10_s_W5_54) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 10;
static const unsigned AddressWidth = 4;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


inference_mult_1_84_84_10_s_W5_54_ram* meminst;


SC_CTOR(inference_mult_1_84_84_10_s_W5_54) {
meminst = new inference_mult_1_84_84_10_s_W5_54_ram("inference_mult_1_84_84_10_s_W5_54_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~inference_mult_1_84_84_10_s_W5_54() {
    delete meminst;
}


};//endmodule
#endif