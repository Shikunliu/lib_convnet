// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __inference_mult_1_120_120_84_s_W4_38_H__
#define __inference_mult_1_120_120_84_s_W4_38_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct inference_mult_1_120_120_84_s_W4_38_ram : public sc_core::sc_module {

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


   SC_CTOR(inference_mult_1_120_120_84_s_W4_38_ram) {
        ram[0] = "0b00111100001001010000001111000110";
        ram[1] = "0b00111110001011100001101110001111";
        ram[2] = "0b10111110001100110011101000000100";
        ram[3] = "0b10111100001000000111010111110111";
        ram[4] = "0b00111110000100110101000010001111";
        ram[5] = "0b10111100101100101101011010110111";
        ram[6] = "0b10111100011000101100000001010100";
        ram[7] = "0b10111101011111101011110010111001";
        ram[8] = "0b00111101010010010011000010010110";
        ram[9] = "0b00111101001110010001100001010000";
        ram[10] = "0b00111101111000100111011100111110";
        ram[11] = "0b00111101001010000000000110100111";
        ram[12] = "0b00111110000000110000000101100101";
        ram[13] = "0b00111100101011010001000100010000";
        ram[14] = "0b10111110100000110000111100101000";
        ram[15] = "0b00111101100010000001010011100101";
        ram[16] = "0b00111110011100010001110110111101";
        ram[17] = "0b00111101000111111100100010100011";
        ram[18] = "0b00111110000111101000001001010001";
        ram[19] = "0b00111101110111011011001000101101";
        ram[20] = "0b00111101000100100011111001011100";
        ram[21] = "0b10111110010000001001011010111100";
        ram[22] = "0b00111101000110011000001010111110";
        ram[23] = "0b10111101101101101100110111100101";
        ram[24] = "0b10111101110101010010010011000000";
        ram[25] = "0b10111101100110000010000011011001";
        ram[26] = "0b10111110011001010111110001001110";
        ram[27] = "0b10111101011011110010011100011010";
        ram[28] = "0b10111110010100001000001110011001";
        ram[29] = "0b10111100001000001111101100011000";
        ram[30] = "0b00111010001000110101001000101010";
        ram[31] = "0b00111101101011100100001000011000";
        ram[32] = "0b10111101011101010101011100010101";
        ram[33] = "0b10111101001111101110111111100101";
        ram[34] = "0b00111100110110101110011010100001";
        ram[35] = "0b00111110001000011101100111110101";
        ram[36] = "0b00111110001100110010010001000010";
        ram[37] = "0b00111101101001001001100100101111";
        ram[38] = "0b00111110001110001110000100001101";
        ram[39] = "0b10111100110101101101101111100101";
        ram[40] = "0b00111100100011110100101111001101";
        ram[41] = "0b00111110001100101010011110111101";
        ram[42] = "0b00111110001000111100011110010011";
        ram[43] = "0b10111011001001110100101100001000";
        ram[44] = "0b00111100110000001110001011101001";
        ram[45] = "0b00111100000101111000011110011100";
        ram[46] = "0b10111101001111011011010111110011";
        ram[47] = "0b10111101100100010111100010110011";
        ram[48] = "0b00111101011101111001110000011001";
        ram[49] = "0b00111110000101100100010110100010";
        ram[50] = "0b00111101100010110100100001110110";
        ram[51] = "0b00111101111000110111100010101011";
        ram[52] = "0b00111110010100111011100101101011";
        ram[53] = "0b10111101011010000111001001100000";
        ram[54] = "0b10111101010110110001111000110100";
        ram[55] = "0b00111100111101010000101101111011";
        ram[56] = "0b00111100010011011110111000110101";
        ram[57] = "0b10111110011010000111000001010100";
        ram[58] = "0b10111101100100001000100100110101";
        ram[59] = "0b00111110000001010110111110111001";
        ram[60] = "0b10111101110111111000011011100100";
        ram[61] = "0b10111101101100000100001111001010";
        ram[62] = "0b00111101101000000101000110111101";
        ram[63] = "0b00111110000000111011000011000100";
        ram[64] = "0b10111011100110110111101000011001";
        ram[65] = "0b10111101011110010100011011000011";
        ram[66] = "0b00111110000001111001001100010100";
        ram[67] = "0b10111101110110100101011101100100";
        ram[68] = "0b00111101000110110000101000010010";
        ram[69] = "0b10111101010010001111000010011111";
        ram[70] = "0b10111100100101011110001111001101";
        ram[71] = "0b10111101100011010110100001101001";
        ram[72] = "0b00111110001000011011011101011010";
        ram[73] = "0b00111101101111000000000011110101";
        ram[74] = "0b10111110000001111000110101010000";
        ram[75] = "0b00111100110000101101111011011000";
        ram[76] = "0b10111101100001110011111010011110";
        ram[77] = "0b00111110010100010001011101110010";
        ram[78] = "0b10111011000100111111111101111100";
        ram[79] = "0b10111110010011011101001100110101";
        ram[80] = "0b00111110000111110010110100111100";
        ram[81] = "0b10111100001110000011110000011100";
        ram[82] = "0b10111101111011011110011001011000";
        ram[83] = "0b00111110100011100011110010111000";


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


SC_MODULE(inference_mult_1_120_120_84_s_W4_38) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 84;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


inference_mult_1_120_120_84_s_W4_38_ram* meminst;


SC_CTOR(inference_mult_1_120_120_84_s_W4_38) {
meminst = new inference_mult_1_120_120_84_s_W4_38_ram("inference_mult_1_120_120_84_s_W4_38_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~inference_mult_1_120_120_84_s_W4_38() {
    delete meminst;
}


};//endmodule
#endif