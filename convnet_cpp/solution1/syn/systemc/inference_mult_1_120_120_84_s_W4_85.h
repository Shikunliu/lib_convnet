// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __inference_mult_1_120_120_84_s_W4_85_H__
#define __inference_mult_1_120_120_84_s_W4_85_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct inference_mult_1_120_120_84_s_W4_85_ram : public sc_core::sc_module {

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


   SC_CTOR(inference_mult_1_120_120_84_s_W4_85_ram) {
        ram[0] = "0b00111101001110000001000110100100";
        ram[1] = "0b00111101100001000110010000100000";
        ram[2] = "0b10111100100111011001011001111110";
        ram[3] = "0b10111011110000010100101100111001";
        ram[4] = "0b00111101100100000110110000110111";
        ram[5] = "0b00111101101000000100101011000011";
        ram[6] = "0b00111101011101100001010001110100";
        ram[7] = "0b10111101101100111110010100100101";
        ram[8] = "0b10111101101101011001011111010101";
        ram[9] = "0b10111100100000001110000101110010";
        ram[10] = "0b00111101001011100010010010111100";
        ram[11] = "0b00111110000010011100001011000010";
        ram[12] = "0b10111101111011001111001010001100";
        ram[13] = "0b00111101100110011100000111000011";
        ram[14] = "0b00111110001011010001001010001000";
        ram[15] = "0b10111101010001101110010110011000";
        ram[16] = "0b10111110010001011110110011000100";
        ram[17] = "0b10111011111000101001111111011101";
        ram[18] = "0b10111110001100101110000110101100";
        ram[19] = "0b00111101101010000010110101000110";
        ram[20] = "0b10111101100100100111100101001010";
        ram[21] = "0b00111110000000011111010001101111";
        ram[22] = "0b10111101100100100010101110110001";
        ram[23] = "0b10111101100011000110100001011001";
        ram[24] = "0b00111101100110000011000100001100";
        ram[25] = "0b10111100111011010000001100000011";
        ram[26] = "0b10111101111000110000111011000011";
        ram[27] = "0b00111011100110110010010110001011";
        ram[28] = "0b00111010111101010100101111000111";
        ram[29] = "0b00111100100111011011000010000000";
        ram[30] = "0b10111101101111010100011110110001";
        ram[31] = "0b00111101000001111101011001110011";
        ram[32] = "0b00111110000101110100110100010110";
        ram[33] = "0b10111101010010010101100101111011";
        ram[34] = "0b00111101001000110000111110110101";
        ram[35] = "0b00111101011110110011110100001000";
        ram[36] = "0b00111101010011000111000111100011";
        ram[37] = "0b10111101010001100110110001000110";
        ram[38] = "0b00111101011000001110010001100001";
        ram[39] = "0b10111100100100011111111110100111";
        ram[40] = "0b00111100111111001110000111010011";
        ram[41] = "0b10111101010011111110101100110000";
        ram[42] = "0b10111101110111011000000101101011";
        ram[43] = "0b00111101101110101001110000111011";
        ram[44] = "0b00111101110010011100110011010011";
        ram[45] = "0b10111100100110101011100111110101";
        ram[46] = "0b00111100100011100101110101011011";
        ram[47] = "0b00111100101000111011110011010011";
        ram[48] = "0b10111101110001101011100100101111";
        ram[49] = "0b00111101100001010011110101001001";
        ram[50] = "0b00111101110010011101010011001011";
        ram[51] = "0b10111101111001001010010100010110";
        ram[52] = "0b10111110000110000011010000001001";
        ram[53] = "0b10111110000110011100011000101010";
        ram[54] = "0b10111101010000101111101010000110";
        ram[55] = "0b10111101010110100000101010100011";
        ram[56] = "0b10111101101100110100110001111000";
        ram[57] = "0b00111101111110111110101000001100";
        ram[58] = "0b10111101101001001110010001011110";
        ram[59] = "0b10111101010101001011001110110110";
        ram[60] = "0b00111101010110101001110010011001";
        ram[61] = "0b00111101001001101111001001100011";
        ram[62] = "0b10111110001010110011001000000101";
        ram[63] = "0b00111110000111000111110011011001";
        ram[64] = "0b00111011111111011101100001011101";
        ram[65] = "0b00111100000011100011111100110011";
        ram[66] = "0b10111101111110011101110100111100";
        ram[67] = "0b00111011111110100000111100100101";
        ram[68] = "0b00111101110011001011001010010110";
        ram[69] = "0b00111100011101101000010110011000";
        ram[70] = "0b00111101011110011110010001111000";
        ram[71] = "0b10111100100000100110010101101011";
        ram[72] = "0b00111101001101001100000000010110";
        ram[73] = "0b00111110000110010111010101101101";
        ram[74] = "0b10111010001111001100000110111101";
        ram[75] = "0b10111101111110100011000110100101";
        ram[76] = "0b00111101100100001100000000001100";
        ram[77] = "0b10111110000101101001000010011011";
        ram[78] = "0b00111100000110101111000101011101";
        ram[79] = "0b10111101110001101100110101010001";
        ram[80] = "0b00111110000011000101000110011000";
        ram[81] = "0b00111101111111000111101101000110";
        ram[82] = "0b10111101101110110110110000000010";
        ram[83] = "0b10111011110110101011111110111111";


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


SC_MODULE(inference_mult_1_120_120_84_s_W4_85) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 84;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


inference_mult_1_120_120_84_s_W4_85_ram* meminst;


SC_CTOR(inference_mult_1_120_120_84_s_W4_85) {
meminst = new inference_mult_1_120_120_84_s_W4_85_ram("inference_mult_1_120_120_84_s_W4_85_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~inference_mult_1_120_120_84_s_W4_85() {
    delete meminst;
}


};//endmodule
#endif
