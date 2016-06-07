// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __inference_mult_1_120_120_84_s_W4_4_H__
#define __inference_mult_1_120_120_84_s_W4_4_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct inference_mult_1_120_120_84_s_W4_4_ram : public sc_core::sc_module {

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


   SC_CTOR(inference_mult_1_120_120_84_s_W4_4_ram) {
        ram[0] = "0b10111101100101110101000000010011";
        ram[1] = "0b10111101111100100111000100110111";
        ram[2] = "0b00111110000010111010001100000001";
        ram[3] = "0b00111101101000100111110110010110";
        ram[4] = "0b00111100011101101011111101111010";
        ram[5] = "0b00111100110011001111110000110010";
        ram[6] = "0b00111110000010100100010011001000";
        ram[7] = "0b10111100001010011010010111101100";
        ram[8] = "0b00111101010000011110010001010110";
        ram[9] = "0b00111101001111111011010000010101";
        ram[10] = "0b00111101011001100011100000101000";
        ram[11] = "0b00111110001000010001010000001010";
        ram[12] = "0b10111101000101011110000101100011";
        ram[13] = "0b00111100110000101111001100101111";
        ram[14] = "0b00111101011110011010001000011000";
        ram[15] = "0b10111110001010110101011001110101";
        ram[16] = "0b10111110001101000111101010011110";
        ram[17] = "0b10111110001000110111100010101011";
        ram[18] = "0b10111101001000000101100010011011";
        ram[19] = "0b00111110001010000110111111001110";
        ram[20] = "0b10111101111111110101111100001011";
        ram[21] = "0b10111101000100100011111011111101";
        ram[22] = "0b10111101100010101001001000111000";
        ram[23] = "0b00111100110000110101010111000000";
        ram[24] = "0b00111101101011111010010011101110";
        ram[25] = "0b10111101101001101101000000100110";
        ram[26] = "0b00111101101001010011111000010011";
        ram[27] = "0b00111110011001010010010011000000";
        ram[28] = "0b00111101101110100011010111111111";
        ram[29] = "0b00111101000000111000010010000100";
        ram[30] = "0b10111101100000011100101010110011";
        ram[31] = "0b10111101100010111000101000110101";
        ram[32] = "0b00111100100110011101111011001110";
        ram[33] = "0b10111100110000011101110101010000";
        ram[34] = "0b10111101110111001110110100001011";
        ram[35] = "0b00111100101001111011101110011011";
        ram[36] = "0b10111011101010100001111100111000";
        ram[37] = "0b10111101101011100010000011101000";
        ram[38] = "0b00111101010010011001000100101001";
        ram[39] = "0b00111101001011111101011110101111";
        ram[40] = "0b10111011010010000000100101000100";
        ram[41] = "0b10111101101010000001111011101000";
        ram[42] = "0b00111101000001010111101111110000";
        ram[43] = "0b00111110000011101110001011001010";
        ram[44] = "0b10111101001101001000001110110000";
        ram[45] = "0b10111101110110011110100011000100";
        ram[46] = "0b00111110000001000111111000000111";
        ram[47] = "0b10111110001011000011000000001010";
        ram[48] = "0b10111101011101000010010011001011";
        ram[49] = "0b10111101110001000001101010101100";
        ram[50] = "0b00111100100111010100111011000101";
        ram[51] = "0b10111101101101110000101000111101";
        ram[52] = "0b00111110000001000011110001111101";
        ram[53] = "0b10111101110011101001001111100010";
        ram[54] = "0b10111011101000100110011100001000";
        ram[55] = "0b10111101111110010011110101010011";
        ram[56] = "0b10111101011000011111101000001011";
        ram[57] = "0b00111101010111011010001011111001";
        ram[58] = "0b10111110000110101101000011000100";
        ram[59] = "0b10111110010110111110111111010000";
        ram[60] = "0b10111101101011111011101101000100";
        ram[61] = "0b10111100101001011110010000101011";
        ram[62] = "0b00111101111111011001110000101000";
        ram[63] = "0b00111110000110100110101100001110";
        ram[64] = "0b00111101010001011011000111010110";
        ram[65] = "0b10111100100111000100000101111111";
        ram[66] = "0b00111110010110110010001001001011";
        ram[67] = "0b00111101000101101000111001100111";
        ram[68] = "0b00111110001001100110010001001110";
        ram[69] = "0b00111101100001111010100111001000";
        ram[70] = "0b10111100111011110010111001010110";
        ram[71] = "0b00111101110111101011110010000100";
        ram[72] = "0b10111110000101110110010010101110";
        ram[73] = "0b10111110001111100010101010000000";
        ram[74] = "0b00111101100100001101111001011010";
        ram[75] = "0b00111101010011111100110000100110";
        ram[76] = "0b00111110000001001100011011100111";
        ram[77] = "0b00111101011001010000110110000110";
        ram[78] = "0b10111101111100110101011001010100";
        ram[79] = "0b10111100110011100010011011010101";
        ram[80] = "0b10111101101110001010010000000110";
        ram[81] = "0b10111101000101000111011100000000";
        ram[82] = "0b00111101011000001010011110101011";
        ram[83] = "0b10111101100101011001010011011000";


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


SC_MODULE(inference_mult_1_120_120_84_s_W4_4) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 84;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


inference_mult_1_120_120_84_s_W4_4_ram* meminst;


SC_CTOR(inference_mult_1_120_120_84_s_W4_4) {
meminst = new inference_mult_1_120_120_84_s_W4_4_ram("inference_mult_1_120_120_84_s_W4_4_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~inference_mult_1_120_120_84_s_W4_4() {
    delete meminst;
}


};//endmodule
#endif