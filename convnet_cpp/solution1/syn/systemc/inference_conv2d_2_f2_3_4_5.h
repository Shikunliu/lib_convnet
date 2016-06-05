// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __inference_conv2d_2_f2_3_4_5_H__
#define __inference_conv2d_2_f2_3_4_5_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct inference_conv2d_2_f2_3_4_5_ram : public sc_core::sc_module {

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


   SC_CTOR(inference_conv2d_2_f2_3_4_5_ram) {
        ram[0] = "0b10111101100100001001001111110100";
        ram[1] = "0b00111110000010111011111111010111";
        ram[2] = "0b00111100101110100110010000010100";
        ram[3] = "0b00111110000010001011001011101010";
        ram[4] = "0b10111101111011111101111010110101";
        ram[5] = "0b00111110001100111100100110101100";
        ram[6] = "0b00111100100101111111000011101101";
        ram[7] = "0b10111101110010011001101101111101";
        ram[8] = "0b10111100101001010110100111100111";
        ram[9] = "0b00111100111100100111100011000011";
        ram[10] = "0b10111011111000011010010100001100";
        ram[11] = "0b10111101100111010001000101111011";
        ram[12] = "0b10111101111010110100100101011010";
        ram[13] = "0b00111100111111100110000001011000";
        ram[14] = "0b00111101100011111111111101010010";
        ram[15] = "0b00111101011110001001110110000110";


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


SC_MODULE(inference_conv2d_2_f2_3_4_5) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 16;
static const unsigned AddressWidth = 4;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


inference_conv2d_2_f2_3_4_5_ram* meminst;


SC_CTOR(inference_conv2d_2_f2_3_4_5) {
meminst = new inference_conv2d_2_f2_3_4_5_ram("inference_conv2d_2_f2_3_4_5_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~inference_conv2d_2_f2_3_4_5() {
    delete meminst;
}


};//endmodule
#endif
