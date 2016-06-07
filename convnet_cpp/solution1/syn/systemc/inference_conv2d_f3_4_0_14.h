// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __inference_conv2d_f3_4_0_14_H__
#define __inference_conv2d_f3_4_0_14_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct inference_conv2d_f3_4_0_14_ram : public sc_core::sc_module {

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


   SC_CTOR(inference_conv2d_f3_4_0_14_ram) {
        ram[0] = "0b00111101101001111010111010110110";
        ram[1] = "0b10111101110000011111111010000000";
        ram[2] = "0b10111101010110101011011110100111";
        ram[3] = "0b00111101010001011100011111011011";
        ram[4] = "0b00111100101111111001011101011010";
        ram[5] = "0b10111011111000101111010100101101";
        ram[6] = "0b10111101111110110001111100100101";
        ram[7] = "0b10111110001011100101101011111111";
        ram[8] = "0b00111101111001001111100101111111";
        ram[9] = "0b10111100001010101010001110101101";
        ram[10] = "0b00111101100011100011000100001110";
        ram[11] = "0b10111100100100001111110101001001";
        ram[12] = "0b10111101000001110010111011001000";
        ram[13] = "0b10111100101011001001011001100001";
        ram[14] = "0b00111100110101110110101101010111";
        ram[15] = "0b10111110000001000111000111111000";
        ram[16] = "0b00111110001110110010100110100010";
        ram[17] = "0b00111101111111001000111010101100";
        ram[18] = "0b00111101100000100001101000010100";
        ram[19] = "0b10111101101100010100000110100111";
        ram[20] = "0b10111101100111011111011111101000";
        ram[21] = "0b10111101001101000011010101000001";
        ram[22] = "0b00111100101010011111100000100001";
        ram[23] = "0b00111100110010011001000010100010";
        ram[24] = "0b00111101101010111000011000010000";
        ram[25] = "0b10111100000111100111011111010000";
        ram[26] = "0b10111101000111000000010100110100";
        ram[27] = "0b10111101101101110000110010001100";
        ram[28] = "0b00111110000001010001110001011100";
        ram[29] = "0b00111110000100111001010111000100";
        ram[30] = "0b10111101101001101000000010111000";
        ram[31] = "0b00111101111010000101101000001100";
        ram[32] = "0b10111101001111100000011010110001";
        ram[33] = "0b10111100010101101011000101010010";
        ram[34] = "0b10111100100011010001010011110001";
        ram[35] = "0b10111110000010001100000011001111";
        ram[36] = "0b10111101101111011001001101100110";
        ram[37] = "0b00111101100010101111110011000001";
        ram[38] = "0b10111101100001101011011010111001";
        ram[39] = "0b10111100100111011101111000110111";
        ram[40] = "0b10111110001101011100010101110010";
        ram[41] = "0b10111110000111001111111110101000";
        ram[42] = "0b10111110000110100011000100011111";
        ram[43] = "0b00111100101001011000001100010010";
        ram[44] = "0b00111101101011110111111100000110";
        ram[45] = "0b00111100100000011011100110101001";
        ram[46] = "0b00111101100000011110100101000100";
        ram[47] = "0b00111101001110010011101010011001";
        ram[48] = "0b10111101101110111011100100000110";
        ram[49] = "0b00111101101000111101110001110001";
        ram[50] = "0b10111101100010111011110100111000";
        ram[51] = "0b00111110000011110110010010001100";
        ram[52] = "0b10111110000001000001001010001100";
        ram[53] = "0b10111101101010111110011111001010";
        ram[54] = "0b10111100101000000111010101010110";
        ram[55] = "0b00111110001010001011001100101101";
        ram[56] = "0b10111101100100010011010101100010";
        ram[57] = "0b00111101011111011101110110110001";
        ram[58] = "0b10111101001111011010001001011000";
        ram[59] = "0b10111011101111111001110111100101";
        ram[60] = "0b10111001111001001010101011101110";
        ram[61] = "0b00111100100111010010000101000011";
        ram[62] = "0b10111101100001110111111111001001";
        ram[63] = "0b00111100100010101011111000110101";
        ram[64] = "0b10111101101100100111001010100001";
        ram[65] = "0b10111101101010101100010010110101";
        ram[66] = "0b10111101110011010000010111110011";
        ram[67] = "0b10111101110100100100000001110100";
        ram[68] = "0b10111100100011000101011010111011";
        ram[69] = "0b00111101010000100100110001000000";
        ram[70] = "0b10111110000010010001100111110000";
        ram[71] = "0b00111110000010010011011000111111";
        ram[72] = "0b00111101000001011000101001001110";
        ram[73] = "0b00111101011011110111011110111101";
        ram[74] = "0b00111101000000101110001101011010";
        ram[75] = "0b10111100111010001110001111101111";
        ram[76] = "0b10111100100000100000001011011010";
        ram[77] = "0b00111011001000111000000101111010";
        ram[78] = "0b00111100111101111010000100100001";
        ram[79] = "0b00111101101011010000111101110000";
        ram[80] = "0b10111101101101010000011110100111";
        ram[81] = "0b00111110001001100011000101110010";
        ram[82] = "0b00111110001100010001110110111101";
        ram[83] = "0b10111101101101111101111001010001";
        ram[84] = "0b10111101001000111101110111011011";
        ram[85] = "0b00111101101011001001100011100101";
        ram[86] = "0b10111101111111011010010000000101";
        ram[87] = "0b10111101101000111011000111011110";
        ram[88] = "0b10111110000001001100101011010101";
        ram[89] = "0b10111101010001000111000011011110";
        ram[90] = "0b00111110000100111111110001000100";
        ram[91] = "0b10111100011000010110000110101111";
        ram[92] = "0b00111110001110001011001011101010";
        ram[93] = "0b00111100100011011011000000100010";
        ram[94] = "0b00111101100010001000011101001011";
        ram[95] = "0b10111100110100000111010010001101";
        ram[96] = "0b00111110001111010101000100101111";
        ram[97] = "0b10111101011010010001010111110100";
        ram[98] = "0b10111101011110100101110101111001";
        ram[99] = "0b10111110000101011100001100010110";
        ram[100] = "0b00111101011010000011000000110101";
        ram[101] = "0b10111110001001001100010111011010";
        ram[102] = "0b10111101111100111001100101110000";
        ram[103] = "0b10111110000010001000111010111101";
        ram[104] = "0b10111011000100000111011100000110";
        ram[105] = "0b10111101100001011111000110110010";
        ram[106] = "0b10111100100111110011010000001101";
        ram[107] = "0b00111100101000010000110001010101";
        ram[108] = "0b10111110000111100111100110101011";
        ram[109] = "0b00111101110111110111101111100001";
        ram[110] = "0b10111110001101010000011110100111";
        ram[111] = "0b00111100100010101000010000011101";
        ram[112] = "0b00111100001011100000011100001111";
        ram[113] = "0b00111101110110101010110111100110";
        ram[114] = "0b00111101010101101001011000001111";
        ram[115] = "0b10111101100001110001101001110001";
        ram[116] = "0b10111110000010000001100100001001";
        ram[117] = "0b10111101100000111100101010101011";
        ram[118] = "0b10111110000001111011101110110110";
        ram[119] = "0b10111100101110000101010110110010";


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


SC_MODULE(inference_conv2d_f3_4_0_14) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 120;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


inference_conv2d_f3_4_0_14_ram* meminst;


SC_CTOR(inference_conv2d_f3_4_0_14) {
meminst = new inference_conv2d_f3_4_0_14_ram("inference_conv2d_f3_4_0_14_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~inference_conv2d_f3_4_0_14() {
    delete meminst;
}


};//endmodule
#endif