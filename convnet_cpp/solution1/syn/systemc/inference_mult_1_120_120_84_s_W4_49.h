// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __inference_mult_1_120_120_84_s_W4_49_H__
#define __inference_mult_1_120_120_84_s_W4_49_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct inference_mult_1_120_120_84_s_W4_49_ram : public sc_core::sc_module {

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


   SC_CTOR(inference_mult_1_120_120_84_s_W4_49_ram) {
        ram[0] = "0b10111101000011001100011010011101";
        ram[1] = "0b10111101001010011000110101000111";
        ram[2] = "0b00111101011010101011111001001111";
        ram[3] = "0b00111101010100001000100001111001";
        ram[4] = "0b10111101100111001000000101001101";
        ram[5] = "0b00111101010100100101000000101111";
        ram[6] = "0b00111101000011011100100100110001";
        ram[7] = "0b00111110000011011010111011000101";
        ram[8] = "0b10111101110111010111001101000011";
        ram[9] = "0b00111100100110010011000101011111";
        ram[10] = "0b10111110001001101110101101001111";
        ram[11] = "0b10111110000101100001010111101100";
        ram[12] = "0b00111110000100000001111101110101";
        ram[13] = "0b00111101110011111000110001100101";
        ram[14] = "0b00111110001100000100000101000110";
        ram[15] = "0b10111101100110100000010010101001";
        ram[16] = "0b10111110000001000110101010100001";
        ram[17] = "0b10111110001101010000100111000000";
        ram[18] = "0b10111100010101111101101110001001";
        ram[19] = "0b10111101010001011010110010011000";
        ram[20] = "0b10111101011011101101100010101011";
        ram[21] = "0b00111011101000101101101101100010";
        ram[22] = "0b00111101111100101110001011111100";
        ram[23] = "0b00111110010001111101001001000010";
        ram[24] = "0b00111101100001110011000010011110";
        ram[25] = "0b00111101100101010001000010010000";
        ram[26] = "0b10111101000011100000011101011111";
        ram[27] = "0b00111101000010101011010000100100";
        ram[28] = "0b00111101000011110000010000101111";
        ram[29] = "0b10111101000100110010111010010110";
        ram[30] = "0b10111110000001001111101000000101";
        ram[31] = "0b00111011110000000010101100010011";
        ram[32] = "0b00111110001000001001000011110111";
        ram[33] = "0b10111110000101111100111111100110";
        ram[34] = "0b00111101101100100010001010101101";
        ram[35] = "0b00111100110000010011000100100011";
        ram[36] = "0b00111110001101000000000100111111";
        ram[37] = "0b00111101011001000111010000111001";
        ram[38] = "0b00111101100110110000100110001100";
        ram[39] = "0b00111011101100001110101010011001";
        ram[40] = "0b00111101101101010001101000110110";
        ram[41] = "0b10111101100101010000000110000100";
        ram[42] = "0b10111101100011101000100100111101";
        ram[43] = "0b00111101001010110101001110111011";
        ram[44] = "0b00111110010001100001011011111000";
        ram[45] = "0b00111101010010110101010011111110";
        ram[46] = "0b10111101101100000111110100110011";
        ram[47] = "0b10111100111011101100011100101000";
        ram[48] = "0b10111101101101000110110110011110";
        ram[49] = "0b00111101100110101011101100101010";
        ram[50] = "0b10111101111001010101000000000001";
        ram[51] = "0b00111100011101101110110100110010";
        ram[52] = "0b00111010100010110010101101101101";
        ram[53] = "0b10111100110000000010111001011001";
        ram[54] = "0b10111110000111001011001111100101";
        ram[55] = "0b00111101111111011100111100000011";
        ram[56] = "0b10111011101101110111110011000100";
        ram[57] = "0b00111100111001010011111001111110";
        ram[58] = "0b10111100010000000011101111000101";
        ram[59] = "0b00111100010101001111100101010111";
        ram[60] = "0b10111100100110010101010000101111";
        ram[61] = "0b10111110000001001010011101110010";
        ram[62] = "0b10111100100001111000010011000100";
        ram[63] = "0b10111100101110010101010101010110";
        ram[64] = "0b00111110000001011000101111000110";
        ram[65] = "0b10111110000001100000010001011100";
        ram[66] = "0b00111100000010101111101110010001";
        ram[67] = "0b10111100010111100001010000011101";
        ram[68] = "0b10111011110011110101001101111010";
        ram[69] = "0b10111101010001101001001111101000";
        ram[70] = "0b10111101111100010000010111100010";
        ram[71] = "0b10111110000001001101001100111001";
        ram[72] = "0b10111101001010100000101000101010";
        ram[73] = "0b00111101111010010100100110100101";
        ram[74] = "0b10111100100000010011100110000110";
        ram[75] = "0b00111101100100100001001110010011";
        ram[76] = "0b00111100011110111101011000111010";
        ram[77] = "0b10111101101000000010001110100111";
        ram[78] = "0b00111101000010010000110111100001";
        ram[79] = "0b10111110000011101111011000110000";
        ram[80] = "0b10111011000101001100010011001001";
        ram[81] = "0b10111110001100100010100111101001";
        ram[82] = "0b00111100101100000110001011010100";
        ram[83] = "0b00111101110000001001111110011000";


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


SC_MODULE(inference_mult_1_120_120_84_s_W4_49) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 84;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


inference_mult_1_120_120_84_s_W4_49_ram* meminst;


SC_CTOR(inference_mult_1_120_120_84_s_W4_49) {
meminst = new inference_mult_1_120_120_84_s_W4_49_ram("inference_mult_1_120_120_84_s_W4_49_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~inference_mult_1_120_120_84_s_W4_49() {
    delete meminst;
}


};//endmodule
#endif