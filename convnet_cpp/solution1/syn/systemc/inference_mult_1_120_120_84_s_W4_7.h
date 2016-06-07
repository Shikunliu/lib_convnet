// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __inference_mult_1_120_120_84_s_W4_7_H__
#define __inference_mult_1_120_120_84_s_W4_7_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct inference_mult_1_120_120_84_s_W4_7_ram : public sc_core::sc_module {

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


   SC_CTOR(inference_mult_1_120_120_84_s_W4_7_ram) {
        ram[0] = "0b10111101110011110000101101101011";
        ram[1] = "0b10111110000100101101011001100111";
        ram[2] = "0b10111101001111101101110100000101";
        ram[3] = "0b00111101111010111111111011000001";
        ram[4] = "0b00111110001001011011001111100001";
        ram[5] = "0b10111101001110110110000010010100";
        ram[6] = "0b10111100100000101001111001000000";
        ram[7] = "0b10111110000001101111111101111110";
        ram[8] = "0b00111101110000011011010100100111";
        ram[9] = "0b10111101101011010000101000001001";
        ram[10] = "0b10111101111101111001010100101101";
        ram[11] = "0b10111101001110001011101111010100";
        ram[12] = "0b00111101000101100011011000011101";
        ram[13] = "0b10111110001101000111100110010010";
        ram[14] = "0b00111101001010110001001111100000";
        ram[15] = "0b10111110000101010111111101110011";
        ram[16] = "0b10111101000010110100111000101101";
        ram[17] = "0b00111110001011010111110100111001";
        ram[18] = "0b00111101101001100010011111110101";
        ram[19] = "0b00111101011011011101011001001101";
        ram[20] = "0b10111101011110111001110001011001";
        ram[21] = "0b00111101100101100110001001111000";
        ram[22] = "0b00111110011011001010010011110100";
        ram[23] = "0b00111101001101110010100000000101";
        ram[24] = "0b10111101001111010110101000111110";
        ram[25] = "0b10111110001000011010001001100010";
        ram[26] = "0b00111110010101000000101111111110";
        ram[27] = "0b00111101101001001101011110000110";
        ram[28] = "0b00111110000001110000010011111111";
        ram[29] = "0b10111101000110001001000101110111";
        ram[30] = "0b00111101100100001110100111111101";
        ram[31] = "0b10111110001011010101110000110001";
        ram[32] = "0b00111100011100111000010001011100";
        ram[33] = "0b00111100111100100111101101111101";
        ram[34] = "0b00111110001001000110001011000011";
        ram[35] = "0b10111100100101110011100001100001";
        ram[36] = "0b00111101100101001100011000000011";
        ram[37] = "0b10111110001111110001101010100000";
        ram[38] = "0b00111100000001110101000100111000";
        ram[39] = "0b10111110000000011000100010110001";
        ram[40] = "0b10111110100100101110110000101001";
        ram[41] = "0b00111101111010011111111100001101";
        ram[42] = "0b00111011011101111111001001101010";
        ram[43] = "0b00111100011111101010011100111010";
        ram[44] = "0b10111110001011100100111110111001";
        ram[45] = "0b10111101100010001010011111001100";
        ram[46] = "0b10111110000111101101101101110011";
        ram[47] = "0b10111101101111101111010100110001";
        ram[48] = "0b10111100110100100110011110101100";
        ram[49] = "0b00111100110111010001000111110100";
        ram[50] = "0b00111110010111001000100011101000";
        ram[51] = "0b00111110000010001111001110101010";
        ram[52] = "0b10111101101010000111000100101011";
        ram[53] = "0b10111101110111100001010000111000";
        ram[54] = "0b00111101011011101100001001010101";
        ram[55] = "0b10111110011101100010111011010011";
        ram[56] = "0b00111101110100011001000011010001";
        ram[57] = "0b00111100100101101110110110000010";
        ram[58] = "0b10111110001000001001111001010110";
        ram[59] = "0b10111101000111001101100110001010";
        ram[60] = "0b00111101100000100000010010111101";
        ram[61] = "0b10111101001011011010000000010111";
        ram[62] = "0b10111110010110010001011000000001";
        ram[63] = "0b10111100101010000101101010010010";
        ram[64] = "0b00111101101100111001111101110111";
        ram[65] = "0b10111101111111101000101100111011";
        ram[66] = "0b10111101101111000110010111111101";
        ram[67] = "0b00111101001010011110001101111001";
        ram[68] = "0b10111110010111100001111011110111";
        ram[69] = "0b10111101111001110111110101010010";
        ram[70] = "0b00111101111110101001001100101001";
        ram[71] = "0b00111100001101111101000111111110";
        ram[72] = "0b00111100011100110101111100001000";
        ram[73] = "0b00111101111001110111100000010100";
        ram[74] = "0b10111110011010000110001010110010";
        ram[75] = "0b00111101000000110001110010011010";
        ram[76] = "0b10111100101010001000111100110110";
        ram[77] = "0b00111101101010101111000000011110";
        ram[78] = "0b10111101100100111111011100111011";
        ram[79] = "0b00111101110010011100000101001010";
        ram[80] = "0b10111101001111010000110101010111";
        ram[81] = "0b00111101000111001001101111000111";
        ram[82] = "0b10111110001100001000110100001001";
        ram[83] = "0b00111101100100101101011011011111";


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


SC_MODULE(inference_mult_1_120_120_84_s_W4_7) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 84;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


inference_mult_1_120_120_84_s_W4_7_ram* meminst;


SC_CTOR(inference_mult_1_120_120_84_s_W4_7) {
meminst = new inference_mult_1_120_120_84_s_W4_7_ram("inference_mult_1_120_120_84_s_W4_7_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~inference_mult_1_120_120_84_s_W4_7() {
    delete meminst;
}


};//endmodule
#endif