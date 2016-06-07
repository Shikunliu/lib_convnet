// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __inference_mult_1_120_120_84_s_W4_42_H__
#define __inference_mult_1_120_120_84_s_W4_42_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct inference_mult_1_120_120_84_s_W4_42_ram : public sc_core::sc_module {

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


   SC_CTOR(inference_mult_1_120_120_84_s_W4_42_ram) {
        ram[0] = "0b00111101011001001110011101110110";
        ram[1] = "0b10111101110101100010101101101011";
        ram[2] = "0b10111100010000000110101110010101";
        ram[3] = "0b00111101101000001001011101101010";
        ram[4] = "0b00111101110100111010011100010001";
        ram[5] = "0b00111101100101110000000011001110";
        ram[6] = "0b10111101111000011100100000100001";
        ram[7] = "0b00111110001011001100101011110111";
        ram[8] = "0b00111101110010100011010001011111";
        ram[9] = "0b00111101101010110011101100001010";
        ram[10] = "0b00111100110100110001111110010111";
        ram[11] = "0b10111101001011010101100000101000";
        ram[12] = "0b00111110000111100100110100011010";
        ram[13] = "0b00111101100011000101000010110011";
        ram[14] = "0b00111101110000100111110001010100";
        ram[15] = "0b00111101100000010111001010111001";
        ram[16] = "0b00111101101011001010000001001010";
        ram[17] = "0b00111101000110111011101011000001";
        ram[18] = "0b10111101011110010100001110000011";
        ram[19] = "0b00111010100001100110000010101101";
        ram[20] = "0b10111101101100100110011110111001";
        ram[21] = "0b10111101011100110111111010011000";
        ram[22] = "0b00111101010101110001001010111100";
        ram[23] = "0b10111101110011000001100011101011";
        ram[24] = "0b00111101100010110100011110011111";
        ram[25] = "0b10111101100101001101011010111100";
        ram[26] = "0b10111100011110100011110110110100";
        ram[27] = "0b00111011000001111000001111101101";
        ram[28] = "0b00111100100101010111000011100000";
        ram[29] = "0b00111101110010100011110001010111";
        ram[30] = "0b10111110010001001110111101000110";
        ram[31] = "0b00111101111000011010011100011010";
        ram[32] = "0b10111011010000101101011100101011";
        ram[33] = "0b10111101001110101011001010011110";
        ram[34] = "0b00111101100101100101110110001010";
        ram[35] = "0b10111101100000110100101001000101";
        ram[36] = "0b10111101100110001000011100100011";
        ram[37] = "0b10111101110000100110011111100010";
        ram[38] = "0b00111110001111011110110100101001";
        ram[39] = "0b00111101100011100111001000101100";
        ram[40] = "0b00111101101011110000111001101000";
        ram[41] = "0b10111101110000010110000010010101";
        ram[42] = "0b00111110000000001100010100100010";
        ram[43] = "0b00111100010111010110100000100110";
        ram[44] = "0b00111110000010101001100011101110";
        ram[45] = "0b10111100011011101011010011101010";
        ram[46] = "0b10111101101110001010111111011111";
        ram[47] = "0b00111101101101001101010101101101";
        ram[48] = "0b00111100100101001010100001100011";
        ram[49] = "0b00111101000101001011010010101000";
        ram[50] = "0b00111100100110111001100011100011";
        ram[51] = "0b10111110010000101110100101000111";
        ram[52] = "0b10111101111010111100010110011100";
        ram[53] = "0b00111101011111101001001000100111";
        ram[54] = "0b10111110001000000100000101000110";
        ram[55] = "0b00111101101000111101110001001000";
        ram[56] = "0b00111110000011001101011010000000";
        ram[57] = "0b00111101011101101111101111100000";
        ram[58] = "0b00111101011100101100101010001101";
        ram[59] = "0b10111101111110001011011010010101";
        ram[60] = "0b00111101011111101010010111011101";
        ram[61] = "0b00111110001010000011111110010010";
        ram[62] = "0b10111011101110111110001110011011";
        ram[63] = "0b00111100110111001111001010110101";
        ram[64] = "0b00111101010010110011001000101101";
        ram[65] = "0b10111101110101110110110001001000";
        ram[66] = "0b10111101110010101100110000110100";
        ram[67] = "0b00111101101010011111010110011101";
        ram[68] = "0b10111110000010100101010011000101";
        ram[69] = "0b00111100010101000001001010100111";
        ram[70] = "0b10111101001000011001100011110010";
        ram[71] = "0b10111110001010111111001001101111";
        ram[72] = "0b10111101111001111010001100010010";
        ram[73] = "0b00111110000010011001110100000010";
        ram[74] = "0b10111110000110000101010011001110";
        ram[75] = "0b10111110000110100111110100100100";
        ram[76] = "0b10111101111010011001000111111111";
        ram[77] = "0b00111100111011100101001100101111";
        ram[78] = "0b00111101100011001100010111101111";
        ram[79] = "0b00111101100111110111111101010111";
        ram[80] = "0b00111101010110110011000011111001";
        ram[81] = "0b00111101111101110110010111111110";
        ram[82] = "0b00111110000100010110011001011010";
        ram[83] = "0b10111101011000000010100100000000";


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


SC_MODULE(inference_mult_1_120_120_84_s_W4_42) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 84;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


inference_mult_1_120_120_84_s_W4_42_ram* meminst;


SC_CTOR(inference_mult_1_120_120_84_s_W4_42) {
meminst = new inference_mult_1_120_120_84_s_W4_42_ram("inference_mult_1_120_120_84_s_W4_42_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~inference_mult_1_120_120_84_s_W4_42() {
    delete meminst;
}


};//endmodule
#endif