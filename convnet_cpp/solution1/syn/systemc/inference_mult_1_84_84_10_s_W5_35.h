// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __inference_mult_1_84_84_10_s_W5_35_H__
#define __inference_mult_1_84_84_10_s_W5_35_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct inference_mult_1_84_84_10_s_W5_35_ram : public sc_core::sc_module {

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


   SC_CTOR(inference_mult_1_84_84_10_s_W5_35_ram) {
        ram[0] = "0b00111110010001000111110100111101";
        ram[1] = "0b00111110000011001110010000100001";
        ram[2] = "0b00111101111100001001111000010011";
        ram[3] = "0b10111101010111110011000001111101";
        ram[4] = "0b10111110001110000011001010111010";
        ram[5] = "0b00111100100010100101111000101000";
        ram[6] = "0b10111101111101000001001000000110";
        ram[7] = "0b00111101001010001001101111100110";
        ram[8] = "0b10111101100011110001110010010000";
        ram[9] = "0b10111110010110011010101101101101";


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


SC_MODULE(inference_mult_1_84_84_10_s_W5_35) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 10;
static const unsigned AddressWidth = 4;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


inference_mult_1_84_84_10_s_W5_35_ram* meminst;


SC_CTOR(inference_mult_1_84_84_10_s_W5_35) {
meminst = new inference_mult_1_84_84_10_s_W5_35_ram("inference_mult_1_84_84_10_s_W5_35_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~inference_mult_1_84_84_10_s_W5_35() {
    delete meminst;
}


};//endmodule
#endif
