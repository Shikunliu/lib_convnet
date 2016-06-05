// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __inference_mult_1_120_120_84_s_W4_81_H__
#define __inference_mult_1_120_120_84_s_W4_81_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct inference_mult_1_120_120_84_s_W4_81_ram : public sc_core::sc_module {

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


   SC_CTOR(inference_mult_1_120_120_84_s_W4_81_ram) {
        ram[0] = "0b00111101001101111101100001001001";
        ram[1] = "0b10111101100101111111010110011000";
        ram[2] = "0b10111101101010001110010100110001";
        ram[3] = "0b00111101101100101100010110010010";
        ram[4] = "0b10111110000001001011000001011011";
        ram[5] = "0b10111100100001011100100110100011";
        ram[6] = "0b00111110000100010000111111011000";
        ram[7] = "0b00111101101001010111001100111100";
        ram[8] = "0b10111101000001100010111100001001";
        ram[9] = "0b00111101110001011101000100111101";
        ram[10] = "0b10111101000110100010111000010100";
        ram[11] = "0b00111100001100010100100011100011";
        ram[12] = "0b10111100010010110110000111111110";
        ram[13] = "0b00111101011000101011111010100111";
        ram[14] = "0b00111101100001000110101010101110";
        ram[15] = "0b00111101100011111000100110101011";
        ram[16] = "0b10111100100011001001011101010011";
        ram[17] = "0b00111110000101100010000101110101";
        ram[18] = "0b00111110000001010000010011000101";
        ram[19] = "0b10111101001001000101111101011011";
        ram[20] = "0b00111101111100010111101111011001";
        ram[21] = "0b10111101110101010000001100110010";
        ram[22] = "0b00111101001000110101110010010001";
        ram[23] = "0b00111101010111011110101010010111";
        ram[24] = "0b00111110000001111011111101100010";
        ram[25] = "0b10111101010001001101011000001110";
        ram[26] = "0b10111101011001101101111111010011";
        ram[27] = "0b10111011101011110010101011111011";
        ram[28] = "0b00111101000000110010100101001010";
        ram[29] = "0b00111110001110111100000000011010";
        ram[30] = "0b10111110000001110100110010010000";
        ram[31] = "0b00111101100010110000110001010011";
        ram[32] = "0b10111101111001110100111010101001";
        ram[33] = "0b00111101101010100001010101110000";
        ram[34] = "0b10111110000100010000011100110001";
        ram[35] = "0b10111110001000001111110010110101";
        ram[36] = "0b10111101000101111100011110111000";
        ram[37] = "0b00111101100100001100101000000010";
        ram[38] = "0b10111101101001000010100111100001";
        ram[39] = "0b00111101110000110110101111000101";
        ram[40] = "0b00111110000011000101100001101000";
        ram[41] = "0b10111100011010011010101100101010";
        ram[42] = "0b00111101001110000111100010000010";
        ram[43] = "0b10111101101001000011001001101100";
        ram[44] = "0b00111100101000100000000011011100";
        ram[45] = "0b00111110000101011010110001000111";
        ram[46] = "0b00111101110000001110011000110111";
        ram[47] = "0b00111110010000111011101110000100";
        ram[48] = "0b10111101010001101110100110101111";
        ram[49] = "0b10111101101001100000100001001010";
        ram[50] = "0b00111101110011100111100010011110";
        ram[51] = "0b00111101110000010011110000001010";
        ram[52] = "0b10111101001100100100010011000001";
        ram[53] = "0b10111101001000011111111100010011";
        ram[54] = "0b10111101011111101011101010000110";
        ram[55] = "0b00111110001011100010110011011100";
        ram[56] = "0b00111101001000011110111110101001";
        ram[57] = "0b10111100110010111101101010010100";
        ram[58] = "0b00111101101011000100110110011100";
        ram[59] = "0b10111101100111110010100011100010";
        ram[60] = "0b10111101011110110100000100000100";
        ram[61] = "0b10111101101110100101110000011100";
        ram[62] = "0b10111100011101100110011011111010";
        ram[63] = "0b10111110001101100101001101000011";
        ram[64] = "0b10111101101100101110001000001010";
        ram[65] = "0b00111101000001101011011110001111";
        ram[66] = "0b00111101010000111110000010110000";
        ram[67] = "0b10111110000110010000100110101111";
        ram[68] = "0b00111101101000110010100110000000";
        ram[69] = "0b00111100000011000101110101010001";
        ram[70] = "0b00111101011011110001111110101000";
        ram[71] = "0b00111011110001100010011010010101";
        ram[72] = "0b00111110010011111001000010010111";
        ram[73] = "0b00111110000011110111110011101110";
        ram[74] = "0b00111011110110001101000111111110";
        ram[75] = "0b10111101001111111111101100010010";
        ram[76] = "0b10111101010001010100000001100001";
        ram[77] = "0b00111101110011011110110010100010";
        ram[78] = "0b00111110000010100001100111001010";
        ram[79] = "0b00111101100100111100001100011110";
        ram[80] = "0b00111101101000100110111111011010";
        ram[81] = "0b10111100010000110001100011101111";
        ram[82] = "0b00111101011010010101001101100110";
        ram[83] = "0b00111101010001010000100101010100";


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


SC_MODULE(inference_mult_1_120_120_84_s_W4_81) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 84;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


inference_mult_1_120_120_84_s_W4_81_ram* meminst;


SC_CTOR(inference_mult_1_120_120_84_s_W4_81) {
meminst = new inference_mult_1_120_120_84_s_W4_81_ram("inference_mult_1_120_120_84_s_W4_81_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~inference_mult_1_120_120_84_s_W4_81() {
    delete meminst;
}


};//endmodule
#endif
