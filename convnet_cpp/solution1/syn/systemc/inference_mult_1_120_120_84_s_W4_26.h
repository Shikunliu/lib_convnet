// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __inference_mult_1_120_120_84_s_W4_26_H__
#define __inference_mult_1_120_120_84_s_W4_26_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct inference_mult_1_120_120_84_s_W4_26_ram : public sc_core::sc_module {

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


   SC_CTOR(inference_mult_1_120_120_84_s_W4_26_ram) {
        ram[0] = "0b00111101101101000011110000000101";
        ram[1] = "0b10111110000011111101010100000010";
        ram[2] = "0b10111100001000000111000010100011";
        ram[3] = "0b00111101100100101100111001010100";
        ram[4] = "0b00111101100100101111010101100011";
        ram[5] = "0b10111101010011010101001111000000";
        ram[6] = "0b10111101000011101110001110010011";
        ram[7] = "0b10111110000100100001011001000000";
        ram[8] = "0b10111011001011010000110100010100";
        ram[9] = "0b00111100100111000101100111010011";
        ram[10] = "0b10111101111110100101110000011100";
        ram[11] = "0b10111101100101111101011111010000";
        ram[12] = "0b00111101000001010011110111111000";
        ram[13] = "0b00111101000011111000000101001000";
        ram[14] = "0b00111101110100001110011011110011";
        ram[15] = "0b00111101100010000111111001100001";
        ram[16] = "0b10111110000110011011111111011111";
        ram[17] = "0b00111101101101010010010000010001";
        ram[18] = "0b10111101010010001100101010001111";
        ram[19] = "0b00111101000000000010000110001110";
        ram[20] = "0b00111101100010111000101000001100";
        ram[21] = "0b10111110001011110110110111111100";
        ram[22] = "0b00111101111010001111100111110100";
        ram[23] = "0b00111011000100101010010111011111";
        ram[24] = "0b10111110000100101111001001110011";
        ram[25] = "0b10111100011011111101101101011010";
        ram[26] = "0b10111101010011110110001111101011";
        ram[27] = "0b00111101101001100010010001001010";
        ram[28] = "0b00111101100100111110000101011110";
        ram[29] = "0b00111101010100001110101101011010";
        ram[30] = "0b00111110010010001011000100010100";
        ram[31] = "0b10111100100111110111001101100011";
        ram[32] = "0b10111110000100000011110011010001";
        ram[33] = "0b10111010000100000111101010010101";
        ram[34] = "0b00111101100010101011110111001001";
        ram[35] = "0b10111110001001010110000011001000";
        ram[36] = "0b10111101111000010101111011000000";
        ram[37] = "0b10111101101111010110110010001101";
        ram[38] = "0b10111110010000000110101110111110";
        ram[39] = "0b10111100101111101011100000000001";
        ram[40] = "0b10111101000101110011011001111101";
        ram[41] = "0b00111101101110000010110010111111";
        ram[42] = "0b00111110001000011110011011001101";
        ram[43] = "0b00111101111011000011101110010010";
        ram[44] = "0b10111101001100101101000000000001";
        ram[45] = "0b00111100001111101000101101010110";
        ram[46] = "0b00111101011101000111001111110110";
        ram[47] = "0b00111101100111010110011000110101";
        ram[48] = "0b00111011101110000011100100101100";
        ram[49] = "0b10111100110001101001001101100010";
        ram[50] = "0b10111110000000000001001000010111";
        ram[51] = "0b10111110000100011100111101111000";
        ram[52] = "0b00111101101010000001111011101000";
        ram[53] = "0b10111101100100010100001100011110";
        ram[54] = "0b00111100011110100111111001001011";
        ram[55] = "0b00111110000001110000100100110001";
        ram[56] = "0b00111101110100001010001101010001";
        ram[57] = "0b10111101111101101111010111001011";
        ram[58] = "0b00111101100100100110110010001100";
        ram[59] = "0b00111110001000011011000100010000";
        ram[60] = "0b10111101011010010101000001000001";
        ram[61] = "0b00111110001001000010100111100001";
        ram[62] = "0b00111101101101100101001010001000";
        ram[63] = "0b00111100000111111110110011011010";
        ram[64] = "0b10111110001111100010110001010110";
        ram[65] = "0b10111101100000000110110011100101";
        ram[66] = "0b00111110000011100101001100100010";
        ram[67] = "0b10111101001001001011101100000000";
        ram[68] = "0b00111101100101111110111101101000";
        ram[69] = "0b00111101000011001101111111000111";
        ram[70] = "0b10111110000100000111010011101011";
        ram[71] = "0b10111101000101101010111111011010";
        ram[72] = "0b10111110001011110000011010110011";
        ram[73] = "0b00111100011000011010100011111101";
        ram[74] = "0b10111101110111000001000001010010";
        ram[75] = "0b10111101111001010000101111011000";
        ram[76] = "0b00111110001100100111110111001100";
        ram[77] = "0b10111101001110001110100000101110";
        ram[78] = "0b00111011110111011011000110001100";
        ram[79] = "0b10111101011011110111010100111001";
        ram[80] = "0b00111100101010100110010011111001";
        ram[81] = "0b10111100111110111011101011000001";
        ram[82] = "0b10111011111100000010111110101000";
        ram[83] = "0b00111101111111010111001000110110";


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


SC_MODULE(inference_mult_1_120_120_84_s_W4_26) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 84;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


inference_mult_1_120_120_84_s_W4_26_ram* meminst;


SC_CTOR(inference_mult_1_120_120_84_s_W4_26) {
meminst = new inference_mult_1_120_120_84_s_W4_26_ram("inference_mult_1_120_120_84_s_W4_26_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~inference_mult_1_120_120_84_s_W4_26() {
    delete meminst;
}


};//endmodule
#endif
