// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __inference_mult_1_120_120_84_s_W4_92_H__
#define __inference_mult_1_120_120_84_s_W4_92_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct inference_mult_1_120_120_84_s_W4_92_ram : public sc_core::sc_module {

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


   SC_CTOR(inference_mult_1_120_120_84_s_W4_92_ram) {
        ram[0] = "0b00111101100111100001010110100010";
        ram[1] = "0b10111101000110110101110101010100";
        ram[2] = "0b10111101111011011000111011001001";
        ram[3] = "0b10111110000001001101001001110000";
        ram[4] = "0b10111100111111010010110101010010";
        ram[5] = "0b00111101100010100010100111100010";
        ram[6] = "0b00111011101011100000110001000010";
        ram[7] = "0b00111101101101100011000110110110";
        ram[8] = "0b00111110000000101011010001010011";
        ram[9] = "0b10111100001001010110100110110001";
        ram[10] = "0b10111110001110110000000001111010";
        ram[11] = "0b00111101111101111101010010011101";
        ram[12] = "0b10111101001000000100110101100011";
        ram[13] = "0b10111110000110010101111110101011";
        ram[14] = "0b00111101111110010000000100001000";
        ram[15] = "0b10111011111011100111110010001010";
        ram[16] = "0b00111101111000000100001100011100";
        ram[17] = "0b00111101100010101000000011111000";
        ram[18] = "0b00111101101010000011101011110101";
        ram[19] = "0b10111110010110001000100010110101";
        ram[20] = "0b00111100000011000100000110111000";
        ram[21] = "0b00111101100010011101011110000101";
        ram[22] = "0b00111101010111101110000101010010";
        ram[23] = "0b10111101100010110011100110101101";
        ram[24] = "0b10111101111100010011001101111111";
        ram[25] = "0b10111100000000100011111000011110";
        ram[26] = "0b10111101100000111011101011001000";
        ram[27] = "0b00111101000001101001111111000010";
        ram[28] = "0b00111101100101001000001110100011";
        ram[29] = "0b10111101000000011111100110000101";
        ram[30] = "0b10111100001100010101011110010001";
        ram[31] = "0b10111100100011101000110011000000";
        ram[32] = "0b00111101100101111110100100011101";
        ram[33] = "0b10111100100011110111000110001101";
        ram[34] = "0b10111100011010000101011000101011";
        ram[35] = "0b00111100111000101101100010101000";
        ram[36] = "0b00111101100101010010001101100011";
        ram[37] = "0b10111101001101001011001101100110";
        ram[38] = "0b00111100010111110001001100100000";
        ram[39] = "0b10111101110101101100001101110110";
        ram[40] = "0b10111110000000100001110001000111";
        ram[41] = "0b10111101101111011100110000010011";
        ram[42] = "0b10111101100001010111000010010000";
        ram[43] = "0b00111100111101100100001110001001";
        ram[44] = "0b10111100100001111101011011000100";
        ram[45] = "0b00111100110011001100011001001101";
        ram[46] = "0b00111101100011110000101010111101";
        ram[47] = "0b00111101101011100000010010110011";
        ram[48] = "0b10111101001100001100001001011011";
        ram[49] = "0b10111101111110010000010000101110";
        ram[50] = "0b10111101001011011110111100100111";
        ram[51] = "0b10111101001000010010101000110111";
        ram[52] = "0b10111101000010000011100101110000";
        ram[53] = "0b10111101110110010101011100000100";
        ram[54] = "0b10111110001001110010101010111111";
        ram[55] = "0b00111101001111010101101001001110";
        ram[56] = "0b00111101110110100110101001000100";
        ram[57] = "0b10111100111011110010101110011100";
        ram[58] = "0b10111100111100111101110010100110";
        ram[59] = "0b10111101010110101011000100100110";
        ram[60] = "0b00111101110000010110100010101000";
        ram[61] = "0b10111101110100001010111011011010";
        ram[62] = "0b10111100111000110011111110100000";
        ram[63] = "0b00111100111011010110001010100100";
        ram[64] = "0b10111101101100001101001111111000";
        ram[65] = "0b10111101010001100011110011000110";
        ram[66] = "0b00111101100011000010101101101101";
        ram[67] = "0b10111101101001001110011000110100";
        ram[68] = "0b10111100111101111110111001001110";
        ram[69] = "0b00111110000101011110100100011000";
        ram[70] = "0b10111100100000000000000100001100";
        ram[71] = "0b00111010011110101110011111010111";
        ram[72] = "0b00111100011001011001010110000110";
        ram[73] = "0b00111100111101100001101000000011";
        ram[74] = "0b10111101100000011101111010101101";
        ram[75] = "0b00111101010100001000011100011100";
        ram[76] = "0b00111011000010111000110100010001";
        ram[77] = "0b10111101010111111110111100111001";
        ram[78] = "0b00111101001001100010001010001111";
        ram[79] = "0b10111101100101111101000111010110";
        ram[80] = "0b00111101101011110011001010001000";
        ram[81] = "0b10111100100001111010001001010110";
        ram[82] = "0b10111101101111110010110101010111";
        ram[83] = "0b00111101010100111011000000110001";


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


SC_MODULE(inference_mult_1_120_120_84_s_W4_92) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 84;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


inference_mult_1_120_120_84_s_W4_92_ram* meminst;


SC_CTOR(inference_mult_1_120_120_84_s_W4_92) {
meminst = new inference_mult_1_120_120_84_s_W4_92_ram("inference_mult_1_120_120_84_s_W4_92_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~inference_mult_1_120_120_84_s_W4_92() {
    delete meminst;
}


};//endmodule
#endif