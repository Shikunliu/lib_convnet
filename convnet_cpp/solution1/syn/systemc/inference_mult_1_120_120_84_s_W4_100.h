// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __inference_mult_1_120_120_84_s_W4_100_H__
#define __inference_mult_1_120_120_84_s_W4_100_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct inference_mult_1_120_120_84_s_W4_100_ram : public sc_core::sc_module {

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


   SC_CTOR(inference_mult_1_120_120_84_s_W4_100_ram) {
        ram[0] = "0b10111100101101100001011000111101";
        ram[1] = "0b10111101010011001000010101001010";
        ram[2] = "0b00111100110111101101010101111000";
        ram[3] = "0b00111101000111100111111110011000";
        ram[4] = "0b00111100100010101111111110100011";
        ram[5] = "0b10111011100101011010100011011111";
        ram[6] = "0b10111101000000101110010101011000";
        ram[7] = "0b00111110001000100110110001111111";
        ram[8] = "0b10111110000000111100011101010000";
        ram[9] = "0b00111110001010001000000110100001";
        ram[10] = "0b00111101101111001011100111010010";
        ram[11] = "0b00111101101100001011110000011101";
        ram[12] = "0b00111110000100000011000000111100";
        ram[13] = "0b10111101100011100011011000010110";
        ram[14] = "0b10111100110110001101010011100011";
        ram[15] = "0b10111101111010110100110001111111";
        ram[16] = "0b00111101011101011100101100001110";
        ram[17] = "0b00111101100000010111100100011111";
        ram[18] = "0b00111011100111010110011000010111";
        ram[19] = "0b00111110001001000111001011000001";
        ram[20] = "0b10111110001101001001011011101110";
        ram[21] = "0b10111101010111010010111000101001";
        ram[22] = "0b00111101100101000110001110100111";
        ram[23] = "0b10111101101110111111001010010111";
        ram[24] = "0b00111101001001100001110010101111";
        ram[25] = "0b00111100010010101011110010111101";
        ram[26] = "0b10111100111000001001011110111011";
        ram[27] = "0b10111101100111010111011010011110";
        ram[28] = "0b10111100100100101010101010010010";
        ram[29] = "0b00111110010000011101000111010100";
        ram[30] = "0b00111011111110001000001101001001";
        ram[31] = "0b10111101110010111011101000000101";
        ram[32] = "0b00111101111110101111111010100100";
        ram[33] = "0b00111110000011001101010100110000";
        ram[34] = "0b00111100010101100010101010101111";
        ram[35] = "0b00111101000011111100001000110000";
        ram[36] = "0b10111100100101100001001100110010";
        ram[37] = "0b10111101111101101101110000011010";
        ram[38] = "0b00111110000111111000101010001111";
        ram[39] = "0b10111101111011100111111101101111";
        ram[40] = "0b10111100100100110011101010100101";
        ram[41] = "0b10111101101101010000011001001010";
        ram[42] = "0b10111100111100111000111011011000";
        ram[43] = "0b00111101010000011101000101000001";
        ram[44] = "0b00111101111101001111000011011000";
        ram[45] = "0b00111011110110100001100010100101";
        ram[46] = "0b10111101100101011100010000010101";
        ram[47] = "0b10111101010001011001000111110101";
        ram[48] = "0b10111101011110101110000111101001";
        ram[49] = "0b10111110010100000100000101000110";
        ram[50] = "0b00111101100011110100110001000110";
        ram[51] = "0b10111110000011010100001111010000";
        ram[52] = "0b00111101111001010110000111010100";
        ram[53] = "0b00111110000000101000000100110100";
        ram[54] = "0b10111101101011011010110101011010";
        ram[55] = "0b00111101001110010101101011100101";
        ram[56] = "0b00111101100101010010001101010101";
        ram[57] = "0b10111101010110011111011001001011";
        ram[58] = "0b10111101100101111101011000111110";
        ram[59] = "0b10111100110000110111110011111000";
        ram[60] = "0b10111101110010010110111001011001";
        ram[61] = "0b00111101011100101001000101101000";
        ram[62] = "0b10111101011000101001000111111011";
        ram[63] = "0b00111101001010010001110010001111";
        ram[64] = "0b10111101000101100100001101010011";
        ram[65] = "0b00111011100010101010001011110001";
        ram[66] = "0b00111101101010000101111010011100";
        ram[67] = "0b00111101001101111110000100011000";
        ram[68] = "0b00111110000101110100100101101011";
        ram[69] = "0b00111100011010010111010111100101";
        ram[70] = "0b00111100100010101000111111011100";
        ram[71] = "0b00111100100101010100000001101111";
        ram[72] = "0b00111101101110011111100010100111";
        ram[73] = "0b10111100101111101001111000000000";
        ram[74] = "0b00111101110111111100010000111011";
        ram[75] = "0b00111110001000000111110110010001";
        ram[76] = "0b10111101100000010110011010011101";
        ram[77] = "0b10111100100000101010010100101100";
        ram[78] = "0b10111100001111110111101110101011";
        ram[79] = "0b00111110000001101001001000101110";
        ram[80] = "0b00111101010001110011000001000000";
        ram[81] = "0b10111110001100000110010110110110";
        ram[82] = "0b10111101111110010011011010000010";
        ram[83] = "0b10111110000001001111100001110010";


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


SC_MODULE(inference_mult_1_120_120_84_s_W4_100) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 84;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


inference_mult_1_120_120_84_s_W4_100_ram* meminst;


SC_CTOR(inference_mult_1_120_120_84_s_W4_100) {
meminst = new inference_mult_1_120_120_84_s_W4_100_ram("inference_mult_1_120_120_84_s_W4_100_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~inference_mult_1_120_120_84_s_W4_100() {
    delete meminst;
}


};//endmodule
#endif
