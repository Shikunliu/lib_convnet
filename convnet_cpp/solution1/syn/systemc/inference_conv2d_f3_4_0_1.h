// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __inference_conv2d_f3_4_0_1_H__
#define __inference_conv2d_f3_4_0_1_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct inference_conv2d_f3_4_0_1_ram : public sc_core::sc_module {

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


   SC_CTOR(inference_conv2d_f3_4_0_1_ram) {
        ram[0] = "0b00111101110001000001100001010000";
        ram[1] = "0b10111110000100000010110110011101";
        ram[2] = "0b10111110000111011110101100010000";
        ram[3] = "0b00111011110101101100000101000010";
        ram[4] = "0b00111100101100011011000001111100";
        ram[5] = "0b10111100110000010010011100010010";
        ram[6] = "0b00111101000000101111001110000000";
        ram[7] = "0b10111110001011111011110011100100";
        ram[8] = "0b00111101000111101010111110000011";
        ram[9] = "0b10111101000001011101001101111111";
        ram[10] = "0b10111100011111001110011000000101";
        ram[11] = "0b10111100001011101100100101000001";
        ram[12] = "0b10111101000000010100111001100100";
        ram[13] = "0b00111101100011000111011001110011";
        ram[14] = "0b10111101010000011011111101101101";
        ram[15] = "0b00111000110111000100100101110101";
        ram[16] = "0b10111110010000010001111111010110";
        ram[17] = "0b00111101010100000010001001110010";
        ram[18] = "0b00111101111000001011101110110010";
        ram[19] = "0b10111101110011101111101100101011";
        ram[20] = "0b10111110010001011000011101010001";
        ram[21] = "0b10111101011001101011011100001001";
        ram[22] = "0b10111011100001100010010000000110";
        ram[23] = "0b00111101011101101001000101010111";
        ram[24] = "0b00111110010100101011111110011000";
        ram[25] = "0b00111101000111001011111011101000";
        ram[26] = "0b00111101001000011110110010011111";
        ram[27] = "0b10111101111011001110110011001000";
        ram[28] = "0b10111101100111011110101010111111";
        ram[29] = "0b10111110000011010000010100101001";
        ram[30] = "0b00111001001010101111111110100110";
        ram[31] = "0b10111101001110111000100101111001";
        ram[32] = "0b10111101100010000010110100011101";
        ram[33] = "0b10111101100100010011011001100001";
        ram[34] = "0b00111101101001011000011110101111";
        ram[35] = "0b00111101000000101001001110001110";
        ram[36] = "0b00111100111110011001111111111111";
        ram[37] = "0b10111010110101010010100010010001";
        ram[38] = "0b10111101100010110110001101000000";
        ram[39] = "0b00111101000101101100110001100000";
        ram[40] = "0b10111101000001001001011100111110";
        ram[41] = "0b10111101001011100000000100010101";
        ram[42] = "0b00111101100111000000111100111000";
        ram[43] = "0b10111100001000000100110111010011";
        ram[44] = "0b00111100100011000010000110101100";
        ram[45] = "0b00111101111100001001111010011001";
        ram[46] = "0b00111101100011101011000010101010";
        ram[47] = "0b10111101110000100011000110101011";
        ram[48] = "0b00111101111000100010111011100100";
        ram[49] = "0b10111100110001011100000110101011";
        ram[50] = "0b00111100101000100111110111011001";
        ram[51] = "0b00111101010101001100100100011011";
        ram[52] = "0b00111100110110111110001111000001";
        ram[53] = "0b00111100110000100011101001101101";
        ram[54] = "0b10111101010110110010010001100100";
        ram[55] = "0b10111101000000110111000011001110";
        ram[56] = "0b10111100100100010110101011110111";
        ram[57] = "0b00111011111100100001010110000111";
        ram[58] = "0b10111100001101111011110100000110";
        ram[59] = "0b00111101011100010110010100110011";
        ram[60] = "0b10111110001000101010001001111111";
        ram[61] = "0b00111101110011101100110010000001";
        ram[62] = "0b10111101100010111100110100000000";
        ram[63] = "0b10111101101110110111010100000110";
        ram[64] = "0b10111101110000100011110001010000";
        ram[65] = "0b10111110010001101111001110110010";
        ram[66] = "0b00111100100010000100010100010011";
        ram[67] = "0b00111101100101111100010001001111";
        ram[68] = "0b00111100101111001001010011011100";
        ram[69] = "0b00111101001001001010111000110101";
        ram[70] = "0b10111110000011100111101110000001";
        ram[71] = "0b10111101001110101101001010011010";
        ram[72] = "0b10111101100101011000110011010010";
        ram[73] = "0b00111101010000011011001010100010";
        ram[74] = "0b10111101000101100000010111000110";
        ram[75] = "0b10111100110101110001110100011101";
        ram[76] = "0b10111100111001000001010011101000";
        ram[77] = "0b00111011110100010000001011100111";
        ram[78] = "0b00111110000000111011110101011010";
        ram[79] = "0b00111101100111100000011001100000";
        ram[80] = "0b00111100100001011010110101010100";
        ram[81] = "0b10111101111111001100100011011110";
        ram[82] = "0b10111101000101110000000100000011";
        ram[83] = "0b10111110000001110101110000000111";
        ram[84] = "0b00111101001101001100110110000010";
        ram[85] = "0b00111101111111011110001101110110";
        ram[86] = "0b10111101010001110010001011010100";
        ram[87] = "0b00111011111110010000010011001111";
        ram[88] = "0b00111100101100001010111100101010";
        ram[89] = "0b10111101001111101000011111111011";
        ram[90] = "0b10111100101101000001111110001101";
        ram[91] = "0b10111101000111111001111100110111";
        ram[92] = "0b10111101111001011100000010111010";
        ram[93] = "0b10111101000111011011000001100101";
        ram[94] = "0b00111101100111110101010001110100";
        ram[95] = "0b00111101101001101100000001011110";
        ram[96] = "0b10111011100111101100000100100001";
        ram[97] = "0b00111101101011011000000110111011";
        ram[98] = "0b10111100000001111011111010100110";
        ram[99] = "0b00111100111010001111010000010101";
        ram[100] = "0b00111101111101001001001001111001";
        ram[101] = "0b00111101011010010101110001010000";
        ram[102] = "0b00111100111111100101010100000101";
        ram[103] = "0b10111110010100011101111011110000";
        ram[104] = "0b00111101011110010010010010010100";
        ram[105] = "0b00111101111100111001111100110100";
        ram[106] = "0b00111101101110100111111111101011";
        ram[107] = "0b10111101001101000110001000111101";
        ram[108] = "0b00111011011100010010101011111011";
        ram[109] = "0b00111100110011010101110100010110";
        ram[110] = "0b10111101100101000010011101110111";
        ram[111] = "0b00111101100000001011010110000010";
        ram[112] = "0b10111101000010001001001100110010";
        ram[113] = "0b10111101000111011110100001001000";
        ram[114] = "0b10111100011010000100101011011000";
        ram[115] = "0b10111101100111001110110011110000";
        ram[116] = "0b00111101110110111111011010100001";
        ram[117] = "0b00111110000100001000011110000111";
        ram[118] = "0b00111101101010010110101111010100";
        ram[119] = "0b00111110010001010101001011100011";


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


SC_MODULE(inference_conv2d_f3_4_0_1) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 120;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


inference_conv2d_f3_4_0_1_ram* meminst;


SC_CTOR(inference_conv2d_f3_4_0_1) {
meminst = new inference_conv2d_f3_4_0_1_ram("inference_conv2d_f3_4_0_1_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~inference_conv2d_f3_4_0_1() {
    delete meminst;
}


};//endmodule
#endif