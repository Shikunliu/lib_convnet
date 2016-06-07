// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __inference_mult_1_120_120_84_s_W4_18_H__
#define __inference_mult_1_120_120_84_s_W4_18_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct inference_mult_1_120_120_84_s_W4_18_ram : public sc_core::sc_module {

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


   SC_CTOR(inference_mult_1_120_120_84_s_W4_18_ram) {
        ram[0] = "0b10111110000011000011000010010000";
        ram[1] = "0b10111101110001100111111100001011";
        ram[2] = "0b00111110001000011010110101100100";
        ram[3] = "0b10111110000010100100100110000000";
        ram[4] = "0b00111101010011001011101011000100";
        ram[5] = "0b10111101001001110000110111110110";
        ram[6] = "0b10111101101101100000011110011100";
        ram[7] = "0b10111011111011011011011100010011";
        ram[8] = "0b10111101000000011101110000101001";
        ram[9] = "0b00111110000001101000011111110100";
        ram[10] = "0b00111101110101001110001000101010";
        ram[11] = "0b10111100111101010110010010011100";
        ram[12] = "0b10111101110100111001110100011011";
        ram[13] = "0b00111110000001001010100111001110";
        ram[14] = "0b10111110000010010101111001011011";
        ram[15] = "0b00111100001001001010000110100000";
        ram[16] = "0b10111110000001000110000110110111";
        ram[17] = "0b00111110000101001110010011001001";
        ram[18] = "0b10111110000000000011101111000101";
        ram[19] = "0b00111101111101000101111000001011";
        ram[20] = "0b10111100100111100111101001110100";
        ram[21] = "0b00111100110100111010100110010110";
        ram[22] = "0b00111011011000001111111111100000";
        ram[23] = "0b00111110010000010010011110110011";
        ram[24] = "0b10111100011010011101010111110010";
        ram[25] = "0b00111101111101011101100010010101";
        ram[26] = "0b00111101111111110000100100001111";
        ram[27] = "0b10111101110011110101110100110101";
        ram[28] = "0b00111101100000111100001001100010";
        ram[29] = "0b10111101111110110100100010010001";
        ram[30] = "0b10111110001101110111110111011000";
        ram[31] = "0b00111100110111010011001101001100";
        ram[32] = "0b10111110000010110101111111100101";
        ram[33] = "0b00111101011000100001010100110011";
        ram[34] = "0b00111101100010000101111100111101";
        ram[35] = "0b00111110000101100010110000110100";
        ram[36] = "0b00111110001011010111011010101011";
        ram[37] = "0b00111101001111101110111110101111";
        ram[38] = "0b10111101110101000110010111101001";
        ram[39] = "0b10111101011100110011111000110110";
        ram[40] = "0b00111101101011010100000110110111";
        ram[41] = "0b00111100100101100111100000010010";
        ram[42] = "0b10111101100101001001101011000010";
        ram[43] = "0b10111110000101001011010111011101";
        ram[44] = "0b00111011110101011011011101101101";
        ram[45] = "0b00111100101000101111101000000000";
        ram[46] = "0b10111101110010110101100000010101";
        ram[47] = "0b10111110001100111100001010011000";
        ram[48] = "0b10111101010001101100111011110001";
        ram[49] = "0b00111101101001110110110011101001";
        ram[50] = "0b00111101110001110111010001101001";
        ram[51] = "0b10111101110010110111010100000110";
        ram[52] = "0b00111101111110001011000011010001";
        ram[53] = "0b00111110001100001110010110100011";
        ram[54] = "0b10111101101111000000011110111000";
        ram[55] = "0b10111101100010011010001111111011";
        ram[56] = "0b00111100111101110010000101101010";
        ram[57] = "0b00111101100100011110010101010101";
        ram[58] = "0b10111101111110011111001101000001";
        ram[59] = "0b10111110000111111000111000111011";
        ram[60] = "0b00111110010001111100100000001000";
        ram[61] = "0b10111100101010001011100101011101";
        ram[62] = "0b10111000110101100110000100011000";
        ram[63] = "0b10111001100100011111100001111111";
        ram[64] = "0b00111101000010111011110111011001";
        ram[65] = "0b00111101111110000100001000110001";
        ram[66] = "0b10111101001101011101111111101100";
        ram[67] = "0b00111100001101101011111000000010";
        ram[68] = "0b10111110001010011010010000010110";
        ram[69] = "0b10111010101100110000001010100001";
        ram[70] = "0b00111101111110100111000000001001";
        ram[71] = "0b10111101110101110001010111000110";
        ram[72] = "0b10111101101110011000001101101100";
        ram[73] = "0b10111110000110000010010111100001";
        ram[74] = "0b10111011110000001010101101101100";
        ram[75] = "0b00111101000010000111001000001111";
        ram[76] = "0b10111101110001001011010110011010";
        ram[77] = "0b10111101110000010011111111111001";
        ram[78] = "0b10111101101000010110110010010111";
        ram[79] = "0b00111101011001100100011001010000";
        ram[80] = "0b10111100110100001100010000001000";
        ram[81] = "0b10111110000000010111111110000100";
        ram[82] = "0b00111110001110011000001000000010";
        ram[83] = "0b00111100010010000001110011001111";


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


SC_MODULE(inference_mult_1_120_120_84_s_W4_18) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 84;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


inference_mult_1_120_120_84_s_W4_18_ram* meminst;


SC_CTOR(inference_mult_1_120_120_84_s_W4_18) {
meminst = new inference_mult_1_120_120_84_s_W4_18_ram("inference_mult_1_120_120_84_s_W4_18_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~inference_mult_1_120_120_84_s_W4_18() {
    delete meminst;
}


};//endmodule
#endif