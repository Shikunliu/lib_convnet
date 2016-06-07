// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __inference_mult_1_120_120_84_s_W4_37_H__
#define __inference_mult_1_120_120_84_s_W4_37_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct inference_mult_1_120_120_84_s_W4_37_ram : public sc_core::sc_module {

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


   SC_CTOR(inference_mult_1_120_120_84_s_W4_37_ram) {
        ram[0] = "0b10111101111001001101111111001110";
        ram[1] = "0b10111110001101000000010110110100";
        ram[2] = "0b00111101100011001011010111100011";
        ram[3] = "0b10111101011011000100011001000101";
        ram[4] = "0b10111101010110110011110010011100";
        ram[5] = "0b10111101101000100010111000101000";
        ram[6] = "0b10111101001110100111101111000111";
        ram[7] = "0b10111101101100111000011111010010";
        ram[8] = "0b00111101110010101000101011000110";
        ram[9] = "0b00111110000000011000101010000111";
        ram[10] = "0b00111101110001001100101110000100";
        ram[11] = "0b10111110000111001110100100011101";
        ram[12] = "0b00111110001101011001110101010110";
        ram[13] = "0b00111110001110111001111011001111";
        ram[14] = "0b00111100100100111001101101010011";
        ram[15] = "0b10111101110000100110010101011101";
        ram[16] = "0b00111101001100111010101010100010";
        ram[17] = "0b00111100011101011101110111010011";
        ram[18] = "0b00111110000111010011101110110000";
        ram[19] = "0b10111101001011100000010001010101";
        ram[20] = "0b10111100100100001110001010100110";
        ram[21] = "0b00111101011110110010010000101110";
        ram[22] = "0b10111101111001001000000111110101";
        ram[23] = "0b00111100010111111100011111100111";
        ram[24] = "0b10111110001100000001101111001010";
        ram[25] = "0b10111110001001000001011000110111";
        ram[26] = "0b00111101011011010000000110001011";
        ram[27] = "0b10111100110000110011011101011000";
        ram[28] = "0b00111100110101100000001000110101";
        ram[29] = "0b10111101010101100110101010001011";
        ram[30] = "0b10111110010010000111111100000010";
        ram[31] = "0b00111110000011101101100010010000";
        ram[32] = "0b10111101111101111010000010110110";
        ram[33] = "0b00111101000000101011010010110000";
        ram[34] = "0b00111101101001010110100101010100";
        ram[35] = "0b10111101001110011010011011101011";
        ram[36] = "0b10111101110110110010001101010111";
        ram[37] = "0b10111100011001000100011011010001";
        ram[38] = "0b00111110001000101110000101101001";
        ram[39] = "0b00111101100111111111010101000001";
        ram[40] = "0b10111100100111011010001010101000";
        ram[41] = "0b00111011101011000101000011000001";
        ram[42] = "0b00111110000000101110100001111101";
        ram[43] = "0b10111101111011101010100111100111";
        ram[44] = "0b00111101100001101110111001110100";
        ram[45] = "0b10111110001010100001101101011100";
        ram[46] = "0b10111110010011011101001110111011";
        ram[47] = "0b10111101100001010100000001101111";
        ram[48] = "0b00111110000010110001100010011000";
        ram[49] = "0b00111101110110001000011001011001";
        ram[50] = "0b10111100000100001111011000010010";
        ram[51] = "0b00111101100110111111001000011111";
        ram[52] = "0b00111101011111100001110011101100";
        ram[53] = "0b00111101100001101011010110011111";
        ram[54] = "0b10111110001111100100101000111000";
        ram[55] = "0b10111100110010110110010111111010";
        ram[56] = "0b00111100100101100001000110000101";
        ram[57] = "0b10111101110111110100111111010111";
        ram[58] = "0b00111101110011111110111101111100";
        ram[59] = "0b10111110000001101011101010001100";
        ram[60] = "0b10111100100100101011000100010010";
        ram[61] = "0b10111110001001110101010100110111";
        ram[62] = "0b10111101011001100110100100000101";
        ram[63] = "0b10111101100010110110110010100011";
        ram[64] = "0b00111101100000110110100101001110";
        ram[65] = "0b00111011100010111100011111011111";
        ram[66] = "0b10111100101100100111000111011000";
        ram[67] = "0b10111110001010010001110110011011";
        ram[68] = "0b10111110000010100010100110000100";
        ram[69] = "0b00111100110100100010100110011000";
        ram[70] = "0b10111100111110010100011101001001";
        ram[71] = "0b10111101110001000110101110111010";
        ram[72] = "0b10111100100011100110111011000011";
        ram[73] = "0b10111011010101011101010011011110";
        ram[74] = "0b00111101101100000010001100111011";
        ram[75] = "0b00111101100101101111111101001000";
        ram[76] = "0b10111101101000011110010000100001";
        ram[77] = "0b00111110000110101010001100100111";
        ram[78] = "0b10111100101000101010100101000011";
        ram[79] = "0b10111110000011001000011000000101";
        ram[80] = "0b00111101110001101110101100110100";
        ram[81] = "0b10111100000000101100100111010100";
        ram[82] = "0b10111101101100011001100010010100";
        ram[83] = "0b10111101111011000101100101110101";


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


SC_MODULE(inference_mult_1_120_120_84_s_W4_37) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 84;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


inference_mult_1_120_120_84_s_W4_37_ram* meminst;


SC_CTOR(inference_mult_1_120_120_84_s_W4_37) {
meminst = new inference_mult_1_120_120_84_s_W4_37_ram("inference_mult_1_120_120_84_s_W4_37_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~inference_mult_1_120_120_84_s_W4_37() {
    delete meminst;
}


};//endmodule
#endif