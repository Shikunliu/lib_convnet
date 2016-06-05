// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __inference_add_1_10_s_B5_0_H__
#define __inference_add_1_10_s_B5_0_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct inference_add_1_10_s_B5_0_ram : public sc_core::sc_module {

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


   SC_CTOR(inference_add_1_10_s_B5_0_ram) {
        ram[0] = "0b00111101101001110010111100110100";
        ram[1] = "0b00111101110010011111100111101001";
        ram[2] = "0b00111101001101101000001110110101";
        ram[3] = "0b00111101111000100011001010010000";
        ram[4] = "0b00111101111100111110010111111011";
        ram[5] = "0b00111101100001110100010001111101";
        ram[6] = "0b00111101001011110101111100011001";
        ram[7] = "0b00111101100100000011011001010001";
        ram[8] = "0b00111110001011111010001101110111";
        ram[9] = "0b00111110001010100110001000100100";


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


SC_MODULE(inference_add_1_10_s_B5_0) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 10;
static const unsigned AddressWidth = 4;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


inference_add_1_10_s_B5_0_ram* meminst;


SC_CTOR(inference_add_1_10_s_B5_0) {
meminst = new inference_add_1_10_s_B5_0_ram("inference_add_1_10_s_B5_0_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~inference_add_1_10_s_B5_0() {
    delete meminst;
}


};//endmodule
#endif
