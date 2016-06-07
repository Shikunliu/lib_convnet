// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __inference_conv2d_f3_0_4_2_H__
#define __inference_conv2d_f3_0_4_2_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct inference_conv2d_f3_0_4_2_ram : public sc_core::sc_module {

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


   SC_CTOR(inference_conv2d_f3_0_4_2_ram) {
        ram[0] = "0b00111101111100000001011111011011";
        ram[1] = "0b00111101011000001110000010110110";
        ram[2] = "0b10111110000001011010101001110001";
        ram[3] = "0b00111100010111010001000011101000";
        ram[4] = "0b00111101001101110101010001100000";
        ram[5] = "0b10111101010100100001001000000001";
        ram[6] = "0b10111101101100011111110101011001";
        ram[7] = "0b00111110000011001100001001010000";
        ram[8] = "0b00111101100011011011110000100011";
        ram[9] = "0b10111101100000111100111111011011";
        ram[10] = "0b00111101101111110000111100100100";
        ram[11] = "0b00111110001001011000110101011000";
        ram[12] = "0b00111101100000110100010000001000";
        ram[13] = "0b00111110000100110011111111001000";
        ram[14] = "0b10111101110101010110000010000101";
        ram[15] = "0b00111110000100011100100100101110";
        ram[16] = "0b00111101111101010100001110101111";
        ram[17] = "0b00111101101111111111001111110001";
        ram[18] = "0b10111101010100000000110011110011";
        ram[19] = "0b10111101101101001101011010101111";
        ram[20] = "0b00111110000010000100110100110100";
        ram[21] = "0b10111101100100111011000110000000";
        ram[22] = "0b00111110001110110111011100111010";
        ram[23] = "0b10111100100000100000111110100101";
        ram[24] = "0b10111101010111011000100111101001";
        ram[25] = "0b00111110000011111001001000101001";
        ram[26] = "0b10111100101101000010110110011010";
        ram[27] = "0b00111101101100010001000100110101";
        ram[28] = "0b00111100001100111000011100010110";
        ram[29] = "0b00111101010110111110100010101111";
        ram[30] = "0b00111101100111101000001111100100";
        ram[31] = "0b10111101100000000011000001110010";
        ram[32] = "0b00111110000011010100000010101011";
        ram[33] = "0b10111101011100001001111000101101";
        ram[34] = "0b00111110011000001101010110100110";
        ram[35] = "0b00111100010000101010001101111110";
        ram[36] = "0b10111100100101001011111101110101";
        ram[37] = "0b00111110000100000100101100111100";
        ram[38] = "0b00111110001110000110100011111101";
        ram[39] = "0b00111101111100001101010110100110";
        ram[40] = "0b10111010001000000001110011100011";
        ram[41] = "0b10111101111000101100111111011001";
        ram[42] = "0b10111110000110010011110011001101";
        ram[43] = "0b10111101011000010110100100111100";
        ram[44] = "0b00111110000011000101011111100010";
        ram[45] = "0b00111101001110100110000110010000";
        ram[46] = "0b00111110001101001010100100000100";
        ram[47] = "0b00111110010000011101111010101101";
        ram[48] = "0b00111100000100110101010110010011";
        ram[49] = "0b10111110001110110000001110011111";
        ram[50] = "0b10111101010010011000000110111111";
        ram[51] = "0b00111101011001101100001001000001";
        ram[52] = "0b00111101110100010011010110011000";
        ram[53] = "0b10111101011111010011101111001011";
        ram[54] = "0b10111110011000100100101110111010";
        ram[55] = "0b10111101100000000111101000000000";
        ram[56] = "0b00111110000101111011001101010011";
        ram[57] = "0b00111110010011011111011110100101";
        ram[58] = "0b10111100111011001110111110000010";
        ram[59] = "0b00111100011010101100111111101101";
        ram[60] = "0b10111101111111110001000101110011";
        ram[61] = "0b10111101001001111110111110011110";
        ram[62] = "0b00111101001101000011111000101011";
        ram[63] = "0b10111101101110111011000010100011";
        ram[64] = "0b00111101100110010011101000000110";
        ram[65] = "0b00111101100101011011000000110110";
        ram[66] = "0b00111110001011011100101011010001";
        ram[67] = "0b10111100001111010001011101001101";
        ram[68] = "0b00111110000100110000001000101110";
        ram[69] = "0b00111101111011111100001111111000";
        ram[70] = "0b10111101101101101100010010010000";
        ram[71] = "0b00111100001101010000001001000000";
        ram[72] = "0b10111101000111101001001001011101";
        ram[73] = "0b00111101101111110111001000100001";
        ram[74] = "0b00111110010100011010111000101110";
        ram[75] = "0b10111101101101010001110111111100";
        ram[76] = "0b00111100100111010111010010000101";
        ram[77] = "0b10111101110011000100100110010010";
        ram[78] = "0b10111101100101111100010011100011";
        ram[79] = "0b00111110001101000111101010011110";
        ram[80] = "0b00111110001100000011000101001000";
        ram[81] = "0b10111101010000001010000111100110";
        ram[82] = "0b10111101011111110010001000111010";
        ram[83] = "0b10111100110110101001010101000010";
        ram[84] = "0b00111101010010101101101011010101";
        ram[85] = "0b10111101101101001110100100111110";
        ram[86] = "0b10111101010110011010100010110011";
        ram[87] = "0b00111010100111101000000001011110";
        ram[88] = "0b10111101110111000001010110010000";
        ram[89] = "0b10111101111110011111111101010000";
        ram[90] = "0b10111101010111000000110010001011";
        ram[91] = "0b10111110001101000011010111110000";
        ram[92] = "0b10111110001001101001100001111000";
        ram[93] = "0b00111101011001011110011001111001";
        ram[94] = "0b10111101101101011000001111000000";
        ram[95] = "0b10111011011101001000010010100010";
        ram[96] = "0b10111110000001001110110101110000";
        ram[97] = "0b10111101101010000100110101011100";
        ram[98] = "0b10111010101110011110101111110101";
        ram[99] = "0b00111110000000010101110100101101";
        ram[100] = "0b10111101001011000011110110010001";
        ram[101] = "0b00111101001000111111111011001000";
        ram[102] = "0b10111110000101110000001000011101";
        ram[103] = "0b10111101100010111010001100001111";
        ram[104] = "0b00111101110100010000111001000101";
        ram[105] = "0b10111110011001011111001011001011";
        ram[106] = "0b00111101110110111001100101001110";
        ram[107] = "0b00111101101111001111111110101000";
        ram[108] = "0b00111110000011101001011100000111";
        ram[109] = "0b00111110000010111000110000110011";
        ram[110] = "0b00111101110101111110000010101100";
        ram[111] = "0b10111101001111110011011001000001";
        ram[112] = "0b00111110000001001000000010100110";
        ram[113] = "0b00111101010111110101111010000101";
        ram[114] = "0b10111100010010110001001010111000";
        ram[115] = "0b00111100011010110001111001011100";
        ram[116] = "0b00111100101010000011010101110011";
        ram[117] = "0b10111101000111010111001101111001";
        ram[118] = "0b00111101100110100101111000101000";
        ram[119] = "0b00111101001000100100111100110000";


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


SC_MODULE(inference_conv2d_f3_0_4_2) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 120;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


inference_conv2d_f3_0_4_2_ram* meminst;


SC_CTOR(inference_conv2d_f3_0_4_2) {
meminst = new inference_conv2d_f3_0_4_2_ram("inference_conv2d_f3_0_4_2_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~inference_conv2d_f3_0_4_2() {
    delete meminst;
}


};//endmodule
#endif