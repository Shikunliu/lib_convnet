// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __inference_mult_1_120_120_84_s_W4_88_H__
#define __inference_mult_1_120_120_84_s_W4_88_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct inference_mult_1_120_120_84_s_W4_88_ram : public sc_core::sc_module {

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


   SC_CTOR(inference_mult_1_120_120_84_s_W4_88_ram) {
        ram[0] = "0b10111101011001000001101100011000";
        ram[1] = "0b10111101110111011011001000101101";
        ram[2] = "0b10111011110111010100110000110110";
        ram[3] = "0b10111101101000010111001011100010";
        ram[4] = "0b10111100110000111000110100011110";
        ram[5] = "0b00111101001011001110000011101111";
        ram[6] = "0b10111101001101011101111110000000";
        ram[7] = "0b00111101010101000000000000110010";
        ram[8] = "0b00111101110100011101101000111000";
        ram[9] = "0b00111100100010100011000001110000";
        ram[10] = "0b00111110000100111011111111111001";
        ram[11] = "0b10111101010101010110111101001110";
        ram[12] = "0b00111101111111100011101001111110";
        ram[13] = "0b10111011010011100001010110100010";
        ram[14] = "0b10111101110001101111010001000110";
        ram[15] = "0b10111101101101000101001101100111";
        ram[16] = "0b10111101000101101011010101001110";
        ram[17] = "0b10111101111000110111111011110110";
        ram[18] = "0b10111011111001010001111011101001";
        ram[19] = "0b00111011111001000011111001000011";
        ram[20] = "0b00111101010010101111110011101001";
        ram[21] = "0b10111100110000001101001100101111";
        ram[22] = "0b00111110000110001000001101110111";
        ram[23] = "0b10111101101111101111111001101011";
        ram[24] = "0b00111101011110000001110100101101";
        ram[25] = "0b10111101100010100101010101110100";
        ram[26] = "0b10111101100110001010111010000010";
        ram[27] = "0b00111101111101010101001111101111";
        ram[28] = "0b00111110000011001000001011100000";
        ram[29] = "0b10111101101010001001110101101011";
        ram[30] = "0b10111101001011101101000111110101";
        ram[31] = "0b10111101100010110011000001110011";
        ram[32] = "0b00111100111110001110000000011011";
        ram[33] = "0b00111110000100010101100011111011";
        ram[34] = "0b10111110000000000101001011010110";
        ram[35] = "0b10111100000010001111101100111100";
        ram[36] = "0b10111101010100110010010010100000";
        ram[37] = "0b00111101111011010111101101100011";
        ram[38] = "0b10111101001000001111010110101110";
        ram[39] = "0b00111101101011000000111100111000";
        ram[40] = "0b00111010110010011010011111010100";
        ram[41] = "0b10111100101010010001001001111110";
        ram[42] = "0b10111101100010100010111010001101";
        ram[43] = "0b00111101011100011110000001001101";
        ram[44] = "0b00111011000010000010111110111010";
        ram[45] = "0b00111101100001011110111111001110";
        ram[46] = "0b10111110000100000111011110001010";
        ram[47] = "0b00111101001010100101101001100001";
        ram[48] = "0b00111110001001011000110001001100";
        ram[49] = "0b10111101111000010101011111101111";
        ram[50] = "0b10111101011100110011000001000100";
        ram[51] = "0b00111011000101110110011110111011";
        ram[52] = "0b10111101100000000110000000011010";
        ram[53] = "0b10111011111100100010010110001100";
        ram[54] = "0b00111101011111111010000000001110";
        ram[55] = "0b00111100111111100001110101110010";
        ram[56] = "0b10111011101000010011100111110111";
        ram[57] = "0b00111101100011000110010010111011";
        ram[58] = "0b10111101111010010001011001000100";
        ram[59] = "0b00111101011010111001101100111111";
        ram[60] = "0b00111101110011100110111110110101";
        ram[61] = "0b00111010100111101001101000110100";
        ram[62] = "0b10111100111111101000001111111111";
        ram[63] = "0b00111101011000011000110100110011";
        ram[64] = "0b00111100010110101110011000000000";
        ram[65] = "0b00111110000011101001111000011011";
        ram[66] = "0b10111100111110011110011101001101";
        ram[67] = "0b00111101111001000110110110000011";
        ram[68] = "0b10111101000111111100100011011000";
        ram[69] = "0b00111101010000100000011101000001";
        ram[70] = "0b00111101100000001011001111000111";
        ram[71] = "0b10111101000110111101100100001111";
        ram[72] = "0b10111101101100011011110101101111";
        ram[73] = "0b00111110000100111101010010101110";
        ram[74] = "0b10111110000011100011001101101010";
        ram[75] = "0b10111100101111001110111001101000";
        ram[76] = "0b10111100100110010011000011110100";
        ram[77] = "0b10111100110110000001001000010000";
        ram[78] = "0b10111101100010110001110111110001";
        ram[79] = "0b00111101011010101110110000111101";
        ram[80] = "0b00111101110001101010011111111101";
        ram[81] = "0b00111110000110111110010100010001";
        ram[82] = "0b00111101110110111100110010101111";
        ram[83] = "0b00111100001011101011110111101110";


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


SC_MODULE(inference_mult_1_120_120_84_s_W4_88) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 84;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


inference_mult_1_120_120_84_s_W4_88_ram* meminst;


SC_CTOR(inference_mult_1_120_120_84_s_W4_88) {
meminst = new inference_mult_1_120_120_84_s_W4_88_ram("inference_mult_1_120_120_84_s_W4_88_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~inference_mult_1_120_120_84_s_W4_88() {
    delete meminst;
}


};//endmodule
#endif