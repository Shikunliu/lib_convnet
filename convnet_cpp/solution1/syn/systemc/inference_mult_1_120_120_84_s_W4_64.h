// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __inference_mult_1_120_120_84_s_W4_64_H__
#define __inference_mult_1_120_120_84_s_W4_64_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct inference_mult_1_120_120_84_s_W4_64_ram : public sc_core::sc_module {

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


   SC_CTOR(inference_mult_1_120_120_84_s_W4_64_ram) {
        ram[0] = "0b10111110001001001110011101101000";
        ram[1] = "0b00111110000001111111101000011010";
        ram[2] = "0b00111100010100001101111000111111";
        ram[3] = "0b00111101011100110010010100100110";
        ram[4] = "0b10111101110000101010110111010010";
        ram[5] = "0b10111100100110000010010000011001";
        ram[6] = "0b00111010111011011100000110111010";
        ram[7] = "0b10111101000101000011111001000110";
        ram[8] = "0b00111101111111010110010000001111";
        ram[9] = "0b10111101101100011000010110100111";
        ram[10] = "0b00111101101010100011111110110010";
        ram[11] = "0b10111101100011101011101011010110";
        ram[12] = "0b10111101110101100101010111100011";
        ram[13] = "0b00111110000101100110101010011000";
        ram[14] = "0b00111101101111101101001000011101";
        ram[15] = "0b10111101100000000111100001100000";
        ram[16] = "0b00111101110110010110010000011111";
        ram[17] = "0b00111101000101101011001010010100";
        ram[18] = "0b00111110000011101110011100111110";
        ram[19] = "0b00111110001000111111111101101001";
        ram[20] = "0b00111101000011101001111011111111";
        ram[21] = "0b00111110001000110000111110001100";
        ram[22] = "0b10111110011010000011100101000111";
        ram[23] = "0b00111101100100100000110101110001";
        ram[24] = "0b10111101001100001111111110110010";
        ram[25] = "0b10111101011101110011011110001010";
        ram[26] = "0b00111101000101010101100010001101";
        ram[27] = "0b00111101001001011001101110011011";
        ram[28] = "0b10111101010011000000100100100011";
        ram[29] = "0b10111101000000000011010010111110";
        ram[30] = "0b10111101000000010000011010101011";
        ram[31] = "0b00111101101010111001001010001011";
        ram[32] = "0b00111011110011101000111000011000";
        ram[33] = "0b10111110000000101101000110101111";
        ram[34] = "0b00111101111110001111111101110110";
        ram[35] = "0b00111100100011111011001011111011";
        ram[36] = "0b00111101100100011101101000111000";
        ram[37] = "0b10111101110011000111101001000111";
        ram[38] = "0b10111110011001110101000001111111";
        ram[39] = "0b00111100011100100001010000011010";
        ram[40] = "0b10111100101010101001001110111101";
        ram[41] = "0b00111101101101100001100011110110";
        ram[42] = "0b00111101011001111101100111101001";
        ram[43] = "0b10111101110100010010101100011011";
        ram[44] = "0b10111101101000100010101110010111";
        ram[45] = "0b00111101010011001001100111010111";
        ram[46] = "0b00111110001110101001110111101001";
        ram[47] = "0b10111011010010000001001100101010";
        ram[48] = "0b00111101100001101111100100011001";
        ram[49] = "0b10111101110010011001100000100010";
        ram[50] = "0b10111100111010010010110111110111";
        ram[51] = "0b10111101000110111001000000010100";
        ram[52] = "0b00111101100000100100000101100110";
        ram[53] = "0b10111101111101100010010100100000";
        ram[54] = "0b00111101101101100110110100001111";
        ram[55] = "0b00111101100000011110100110111101";
        ram[56] = "0b10111101111101001101110101110010";
        ram[57] = "0b10111101101111000011010111101001";
        ram[58] = "0b00111101110110011001110000111001";
        ram[59] = "0b00111110000010001100111010110011";
        ram[60] = "0b00111101100111000011100101000100";
        ram[61] = "0b10111100001000111101111101101110";
        ram[62] = "0b10111011101100000111000001110110";
        ram[63] = "0b10111101111101000110011001101111";
        ram[64] = "0b10111101111000010000111000000010";
        ram[65] = "0b10111101100100010010011111101000";
        ram[66] = "0b00111101011011101111111101011100";
        ram[67] = "0b10111101011100100000100111010011";
        ram[68] = "0b00111101010110110010101011100100";
        ram[69] = "0b00111100100001011001010011001010";
        ram[70] = "0b10111110000001111001011111001100";
        ram[71] = "0b00111100010100001000100110000101";
        ram[72] = "0b00111101011001011010001010111100";
        ram[73] = "0b10111110001010010011110000000100";
        ram[74] = "0b10111110000001101110111001110100";
        ram[75] = "0b10111100100110100001010011101010";
        ram[76] = "0b10111110000111001010000011000011";
        ram[77] = "0b00111100101101111011011010000101";
        ram[78] = "0b10111100010100110101011001010100";
        ram[79] = "0b10111101000010000111010011111111";
        ram[80] = "0b00111100100110111000011010100100";
        ram[81] = "0b00111101011110011011110101011011";
        ram[82] = "0b10111101001001110001110101100000";
        ram[83] = "0b00111101000100010010110101101010";


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


SC_MODULE(inference_mult_1_120_120_84_s_W4_64) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 84;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


inference_mult_1_120_120_84_s_W4_64_ram* meminst;


SC_CTOR(inference_mult_1_120_120_84_s_W4_64) {
meminst = new inference_mult_1_120_120_84_s_W4_64_ram("inference_mult_1_120_120_84_s_W4_64_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~inference_mult_1_120_120_84_s_W4_64() {
    delete meminst;
}


};//endmodule
#endif