// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __inference_mult_1_120_120_84_s_W4_58_H__
#define __inference_mult_1_120_120_84_s_W4_58_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct inference_mult_1_120_120_84_s_W4_58_ram : public sc_core::sc_module {

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


   SC_CTOR(inference_mult_1_120_120_84_s_W4_58_ram) {
        ram[0] = "0b10111011101100000101101111010011";
        ram[1] = "0b00111101110001111111011110010110";
        ram[2] = "0b10111110000110000111010011001001";
        ram[3] = "0b10111101000111010110001111011001";
        ram[4] = "0b10111101011100001000010011001101";
        ram[5] = "0b10111101110100100101100010010010";
        ram[6] = "0b00111110000000111000011101011001";
        ram[7] = "0b00111101110000101101010100110010";
        ram[8] = "0b10111101110110110010111011100000";
        ram[9] = "0b10111101110010101010010000100110";
        ram[10] = "0b00111110010000110101110101101000";
        ram[11] = "0b10111110000011010000111101100010";
        ram[12] = "0b00111100100001010011000011110111";
        ram[13] = "0b10111101100000011110101111100011";
        ram[14] = "0b10111101010010011001011001001100";
        ram[15] = "0b00111101100010110010111001110101";
        ram[16] = "0b10111101101111010101101010101100";
        ram[17] = "0b10111100010001100011110111010010";
        ram[18] = "0b00111100110000010101010111010110";
        ram[19] = "0b10111100001000010111011100011110";
        ram[20] = "0b00111101110101000000110001000001";
        ram[21] = "0b00111101011011111001000001000110";
        ram[22] = "0b00111101101011001010010010111111";
        ram[23] = "0b10111101011100100110110100000101";
        ram[24] = "0b10111101110000110101011011001101";
        ram[25] = "0b10111110001011001101011000111101";
        ram[26] = "0b10111101101010111001101100100100";
        ram[27] = "0b00111011000111101000110101110100";
        ram[28] = "0b00111100100110001100101010011100";
        ram[29] = "0b00111101010000011010000100000101";
        ram[30] = "0b10111110000101111000000010111011";
        ram[31] = "0b00111100110011111101001000111011";
        ram[32] = "0b10111101101111001001010011001110";
        ram[33] = "0b00111101110101010001001111111001";
        ram[34] = "0b10111100000111010001101101111010";
        ram[35] = "0b10111101010101101010001010111111";
        ram[36] = "0b10111100101101001100000111011110";
        ram[37] = "0b10111101111010101101010101111100";
        ram[38] = "0b10111101000101101111011111100100";
        ram[39] = "0b10111101100011100001011010010100";
        ram[40] = "0b00111100000100100111010110011001";
        ram[41] = "0b00111100110010000001110100000101";
        ram[42] = "0b10111101010000011010000100100000";
        ram[43] = "0b10111101101010010001100101110111";
        ram[44] = "0b10111100001000111110010011100010";
        ram[45] = "0b10111101011011010011100100111001";
        ram[46] = "0b10111100000110000011110100111001";
        ram[47] = "0b00111011110101011100111111010110";
        ram[48] = "0b10111101100011111010111011100101";
        ram[49] = "0b00111101000000000101011010011101";
        ram[50] = "0b10111110001000101101110011110100";
        ram[51] = "0b00111101010110011111011110001101";
        ram[52] = "0b00111101110000110000001000111011";
        ram[53] = "0b10111101101010001001000010010011";
        ram[54] = "0b10111101010101101010111111110101";
        ram[55] = "0b10111110001110101011001100100101";
        ram[56] = "0b10111100100001100011101111101111";
        ram[57] = "0b10111101001010111011101111110110";
        ram[58] = "0b00111110010010010100100011011100";
        ram[59] = "0b00111110000011010111110010110011";
        ram[60] = "0b10111100100100011011111011011010";
        ram[61] = "0b10111101001001111001000101011001";
        ram[62] = "0b10111101001011000100111100101110";
        ram[63] = "0b00111101111010101101011000000010";
        ram[64] = "0b00111110000001101011011110101010";
        ram[65] = "0b10111100110110111110001111110111";
        ram[66] = "0b00111101000101001010100010110100";
        ram[67] = "0b10111110000000101001010001010111";
        ram[68] = "0b00111101100001000000110001001111";
        ram[69] = "0b00111101000011001101111000011010";
        ram[70] = "0b10111110000001010011000000000110";
        ram[71] = "0b10111101101100011100000011100101";
        ram[72] = "0b00111100100010100111010001100011";
        ram[73] = "0b10111101100011000011011011011011";
        ram[74] = "0b00111101100011110010000101100011";
        ram[75] = "0b10111100110101111110000011000111";
        ram[76] = "0b10111100101001110110000100111000";
        ram[77] = "0b10111101110111010011011011111000";
        ram[78] = "0b00111110000111111010001001101010";
        ram[79] = "0b00111101001011000110100011000100";
        ram[80] = "0b10111110000100110011101010001010";
        ram[81] = "0b10111110001100010010010101010111";
        ram[82] = "0b10111101010111001000111100110010";
        ram[83] = "0b00111100111010010010001010100100";


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


SC_MODULE(inference_mult_1_120_120_84_s_W4_58) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 84;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


inference_mult_1_120_120_84_s_W4_58_ram* meminst;


SC_CTOR(inference_mult_1_120_120_84_s_W4_58) {
meminst = new inference_mult_1_120_120_84_s_W4_58_ram("inference_mult_1_120_120_84_s_W4_58_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~inference_mult_1_120_120_84_s_W4_58() {
    delete meminst;
}


};//endmodule
#endif