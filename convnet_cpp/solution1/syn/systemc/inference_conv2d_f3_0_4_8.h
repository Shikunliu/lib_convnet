// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __inference_conv2d_f3_0_4_8_H__
#define __inference_conv2d_f3_0_4_8_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct inference_conv2d_f3_0_4_8_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 32;
  static const unsigned AddressRange = 120;
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


   SC_CTOR(inference_conv2d_f3_0_4_8_ram) {
        ram[0] = "0b10111101101000110111000100101100";
        ram[1] = "0b10111101000011001101101100101010";
        ram[2] = "0b10111100101110011101001010111111";
        ram[3] = "0b10111101011001010110010101001010";
        ram[4] = "0b10111100001001011010001100101000";
        ram[5] = "0b00111101000010101111010110010010";
        ram[6] = "0b00111101100001011010110111001100";
        ram[7] = "0b00111100111111000010001010010000";
        ram[8] = "0b00111101001101001111011100100011";
        ram[9] = "0b00111101110100001011000011110010";
        ram[10] = "0b00111101100010011101100111101110";
        ram[11] = "0b10111110000101001011101010010101";
        ram[12] = "0b00111101001110110001101110110000";
        ram[13] = "0b10111101101101000010001110100011";
        ram[14] = "0b00111110001111011011001000101101";
        ram[15] = "0b00111110000100011101001000011000";
        ram[16] = "0b00111101111011111111010000110100";
        ram[17] = "0b00111101100110100100001110101110";
        ram[18] = "0b00111101111000010001001111000111";
        ram[19] = "0b10111101100111001111011101010010";
        ram[20] = "0b00111101100010001010000110011101";
        ram[21] = "0b10111100011110111011110101111011";
        ram[22] = "0b00111101101010110010011110001001";
        ram[23] = "0b00111101001100110110000011010000";
        ram[24] = "0b00111100100101000001110100100011";
        ram[25] = "0b10111101010011011010100100011011";
        ram[26] = "0b10111101000010010010111011101000";
        ram[27] = "0b00111101101010111011000011001011";
        ram[28] = "0b10111101011000010001000100001101";
        ram[29] = "0b00111101010010101110101000111111";
        ram[30] = "0b10111110001101011100000110000011";
        ram[31] = "0b00111110000010010011001111100011";
        ram[32] = "0b00111110000110101101110111011111";
        ram[33] = "0b00111101000101000011101101010110";
        ram[34] = "0b00111100110110001110010000110010";
        ram[35] = "0b00111101010001111011110101001001";
        ram[36] = "0b00111100101010100010111000111100";
        ram[37] = "0b10111101000111001010000001100101";
        ram[38] = "0b00111110000100100001000110001000";
        ram[39] = "0b10111101010011111000010011011000";
        ram[40] = "0b10111101101010100000001010010000";
        ram[41] = "0b10111100110111100001011111100011";
        ram[42] = "0b10111100110101000010010001111010";
        ram[43] = "0b10111101110110110110010111101101";
        ram[44] = "0b00111110011111001010011011001010";
        ram[45] = "0b00111100100111100010011000100110";
        ram[46] = "0b10111101111100111100101111000101";
        ram[47] = "0b00111100101111110101011100101110";
        ram[48] = "0b00111101101001001111110110111110";
        ram[49] = "0b00111101000010001100010011001011";
        ram[50] = "0b00111100100011100010010101011101";
        ram[51] = "0b10111100010100010110000110000111";
        ram[52] = "0b10111101111000110000000010011011";
        ram[53] = "0b00111101110000000111000100100100";
        ram[54] = "0b00111101101101011000001011110111";
        ram[55] = "0b10111110001000111010010100111100";
        ram[56] = "0b10111101111101001111101111011011";
        ram[57] = "0b10111101011011011001001011100000";
        ram[58] = "0b00111101100001001100001001010111";
        ram[59] = "0b00111110011100010101011011100010";
        ram[60] = "0b00111101110011001110111111101101";
        ram[61] = "0b00111110000001110111001110011111";
        ram[62] = "0b00111110000100010101110011101010";
        ram[63] = "0b00111101110000110001110100111011";
        ram[64] = "0b10111101010111100111011111010101";
        ram[65] = "0b10111101011111010011001101001100";
        ram[66] = "0b00111110001011001101110101010001";
        ram[67] = "0b00111100110111010111001000110110";
        ram[68] = "0b10111101111100111000001011100100";
        ram[69] = "0b00111110010010111011111001000100";
        ram[70] = "0b10111101100010011110000101010011";
        ram[71] = "0b00111110001110000000011011110010";
        ram[72] = "0b00111110001100011100000000000001";
        ram[73] = "0b00111101001001111110001011010011";
        ram[74] = "0b10111101000010101101000111101011";
        ram[75] = "0b00111011100000010110001100010111";
        ram[76] = "0b10111101011010111010000000010010";
        ram[77] = "0b00111110000011010011011001110010";
        ram[78] = "0b10111101001000111110101111001101";
        ram[79] = "0b10111101100010100000010010000001";
        ram[80] = "0b00111101000101011011011001001011";
        ram[81] = "0b00111100100000101010000000100011";
        ram[82] = "0b00111101001101111101010001001101";
        ram[83] = "0b10111101111000000010011001000110";
        ram[84] = "0b10111110000010001001011010011010";
        ram[85] = "0b00111101101111110000000101001101";
        ram[86] = "0b10111101101100100100001010110110";
        ram[87] = "0b00111101111111110110110000100111";
        ram[88] = "0b00111010010010110011011001110101";
        ram[89] = "0b10111101000100001111001100000010";
        ram[90] = "0b10111101001010001101010000011010";
        ram[91] = "0b00111101000000011001111111011110";
        ram[92] = "0b10111110000111011100101101011000";
        ram[93] = "0b00111110001110000100101101011110";
        ram[94] = "0b10111101111101101111110110101000";
        ram[95] = "0b10111101000010101110100000100110";
        ram[96] = "0b00111110000001110111101011110110";
        ram[97] = "0b00111101010111010111000001010011";
        ram[98] = "0b00111110001010000110100010111010";
        ram[99] = "0b10111100000101110110010111100011";
        ram[100] = "0b00111101001101101010001010100100";
        ram[101] = "0b00111101000111100100101110010101";
        ram[102] = "0b10111101100001101010111010001011";
        ram[103] = "0b00111110001010010110110100001001";
        ram[104] = "0b10111101100110000100010001001010";
        ram[105] = "0b00111101111011010100010001010110";
        ram[106] = "0b10111101111111010101001000111011";
        ram[107] = "0b10111110000110010100001100011000";
        ram[108] = "0b10111101001000101011111000100000";
        ram[109] = "0b00111101111001101010000010011001";
        ram[110] = "0b10111101001001000000101010000110";
        ram[111] = "0b10111101110010111101111101011010";
        ram[112] = "0b10111110010101001011011100101100";
        ram[113] = "0b10111101110111111110111010110011";
        ram[114] = "0b00111101010011000011000010010000";
        ram[115] = "0b10111101110011100010010010111100";
        ram[116] = "0b00111001110111001101101101111101";
        ram[117] = "0b00111100111011001001110011100001";
        ram[118] = "0b00111110000111110011010101011101";
        ram[119] = "0b00111100110101010010101101000000";


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


SC_MODULE(inference_conv2d_f3_0_4_8) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 120;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


inference_conv2d_f3_0_4_8_ram* meminst;


SC_CTOR(inference_conv2d_f3_0_4_8) {
meminst = new inference_conv2d_f3_0_4_8_ram("inference_conv2d_f3_0_4_8_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~inference_conv2d_f3_0_4_8() {
    delete meminst;
}


};//endmodule
#endif