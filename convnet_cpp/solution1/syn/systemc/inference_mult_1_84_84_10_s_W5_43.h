// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __inference_mult_1_84_84_10_s_W5_43_H__
#define __inference_mult_1_84_84_10_s_W5_43_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct inference_mult_1_84_84_10_s_W5_43_ram : public sc_core::sc_module {

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


   SC_CTOR(inference_mult_1_84_84_10_s_W5_43_ram) {
        ram[0] = "0b00111101101111000011100111001010";
        ram[1] = "0b00111101000110100001011010010111";
        ram[2] = "0b10111110000111110011110101111101";
        ram[3] = "0b10111101111100000001011011001110";
        ram[4] = "0b10111101110000110111111000111010";
        ram[5] = "0b10111100101110100001110011111101";
        ram[6] = "0b00111110001001110001000010001000";
        ram[7] = "0b10111110001100001101000111111010";
        ram[8] = "0b00111110001001011101101001101010";
        ram[9] = "0b10111011010011101101001110111000";


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


SC_MODULE(inference_mult_1_84_84_10_s_W5_43) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 10;
static const unsigned AddressWidth = 4;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


inference_mult_1_84_84_10_s_W5_43_ram* meminst;


SC_CTOR(inference_mult_1_84_84_10_s_W5_43) {
meminst = new inference_mult_1_84_84_10_s_W5_43_ram("inference_mult_1_84_84_10_s_W5_43_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~inference_mult_1_84_84_10_s_W5_43() {
    delete meminst;
}


};//endmodule
#endif