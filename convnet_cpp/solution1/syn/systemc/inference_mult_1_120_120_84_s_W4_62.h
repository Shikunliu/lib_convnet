// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __inference_mult_1_120_120_84_s_W4_62_H__
#define __inference_mult_1_120_120_84_s_W4_62_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct inference_mult_1_120_120_84_s_W4_62_ram : public sc_core::sc_module {

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


   SC_CTOR(inference_mult_1_120_120_84_s_W4_62_ram) {
        ram[0] = "0b00111110001010110001001011010011";
        ram[1] = "0b00111100100100111000010000001100";
        ram[2] = "0b00111110000000101000101100101010";
        ram[3] = "0b10111101010011111010100011010000";
        ram[4] = "0b00111101111000000110011101001001";
        ram[5] = "0b00111101111010111001101000010111";
        ram[6] = "0b00111101111100110010101101010110";
        ram[7] = "0b00111110011000000000111011110001";
        ram[8] = "0b00111101000001010000101100011101";
        ram[9] = "0b10111101101011101111011101110010";
        ram[10] = "0b00111101100000110110100000001100";
        ram[11] = "0b10111101101000010101101110101000";
        ram[12] = "0b00111101000011010110001111001100";
        ram[13] = "0b10111110001100011100000100001101";
        ram[14] = "0b10111101110011101001111001011110";
        ram[15] = "0b10111100011011001110011001001000";
        ram[16] = "0b00111110100111110101100010011111";
        ram[17] = "0b10111100100010100110101111001001";
        ram[18] = "0b10111101000001111101101010100101";
        ram[19] = "0b00111101110010111011011110001110";
        ram[20] = "0b10111101000111101011111000010110";
        ram[21] = "0b00111101011110011000101111011101";
        ram[22] = "0b10111110001011010001001111010111";
        ram[23] = "0b10111110010001000001110100001000";
        ram[24] = "0b10111110010100101000110000110111";
        ram[25] = "0b10111101111001010100000011001100";
        ram[26] = "0b10111110000011001000110100011001";
        ram[27] = "0b10111101111001011100010111111000";
        ram[28] = "0b10111101111101001011001110000001";
        ram[29] = "0b10111100111001001111101110011000";
        ram[30] = "0b10111100111010001101110000101101";
        ram[31] = "0b10111101010100000100000110110001";
        ram[32] = "0b10111101111010010011101001110001";
        ram[33] = "0b00111101101010111001001111011010";
        ram[34] = "0b00111110000001010101011011010010";
        ram[35] = "0b00111110001011111100100110111100";
        ram[36] = "0b00111110010011111111010111000111";
        ram[37] = "0b10111101111011001011110010001100";
        ram[38] = "0b00111110001000100000011010000101";
        ram[39] = "0b00111101100001111011011111010101";
        ram[40] = "0b00111110001110111001101001011011";
        ram[41] = "0b00111101100110101110000101001000";
        ram[42] = "0b10111101111000010111001000100110";
        ram[43] = "0b10111101100101011000101001011011";
        ram[44] = "0b10111110001011010111110010110011";
        ram[45] = "0b00111110000110101100010001110010";
        ram[46] = "0b00111101001100111000110010001010";
        ram[47] = "0b00111101010100011101101110110000";
        ram[48] = "0b10111101001010110001010101110010";
        ram[49] = "0b10111101010100001001101001001100";
        ram[50] = "0b00111110001101111000001101011010";
        ram[51] = "0b00111101101111110111110100111110";
        ram[52] = "0b00111110010100011001101111010100";
        ram[53] = "0b10111110010001101010111000111010";
        ram[54] = "0b00111110010001111101100010001100";
        ram[55] = "0b10111110001100001101011001101111";
        ram[56] = "0b10111110011011100011100101110001";
        ram[57] = "0b10111110000001101000100100000001";
        ram[58] = "0b00111101110110000000110100111101";
        ram[59] = "0b00111101110101001000000100101100";
        ram[60] = "0b10111101010110110010010000101110";
        ram[61] = "0b10111110001011000101001010100100";
        ram[62] = "0b10111101110111101101000001110000";
        ram[63] = "0b10111110000110001000100101111111";
        ram[64] = "0b00111101101000010011100110111100";
        ram[65] = "0b00111101111010100011101011010010";
        ram[66] = "0b00111110001000100101111011011101";
        ram[67] = "0b10111101100010010111001101111100";
        ram[68] = "0b00111110000101101110010101000111";
        ram[69] = "0b10111101100001011011101111011001";
        ram[70] = "0b00111101001010110110010010111000";
        ram[71] = "0b10111100111110000001110110110011";
        ram[72] = "0b00111101111011011001010010001110";
        ram[73] = "0b10111101101100001101001101100101";
        ram[74] = "0b00111110100001000010011000010100";
        ram[75] = "0b10111110000110110110001111010100";
        ram[76] = "0b10111101111010101011100000100000";
        ram[77] = "0b10111101011111001111101110000100";
        ram[78] = "0b00111101001101110110111100011101";
        ram[79] = "0b00111101100010110010100000101010";
        ram[80] = "0b10111101001110010011101000101110";
        ram[81] = "0b10111101000001111101010000100101";
        ram[82] = "0b10111110001110100011101000001000";
        ram[83] = "0b00111101000011101110000101111010";


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


SC_MODULE(inference_mult_1_120_120_84_s_W4_62) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 84;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


inference_mult_1_120_120_84_s_W4_62_ram* meminst;


SC_CTOR(inference_mult_1_120_120_84_s_W4_62) {
meminst = new inference_mult_1_120_120_84_s_W4_62_ram("inference_mult_1_120_120_84_s_W4_62_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~inference_mult_1_120_120_84_s_W4_62() {
    delete meminst;
}


};//endmodule
#endif
