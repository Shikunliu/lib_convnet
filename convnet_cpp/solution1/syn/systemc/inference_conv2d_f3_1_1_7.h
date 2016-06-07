// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __inference_conv2d_f3_1_1_7_H__
#define __inference_conv2d_f3_1_1_7_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct inference_conv2d_f3_1_1_7_ram : public sc_core::sc_module {

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


   SC_CTOR(inference_conv2d_f3_1_1_7_ram) {
        ram[0] = "0b00111100111110100111101010111011";
        ram[1] = "0b10111100000000000010010000110010";
        ram[2] = "0b10111100010011110110010001010111";
        ram[3] = "0b10111110010100101110011111110111";
        ram[4] = "0b00111101101101110101011111100011";
        ram[5] = "0b10111101011000111001110111111111";
        ram[6] = "0b00111100001001101100011111101011";
        ram[7] = "0b10111100000111111000001111110100";
        ram[8] = "0b10111101111111101010111011100010";
        ram[9] = "0b00111110000011100111001010010111";
        ram[10] = "0b00111011100111101001100110001001";
        ram[11] = "0b10111110000101001100101000001100";
        ram[12] = "0b10111101100010111101101010000111";
        ram[13] = "0b00111101000111110001011000101011";
        ram[14] = "0b10111101100010000111001001100000";
        ram[15] = "0b00111100011110111111011010000110";
        ram[16] = "0b10111110000100100111100001001011";
        ram[17] = "0b00111110011001111111101101101010";
        ram[18] = "0b00111110000011110011001000111000";
        ram[19] = "0b00111101101001110011100010010110";
        ram[20] = "0b00111100110111110110011011001110";
        ram[21] = "0b10111011110101110101000101001011";
        ram[22] = "0b00111110000111011101100010110110";
        ram[23] = "0b00111100001010111111011000101000";
        ram[24] = "0b00111101101101010000011110100111";
        ram[25] = "0b00111100100110100100101000101110";
        ram[26] = "0b00111101111110010001100010100000";
        ram[27] = "0b10111100000011011100001101010111";
        ram[28] = "0b00111101100011100000001011111000";
        ram[29] = "0b00111101010101011101100111110001";
        ram[30] = "0b10111101100000000010111010110111";
        ram[31] = "0b10111000100010000101101011011101";
        ram[32] = "0b00111101111100111001111010101110";
        ram[33] = "0b10111101111001010101010111000101";
        ram[34] = "0b00111110000100000010000101001011";
        ram[35] = "0b10111101001011111000000001110001";
        ram[36] = "0b10111101111110101011101110001000";
        ram[37] = "0b10111110000011111010011000010110";
        ram[38] = "0b00111110001011100110101110000011";
        ram[39] = "0b10111101010011010101000100000111";
        ram[40] = "0b10111011100110111001011111110111";
        ram[41] = "0b10111110000101101100010010000010";
        ram[42] = "0b00111101011001001011101110000110";
        ram[43] = "0b00111101001101100001100011110110";
        ram[44] = "0b00111100100100000010001001010111";
        ram[45] = "0b00111101011101111000011111000001";
        ram[46] = "0b10111101100111101000111101000101";
        ram[47] = "0b00111101101111011101110101100001";
        ram[48] = "0b10111101011011101001010100111111";
        ram[49] = "0b10111101011100111110111000101001";
        ram[50] = "0b00111101110101001110001100110111";
        ram[51] = "0b10111110001111000111101011000000";
        ram[52] = "0b10111100110011101001011101110010";
        ram[53] = "0b00111101100110000010101011110111";
        ram[54] = "0b10111101010111011110101010010111";
        ram[55] = "0b00111101000000001100000011010101";
        ram[56] = "0b00111101110100101000001110010000";
        ram[57] = "0b00111101111111111010000000001110";
        ram[58] = "0b00111101000111111000100001011100";
        ram[59] = "0b10111100111010010110001101110001";
        ram[60] = "0b00111011110000111001010100000000";
        ram[61] = "0b00111100001100000111010000111100";
        ram[62] = "0b00111101101100001100111000001100";
        ram[63] = "0b00111101111011101110100001001011";
        ram[64] = "0b10111110010100010100000000010100";
        ram[65] = "0b00111100110101101011101101100011";
        ram[66] = "0b10111101101001001111010110000011";
        ram[67] = "0b00111101101011010000001010001010";
        ram[68] = "0b00111101100110000001001110010101";
        ram[69] = "0b10111100001001110111011011010010";
        ram[70] = "0b10111010000001011000001111100011";
        ram[71] = "0b00111101000101011011100100111010";
        ram[72] = "0b00111101111101110110001001010010";
        ram[73] = "0b00111101111111010011010011011111";
        ram[74] = "0b00111101100001010100110101010100";
        ram[75] = "0b10111110010000100101101100110001";
        ram[76] = "0b10111101011010001001111110101100";
        ram[77] = "0b10111011111110110011000111100101";
        ram[78] = "0b10111101101011001101100101101111";
        ram[79] = "0b00111101100110100110111011100001";
        ram[80] = "0b10111101000100000100011010000100";
        ram[81] = "0b00111101110000001000010010100101";
        ram[82] = "0b00111101001000010001101010010111";
        ram[83] = "0b10111101001000110110001111101000";
        ram[84] = "0b00111101011100110100010100100001";
        ram[85] = "0b00111101100110100000110000110110";
        ram[86] = "0b10111101001111111111100000111110";
        ram[87] = "0b00111110010000001101010001010110";
        ram[88] = "0b10111101100001001001011110001111";
        ram[89] = "0b10111101101000101010000110000000";
        ram[90] = "0b00111101011100010111100101101111";
        ram[91] = "0b00111110000010101110110110011010";
        ram[92] = "0b00111101011000111001110000110111";
        ram[93] = "0b10111101010000100000010110101111";
        ram[94] = "0b00111101101111101110011011100000";
        ram[95] = "0b00111101011000100111111111110010";
        ram[96] = "0b00111101101101100010101100011010";
        ram[97] = "0b10111110000100000000100111110110";
        ram[98] = "0b10111100101101010011010110100010";
        ram[99] = "0b00111110001011011001101111100101";
        ram[100] = "0b00111101111101110010001101101000";
        ram[101] = "0b00111101100001100011101111100001";
        ram[102] = "0b00111101000011110110110101000000";
        ram[103] = "0b10111101100111100011010100010111";
        ram[104] = "0b10111110001000101000000101110111";
        ram[105] = "0b10111101100001010110111001101001";
        ram[106] = "0b10111100000101101100001100010000";
        ram[107] = "0b00111110000001011011000010111100";
        ram[108] = "0b10111101110111111010111111001001";
        ram[109] = "0b10111101000001010101010001001101";
        ram[110] = "0b10111101101000000101001101101010";
        ram[111] = "0b00111101110000011001011110110000";
        ram[112] = "0b10111101110100000001111110111000";
        ram[113] = "0b10111101100111101110101101100011";
        ram[114] = "0b00111100100110000001001001000101";
        ram[115] = "0b10111010100100100011000001000100";
        ram[116] = "0b10111110000000101010011000101011";
        ram[117] = "0b10111100000110100010010101111011";
        ram[118] = "0b00111110000101001011110110111010";
        ram[119] = "0b10111100100011101110000101111010";


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


SC_MODULE(inference_conv2d_f3_1_1_7) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 120;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


inference_conv2d_f3_1_1_7_ram* meminst;


SC_CTOR(inference_conv2d_f3_1_1_7) {
meminst = new inference_conv2d_f3_1_1_7_ram("inference_conv2d_f3_1_1_7_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~inference_conv2d_f3_1_1_7() {
    delete meminst;
}


};//endmodule
#endif