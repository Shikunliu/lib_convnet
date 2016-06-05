// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __inference_mult_1_120_120_84_s_W4_63_H__
#define __inference_mult_1_120_120_84_s_W4_63_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct inference_mult_1_120_120_84_s_W4_63_ram : public sc_core::sc_module {

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


   SC_CTOR(inference_mult_1_120_120_84_s_W4_63_ram) {
        ram[0] = "0b10111101001101001111011110101001";
        ram[1] = "0b00111110001000110001100000110011";
        ram[2] = "0b10111101010101100101111101101101";
        ram[3] = "0b10111101110001101000011101000110";
        ram[4] = "0b10111101100010010000101001101011";
        ram[5] = "0b10111100100011110100010001110110";
        ram[6] = "0b00111101010100001111110011000010";
        ram[7] = "0b00111101110101001101001011110110";
        ram[8] = "0b00111101100111110110011110010111";
        ram[9] = "0b00111110001110111001110100111101";
        ram[10] = "0b10111101010001011001101111010001";
        ram[11] = "0b10111101110111000101000101010101";
        ram[12] = "0b10111101100100011000010000000111";
        ram[13] = "0b10111101000111111100101100100111";
        ram[14] = "0b10111100000001111110000010011111";
        ram[15] = "0b10111100110111110111100111100011";
        ram[16] = "0b10111101101111001110110111111101";
        ram[17] = "0b00111101011000111101001110101111";
        ram[18] = "0b10111101011100111111111100100110";
        ram[19] = "0b00111101101110100000101111001010";
        ram[20] = "0b00111101110011101110001010000110";
        ram[21] = "0b00111100100100010010100100011101";
        ram[22] = "0b10111100111110000011010000100100";
        ram[23] = "0b10111101101100110010011100100100";
        ram[24] = "0b00111110000001101000111101001011";
        ram[25] = "0b00111101000011010110100101110101";
        ram[26] = "0b00111110000100000100000011000000";
        ram[27] = "0b10111101110000010101110100000101";
        ram[28] = "0b10111100111110010101100010110001";
        ram[29] = "0b10111101110101111000100000010010";
        ram[30] = "0b10111100111001110010011010110101";
        ram[31] = "0b00111101011010010001010011100111";
        ram[32] = "0b10111110010000001011101100101100";
        ram[33] = "0b00111101010000001100100110001001";
        ram[34] = "0b10111101010001010101110100011100";
        ram[35] = "0b00111101010011101110010000011001";
        ram[36] = "0b00111101001100000101001101001111";
        ram[37] = "0b10111101100110001111001100001001";
        ram[38] = "0b10111100111110011001010110000011";
        ram[39] = "0b00111101101111110101100001010101";
        ram[40] = "0b10111100100101001001101100101101";
        ram[41] = "0b10111110000110000101101001001111";
        ram[42] = "0b00111100111000000100000010110010";
        ram[43] = "0b10111101110011100101000001000000";
        ram[44] = "0b00111100100110111010010101000010";
        ram[45] = "0b00111110000011001100010111111100";
        ram[46] = "0b10111110000011101110000010110001";
        ram[47] = "0b00111101100001101000000011100000";
        ram[48] = "0b00111101100010110001000110111001";
        ram[49] = "0b10111011100111010001100000010100";
        ram[50] = "0b10111101110110011101001111001100";
        ram[51] = "0b00111101100101010110100100011110";
        ram[52] = "0b10111101001100110001101101001011";
        ram[53] = "0b00111101100110110000011111010001";
        ram[54] = "0b10111110001100000101011011000101";
        ram[55] = "0b10111100001010000001100010111000";
        ram[56] = "0b00111101111000010110111100000000";
        ram[57] = "0b00111101001111010110110011011101";
        ram[58] = "0b00111110001110010111000111000001";
        ram[59] = "0b10111011100011111000111011010100";
        ram[60] = "0b10111101100000100101100110000100";
        ram[61] = "0b10111101111010011011010000010100";
        ram[62] = "0b10111100111010110101111010111110";
        ram[63] = "0b10111110010010110001011101001000";
        ram[64] = "0b00111101101101010011011011111111";
        ram[65] = "0b00111101100100001000101010011111";
        ram[66] = "0b10111101011111001101111011100011";
        ram[67] = "0b00111101110010011101011011100100";
        ram[68] = "0b00111101100111001001010101101111";
        ram[69] = "0b10111110000110111100101100011101";
        ram[70] = "0b10111101100111010100101110010011";
        ram[71] = "0b10111101110011001111000110000000";
        ram[72] = "0b00111101111011101001111101101011";
        ram[73] = "0b10111110000010101001010011111111";
        ram[74] = "0b10111110000110101010001110101101";
        ram[75] = "0b10111101100010001111001100010110";
        ram[76] = "0b10111101000111010001011001000001";
        ram[77] = "0b00111110001011110100101111101000";
        ram[78] = "0b10111101001000010101101010101001";
        ram[79] = "0b10111101010000110101010101110000";
        ram[80] = "0b00111101101100001110101011111100";
        ram[81] = "0b10111100110110000100111010101011";
        ram[82] = "0b00111100110100000111000100110010";
        ram[83] = "0b10111101010010111111001011101000";


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


SC_MODULE(inference_mult_1_120_120_84_s_W4_63) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 84;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


inference_mult_1_120_120_84_s_W4_63_ram* meminst;


SC_CTOR(inference_mult_1_120_120_84_s_W4_63) {
meminst = new inference_mult_1_120_120_84_s_W4_63_ram("inference_mult_1_120_120_84_s_W4_63_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~inference_mult_1_120_120_84_s_W4_63() {
    delete meminst;
}


};//endmodule
#endif
