// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __inference_conv2d_f3_1_1_14_H__
#define __inference_conv2d_f3_1_1_14_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct inference_conv2d_f3_1_1_14_ram : public sc_core::sc_module {

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


   SC_CTOR(inference_conv2d_f3_1_1_14_ram) {
        ram[0] = "0b10111110000001101111011100011010";
        ram[1] = "0b10111110001111110000010000010100";
        ram[2] = "0b00111110010110011110001000110111";
        ram[3] = "0b10111100110010101010100100000110";
        ram[4] = "0b00111100101001011100000111000110";
        ram[5] = "0b00111101101000100011111111000110";
        ram[6] = "0b00111100110011000010110001011110";
        ram[7] = "0b10111110001011111010100010110101";
        ram[8] = "0b00111100001010000110001101100001";
        ram[9] = "0b00111110001111111011011100100000";
        ram[10] = "0b00111110001011000111110111100101";
        ram[11] = "0b00111100001010001000001110101101";
        ram[12] = "0b10111101100011111010010010101011";
        ram[13] = "0b00111010110101011001100010100011";
        ram[14] = "0b10111100111101101100111011001001";
        ram[15] = "0b00111101010010011001011010011101";
        ram[16] = "0b10111101111110111010100010000010";
        ram[17] = "0b00111110000000110111000101010100";
        ram[18] = "0b00111110001110001111111011101111";
        ram[19] = "0b00111110001100000110100101100010";
        ram[20] = "0b00111101101101010001001011111010";
        ram[21] = "0b10111110000110100100101000000110";
        ram[22] = "0b10111110000110011011101110101110";
        ram[23] = "0b10111100001011101111100010100110";
        ram[24] = "0b10111110000011100100100001100010";
        ram[25] = "0b00111101101010000001001111110011";
        ram[26] = "0b10111101100110001101001101101011";
        ram[27] = "0b00111101101101111000110001010001";
        ram[28] = "0b10111101101110010110100111111111";
        ram[29] = "0b00111001011101011001010010101000";
        ram[30] = "0b10111101110011100000110010011110";
        ram[31] = "0b00111101001111010001000100111000";
        ram[32] = "0b00111100000011010110110000011010";
        ram[33] = "0b10111101110011011100101010001110";
        ram[34] = "0b00111100010010010111000111001110";
        ram[35] = "0b00111011011001010101000000100110";
        ram[36] = "0b00111101000000001100101110100010";
        ram[37] = "0b00111110010011010101010010010111";
        ram[38] = "0b10111011101110110011111010011010";
        ram[39] = "0b10111110001000011111111101110001";
        ram[40] = "0b00111100110111101101110110100110";
        ram[41] = "0b10111110010010000100001011111010";
        ram[42] = "0b00111100101100000001101110000110";
        ram[43] = "0b00111101111000101110010011010010";
        ram[44] = "0b00111101010111000101111111001101";
        ram[45] = "0b00111101001111001000100001000111";
        ram[46] = "0b00111100010001100100000011000010";
        ram[47] = "0b10111110000001001011001001110100";
        ram[48] = "0b00111110000001100000110010111111";
        ram[49] = "0b00111100010010100100111110101111";
        ram[50] = "0b10111110000101111011101100110000";
        ram[51] = "0b00111010101100110101000001111010";
        ram[52] = "0b00111100100000110101001100111100";
        ram[53] = "0b00111110010111010010110000111000";
        ram[54] = "0b10111101100111110100011110000001";
        ram[55] = "0b00111110000011111001100100111101";
        ram[56] = "0b10111101100101011110110011111010";
        ram[57] = "0b10111101010111010010110000101011";
        ram[58] = "0b10111101100001011001110010011010";
        ram[59] = "0b10111101001001100111100011000000";
        ram[60] = "0b10111110000000010110010100001010";
        ram[61] = "0b10111101101111111110100000011000";
        ram[62] = "0b10111101001110101111101101111111";
        ram[63] = "0b10111101001011110110110111111100";
        ram[64] = "0b10111101110000010000010010111010";
        ram[65] = "0b10111100100000011100001001000010";
        ram[66] = "0b00111101110010111111111111001110";
        ram[67] = "0b10111101101101100111110100100111";
        ram[68] = "0b00111101110111001011000000111010";
        ram[69] = "0b10111101100110000010110000010001";
        ram[70] = "0b10111110001100010011011001100001";
        ram[71] = "0b10111100111001001110001101111010";
        ram[72] = "0b10111100110101111110000001011100";
        ram[73] = "0b10111101110011110100111100001110";
        ram[74] = "0b10111110000101100010110110000100";
        ram[75] = "0b10111101110000000000111001000011";
        ram[76] = "0b10111101101010011001110001111100";
        ram[77] = "0b10111100000000101001011111110101";
        ram[78] = "0b10111101010000001111111001001000";
        ram[79] = "0b10111110001111100111001111100111";
        ram[80] = "0b00111101010111100101110000100110";
        ram[81] = "0b10111101010111101001001001011101";
        ram[82] = "0b10111110000101110111100110100111";
        ram[83] = "0b00111101110101011100111110101011";
        ram[84] = "0b10111101011011100111110111110111";
        ram[85] = "0b10111110010001100011110100111110";
        ram[86] = "0b00111100010111011010100010111101";
        ram[87] = "0b00111101101101101010111001010101";
        ram[88] = "0b00111101110000101001010001001010";
        ram[89] = "0b10111101101000111000111000110111";
        ram[90] = "0b00111110000010111111110110110101";
        ram[91] = "0b00111101001000001100110100110101";
        ram[92] = "0b10111110000100000100110010001100";
        ram[93] = "0b00111101011011110001110110001111";
        ram[94] = "0b10111101011011011001100110010110";
        ram[95] = "0b00111101110101111001001110011010";
        ram[96] = "0b10111101110001001010010111101101";
        ram[97] = "0b00111101101000000110011101100100";
        ram[98] = "0b00111110000000110100000010010010";
        ram[99] = "0b00111001101101101101110111001101";
        ram[100] = "0b10111011110110010011000000001000";
        ram[101] = "0b10111101001000111010100110100011";
        ram[102] = "0b10111101100111100011111110010100";
        ram[103] = "0b00111001001010100110001101101011";
        ram[104] = "0b00111110010011001111010110110010";
        ram[105] = "0b00111101001100101011000000100001";
        ram[106] = "0b00111101101111101100111011101011";
        ram[107] = "0b10111101011101110001101000010011";
        ram[108] = "0b10111101001010100001110111000110";
        ram[109] = "0b00111101110011000000100010000010";
        ram[110] = "0b10111011011100000000001101011110";
        ram[111] = "0b10111101111100101100011000100110";
        ram[112] = "0b10111101100111100100011001110010";
        ram[113] = "0b00111100101100100010111010000110";
        ram[114] = "0b10111101110011011110101110010110";
        ram[115] = "0b00111101100001110010101010110010";
        ram[116] = "0b10111110000101001010101111100111";
        ram[117] = "0b00111101001111001101000100100111";
        ram[118] = "0b00111101000001100110001101110111";
        ram[119] = "0b00111110001001110101000000111100";


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


SC_MODULE(inference_conv2d_f3_1_1_14) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 120;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


inference_conv2d_f3_1_1_14_ram* meminst;


SC_CTOR(inference_conv2d_f3_1_1_14) {
meminst = new inference_conv2d_f3_1_1_14_ram("inference_conv2d_f3_1_1_14_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~inference_conv2d_f3_1_1_14() {
    delete meminst;
}


};//endmodule
#endif