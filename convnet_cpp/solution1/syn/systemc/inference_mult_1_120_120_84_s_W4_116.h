// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __inference_mult_1_120_120_84_s_W4_116_H__
#define __inference_mult_1_120_120_84_s_W4_116_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct inference_mult_1_120_120_84_s_W4_116_ram : public sc_core::sc_module {

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


   SC_CTOR(inference_mult_1_120_120_84_s_W4_116_ram) {
        ram[0] = "0b10111011101010111111011001010011";
        ram[1] = "0b10111101000011111011111111100001";
        ram[2] = "0b00111110000000001111111111011010";
        ram[3] = "0b10111011111011001101101111110110";
        ram[4] = "0b10111110001101110100101001110111";
        ram[5] = "0b10111101011110000010101000101110";
        ram[6] = "0b10111100111011010111011111010011";
        ram[7] = "0b00111101100101000110101101000010";
        ram[8] = "0b10111101100111101000100000010110";
        ram[9] = "0b10111101101011011101100101010111";
        ram[10] = "0b10111110000101111111011101111011";
        ram[11] = "0b10111100110010101010100111011101";
        ram[12] = "0b00111101101100001011111000110110";
        ram[13] = "0b00111101000110011010000001010000";
        ram[14] = "0b00111110001010010111101011101110";
        ram[15] = "0b00111100010011101000011101001101";
        ram[16] = "0b10111101000010111000110000100101";
        ram[17] = "0b10111110001010100110000000001011";
        ram[18] = "0b00111101100001100010100101111010";
        ram[19] = "0b10111110000101100001110100000000";
        ram[20] = "0b10111101000100011101111101011011";
        ram[21] = "0b00111100101000001000111011101100";
        ram[22] = "0b00111101110001101010011110011111";
        ram[23] = "0b10111101111010101010111010110000";
        ram[24] = "0b00111110000011101110110001111101";
        ram[25] = "0b00111101100111000001111010100010";
        ram[26] = "0b10111110011011110010101101100111";
        ram[27] = "0b10111101100101101001000100111100";
        ram[28] = "0b10111100011110110010000101110100";
        ram[29] = "0b10111101010110011011010010001100";
        ram[30] = "0b00111110000100001010000101111011";
        ram[31] = "0b00111101001011101101001101101101";
        ram[32] = "0b00111101110110001110110000010000";
        ram[33] = "0b10111101010100100100000111101100";
        ram[34] = "0b10111101100010110001101000011101";
        ram[35] = "0b10111101011100011111001011000001";
        ram[36] = "0b00111110000111001001110101011010";
        ram[37] = "0b00111011111000110100000000010110";
        ram[38] = "0b00111010101000111011101111011100";
        ram[39] = "0b10111110000010001011010111001100";
        ram[40] = "0b00111101101111110000010100000110";
        ram[41] = "0b10111110010011011010010111011011";
        ram[42] = "0b00111101100011000101111011110110";
        ram[43] = "0b00111100010011110101100100000100";
        ram[44] = "0b10111100101000110011101010011000";
        ram[45] = "0b00111101101101110011011111110101";
        ram[46] = "0b00111100100001101110111000110001";
        ram[47] = "0b10111100110101101101010100101111";
        ram[48] = "0b00111101011110101101001011001111";
        ram[49] = "0b10111100111011111010000101111001";
        ram[50] = "0b00111100111011011101101110100110";
        ram[51] = "0b00111101101101000100100101010110";
        ram[52] = "0b00111101111111011001110110111011";
        ram[53] = "0b00111110001111000001110101101101";
        ram[54] = "0b00111101101010001101100001001100";
        ram[55] = "0b00111100111101011001110000101111";
        ram[56] = "0b00111101100101111010001000010011";
        ram[57] = "0b00111100101011010101101011100010";
        ram[58] = "0b10111101100011100101100110010101";
        ram[59] = "0b10111100100011111001011101001101";
        ram[60] = "0b10111101100110110011000111101010";
        ram[61] = "0b10111110100010000001100101001100";
        ram[62] = "0b00111101100101000111001101000111";
        ram[63] = "0b10111110001110001101101110001100";
        ram[64] = "0b00111100110001111110101001111010";
        ram[65] = "0b00111100110011100110010100011110";
        ram[66] = "0b10111101111110111010000000011111";
        ram[67] = "0b10111110000010000111101100010100";
        ram[68] = "0b00111110001111110110010010001100";
        ram[69] = "0b10111101001011110100110110010110";
        ram[70] = "0b10111110010011101100111101100100";
        ram[71] = "0b00111101110010110001110100100111";
        ram[72] = "0b00111110100000110110011100111100";
        ram[73] = "0b10111110000010001110011110011011";
        ram[74] = "0b10111010101100001011001010111011";
        ram[75] = "0b10111100000011111101010101001011";
        ram[76] = "0b00111101001100101100111111100110";
        ram[77] = "0b00111100001001000011011100010111";
        ram[78] = "0b10111100001001100000110101000101";
        ram[79] = "0b00111101101000000000010011010011";
        ram[80] = "0b10111100001100110100101110000111";
        ram[81] = "0b10111101110011101110011111000101";
        ram[82] = "0b00111110000001110111001010010011";
        ram[83] = "0b10111110001011101111011000110000";


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


SC_MODULE(inference_mult_1_120_120_84_s_W4_116) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 84;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


inference_mult_1_120_120_84_s_W4_116_ram* meminst;


SC_CTOR(inference_mult_1_120_120_84_s_W4_116) {
meminst = new inference_mult_1_120_120_84_s_W4_116_ram("inference_mult_1_120_120_84_s_W4_116_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~inference_mult_1_120_120_84_s_W4_116() {
    delete meminst;
}


};//endmodule
#endif