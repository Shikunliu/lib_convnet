// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __inference_conv2d_f3_1_2_1_H__
#define __inference_conv2d_f3_1_2_1_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct inference_conv2d_f3_1_2_1_ram : public sc_core::sc_module {

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


   SC_CTOR(inference_conv2d_f3_1_2_1_ram) {
        ram[0] = "0b00111101000001101110001011000011";
        ram[1] = "0b00111110011000000101110111011001";
        ram[2] = "0b10111101010101010011011001111000";
        ram[3] = "0b00111101101000011011100010000010";
        ram[4] = "0b00111100111011111011111101110110";
        ram[5] = "0b00111101011101100111001110101010";
        ram[6] = "0b00111101101000001001011101111000";
        ram[7] = "0b10111101110011100110010110111111";
        ram[8] = "0b00111101110000100000011011010110";
        ram[9] = "0b00111100110011111100111101001011";
        ram[10] = "0b00111110000101100101100111010001";
        ram[11] = "0b00111101111110110101110110001001";
        ram[12] = "0b10111100100000101010100110010011";
        ram[13] = "0b10111101100011101110110011000000";
        ram[14] = "0b10111100100001110000001101011111";
        ram[15] = "0b00111101100111111010001001011101";
        ram[16] = "0b10111101101111010101001010100111";
        ram[17] = "0b00111110010000011001111100111100";
        ram[18] = "0b10111110000111100010011100011000";
        ram[19] = "0b00111011010100111101100110110001";
        ram[20] = "0b10111010111110010011100101100111";
        ram[21] = "0b00111101101110111101001100111101";
        ram[22] = "0b00111101100110000110001001100010";
        ram[23] = "0b10111100001100100010011110011010";
        ram[24] = "0b10111101101100001011110001101110";
        ram[25] = "0b10111110001110110101100000001000";
        ram[26] = "0b00111101111000011101110100011010";
        ram[27] = "0b00111110000100101011101101100110";
        ram[28] = "0b10111100101111010001010000101000";
        ram[29] = "0b10111100111110011110010010010011";
        ram[30] = "0b10111100010101001011011111101000";
        ram[31] = "0b00111101110100000111110010000101";
        ram[32] = "0b10111101110001000100100100010011";
        ram[33] = "0b10111011100010101001111100010101";
        ram[34] = "0b10111101010011100100110111110001";
        ram[35] = "0b00111110010010111001110001110011";
        ram[36] = "0b10111100000100001001000100111101";
        ram[37] = "0b10111101100100000100100100001001";
        ram[38] = "0b10111100100001000000110000110100";
        ram[39] = "0b00111100101001001001100100000111";
        ram[40] = "0b10111101010110100100110001000111";
        ram[41] = "0b00111101100010011100100011010111";
        ram[42] = "0b10111101101010011110010111110000";
        ram[43] = "0b10111101100000011001101001000001";
        ram[44] = "0b10111100001111000001011101110011";
        ram[45] = "0b10111100110110100000010110011010";
        ram[46] = "0b00111110011001011011101001101111";
        ram[47] = "0b10111100110000001110100100110100";
        ram[48] = "0b10111100111001100001101010110001";
        ram[49] = "0b00111101100101000001101011101111";
        ram[50] = "0b00111100101100011110111100110001";
        ram[51] = "0b00111100110111111000111000111011";
        ram[52] = "0b00111101000010100010000000010100";
        ram[53] = "0b10111011101110101011111011000011";
        ram[54] = "0b00111101001001101101011011001111";
        ram[55] = "0b10111100111010101001101011011110";
        ram[56] = "0b10111101101101011100010011011110";
        ram[57] = "0b00111101010100010011001010101000";
        ram[58] = "0b00111101100010010110101111101111";
        ram[59] = "0b00111001101111111010101011101010";
        ram[60] = "0b10111101001111110100110010110010";
        ram[61] = "0b00111100110011111100001101010111";
        ram[62] = "0b00111100001111111110011101110111";
        ram[63] = "0b10111110001100011101111100110011";
        ram[64] = "0b00111101101001100001010010001111";
        ram[65] = "0b00111011110110100010010111010001";
        ram[66] = "0b10111100101001000111100011110001";
        ram[67] = "0b00111110001011110010000011101010";
        ram[68] = "0b10111101011010011110110110001010";
        ram[69] = "0b00111010100111111001000001111111";
        ram[70] = "0b00111101111100100011001001001101";
        ram[71] = "0b10111101010000100011000101001101";
        ram[72] = "0b00111001011111011011001110110001";
        ram[73] = "0b10111110001101011011111100100111";
        ram[74] = "0b00111101100011100100000100011001";
        ram[75] = "0b10111010111011010000100011010111";
        ram[76] = "0b00111101000101101010100101011010";
        ram[77] = "0b00111110000001011100100100011101";
        ram[78] = "0b00111100110100010001011010101001";
        ram[79] = "0b00111110000010110010100010010101";
        ram[80] = "0b00111110001011110111010000000100";
        ram[81] = "0b10111100111001000111010010111111";
        ram[82] = "0b10111101100101100100111001111110";
        ram[83] = "0b00111101100000010111110110010100";
        ram[84] = "0b00111101100011000110011110111000";
        ram[85] = "0b00111101110110110100000111000000";
        ram[86] = "0b10111100111010100011001000111000";
        ram[87] = "0b10111011110101000101101111100010";
        ram[88] = "0b00111100101101011011001101110110";
        ram[89] = "0b00111101110010001100100100001010";
        ram[90] = "0b10111101000110110100000001001000";
        ram[91] = "0b00111101111000101010111001001011";
        ram[92] = "0b00111101100111010100100110010101";
        ram[93] = "0b10111101000101111001101111111110";
        ram[94] = "0b10111100100100000100011000110100";
        ram[95] = "0b00111110001001111111011000101011";
        ram[96] = "0b00111101010111011000011000100011";
        ram[97] = "0b00111101011100001100010011111010";
        ram[98] = "0b10111101000010101001010011111111";
        ram[99] = "0b10111101100000001011000001000100";
        ram[100] = "0b10111110000111111010011101100101";
        ram[101] = "0b00111101100001100001011010110101";
        ram[102] = "0b00111100001011000111000111100011";
        ram[103] = "0b00111101100011010101000110110101";
        ram[104] = "0b00111101100000010010010010101000";
        ram[105] = "0b10111101110011100001010100000001";
        ram[106] = "0b00111100100010101111001000110111";
        ram[107] = "0b00111100111100000001100001100001";
        ram[108] = "0b10111101111000000101011100001000";
        ram[109] = "0b00111101110011100000100011110010";
        ram[110] = "0b00111101111011000011111100111110";
        ram[111] = "0b00111101101101000011000011110101";
        ram[112] = "0b00111101110000001000100001101011";
        ram[113] = "0b00111110000001000100111010010100";
        ram[114] = "0b10111101001001010001001100010101";
        ram[115] = "0b10111101101001111000100110100100";
        ram[116] = "0b10111101001110001100010000011100";
        ram[117] = "0b10111110000110111001111100010010";
        ram[118] = "0b10111101110101111001010010100111";
        ram[119] = "0b10111100000111000101111101100111";


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


SC_MODULE(inference_conv2d_f3_1_2_1) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 120;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


inference_conv2d_f3_1_2_1_ram* meminst;


SC_CTOR(inference_conv2d_f3_1_2_1) {
meminst = new inference_conv2d_f3_1_2_1_ram("inference_conv2d_f3_1_2_1_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~inference_conv2d_f3_1_2_1() {
    delete meminst;
}


};//endmodule
#endif