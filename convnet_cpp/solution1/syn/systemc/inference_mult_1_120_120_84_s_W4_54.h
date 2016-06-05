// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __inference_mult_1_120_120_84_s_W4_54_H__
#define __inference_mult_1_120_120_84_s_W4_54_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct inference_mult_1_120_120_84_s_W4_54_ram : public sc_core::sc_module {

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


   SC_CTOR(inference_mult_1_120_120_84_s_W4_54_ram) {
        ram[0] = "0b00111101100100111110100011111000";
        ram[1] = "0b00111101100100010000110000010010";
        ram[2] = "0b00111110010100000000110001010010";
        ram[3] = "0b10111101101100101101101011000001";
        ram[4] = "0b10111110001101110111000111001001";
        ram[5] = "0b10111100101100001000101011100010";
        ram[6] = "0b00111101110011111001010101001111";
        ram[7] = "0b00111101101001110100110110000010";
        ram[8] = "0b10111011001000100010010010000011";
        ram[9] = "0b00111101111010001011101100001010";
        ram[10] = "0b00111110001011111001001011110011";
        ram[11] = "0b10111101001111010011100011110110";
        ram[12] = "0b10111011011100001111000000011000";
        ram[13] = "0b00111110011000001111001101000101";
        ram[14] = "0b10111110000101111111111101011000";
        ram[15] = "0b00111100100100110101111000010110";
        ram[16] = "0b10111101111011011101101111011011";
        ram[17] = "0b10111110010110010010011111010100";
        ram[18] = "0b00111110001000000010001101100100";
        ram[19] = "0b00111101100100111010000001000000";
        ram[20] = "0b10111101001111101110110101000110";
        ram[21] = "0b10111101101001000111111111001111";
        ram[22] = "0b10111101111000001101111101011001";
        ram[23] = "0b10111101011100010101011110010001";
        ram[24] = "0b10111110000101111101000010101111";
        ram[25] = "0b00111101100110010000001000111101";
        ram[26] = "0b00111101100100000000111001000011";
        ram[27] = "0b10111100100100010110011010010000";
        ram[28] = "0b00111101111010101111010111111101";
        ram[29] = "0b10111110001000110011110011100110";
        ram[30] = "0b10111101001000011101011111110111";
        ram[31] = "0b00111110011000100110001000000010";
        ram[32] = "0b00111101100001110100001010001100";
        ram[33] = "0b10111101101001110010001110111000";
        ram[34] = "0b10111110000001010101111001101100";
        ram[35] = "0b00111110001010110000010100110010";
        ram[36] = "0b00111100010010001010000000010111";
        ram[37] = "0b10111101110110100111110000011000";
        ram[38] = "0b10111101110111100111111010100110";
        ram[39] = "0b00111100101011101011000101011001";
        ram[40] = "0b00111101010111001000000111111100";
        ram[41] = "0b10111101010100001010110101000111";
        ram[42] = "0b00111101101010100100010100011000";
        ram[43] = "0b00111101000111110011101111010000";
        ram[44] = "0b10111100011101110001010111100001";
        ram[45] = "0b10111100100111111001010110010010";
        ram[46] = "0b00111110001101110011100011100111";
        ram[47] = "0b10111100100001000111101010111001";
        ram[48] = "0b10111100111101110100101000011001";
        ram[49] = "0b10111101001110001100100000110011";
        ram[50] = "0b10111010011100101111011111111100";
        ram[51] = "0b00111100100110101011111011111110";
        ram[52] = "0b00111100101110001010000101100111";
        ram[53] = "0b10111101011111111101001111011011";
        ram[54] = "0b10111101100011010010011110000000";
        ram[55] = "0b00111100100101001101111111110110";
        ram[56] = "0b10111100111011100010100100111110";
        ram[57] = "0b10111101000010000010001100011010";
        ram[58] = "0b00111101101011001000010110110101";
        ram[59] = "0b10111100110010100010110101001011";
        ram[60] = "0b10111101110101111111110110000010";
        ram[61] = "0b10111101110111101101111100011110";
        ram[62] = "0b00111100111101001110110110110011";
        ram[63] = "0b10111101101001110011011100011110";
        ram[64] = "0b00111100101110000010101110001011";
        ram[65] = "0b00111101101100100011101100011011";
        ram[66] = "0b00111101111110100110010110001100";
        ram[67] = "0b10111101111001010100110101100010";
        ram[68] = "0b00111101111001111010011111001010";
        ram[69] = "0b00111100101110100110111111010011";
        ram[70] = "0b10111101110101110110000010111111";
        ram[71] = "0b00111101000001110111100001001010";
        ram[72] = "0b00111010101010011110100110011110";
        ram[73] = "0b10111110100000110110100111011011";
        ram[74] = "0b10111100011110001010110111111100";
        ram[75] = "0b00111110000000110000110011101101";
        ram[76] = "0b00111100101010000101111111010000";
        ram[77] = "0b00111100110101000011100101110011";
        ram[78] = "0b10111110000101110110100011100000";
        ram[79] = "0b10111101001010111010101100010100";
        ram[80] = "0b10111101101101001101011110000110";
        ram[81] = "0b10111101111000001110011000101010";
        ram[82] = "0b00111110001101110101001111100111";
        ram[83] = "0b00111101100101111001100111100101";


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


SC_MODULE(inference_mult_1_120_120_84_s_W4_54) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 84;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


inference_mult_1_120_120_84_s_W4_54_ram* meminst;


SC_CTOR(inference_mult_1_120_120_84_s_W4_54) {
meminst = new inference_mult_1_120_120_84_s_W4_54_ram("inference_mult_1_120_120_84_s_W4_54_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~inference_mult_1_120_120_84_s_W4_54() {
    delete meminst;
}


};//endmodule
#endif
