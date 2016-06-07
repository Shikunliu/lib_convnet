// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __inference_conv2d_f3_1_2_8_H__
#define __inference_conv2d_f3_1_2_8_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct inference_conv2d_f3_1_2_8_ram : public sc_core::sc_module {

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


   SC_CTOR(inference_conv2d_f3_1_2_8_ram) {
        ram[0] = "0b10111101001011110010001111011010";
        ram[1] = "0b10111101101110101011111011010110";
        ram[2] = "0b10111011000101101010100001001110";
        ram[3] = "0b10111011001011011001000001110001";
        ram[4] = "0b10111101101101111000101011011001";
        ram[5] = "0b10111101111010101100011011001110";
        ram[6] = "0b00111101001111100100010001110100";
        ram[7] = "0b10111100100100111100000101001000";
        ram[8] = "0b00111100100110100010010100010000";
        ram[9] = "0b00111101100001110110111011100111";
        ram[10] = "0b10111101101010011101011110101101";
        ram[11] = "0b00111101000001011010010110101100";
        ram[12] = "0b00111100111001100011011011001011";
        ram[13] = "0b00111110010010100110101010000111";
        ram[14] = "0b10111101110000110010111111110011";
        ram[15] = "0b00111101010000101111100010111110";
        ram[16] = "0b00111100100001010011010101011111";
        ram[17] = "0b00111101000100111011110110111000";
        ram[18] = "0b10111101001010110011100010010011";
        ram[19] = "0b10111110000110110101110001111101";
        ram[20] = "0b00111101101101110101110111111000";
        ram[21] = "0b00111100011011101000011001011011";
        ram[22] = "0b10111110000010011000010100100111";
        ram[23] = "0b00111101000111111111110011011011";
        ram[24] = "0b10111110000001101010011110101101";
        ram[25] = "0b00111101111111110101000101101001";
        ram[26] = "0b00111110001010100010001011110111";
        ram[27] = "0b00111101110101011001000101000111";
        ram[28] = "0b00111101101101111011001100000010";
        ram[29] = "0b10111100110101111010011111110010";
        ram[30] = "0b10111101011011101100011001101100";
        ram[31] = "0b10111110010111010110111000000101";
        ram[32] = "0b00111101010111011001110010101110";
        ram[33] = "0b00111100100010100110001000100100";
        ram[34] = "0b10111101100110001011101111100001";
        ram[35] = "0b10111100001000000100011101001000";
        ram[36] = "0b00111110001010101101011001000101";
        ram[37] = "0b10111110001100010110001010101110";
        ram[38] = "0b00111110000100000100110000000110";
        ram[39] = "0b00111110000011000010001000100101";
        ram[40] = "0b10111101011000010000111100101001";
        ram[41] = "0b00111110001001011111001100001110";
        ram[42] = "0b10111110000111000001100001110010";
        ram[43] = "0b00111100111111100100000110111010";
        ram[44] = "0b00111110010101011011101010110010";
        ram[45] = "0b00111100100111011010000011111011";
        ram[46] = "0b00111101001100001001100101110110";
        ram[47] = "0b00111100001110000110010001100000";
        ram[48] = "0b00111101100111010000101101110100";
        ram[49] = "0b00111110000011100001001011101000";
        ram[50] = "0b10111101110100111000010001110111";
        ram[51] = "0b00111110000100111010110011010110";
        ram[52] = "0b00111101011010111101010110100111";
        ram[53] = "0b00111110000110001101101001111111";
        ram[54] = "0b00111101000100000100001100101001";
        ram[55] = "0b00111101111000110000011101101100";
        ram[56] = "0b10111100011010100001110110101011";
        ram[57] = "0b00111101110100100011010111111000";
        ram[58] = "0b10111101111100011100000100001101";
        ram[59] = "0b00111101110000101111100000111000";
        ram[60] = "0b10111011001110110000110001011011";
        ram[61] = "0b00111101101001011100100001010100";
        ram[62] = "0b10111110000000001011100000000110";
        ram[63] = "0b10111110000011110011000010100101";
        ram[64] = "0b00111110000010010001001011011100";
        ram[65] = "0b00111100100110010000011100000010";
        ram[66] = "0b10111101110101000110111001001100";
        ram[67] = "0b00111110010100100011111111101110";
        ram[68] = "0b10111101010101000011010101011100";
        ram[69] = "0b00111100110100101111101001111001";
        ram[70] = "0b10111101100010100011111011000000";
        ram[71] = "0b10111110001010100010111100000110";
        ram[72] = "0b10111100000100110001111001001011";
        ram[73] = "0b10111101010111101000100100000111";
        ram[74] = "0b00111110000111000100000001001010";
        ram[75] = "0b00111100110100011000010000100001";
        ram[76] = "0b00111110000000100011011101001000";
        ram[77] = "0b00111011100110011110101011111000";
        ram[78] = "0b00111101001100001111101110110110";
        ram[79] = "0b10111101110011100011111111111111";
        ram[80] = "0b10111101001101101011010001110111";
        ram[81] = "0b00111101001011110011010110101101";
        ram[82] = "0b10111101000110100111111010011100";
        ram[83] = "0b00111101111100111100001011011011";
        ram[84] = "0b00111100111010001000001011010110";
        ram[85] = "0b00111110000000100111110110001001";
        ram[86] = "0b10111101110010100001100000101010";
        ram[87] = "0b10111101110001010100001101111001";
        ram[88] = "0b00111011110110100111101011110110";
        ram[89] = "0b10111100100000100101000101001001";
        ram[90] = "0b00111011001111001111010111101010";
        ram[91] = "0b10111101110111111111001111110001";
        ram[92] = "0b00111101000111100100100000000100";
        ram[93] = "0b10111101010000101110110111110001";
        ram[94] = "0b10111101111000010111101100001111";
        ram[95] = "0b10111110011001001011100001111100";
        ram[96] = "0b00111101111000001011000010101111";
        ram[97] = "0b00111100011011100100000001001111";
        ram[98] = "0b00111101100110101000000001010111";
        ram[99] = "0b00111101101010011111100111000001";
        ram[100] = "0b00111101010111100111100100010111";
        ram[101] = "0b10111110000011001011100011100001";
        ram[102] = "0b10111101001101001110001010010110";
        ram[103] = "0b00111100110110000101000000100011";
        ram[104] = "0b00111101000010001101010111111101";
        ram[105] = "0b00111110000000110000110011101101";
        ram[106] = "0b10111101100100101111010111101001";
        ram[107] = "0b10111110000000110111010101000011";
        ram[108] = "0b10111110001110010001010001101110";
        ram[109] = "0b00111100111001100000001001011110";
        ram[110] = "0b00111101101110010101001000010110";
        ram[111] = "0b10111011010001000011001001110100";
        ram[112] = "0b10111101110001111111110011111100";
        ram[113] = "0b00111110001111100001011110100000";
        ram[114] = "0b00111101110000110111110101010110";
        ram[115] = "0b10111101110001110010000001101011";
        ram[116] = "0b10111100111000010101100101001100";
        ram[117] = "0b00111101111001111011000111000000";
        ram[118] = "0b00111101111111100011110100011101";
        ram[119] = "0b10111101110010000110110011000011";


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


SC_MODULE(inference_conv2d_f3_1_2_8) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 120;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


inference_conv2d_f3_1_2_8_ram* meminst;


SC_CTOR(inference_conv2d_f3_1_2_8) {
meminst = new inference_conv2d_f3_1_2_8_ram("inference_conv2d_f3_1_2_8_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~inference_conv2d_f3_1_2_8() {
    delete meminst;
}


};//endmodule
#endif