// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __inference_conv2d_f3_1_4_10_H__
#define __inference_conv2d_f3_1_4_10_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct inference_conv2d_f3_1_4_10_ram : public sc_core::sc_module {

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


   SC_CTOR(inference_conv2d_f3_1_4_10_ram) {
        ram[0] = "0b10111100111101110100001111001111";
        ram[1] = "0b00111110010000100100101100110100";
        ram[2] = "0b10111100101111011101110100010000";
        ram[3] = "0b10111101111110001011001011101010";
        ram[4] = "0b00111101101010000110000110100110";
        ram[5] = "0b10111101101110111111100010011111";
        ram[6] = "0b00111101110000100000100110000010";
        ram[7] = "0b00111100100011100000111000010101";
        ram[8] = "0b00111101110010100100110000101100";
        ram[9] = "0b10111110010110110110011100111100";
        ram[10] = "0b10111101101111100010011001001110";
        ram[11] = "0b10111101101100011100010100100100";
        ram[12] = "0b00111011001101111011100010010100";
        ram[13] = "0b10111101111001111110000111111100";
        ram[14] = "0b00111110001110001100000001001000";
        ram[15] = "0b10111101111000111000011101011001";
        ram[16] = "0b00111101110010101111000111011001";
        ram[17] = "0b10111100110010000011010001001100";
        ram[18] = "0b00111100101001010011111111000000";
        ram[19] = "0b10111100010001111100110111110101";
        ram[20] = "0b10111110000011001110100010010110";
        ram[21] = "0b10111100110010110111101110010100";
        ram[22] = "0b10111101100011110011011011100010";
        ram[23] = "0b00111101110010111101111010111001";
        ram[24] = "0b00111101110001101101110011001001";
        ram[25] = "0b10111101100100110011011001100110";
        ram[26] = "0b00111101001110011100011001111011";
        ram[27] = "0b10111101001111101101011010100000";
        ram[28] = "0b00111101000110100010011010111101";
        ram[29] = "0b00111101010000101001000010111001";
        ram[30] = "0b00111100101110010110111110001101";
        ram[31] = "0b10111101010010111010110011011100";
        ram[32] = "0b10111100110001100010100111100110";
        ram[33] = "0b00111100011011001100100010000000";
        ram[34] = "0b10111101101101000010001001101111";
        ram[35] = "0b10111101001011100001110100010100";
        ram[36] = "0b00111110000001100110000011100101";
        ram[37] = "0b00111110000011010110011011110001";
        ram[38] = "0b10111101110010111110000000100011";
        ram[39] = "0b00111101111110110011000101111111";
        ram[40] = "0b00111101111110110101001110010011";
        ram[41] = "0b10111101011000001111110110100111";
        ram[42] = "0b10111110000001101101000111100001";
        ram[43] = "0b10111101110000110001010011110011";
        ram[44] = "0b10111101111011000111100101110000";
        ram[45] = "0b00111101101001110100000011010010";
        ram[46] = "0b10111100100001010100110110110010";
        ram[47] = "0b10111101010100111010000011000111";
        ram[48] = "0b10111100101010101111010101000001";
        ram[49] = "0b00111100000011010000101000011111";
        ram[50] = "0b10111101001110111101000110011101";
        ram[51] = "0b00111101000110000010000010111110";
        ram[52] = "0b10111101101000010010101101000011";
        ram[53] = "0b10111101000001000110101001011101";
        ram[54] = "0b00111101000011110101111001011101";
        ram[55] = "0b00111110010000011001100110111011";
        ram[56] = "0b00111101010101100000001111001000";
        ram[57] = "0b10111101110001001101101010101011";
        ram[58] = "0b10111101000111101100011110111100";
        ram[59] = "0b00111101101110001111000001101010";
        ram[60] = "0b00111101001110101100001011011111";
        ram[61] = "0b10111010111100010001001111111111";
        ram[62] = "0b00111101000011101111100101100010";
        ram[63] = "0b10111101010101110101110011111001";
        ram[64] = "0b00111101001111010011110010111100";
        ram[65] = "0b10111001111010100110001110000011";
        ram[66] = "0b10111101011110100010001000100000";
        ram[67] = "0b00111100100111101111100101010101";
        ram[68] = "0b00111100000001001101110011111111";
        ram[69] = "0b00111101100011011111011010011000";
        ram[70] = "0b00111101100111001000000100001010";
        ram[71] = "0b10111101100101001100010111011010";
        ram[72] = "0b10111101101110110100110001110010";
        ram[73] = "0b00111011011110101011010100111101";
        ram[74] = "0b10111110000101110101011100001100";
        ram[75] = "0b10111100101010001110100110011001";
        ram[76] = "0b00111101100101011101100110100001";
        ram[77] = "0b10111101000111111010001110011111";
        ram[78] = "0b10111010011111000011110000110111";
        ram[79] = "0b00111101100110011001100011011110";
        ram[80] = "0b00111100100010000100100000000011";
        ram[81] = "0b10111011000001101010100011111100";
        ram[82] = "0b10111110000100111010000101001101";
        ram[83] = "0b00111101001000001000000100010100";
        ram[84] = "0b00111101010100011011111011011010";
        ram[85] = "0b00111110000000010001100110001011";
        ram[86] = "0b00111110000101001111011110101001";
        ram[87] = "0b00111101100111000110000001100001";
        ram[88] = "0b10111110000001100110001010111011";
        ram[89] = "0b10111101111001010000001111111011";
        ram[90] = "0b10111101101100010011001110011010";
        ram[91] = "0b10111100111111001111011100000001";
        ram[92] = "0b10111101011000111110100001110010";
        ram[93] = "0b10111100000100111110001101001100";
        ram[94] = "0b10111011111110110010011101010011";
        ram[95] = "0b00111100110111000010010110011011";
        ram[96] = "0b00111101000001000111010010100100";
        ram[97] = "0b10111101001011011100000110001010";
        ram[98] = "0b10111101010100010001010000111111";
        ram[99] = "0b00111101011111000001111000101001";
        ram[100] = "0b10111101101011100100001101001101";
        ram[101] = "0b00111101111110000101110011101110";
        ram[102] = "0b10111011111001100100101000001100";
        ram[103] = "0b10111110010000011111110100010101";
        ram[104] = "0b00111101101011000001101001001000";
        ram[105] = "0b10111101011101000111110110011011";
        ram[106] = "0b00111101001001001100110110001111";
        ram[107] = "0b00111110000000110101011000010001";
        ram[108] = "0b00111101011110100110011111011011";
        ram[109] = "0b10111101101101000101111101110110";
        ram[110] = "0b00111011100111111001011111110110";
        ram[111] = "0b10111110001000000000101110001001";
        ram[112] = "0b10111110000101000111101001011011";
        ram[113] = "0b00111100110101111110100010111111";
        ram[114] = "0b00111100101011100100111101101001";
        ram[115] = "0b00111101001000101010100111001001";
        ram[116] = "0b10111110000010101010100101110001";
        ram[117] = "0b00111101001101000100000011100101";
        ram[118] = "0b00111110001011001010100000011010";
        ram[119] = "0b10111101010111101010011001001001";


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


SC_MODULE(inference_conv2d_f3_1_4_10) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 120;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


inference_conv2d_f3_1_4_10_ram* meminst;


SC_CTOR(inference_conv2d_f3_1_4_10) {
meminst = new inference_conv2d_f3_1_4_10_ram("inference_conv2d_f3_1_4_10_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~inference_conv2d_f3_1_4_10() {
    delete meminst;
}


};//endmodule
#endif