// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __inference_mult_1_120_120_84_s_W4_71_H__
#define __inference_mult_1_120_120_84_s_W4_71_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct inference_mult_1_120_120_84_s_W4_71_ram : public sc_core::sc_module {

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


   SC_CTOR(inference_mult_1_120_120_84_s_W4_71_ram) {
        ram[0] = "0b10111110000100111000011100010110";
        ram[1] = "0b00111110010001110000011110011110";
        ram[2] = "0b10111101001001000110000100100011";
        ram[3] = "0b10111110000110001110001010100000";
        ram[4] = "0b00111101000110010000010111110110";
        ram[5] = "0b10111011110101000010000111000000";
        ram[6] = "0b10111101101010100110011010011001";
        ram[7] = "0b00111101100101111010110011000101";
        ram[8] = "0b10111101100111000110100001011001";
        ram[9] = "0b10111101001101100011111100111100";
        ram[10] = "0b00111101110110011100011000101010";
        ram[11] = "0b00111100010110101101110011000101";
        ram[12] = "0b10111100100100100000111101100010";
        ram[13] = "0b00111101010010000011100100011111";
        ram[14] = "0b10111100110001101111101010010000";
        ram[15] = "0b10111011111010000001000000001010";
        ram[16] = "0b00111101000100110110101101001100";
        ram[17] = "0b00111110001101111001111001011010";
        ram[18] = "0b10111101110011011111101001000100";
        ram[19] = "0b00111101111101111100101110110100";
        ram[20] = "0b00111101000100111100010011110100";
        ram[21] = "0b10111101110101101010010010000111";
        ram[22] = "0b10111101001100011101011100101101";
        ram[23] = "0b00111101101110111000111000110001";
        ram[24] = "0b10111101001000111111001100001001";
        ram[25] = "0b00111101110001101110001010101000";
        ram[26] = "0b00111101000111111110110101010110";
        ram[27] = "0b10111101101111101011000010111000";
        ram[28] = "0b00111101110111000101000111011011";
        ram[29] = "0b00111110001100010011001100111100";
        ram[30] = "0b10111101010101101110100000101001";
        ram[31] = "0b10111110000001010110010111000011";
        ram[32] = "0b10111101100101001111011110011100";
        ram[33] = "0b10111101001110110111101010010101";
        ram[34] = "0b00111101110010010000001011010001";
        ram[35] = "0b10111100000101010101011110001011";
        ram[36] = "0b00111110001001011100101001101101";
        ram[37] = "0b00111101010101001100111111010001";
        ram[38] = "0b00111101110100101101001010111011";
        ram[39] = "0b00111101101101101011000111001011";
        ram[40] = "0b00111101100010111110001011001111";
        ram[41] = "0b00111101111011011111001011101101";
        ram[42] = "0b10111110010001110101001110100100";
        ram[43] = "0b00111101011001110010000001010000";
        ram[44] = "0b10111101010011100001010010110001";
        ram[45] = "0b00111101011010000011111100110100";
        ram[46] = "0b10111011010000010100001111011000";
        ram[47] = "0b10111101001101000110111100001000";
        ram[48] = "0b10111100111001011011000100110101";
        ram[49] = "0b00111101000110011101000001010110";
        ram[50] = "0b00111101101101011000011001010010";
        ram[51] = "0b00111101110101101011100011111010";
        ram[52] = "0b10111110000110111011011011101101";
        ram[53] = "0b00111101100110000000111100100000";
        ram[54] = "0b00111100100100010011100101000011";
        ram[55] = "0b10111101001111010100110011111101";
        ram[56] = "0b00111101011111111001110110100101";
        ram[57] = "0b10111101000110010001100010000101";
        ram[58] = "0b10111101001001101100000000101000";
        ram[59] = "0b10111110001001110001011001001100";
        ram[60] = "0b00111101100010011001101110011000";
        ram[61] = "0b10111101001001001010111110101101";
        ram[62] = "0b10111101101000110001100010111001";
        ram[63] = "0b10111110001110011101001001111100";
        ram[64] = "0b10111101101001101011100000001000";
        ram[65] = "0b00111101011010110011100010101110";
        ram[66] = "0b00111101100111100111001101100000";
        ram[67] = "0b00111110000110011001001111010101";
        ram[68] = "0b00111001100011001101011110110111";
        ram[69] = "0b00111011100110000111111001010001";
        ram[70] = "0b00111110000100110110011001010001";
        ram[71] = "0b00111101001101001111000101011110";
        ram[72] = "0b10111101001011110110010111101001";
        ram[73] = "0b00111100100001101110110010111001";
        ram[74] = "0b10111101111100000110010111111001";
        ram[75] = "0b10111101100010111010011011100010";
        ram[76] = "0b00111011100100111111001000010000";
        ram[77] = "0b10111011100000100010101010101000";
        ram[78] = "0b00111110000000100001010000100111";
        ram[79] = "0b00111101101110011010111001110111";
        ram[80] = "0b10111101101111111100110101000000";
        ram[81] = "0b00111101011010000111001111010111";
        ram[82] = "0b00111100101110111001000101110001";
        ram[83] = "0b10111101111001110010101001111100";


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


SC_MODULE(inference_mult_1_120_120_84_s_W4_71) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 84;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


inference_mult_1_120_120_84_s_W4_71_ram* meminst;


SC_CTOR(inference_mult_1_120_120_84_s_W4_71) {
meminst = new inference_mult_1_120_120_84_s_W4_71_ram("inference_mult_1_120_120_84_s_W4_71_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~inference_mult_1_120_120_84_s_W4_71() {
    delete meminst;
}


};//endmodule
#endif
