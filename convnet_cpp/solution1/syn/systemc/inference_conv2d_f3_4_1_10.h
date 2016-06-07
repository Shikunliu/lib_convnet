// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __inference_conv2d_f3_4_1_10_H__
#define __inference_conv2d_f3_4_1_10_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct inference_conv2d_f3_4_1_10_ram : public sc_core::sc_module {

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


   SC_CTOR(inference_conv2d_f3_4_1_10_ram) {
        ram[0] = "0b10111110000110011011101110101110";
        ram[1] = "0b00111101000100101001100001010011";
        ram[2] = "0b00111100000110110000000011111000";
        ram[3] = "0b10111001101110010110010110001001";
        ram[4] = "0b10111100101111001111011011001100";
        ram[5] = "0b10111101110100110110111101111110";
        ram[6] = "0b10111100110100111011101110011111";
        ram[7] = "0b10111100101100010000101110100110";
        ram[8] = "0b00111110000110101010011001001100";
        ram[9] = "0b00111101001011001010010110110000";
        ram[10] = "0b00111100111111110001101111010100";
        ram[11] = "0b10111100101000010111100010001011";
        ram[12] = "0b10111101111111000100010111001100";
        ram[13] = "0b10111110000110100000111110010001";
        ram[14] = "0b10111100110001001110010110101101";
        ram[15] = "0b00111110000001111000000001111000";
        ram[16] = "0b00111101010111111010001000100111";
        ram[17] = "0b10111110001011111011011100100000";
        ram[18] = "0b00111110000100100000011110010010";
        ram[19] = "0b00111100000111011100111111001010";
        ram[20] = "0b10111101010010010100101010110010";
        ram[21] = "0b00111110000011010101101111101110";
        ram[22] = "0b00111010111011001110011110011111";
        ram[23] = "0b00111101111100101100001110000111";
        ram[24] = "0b10111101101100011111000110011010";
        ram[25] = "0b10111110001000001100011100111011";
        ram[26] = "0b00111101110010101001110001001001";
        ram[27] = "0b00111010010001010111001001010100";
        ram[28] = "0b10111110000110000000111111011100";
        ram[29] = "0b10111101010000100010011000110000";
        ram[30] = "0b00111110000100111110001010010011";
        ram[31] = "0b00111011110010011101001101110011";
        ram[32] = "0b10111101011101010100111001100001";
        ram[33] = "0b00111101110101101101001010101010";
        ram[34] = "0b10111101110000111101110010100110";
        ram[35] = "0b10111101100110111110000001100110";
        ram[36] = "0b00111101101011011100100000001010";
        ram[37] = "0b10111100100110101011001101110101";
        ram[38] = "0b10111101011100100000101110000000";
        ram[39] = "0b00111110001000100000010100110110";
        ram[40] = "0b10111101011100110110000110001100";
        ram[41] = "0b00111100111011011001111000110011";
        ram[42] = "0b10111101001010001101001110101110";
        ram[43] = "0b10111010100100100000010111111100";
        ram[44] = "0b10111101000101110000000011001110";
        ram[45] = "0b00111110010110100100001001101100";
        ram[46] = "0b10111100101110011000100000010111";
        ram[47] = "0b10111101000111000000100000001001";
        ram[48] = "0b00111101000110100010111100111011";
        ram[49] = "0b10111110000000011100100010101000";
        ram[50] = "0b00111101010011001110000001101001";
        ram[51] = "0b10111110001000101110011000100001";
        ram[52] = "0b00111110001001001000011100110011";
        ram[53] = "0b00111110011110101100011001000111";
        ram[54] = "0b10111100110001001000000110100101";
        ram[55] = "0b10111101000000100011010001110011";
        ram[56] = "0b00111101101000100100000110001110";
        ram[57] = "0b10111110001000011010110001011000";
        ram[58] = "0b10111101100011000111111110100000";
        ram[59] = "0b00111101111001100100110010110110";
        ram[60] = "0b00111101100101100111001100111111";
        ram[61] = "0b00111101111001011100100010010111";
        ram[62] = "0b10111110000000011110001100100010";
        ram[63] = "0b00111101111000000111101100110101";
        ram[64] = "0b00111101101100110100111101011011";
        ram[65] = "0b00111101001000111010111100110010";
        ram[66] = "0b10111101000000111111001111111011";
        ram[67] = "0b00111110000111100000110011100001";
        ram[68] = "0b10111101011011111011110111001000";
        ram[69] = "0b10111101101100111110001001010000";
        ram[70] = "0b10111101100101111111011110010110";
        ram[71] = "0b00111101110111000000001000101010";
        ram[72] = "0b00111101010111001111101000100111";
        ram[73] = "0b00111101010110010101111011000110";
        ram[74] = "0b10111010111101110111011101110000";
        ram[75] = "0b10111101110110011010100011001110";
        ram[76] = "0b10111101110100011011100000100100";
        ram[77] = "0b00111101011000011010100010101100";
        ram[78] = "0b00111101100100111100101000110010";
        ram[79] = "0b10111101110010101010111001011111";
        ram[80] = "0b00111101101000110000011001000101";
        ram[81] = "0b00111101010110101101111000100010";
        ram[82] = "0b00111101101000001000001101010110";
        ram[83] = "0b00111101011101110000100000111111";
        ram[84] = "0b00111101100110010001110111010001";
        ram[85] = "0b00111011001011011101101011101111";
        ram[86] = "0b10111101111010010011111000011101";
        ram[87] = "0b10111101000010001010000101110100";
        ram[88] = "0b00111101011011011111111000100101";
        ram[89] = "0b00111110010011101010011100000101";
        ram[90] = "0b10111101110010110101010110111001";
        ram[91] = "0b10111100001100011010010001010010";
        ram[92] = "0b00111011100101111111010000101000";
        ram[93] = "0b10111101100001111001011000000100";
        ram[94] = "0b00111101110111000100111100111100";
        ram[95] = "0b00111100101101110100100110101110";
        ram[96] = "0b00111101000001110101011000110110";
        ram[97] = "0b00111101000001011010100011101100";
        ram[98] = "0b10111101011101101011011001011011";
        ram[99] = "0b10111100110010011101011110111010";
        ram[100] = "0b10111101111110101001111010110010";
        ram[101] = "0b10111100111011010110000100101100";
        ram[102] = "0b10111101100101101001111101110001";
        ram[103] = "0b10111101001101100010010001111111";
        ram[104] = "0b00111101011011010101000100111100";
        ram[105] = "0b10111100110001110011011000011111";
        ram[106] = "0b00111101100101100011111000100010";
        ram[107] = "0b10111101001100100011111110000011";
        ram[108] = "0b10111101101101010101001100100110";
        ram[109] = "0b10111011111001011110010100001100";
        ram[110] = "0b10111100010110100011110000100001";
        ram[111] = "0b00111100101110011101100101110101";
        ram[112] = "0b00111101010011001110100001111011";
        ram[113] = "0b00111101101001000011111011110100";
        ram[114] = "0b10111110001101010000010011000101";
        ram[115] = "0b00111100101001110011110100100110";
        ram[116] = "0b10111101110111101111111110100000";
        ram[117] = "0b10111101110010111011000011100110";
        ram[118] = "0b00111101110000100111101111101001";
        ram[119] = "0b10111101100011101000100101110011";


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


SC_MODULE(inference_conv2d_f3_4_1_10) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 120;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


inference_conv2d_f3_4_1_10_ram* meminst;


SC_CTOR(inference_conv2d_f3_4_1_10) {
meminst = new inference_conv2d_f3_4_1_10_ram("inference_conv2d_f3_4_1_10_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~inference_conv2d_f3_4_1_10() {
    delete meminst;
}


};//endmodule
#endif