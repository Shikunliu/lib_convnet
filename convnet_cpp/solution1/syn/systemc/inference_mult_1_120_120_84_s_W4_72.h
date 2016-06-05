// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __inference_mult_1_120_120_84_s_W4_72_H__
#define __inference_mult_1_120_120_84_s_W4_72_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct inference_mult_1_120_120_84_s_W4_72_ram : public sc_core::sc_module {

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


   SC_CTOR(inference_mult_1_120_120_84_s_W4_72_ram) {
        ram[0] = "0b10111110001010110000011101001010";
        ram[1] = "0b00111011001000010000100011001111";
        ram[2] = "0b10111101100111001000010011010001";
        ram[3] = "0b10111101101000111010010011000011";
        ram[4] = "0b10111100010010101011000101101010";
        ram[5] = "0b10111110001101111000000000110100";
        ram[6] = "0b00111101001101100111010010110111";
        ram[7] = "0b10111100111001011101101100100110";
        ram[8] = "0b00111101111110010000101011111110";
        ram[9] = "0b10111101110001001101111011011101";
        ram[10] = "0b00111100011000001110001010011001";
        ram[11] = "0b10111101010110001111001110000001";
        ram[12] = "0b10111101111100110111110100100000";
        ram[13] = "0b00111100001001100101011100010111";
        ram[14] = "0b10111100110010011001000111100101";
        ram[15] = "0b10111100011110101001100110001111";
        ram[16] = "0b10111101010000001101010001110001";
        ram[17] = "0b00111110000100010011001000101111";
        ram[18] = "0b10111110000101110001001100100111";
        ram[19] = "0b10111110000101011000001010011001";
        ram[20] = "0b00111101100001001111101000101101";
        ram[21] = "0b00111101100011100111110111011101";
        ram[22] = "0b00111100101100001100111001101010";
        ram[23] = "0b10111100110001100110001011110001";
        ram[24] = "0b00111101000011000010000001101010";
        ram[25] = "0b00111101000100111111010101001011";
        ram[26] = "0b10111101000000000001100110110001";
        ram[27] = "0b10111001101000011111001011001000";
        ram[28] = "0b00111101011011111011101011110100";
        ram[29] = "0b00111100011110110000101001100010";
        ram[30] = "0b10111101101010100000101100001110";
        ram[31] = "0b10111101100111000101101010101010";
        ram[32] = "0b10111101101001001000011000011010";
        ram[33] = "0b00111101110101111001111000010111";
        ram[34] = "0b10111101101111010101001000111011";
        ram[35] = "0b00111100001000101111101100000010";
        ram[36] = "0b00111101011100111011110100110001";
        ram[37] = "0b10111101100111111110100000011000";
        ram[38] = "0b10111101010100000110111100110100";
        ram[39] = "0b10111110000000100001110111011010";
        ram[40] = "0b00111101011011010111010001011101";
        ram[41] = "0b10111101100001100110110000101011";
        ram[42] = "0b00111100100001101111000111110111";
        ram[43] = "0b10111010100101001010001000001110";
        ram[44] = "0b10111101000011010100100111100101";
        ram[45] = "0b10111110010000110001000110100101";
        ram[46] = "0b00111101100001110111111010100010";
        ram[47] = "0b10111110010100100011110111010101";
        ram[48] = "0b10111101001000100001010010101101";
        ram[49] = "0b00111100100101101011111010001000";
        ram[50] = "0b00111101100011110111110101001100";
        ram[51] = "0b00111110000000101111000101100111";
        ram[52] = "0b00111000000000001111001101010101";
        ram[53] = "0b00111101100100111011111101110010";
        ram[54] = "0b10111110000000000100001111100101";
        ram[55] = "0b10111100001110011010101001000110";
        ram[56] = "0b10111100101000110001110100111011";
        ram[57] = "0b00111110000001001100001001110010";
        ram[58] = "0b10111110010100010110000101011111";
        ram[59] = "0b10111110000001011001111100101100";
        ram[60] = "0b00111101100011100110110110001110";
        ram[61] = "0b10111101010110110001001011100001";
        ram[62] = "0b10111101101011101000100000100011";
        ram[63] = "0b10111101001011100101111100001001";
        ram[64] = "0b10111101100010010001011100000000";
        ram[65] = "0b10111100111011010110111011001110";
        ram[66] = "0b10111110001001111101100101010101";
        ram[67] = "0b10111101001000001011000111110001";
        ram[68] = "0b10111101101100000000111000001101";
        ram[69] = "0b10111101010101011001000001010101";
        ram[70] = "0b00111101000000001011111010111100";
        ram[71] = "0b10111101110001011101110101100111";
        ram[72] = "0b00111101101101001101110101110010";
        ram[73] = "0b10111101010010101011100001010101";
        ram[74] = "0b10111101000101101100111110111011";
        ram[75] = "0b00111011110101000101100101001001";
        ram[76] = "0b10111101101100111111000110000100";
        ram[77] = "0b00111101100100000000000101111000";
        ram[78] = "0b00111100001110101101010110111111";
        ram[79] = "0b10111101101011110011111000101100";
        ram[80] = "0b10111110000001111000000111000111";
        ram[81] = "0b00111100110001011101001100010011";
        ram[82] = "0b00111100101111110010000101001000";
        ram[83] = "0b00111110000100011000000101011010";


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


SC_MODULE(inference_mult_1_120_120_84_s_W4_72) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 84;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


inference_mult_1_120_120_84_s_W4_72_ram* meminst;


SC_CTOR(inference_mult_1_120_120_84_s_W4_72) {
meminst = new inference_mult_1_120_120_84_s_W4_72_ram("inference_mult_1_120_120_84_s_W4_72_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~inference_mult_1_120_120_84_s_W4_72() {
    delete meminst;
}


};//endmodule
#endif
