// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __inference_mult_1_120_120_84_s_W4_17_H__
#define __inference_mult_1_120_120_84_s_W4_17_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct inference_mult_1_120_120_84_s_W4_17_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 32;
  static const unsigned AddressRange = 84;
  static const unsigned AddressWidth = 7;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(inference_mult_1_120_120_84_s_W4_17_ram) {
        ram[0] = "0b00111110100000001101101100000101";
        ram[1] = "0b00111110011001110101101001110101";
        ram[2] = "0b00111101011000011011110000101101";
        ram[3] = "0b10111101110001000001000000111101";
        ram[4] = "0b10111100101000001010001101000011";
        ram[5] = "0b10111110001000011101001100100100";
        ram[6] = "0b10111110001010011101000001100011";
        ram[7] = "0b10111011000001110001101100010010";
        ram[8] = "0b00111100000100011101011011001101";
        ram[9] = "0b10111101111111101110010011100010";
        ram[10] = "0b00111101101111111110001000101011";
        ram[11] = "0b10111101110101100110001011111110";
        ram[12] = "0b00111101111101101000010100010010";
        ram[13] = "0b10111100011101101100101110100100";
        ram[14] = "0b00111101001000010101101110110101";
        ram[15] = "0b00111101000101111100000000010000";
        ram[16] = "0b00111110011111000010100110111111";
        ram[17] = "0b10111100110101010001010100111011";
        ram[18] = "0b00111101110001010100000110111110";
        ram[19] = "0b00111101000010001010111000111111";
        ram[20] = "0b00111101100111101101011011010101";
        ram[21] = "0b00111101011010110001101000101010";
        ram[22] = "0b10111110011010010101110001000010";
        ram[23] = "0b10111110000110010000110010010001";
        ram[24] = "0b00111101101011010111010101011100";
        ram[25] = "0b10111100101010000101100000001110";
        ram[26] = "0b10111101101001000101110110101101";
        ram[27] = "0b10111101111001101110111000110001";
        ram[28] = "0b10111110011010010111000011111000";
        ram[29] = "0b00111110000010111100000001011101";
        ram[30] = "0b00111101010110001111000001011100";
        ram[31] = "0b10111010111000100111000111111011";
        ram[32] = "0b10111100101101111101001100001011";
        ram[33] = "0b10111100101111101010101111011000";
        ram[34] = "0b00111110001110101100011101010100";
        ram[35] = "0b00111101101100010111110101011110";
        ram[36] = "0b00111101101101000010000011000001";
        ram[37] = "0b00111110000001110010001101101000";
        ram[38] = "0b00111100010101101000010011011100";
        ram[39] = "0b00111101010011111101111101010110";
        ram[40] = "0b10111110000110011011001010000001";
        ram[41] = "0b10111101011110010011111011100110";
        ram[42] = "0b00111101100000011010011001111001";
        ram[43] = "0b00111101100100001001110111010000";
        ram[44] = "0b00111101010101110001011101110100";
        ram[45] = "0b00111110010011011000000000011011";
        ram[46] = "0b10111110100100001001110100000110";
        ram[47] = "0b00111101011010010101001100110000";
        ram[48] = "0b00111101011101101110000101110011";
        ram[49] = "0b00111101101000001101010101111101";
        ram[50] = "0b10111110001001100111010101011000";
        ram[51] = "0b00111101111001011000110011010010";
        ram[52] = "0b00111101110011101100010110110000";
        ram[53] = "0b10111110001001000000110111010100";
        ram[54] = "0b00111101011110001001000111000111";
        ram[55] = "0b00111100001110111000101101011100";
        ram[56] = "0b10111101000110000000101010000011";
        ram[57] = "0b00111101101010001101100110000000";
        ram[58] = "0b10111101111010001100011100011001";
        ram[59] = "0b10111101111010110010101011110001";
        ram[60] = "0b00111100000001001010100010111100";
        ram[61] = "0b10111101100000000101000000001111";
        ram[62] = "0b10111110100010100100010101101111";
        ram[63] = "0b00111101100111100101000011010011";
        ram[64] = "0b00111101101110010011111110000111";
        ram[65] = "0b00111101010001101110010001110000";
        ram[66] = "0b00111101010111100011111001011111";
        ram[67] = "0b00111101111001101000010001001001";
        ram[68] = "0b00111110010011110110001000110000";
        ram[69] = "0b10111101101100001001000001100100";
        ram[70] = "0b00111101101110110110010100110001";
        ram[71] = "0b00111100100001000100101001111101";
        ram[72] = "0b10111100101100101110101111100110";
        ram[73] = "0b10111100110011000011011111100111";
        ram[74] = "0b00111101000101011110001010001011";
        ram[75] = "0b00111101110001110000000011011011";
        ram[76] = "0b10111101110000110110001000100000";
        ram[77] = "0b10111101111111010100010000010011";
        ram[78] = "0b00111110010100100001000110001000";
        ram[79] = "0b10111101100011100001111110110011";
        ram[80] = "0b00111101010101001111001110101101";
        ram[81] = "0b00111101111000100101100101011100";
        ram[82] = "0b10111101101011111100110111100001";
        ram[83] = "0b10111100010111011010000110011100";


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


SC_MODULE(inference_mult_1_120_120_84_s_W4_17) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 84;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


inference_mult_1_120_120_84_s_W4_17_ram* meminst;


SC_CTOR(inference_mult_1_120_120_84_s_W4_17) {
meminst = new inference_mult_1_120_120_84_s_W4_17_ram("inference_mult_1_120_120_84_s_W4_17_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~inference_mult_1_120_120_84_s_W4_17() {
    delete meminst;
}


};//endmodule
#endif