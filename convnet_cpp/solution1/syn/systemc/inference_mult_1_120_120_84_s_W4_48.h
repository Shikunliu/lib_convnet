// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __inference_mult_1_120_120_84_s_W4_48_H__
#define __inference_mult_1_120_120_84_s_W4_48_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct inference_mult_1_120_120_84_s_W4_48_ram : public sc_core::sc_module {

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


   SC_CTOR(inference_mult_1_120_120_84_s_W4_48_ram) {
        ram[0] = "0b00111110001101000011110011000000";
        ram[1] = "0b00111100010100001111010000001110";
        ram[2] = "0b00111101111100011001100100110101";
        ram[3] = "0b00111101101110000110001011011011";
        ram[4] = "0b10111101000010110011101101001101";
        ram[5] = "0b10111101001101001100001010011010";
        ram[6] = "0b00111101101111011110100101111101";
        ram[7] = "0b00111110000110011000000011110101";
        ram[8] = "0b10111101010110100100110110001001";
        ram[9] = "0b00111110000001001011000011100010";
        ram[10] = "0b10111110001101000010001101010011";
        ram[11] = "0b10111101000000001111001001101110";
        ram[12] = "0b00111110001001101100110110101111";
        ram[13] = "0b10111100110010010011011010101011";
        ram[14] = "0b00111110000110101111010100110100";
        ram[15] = "0b10111101011110101010110001010100";
        ram[16] = "0b00111011000001000101011010010001";
        ram[17] = "0b00111101010111011101100101100101";
        ram[18] = "0b00111110001001011101100000001110";
        ram[19] = "0b10111101100100110100111001110111";
        ram[20] = "0b10111101010110000110010110000111";
        ram[21] = "0b00111011010011111101100110011101";
        ram[22] = "0b00111110000101010100111110111110";
        ram[23] = "0b10111101000111010101000011000011";
        ram[24] = "0b10111101000101010001001010110111";
        ram[25] = "0b00111100011001111111111011101101";
        ram[26] = "0b00111100100001011000000110110101";
        ram[27] = "0b10111100111000100010101101101110";
        ram[28] = "0b10111101010101001111100000101111";
        ram[29] = "0b10111101111110100000110001101011";
        ram[30] = "0b00111011110111110101111101001100";
        ram[31] = "0b10111101101101100011001000000110";
        ram[32] = "0b00111110010110000001010000001110";
        ram[33] = "0b00111101101100001011110110111101";
        ram[34] = "0b10111110001011111001110000100000";
        ram[35] = "0b00111101101111110011010001111001";
        ram[36] = "0b10111100110010101100000111111011";
        ram[37] = "0b00111101110000101110101000010000";
        ram[38] = "0b10111100100100010011110001101000";
        ram[39] = "0b00111100111000011001110101110100";
        ram[40] = "0b10111100010110110000101000010010";
        ram[41] = "0b10111101101100101010011110100010";
        ram[42] = "0b10111110000101101101001001100111";
        ram[43] = "0b10111101101110011100100100001100";
        ram[44] = "0b10111101111010101000000100010011";
        ram[45] = "0b00111101100111110001110101110101";
        ram[46] = "0b00111110001101010100001011100101";
        ram[47] = "0b00111101000110000000011000011100";
        ram[48] = "0b00111101101111101011101100100111";
        ram[49] = "0b00111101100001010110000111111100";
        ram[50] = "0b00111101101011110001001101111110";
        ram[51] = "0b10111101101110110001100000011111";
        ram[52] = "0b00111101000000001110100101001111";
        ram[53] = "0b10111101010110011011101000011011";
        ram[54] = "0b00111101100010000111110000101101";
        ram[55] = "0b10111110000100101010011001101110";
        ram[56] = "0b10111101000011001000110010000110";
        ram[57] = "0b10111110001100000001101111001010";
        ram[58] = "0b10111100111101010011111000000101";
        ram[59] = "0b00111100000101000000001011101100";
        ram[60] = "0b00111100110001001111011110000001";
        ram[61] = "0b00111110001000010010101111100101";
        ram[62] = "0b00111101110110110111000111111100";
        ram[63] = "0b10111101111010010100110111010111";
        ram[64] = "0b00111101100111011000111101101010";
        ram[65] = "0b00111100110010101010010100001010";
        ram[66] = "0b00111101110010110011000111101010";
        ram[67] = "0b00111101000001010101001010111011";
        ram[68] = "0b10111101010010010100111101101010";
        ram[69] = "0b00111101000011111100001000110000";
        ram[70] = "0b10111101010101000111100011001000";
        ram[71] = "0b10111101010100101010000100111101";
        ram[72] = "0b00111101001110111011101100010010";
        ram[73] = "0b00111101011110001010100101000100";
        ram[74] = "0b10111100101101100101100111000100";
        ram[75] = "0b00111101111001001111010111010011";
        ram[76] = "0b10111101001011001100011010000010";
        ram[77] = "0b10111110000001110010000011001001";
        ram[78] = "0b00111101110000111001100011011100";
        ram[79] = "0b00111101100110010100101111001100";
        ram[80] = "0b10111101110101011110010000011101";
        ram[81] = "0b10111110010101000010011111001000";
        ram[82] = "0b00111101110011000100011011011000";
        ram[83] = "0b10111101100010010101011100111010";


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


SC_MODULE(inference_mult_1_120_120_84_s_W4_48) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 84;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


inference_mult_1_120_120_84_s_W4_48_ram* meminst;


SC_CTOR(inference_mult_1_120_120_84_s_W4_48) {
meminst = new inference_mult_1_120_120_84_s_W4_48_ram("inference_mult_1_120_120_84_s_W4_48_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~inference_mult_1_120_120_84_s_W4_48() {
    delete meminst;
}


};//endmodule
#endif