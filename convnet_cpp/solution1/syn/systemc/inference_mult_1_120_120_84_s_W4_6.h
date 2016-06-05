// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __inference_mult_1_120_120_84_s_W4_6_H__
#define __inference_mult_1_120_120_84_s_W4_6_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct inference_mult_1_120_120_84_s_W4_6_ram : public sc_core::sc_module {

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


   SC_CTOR(inference_mult_1_120_120_84_s_W4_6_ram) {
        ram[0] = "0b10111101100100010011110111000101";
        ram[1] = "0b00111100001100111111000100110100";
        ram[2] = "0b00111101101110101111000011100111";
        ram[3] = "0b00111101111001110110000110001001";
        ram[4] = "0b10111011011100100000101101110110";
        ram[5] = "0b00111101000101010011111010001011";
        ram[6] = "0b00111100000000001001010101100111";
        ram[7] = "0b10111101101011111011111000110100";
        ram[8] = "0b00111101101001111111001101010111";
        ram[9] = "0b00111100000000110111101001111110";
        ram[10] = "0b00111110000010011001011001110100";
        ram[11] = "0b00111101100011100110100100110100";
        ram[12] = "0b00111101100001011100010100111100";
        ram[13] = "0b00111101000111001010111010001100";
        ram[14] = "0b00111101101101110100001010011010";
        ram[15] = "0b00111110010000101000111110011111";
        ram[16] = "0b10111110001111001000100111110100";
        ram[17] = "0b00111100111110110001111001001111";
        ram[18] = "0b00111010111001100101001111011100";
        ram[19] = "0b00111110001011011101110100101011";
        ram[20] = "0b10111101101100111010011100011111";
        ram[21] = "0b10111101100001011011110101000100";
        ram[22] = "0b10111011011011101000110000001111";
        ram[23] = "0b10111101011000011100101000111010";
        ram[24] = "0b00111101111011011000000000011011";
        ram[25] = "0b00111101110100110101010111001110";
        ram[26] = "0b10111101101101100000101001110001";
        ram[27] = "0b10111101101010100101100001001001";
        ram[28] = "0b00111100101001001111001010010011";
        ram[29] = "0b00111101110001101100010001110101";
        ram[30] = "0b00111110000101011111100011010011";
        ram[31] = "0b00111101001001001010100010001100";
        ram[32] = "0b00111101010110100001001101110010";
        ram[33] = "0b10111110000011011000000001011110";
        ram[34] = "0b10111100111000001010001000110111";
        ram[35] = "0b00111100111010010001001100011111";
        ram[36] = "0b10111110000110001110110010010110";
        ram[37] = "0b00111101001001101000100101101100";
        ram[38] = "0b10111101001101001100110000001010";
        ram[39] = "0b10111101100000111110010101101000";
        ram[40] = "0b10111101011101111100000100000010";
        ram[41] = "0b10111110000010011111101010011000";
        ram[42] = "0b00111101101001001110111001000111";
        ram[43] = "0b10111110011011001101000001111000";
        ram[44] = "0b00111101001101110001101111011011";
        ram[45] = "0b10111101111010011010100010001011";
        ram[46] = "0b10111110000000101110100111001101";
        ram[47] = "0b00111101010100000010000011011111";
        ram[48] = "0b00111100101010000000100010010010";
        ram[49] = "0b00111101100010011001000011011000";
        ram[50] = "0b10111110001010110100100101011010";
        ram[51] = "0b00111110000100001010001110010100";
        ram[52] = "0b00111010110101001101110110111101";
        ram[53] = "0b10111011001101000010000101011010";
        ram[54] = "0b10111101110100101101111101010000";
        ram[55] = "0b10111101001011100010101101010111";
        ram[56] = "0b00111101101110011010101000011101";
        ram[57] = "0b00111101001100100010010100110001";
        ram[58] = "0b10111110000110111000110110000010";
        ram[59] = "0b00111110000000111011100101101011";
        ram[60] = "0b00111101111100101110000111101111";
        ram[61] = "0b10111110001101010110000110010001";
        ram[62] = "0b00111100111111101010001111011111";
        ram[63] = "0b00111011011010010010001100011010";
        ram[64] = "0b00111101000110000101110010000011";
        ram[65] = "0b00111100111111011000010000100101";
        ram[66] = "0b10111101001010101101011011110100";
        ram[67] = "0b10111101100000111010100110010110";
        ram[68] = "0b10111101110101011110000001110010";
        ram[69] = "0b10111101110000111011001111101010";
        ram[70] = "0b00111110001000101101001001111000";
        ram[71] = "0b00111100110010011000110000111011";
        ram[72] = "0b00111101110001001000100100001001";
        ram[73] = "0b10111101000101111000100110001010";
        ram[74] = "0b00111011101010011110110000001101";
        ram[75] = "0b00111101111100001011100111011100";
        ram[76] = "0b10111110010101101010110011101011";
        ram[77] = "0b10111101000111110100100101010111";
        ram[78] = "0b10111101001111111100101100001100";
        ram[79] = "0b10111110010001000110010000010011";
        ram[80] = "0b10111101100110100111101110000100";
        ram[81] = "0b10111110000100001001001101010011";
        ram[82] = "0b00111101010011011100101001011000";
        ram[83] = "0b10111101100001000010101100100011";


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


SC_MODULE(inference_mult_1_120_120_84_s_W4_6) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 84;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


inference_mult_1_120_120_84_s_W4_6_ram* meminst;


SC_CTOR(inference_mult_1_120_120_84_s_W4_6) {
meminst = new inference_mult_1_120_120_84_s_W4_6_ram("inference_mult_1_120_120_84_s_W4_6_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~inference_mult_1_120_120_84_s_W4_6() {
    delete meminst;
}


};//endmodule
#endif
