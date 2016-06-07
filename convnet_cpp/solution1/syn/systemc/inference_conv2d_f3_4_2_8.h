// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __inference_conv2d_f3_4_2_8_H__
#define __inference_conv2d_f3_4_2_8_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct inference_conv2d_f3_4_2_8_ram : public sc_core::sc_module {

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


   SC_CTOR(inference_conv2d_f3_4_2_8_ram) {
        ram[0] = "0b00111100100001111111100011110011";
        ram[1] = "0b10111101100001000110101110010010";
        ram[2] = "0b00111101101011100001010101010010";
        ram[3] = "0b10111110000101011010111110110000";
        ram[4] = "0b00111100011111010001001101010001";
        ram[5] = "0b00111101100110111111011101101010";
        ram[6] = "0b10111101100001000110011111110100";
        ram[7] = "0b10111101110111111001101101010110";
        ram[8] = "0b10111101000011111011111001101001";
        ram[9] = "0b00111100000000000010011001000001";
        ram[10] = "0b00111101010011011110010000111111";
        ram[11] = "0b00111100111010101100100011001100";
        ram[12] = "0b00111101010010100010001101101111";
        ram[13] = "0b10111101010100011100010101011010";
        ram[14] = "0b10111100111110100101010110011100";
        ram[15] = "0b10111110000001010011010110000111";
        ram[16] = "0b10111101010001000101000110011110";
        ram[17] = "0b00111110010001000011011100111111";
        ram[18] = "0b00111110000110000010011010101011";
        ram[19] = "0b00111101000100110111111111011010";
        ram[20] = "0b00111101000011000101011011010110";
        ram[21] = "0b10111101101101101000011101010011";
        ram[22] = "0b10111100111000001111110001100100";
        ram[23] = "0b10111100001000111111000100001011";
        ram[24] = "0b00111101101101010100110101111101";
        ram[25] = "0b10111101110011110111001000101110";
        ram[26] = "0b00111011010010001100010010101010";
        ram[27] = "0b00111100101000101111001100010100";
        ram[28] = "0b10111101101001000010100001011011";
        ram[29] = "0b00111101110010100111001011011101";
        ram[30] = "0b10111110000000110100001000100100";
        ram[31] = "0b00111101000011100111000001010110";
        ram[32] = "0b10111101000000101000100001010110";
        ram[33] = "0b00111101111000010000011110111000";
        ram[34] = "0b10111101010000001111001100001111";
        ram[35] = "0b00111110001000101001010110100111";
        ram[36] = "0b00111110000010010001111101110001";
        ram[37] = "0b00111101101111101100010000010000";
        ram[38] = "0b10111100111111011101110110110001";
        ram[39] = "0b00111101111010111001010011011001";
        ram[40] = "0b10111101001010100001111100111110";
        ram[41] = "0b00111110000101010010100111111110";
        ram[42] = "0b10111110000110010100101010110010";
        ram[43] = "0b10111100111000101011111101111101";
        ram[44] = "0b00111110000100110111010100000000";
        ram[45] = "0b00111100101001111101100011110111";
        ram[46] = "0b10111100111010011111111101111000";
        ram[47] = "0b00111011110001001101100001110111";
        ram[48] = "0b00111100101111111110101111011110";
        ram[49] = "0b10111011011110101000100100011110";
        ram[50] = "0b00111100010011011011110111111001";
        ram[51] = "0b10111101011110000101011001101110";
        ram[52] = "0b00111010111110110010101000000010";
        ram[53] = "0b00111101000011010010000001111010";
        ram[54] = "0b00111101101111111101111111011100";
        ram[55] = "0b00111011110110101101000011011100";
        ram[56] = "0b00111101010011000101001110110001";
        ram[57] = "0b00111101100000011010101100111110";
        ram[58] = "0b10111101110000001000000010110110";
        ram[59] = "0b00111100101101110001101110001011";
        ram[60] = "0b10111101000100111111011011111000";
        ram[61] = "0b00111101011100111001101001000110";
        ram[62] = "0b10111010100001010100100100101011";
        ram[63] = "0b10111110000110010001001111101000";
        ram[64] = "0b10111011110110011111010110010101";
        ram[65] = "0b00111100110011111001001110111100";
        ram[66] = "0b00111110000110000011000010100001";
        ram[67] = "0b00111101001010100111101001011101";
        ram[68] = "0b10111100001001111011101100110000";
        ram[69] = "0b10111101101101010001011110100100";
        ram[70] = "0b10111101101001101000001101111111";
        ram[71] = "0b00111100111010000110110011010001";
        ram[72] = "0b10111100111000001101000000100100";
        ram[73] = "0b10111101100101011011110101000100";
        ram[74] = "0b10111101011001000110111111101100";
        ram[75] = "0b10111101010111101010101110111101";
        ram[76] = "0b00111101011110111011010001000001";
        ram[77] = "0b10111011101110011010011100101011";
        ram[78] = "0b00111100110000000100010001011110";
        ram[79] = "0b10111101000011001000100001101111";
        ram[80] = "0b10111101101111111100111011000101";
        ram[81] = "0b00111100110110001000110111001011";
        ram[82] = "0b00111101101111110100011010011101";
        ram[83] = "0b00111101010010001110001101001110";
        ram[84] = "0b00111101111110011001111101011110";
        ram[85] = "0b10111101000101101010101001001100";
        ram[86] = "0b10111110000100001000110110001111";
        ram[87] = "0b00111110010100001100110110000101";
        ram[88] = "0b10111101011001100101100000001001";
        ram[89] = "0b10111101111001111111000100110000";
        ram[90] = "0b10111101110001110111000010100010";
        ram[91] = "0b00111101100010011010000101000001";
        ram[92] = "0b10111100110011100101110010000100";
        ram[93] = "0b10111110000001010101110010010110";
        ram[94] = "0b00111101100101001000011111000111";
        ram[95] = "0b10111100010011110011001001101101";
        ram[96] = "0b10111110000001010010001101110000";
        ram[97] = "0b00111100011011111000010011110011";
        ram[98] = "0b10111101101010101011100000111010";
        ram[99] = "0b10111100110010001000011111111001";
        ram[100] = "0b10111101100011111100111100110000";
        ram[101] = "0b00111100111000101110110101101011";
        ram[102] = "0b10111101000001111110101001111010";
        ram[103] = "0b00111110000011100110110000001001";
        ram[104] = "0b00111100000011110001011111000000";
        ram[105] = "0b00111100111001011111001010100011";
        ram[106] = "0b00111110001010010010010100110101";
        ram[107] = "0b10111100101101110111010100010111";
        ram[108] = "0b00111101111100101101011011101101";
        ram[109] = "0b00111101111111110011110011110111";
        ram[110] = "0b10111011000101100110011010110100";
        ram[111] = "0b10111011100010011100110001000111";
        ram[112] = "0b00111101100110010001001010110011";
        ram[113] = "0b00111100010001001101000011101010";
        ram[114] = "0b00111101101011101011101000110101";
        ram[115] = "0b10111011110010110011111110101111";
        ram[116] = "0b10111011001100000100101000001010";
        ram[117] = "0b00111110000111101110111111100101";
        ram[118] = "0b00111101111001010001011011011011";
        ram[119] = "0b00111100000100010110101100000010";


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


SC_MODULE(inference_conv2d_f3_4_2_8) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 120;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


inference_conv2d_f3_4_2_8_ram* meminst;


SC_CTOR(inference_conv2d_f3_4_2_8) {
meminst = new inference_conv2d_f3_4_2_8_ram("inference_conv2d_f3_4_2_8_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~inference_conv2d_f3_4_2_8() {
    delete meminst;
}


};//endmodule
#endif