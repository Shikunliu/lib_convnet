// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __inference_conv2d_f3_2_4_10_H__
#define __inference_conv2d_f3_2_4_10_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct inference_conv2d_f3_2_4_10_ram : public sc_core::sc_module {

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


   SC_CTOR(inference_conv2d_f3_2_4_10_ram) {
        ram[0] = "0b10111101110001101100100011101010";
        ram[1] = "0b00111100100100000010110100111111";
        ram[2] = "0b00111101101110100110100010010111";
        ram[3] = "0b10111101110110101110110111011101";
        ram[4] = "0b00111100101101011100100111100110";
        ram[5] = "0b00111101100101101101111100100101";
        ram[6] = "0b10111101110011011010010001001000";
        ram[7] = "0b10111101000001010011000111101001";
        ram[8] = "0b10111110000000000111010010100111";
        ram[9] = "0b10111101100001110000100000001010";
        ram[10] = "0b00111110000101001110010011001001";
        ram[11] = "0b10111101010101110100110101110100";
        ram[12] = "0b10111100110010000111110111101000";
        ram[13] = "0b10111101110110110111001110001110";
        ram[14] = "0b00111101100001111101011111000011";
        ram[15] = "0b10111101101011000011010011110111";
        ram[16] = "0b00111100000011110101011011000000";
        ram[17] = "0b00111110001110110010110100001010";
        ram[18] = "0b10111101001110100110010111000010";
        ram[19] = "0b00111101100110111100001111101110";
        ram[20] = "0b10111110001110000000101000011000";
        ram[21] = "0b00111101000011100111000010100110";
        ram[22] = "0b10111110000011010110100101001101";
        ram[23] = "0b00111101100010110001000010000101";
        ram[24] = "0b10111110000010101101111010101001";
        ram[25] = "0b00111010111010011101000111000000";
        ram[26] = "0b10111101011111111000011101101010";
        ram[27] = "0b10111100100111000111010010101011";
        ram[28] = "0b00111101000001100001000000011010";
        ram[29] = "0b10111101101011100010000001101111";
        ram[30] = "0b00111100100100101010111110011011";
        ram[31] = "0b00111101101000110010110111011010";
        ram[32] = "0b10111101100010010111001000111010";
        ram[33] = "0b00111110001100000111010001100100";
        ram[34] = "0b10111101000110011011011110110010";
        ram[35] = "0b10111100011110000000010000011110";
        ram[36] = "0b10111101000101011111010011100100";
        ram[37] = "0b10111101111011000111111100110101";
        ram[38] = "0b10111110000111101001111101101011";
        ram[39] = "0b00111100010100010010001010011101";
        ram[40] = "0b10111101100001111010100110010010";
        ram[41] = "0b10111010110101011100111101010101";
        ram[42] = "0b00111101011100011111001000000101";
        ram[43] = "0b00111100000000010000110101111100";
        ram[44] = "0b00111101110100100111000010110000";
        ram[45] = "0b00111011000110001111011001011100";
        ram[46] = "0b00111101010111000000001110000111";
        ram[47] = "0b00111101010110011100101111101111";
        ram[48] = "0b10111101101001100000101111000000";
        ram[49] = "0b00111101110110101000011110100000";
        ram[50] = "0b00111101100011101111001001001110";
        ram[51] = "0b10111110001101010100010001111000";
        ram[52] = "0b10111101001001011100011111011011";
        ram[53] = "0b00111101001010011101101011000101";
        ram[54] = "0b10111110000001110110000101000110";
        ram[55] = "0b10111010101010011111110100010100";
        ram[56] = "0b00111101010111110011110111101001";
        ram[57] = "0b10111100110110011000110010011001";
        ram[58] = "0b00111101001000101001100000010000";
        ram[59] = "0b10111101010110110111100011100111";
        ram[60] = "0b10111110000001101111010110001000";
        ram[61] = "0b10111101111101010000010000111110";
        ram[62] = "0b00111100110101011111011101001110";
        ram[63] = "0b00111011111111111111101001110111";
        ram[64] = "0b00111101001001100000101101100010";
        ram[65] = "0b10111100100001001010011010001110";
        ram[66] = "0b10111101100111001011010010100001";
        ram[67] = "0b00111101100010110111010000101111";
        ram[68] = "0b00111101100100100110010011010111";
        ram[69] = "0b00111101100011110110110010111010";
        ram[70] = "0b00111101111010010100001001001110";
        ram[71] = "0b10111100010011001100001010111100";
        ram[72] = "0b00111100011111101001011110110110";
        ram[73] = "0b10111101100001101100001100100110";
        ram[74] = "0b10111110010111110100101111101000";
        ram[75] = "0b10111110000010001000101111011011";
        ram[76] = "0b10111101101110010110011001111011";
        ram[77] = "0b10111101000001000100101110100100";
        ram[78] = "0b10111101001000011101110000001110";
        ram[79] = "0b10111110001010100101111011111111";
        ram[80] = "0b10111011101010010001100001101000";
        ram[81] = "0b10111110000001101111111001110010";
        ram[82] = "0b00111101000111011011001010110011";
        ram[83] = "0b00111101111111100000000011010010";
        ram[84] = "0b00111101110110010101110111010101";
        ram[85] = "0b00111110000011101011110101001101";
        ram[86] = "0b10111110000010011011110110000100";
        ram[87] = "0b10111101001100100000000000010010";
        ram[88] = "0b10111110000100010000101011011101";
        ram[89] = "0b00111110000100110010111000111000";
        ram[90] = "0b00111011011001001110000101101100";
        ram[91] = "0b10111011110111000111111000110000";
        ram[92] = "0b10111101110011011110001110111001";
        ram[93] = "0b00111110001111010110000011101001";
        ram[94] = "0b10111101101100110101001010001101";
        ram[95] = "0b00111110000110010001100101101001";
        ram[96] = "0b10111101011001111001111000001001";
        ram[97] = "0b10111101010001111010100001101011";
        ram[98] = "0b00111100110011001101100101100010";
        ram[99] = "0b10111101010010110001011101010110";
        ram[100] = "0b10111011100001000001010111001111";
        ram[101] = "0b00111101011011100011111101000011";
        ram[102] = "0b10111101010111000111100001110001";
        ram[103] = "0b00111101100111101101100100110001";
        ram[104] = "0b00111011101011010000010011011011";
        ram[105] = "0b10111101111101101110001101110001";
        ram[106] = "0b10111011000000110111110011001101";
        ram[107] = "0b00111101001010001101011010011110";
        ram[108] = "0b10111110001001010000000011010110";
        ram[109] = "0b00111101000001011110101110110111";
        ram[110] = "0b00111010101111100100011010100010";
        ram[111] = "0b10111101100111001111001101111110";
        ram[112] = "0b00111110000000110100011101100011";
        ram[113] = "0b10111101000101111010010101101110";
        ram[114] = "0b10111100010110000101010001010101";
        ram[115] = "0b00111100011010110101000010110001";
        ram[116] = "0b00111101001110011001011111101100";
        ram[117] = "0b00111101001001111011011110111010";
        ram[118] = "0b10111110000110101000011000001110";
        ram[119] = "0b00111110000011111110011000001100";


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


SC_MODULE(inference_conv2d_f3_2_4_10) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 120;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


inference_conv2d_f3_2_4_10_ram* meminst;


SC_CTOR(inference_conv2d_f3_2_4_10) {
meminst = new inference_conv2d_f3_2_4_10_ram("inference_conv2d_f3_2_4_10_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~inference_conv2d_f3_2_4_10() {
    delete meminst;
}


};//endmodule
#endif
