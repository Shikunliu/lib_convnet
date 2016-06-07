// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __inference_conv2d_f3_4_1_1_H__
#define __inference_conv2d_f3_4_1_1_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct inference_conv2d_f3_4_1_1_ram : public sc_core::sc_module {

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


   SC_CTOR(inference_conv2d_f3_4_1_1_ram) {
        ram[0] = "0b00111100111000010000111101000100";
        ram[1] = "0b10111101010011110101000011110001";
        ram[2] = "0b10111101011010011110011101011010";
        ram[3] = "0b00111101010000000110011011000011";
        ram[4] = "0b10111101101111100001100100001011";
        ram[5] = "0b10111101010001101010101100110000";
        ram[6] = "0b00111101110100100111100010001110";
        ram[7] = "0b10111101100111110011101000000111";
        ram[8] = "0b00111110010010011011011011110110";
        ram[9] = "0b00111110000111011001111111010011";
        ram[10] = "0b10111101111100101111101110100000";
        ram[11] = "0b10111101110010101101010110001001";
        ram[12] = "0b00111101111001011010100000010101";
        ram[13] = "0b10111100000110010101100111011001";
        ram[14] = "0b10111100100101110110110110100101";
        ram[15] = "0b10111101100000000100110001110001";
        ram[16] = "0b00111100000010110110010000001100";
        ram[17] = "0b00111110001011010001111000010001";
        ram[18] = "0b10111101001011001011011111101111";
        ram[19] = "0b10111100100110111000010011110110";
        ram[20] = "0b10111101011101101000101100001100";
        ram[21] = "0b10111100011101010000101011011001";
        ram[22] = "0b00111101100101010111000100111110";
        ram[23] = "0b00111101100111110000100000010000";
        ram[24] = "0b10111101110101000110111011010010";
        ram[25] = "0b00111101001011110111110000001001";
        ram[26] = "0b00111100100001001011111001000000";
        ram[27] = "0b00111100110101111010001010110100";
        ram[28] = "0b10111101100101000011110101101111";
        ram[29] = "0b00111100000011100111000011010001";
        ram[30] = "0b00111100110010010001110011011111";
        ram[31] = "0b00111101101100010010111011101111";
        ram[32] = "0b00111101000100111100111010110100";
        ram[33] = "0b00111110000101111000110000000000";
        ram[34] = "0b00111101110100101001100000000011";
        ram[35] = "0b00111101011000011010010110111101";
        ram[36] = "0b10111100101000010001111010010011";
        ram[37] = "0b00111101001110011110001100000000";
        ram[38] = "0b10111101011100100001011101110101";
        ram[39] = "0b00111100110001010110000111010100";
        ram[40] = "0b00111101110111111001100000110001";
        ram[41] = "0b00111011111010000010111011101000";
        ram[42] = "0b00111101101101010011110100010100";
        ram[43] = "0b10111101110110100000000011100010";
        ram[44] = "0b10111011100100010111110110000001";
        ram[45] = "0b10111110001001001101000110100110";
        ram[46] = "0b00111101011101111011001011011010";
        ram[47] = "0b10111100100000111110011000111111";
        ram[48] = "0b00111101010010111110011010111110";
        ram[49] = "0b10111110000000010011000111101100";
        ram[50] = "0b00111101111110100111000010001111";
        ram[51] = "0b10111110000010010110001010001101";
        ram[52] = "0b10111101011010001000000001010010";
        ram[53] = "0b10111101111100101010010100011110";
        ram[54] = "0b00111101100010000101011110111101";
        ram[55] = "0b00111110001110110100100110011101";
        ram[56] = "0b00111110001110100000001001110101";
        ram[57] = "0b10111101001011111110111110110010";
        ram[58] = "0b10111101100000000011000101010110";
        ram[59] = "0b10111101001010100001000100110001";
        ram[60] = "0b00111100001011111000111001100011";
        ram[61] = "0b00111110001100111000011111011111";
        ram[62] = "0b10111100100010110001110000101000";
        ram[63] = "0b00111100111101100111011111110111";
        ram[64] = "0b10111101100110000110001100010000";
        ram[65] = "0b10111100010011111000100001101001";
        ram[66] = "0b00111100110010100111111101001010";
        ram[67] = "0b00111110010010000010111011001011";
        ram[68] = "0b00111101010110110111101110100001";
        ram[69] = "0b10111101100010001001000111111101";
        ram[70] = "0b00111101100011100000100010111100";
        ram[71] = "0b00111110000010010110100001010001";
        ram[72] = "0b10111110000100111011111011101100";
        ram[73] = "0b00111101110111000001010010000011";
        ram[74] = "0b10111101101011101000110000101101";
        ram[75] = "0b00111101110001010101010011101110";
        ram[76] = "0b10111011101110011101100101000000";
        ram[77] = "0b10111110001001110110111011100111";
        ram[78] = "0b00111101011110110011011001010010";
        ram[79] = "0b10111101110111111000011001011101";
        ram[80] = "0b10111101010001101011010011110000";
        ram[81] = "0b10111101110011011000101100011110";
        ram[82] = "0b00111101010000100010011011101100";
        ram[83] = "0b00111100110110110100010100110110";
        ram[84] = "0b00111110000101110101101100111110";
        ram[85] = "0b00111101010101011101100100011011";
        ram[86] = "0b10111101001100110010011111000101";
        ram[87] = "0b00111101110100010101111100000011";
        ram[88] = "0b10111110010000011011101000111101";
        ram[89] = "0b00111110001100011100011000001001";
        ram[90] = "0b10111011110001110100101111101111";
        ram[91] = "0b10111110000000001010111011011010";
        ram[92] = "0b10111101101001110001110110110001";
        ram[93] = "0b00111101101001101111011111100100";
        ram[94] = "0b00111100100000100001000001000110";
        ram[95] = "0b00111101011101001110110110011000";
        ram[96] = "0b00111100001001010001100100101010";
        ram[97] = "0b00111101111011111110111101111100";
        ram[98] = "0b00111101011111110010001100010001";
        ram[99] = "0b10111101101010101101101111101111";
        ram[100] = "0b10111101010111100110011100001110";
        ram[101] = "0b10111101000101001101100010000101";
        ram[102] = "0b10111100111100101111110111101111";
        ram[103] = "0b00111110001010101111100111101100";
        ram[104] = "0b00111110001100101111101111100011";
        ram[105] = "0b00111101100111101011000111000100";
        ram[106] = "0b10111110000010001101100111111001";
        ram[107] = "0b00111101101100011100110000010000";
        ram[108] = "0b10111101101010110100100010000011";
        ram[109] = "0b00111101111100011111100110101101";
        ram[110] = "0b00111101111001010011110100100001";
        ram[111] = "0b10111101111100001101010000010011";
        ram[112] = "0b10111110000100111010000110010000";
        ram[113] = "0b10111101011111000010000011001000";
        ram[114] = "0b00111100111010001111101011001011";
        ram[115] = "0b10111101110011100111000111001110";
        ram[116] = "0b10111100111001101011001010111101";
        ram[117] = "0b10111101101000101110010011010010";
        ram[118] = "0b00111100001011010000101111010010";
        ram[119] = "0b00111101000101011000010001100001";


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


SC_MODULE(inference_conv2d_f3_4_1_1) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 120;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


inference_conv2d_f3_4_1_1_ram* meminst;


SC_CTOR(inference_conv2d_f3_4_1_1) {
meminst = new inference_conv2d_f3_4_1_1_ram("inference_conv2d_f3_4_1_1_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~inference_conv2d_f3_4_1_1() {
    delete meminst;
}


};//endmodule
#endif