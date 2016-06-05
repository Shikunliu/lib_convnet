// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __inference_mult_1_120_120_84_s_W4_36_H__
#define __inference_mult_1_120_120_84_s_W4_36_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct inference_mult_1_120_120_84_s_W4_36_ram : public sc_core::sc_module {

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


   SC_CTOR(inference_mult_1_120_120_84_s_W4_36_ram) {
        ram[0] = "0b00111100000111010111111110111000";
        ram[1] = "0b10111101111110100110000101011011";
        ram[2] = "0b00111101001111111011011110001011";
        ram[3] = "0b10111110001011001011100000010111";
        ram[4] = "0b10111101010100100000101100010101";
        ram[5] = "0b00111101100000010100011010010100";
        ram[6] = "0b00111101001001011000000111001111";
        ram[7] = "0b00111101100111111001100110101001";
        ram[8] = "0b10111100011100101101111100011011";
        ram[9] = "0b10111010001100100111000010001001";
        ram[10] = "0b10111101101100001101001001100110";
        ram[11] = "0b00111100011100100100100101011110";
        ram[12] = "0b00111110000001010100011001001110";
        ram[13] = "0b10111101100111000011011011101000";
        ram[14] = "0b10111110000011110011000001100010";
        ram[15] = "0b10111110001110101011111011110000";
        ram[16] = "0b00111101011110101111010001011101";
        ram[17] = "0b00111101000011010100001111101011";
        ram[18] = "0b00111011011010110011011100011011";
        ram[19] = "0b10111110001011010001110100000100";
        ram[20] = "0b00111101101110010001111100000101";
        ram[21] = "0b00111101111110000110100001110111";
        ram[22] = "0b10111100100101101110100011100101";
        ram[23] = "0b10111101111010001010001001100110";
        ram[24] = "0b00111101111000100011010110110101";
        ram[25] = "0b10111110000010000101110011101110";
        ram[26] = "0b00111100110001001010011001011000";
        ram[27] = "0b00111101110011010011101011100111";
        ram[28] = "0b10111101000001001001101111110110";
        ram[29] = "0b10111101011001101111111101100011";
        ram[30] = "0b10111101101000111111101101111010";
        ram[31] = "0b00111101011100001100100001010101";
        ram[32] = "0b10111101001101101001000011101011";
        ram[33] = "0b10111110000001111110111100010111";
        ram[34] = "0b10111110001100010111001010101100";
        ram[35] = "0b00111100100100100011000000011001";
        ram[36] = "0b10111100010100011010111001001000";
        ram[37] = "0b10111110001111010001110101000111";
        ram[38] = "0b00111100110000010101010011111111";
        ram[39] = "0b10111101001110000111110000101101";
        ram[40] = "0b00111101101101011111100100110001";
        ram[41] = "0b10111101100010010100010110011100";
        ram[42] = "0b10111101010111110010101111000101";
        ram[43] = "0b00111101000111011011110110110110";
        ram[44] = "0b00111100110110111001101010010000";
        ram[45] = "0b00111101111110001100111000101101";
        ram[46] = "0b00111110000010110010101100110100";
        ram[47] = "0b00111100101000111010000000011000";
        ram[48] = "0b10111101100001001100111110110110";
        ram[49] = "0b00111101000100100001111110001000";
        ram[50] = "0b10111110000100000000011000001000";
        ram[51] = "0b10111110001110010011110101010011";
        ram[52] = "0b10111101101110001110111101000010";
        ram[53] = "0b00111101010110010000101000101000";
        ram[54] = "0b00111011000101010000100101100111";
        ram[55] = "0b00111010101011110100000001001010";
        ram[56] = "0b00111101001100011000101100101000";
        ram[57] = "0b00111101110101010000001110111000";
        ram[58] = "0b10111101011100101110110111100100";
        ram[59] = "0b10111101110010111000001111110111";
        ram[60] = "0b10111100010100111110000110010100";
        ram[61] = "0b00111100110111010001011011000111";
        ram[62] = "0b10111101000001000010001001010100";
        ram[63] = "0b10111101100110000000001100011111";
        ram[64] = "0b00111101110111000001100010110101";
        ram[65] = "0b10111101110110010110000011111010";
        ram[66] = "0b00111110001010000101111010000001";
        ram[67] = "0b00111110010000011101110100011010";
        ram[68] = "0b00111101110010110100010100011011";
        ram[69] = "0b10111010000010101000001101010001";
        ram[70] = "0b10111101011011101111010011111011";
        ram[71] = "0b10111110001010000000000111110111";
        ram[72] = "0b00111101100110100100101000100001";
        ram[73] = "0b00111101111010110101010111101111";
        ram[74] = "0b00111101000001011000010010100100";
        ram[75] = "0b10111110010011010010010000011000";
        ram[76] = "0b10111101110010011001110111100110";
        ram[77] = "0b10111101100101011101110010101011";
        ram[78] = "0b00111110001111001010111111110111";
        ram[79] = "0b00111100101100000010000011111010";
        ram[80] = "0b00111110000011010100101001011110";
        ram[81] = "0b00111100000111100011011010010111";
        ram[82] = "0b00111101011101001110110011110111";
        ram[83] = "0b10111110000110000001100101001100";


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


SC_MODULE(inference_mult_1_120_120_84_s_W4_36) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 84;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


inference_mult_1_120_120_84_s_W4_36_ram* meminst;


SC_CTOR(inference_mult_1_120_120_84_s_W4_36) {
meminst = new inference_mult_1_120_120_84_s_W4_36_ram("inference_mult_1_120_120_84_s_W4_36_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~inference_mult_1_120_120_84_s_W4_36() {
    delete meminst;
}


};//endmodule
#endif
