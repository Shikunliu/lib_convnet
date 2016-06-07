// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __inference_conv2d_f3_1_4_1_H__
#define __inference_conv2d_f3_1_4_1_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct inference_conv2d_f3_1_4_1_ram : public sc_core::sc_module {

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


   SC_CTOR(inference_conv2d_f3_1_4_1_ram) {
        ram[0] = "0b00111100010011011111101100110110";
        ram[1] = "0b00111101111011011000100110001011";
        ram[2] = "0b10111101001100110100011011101010";
        ram[3] = "0b00111110010000000100010110111011";
        ram[4] = "0b10111101001110101001001001101101";
        ram[5] = "0b00111101101111111001010100011001";
        ram[6] = "0b10111100110111101000000110010110";
        ram[7] = "0b00111110000101101010011101101001";
        ram[8] = "0b00111101101010010100010101001011";
        ram[9] = "0b00111101101101110110011111010011";
        ram[10] = "0b10111110000101101110001001100101";
        ram[11] = "0b10111100101111011100010101011101";
        ram[12] = "0b10111110000101000101100000000100";
        ram[13] = "0b00111101100111010010010001110110";
        ram[14] = "0b10111101001110110001100100010000";
        ram[15] = "0b00111101011010101100001110101000";
        ram[16] = "0b10111101100110101010010001011100";
        ram[17] = "0b00111101101100001100000111010100";
        ram[18] = "0b00111100110111010001010110000101";
        ram[19] = "0b00111110000010001101011111100000";
        ram[20] = "0b10111100010111001000111001110110";
        ram[21] = "0b10111101000101001001100001011000";
        ram[22] = "0b00111100100101101011000110001000";
        ram[23] = "0b10111101100011101111000011110001";
        ram[24] = "0b10111100111110000111011011010100";
        ram[25] = "0b10111100001011101101010111010110";
        ram[26] = "0b10111101100101011100101111110010";
        ram[27] = "0b00111101100100111001110110100001";
        ram[28] = "0b00111101100000101000011000000111";
        ram[29] = "0b00111101100110001100010010111101";
        ram[30] = "0b00111100000110110110101110010110";
        ram[31] = "0b10111101010111000011110100110011";
        ram[32] = "0b10111110000011000100111010110101";
        ram[33] = "0b10111110000001011100011110001010";
        ram[34] = "0b00111100111100100101010011100111";
        ram[35] = "0b00111101110001000111011000101001";
        ram[36] = "0b00111101010011111011111100001010";
        ram[37] = "0b10111110001010100001011101101110";
        ram[38] = "0b10111101000001000001011000001111";
        ram[39] = "0b00111101101101000000010110011001";
        ram[40] = "0b10111101000001001101010011001100";
        ram[41] = "0b00111101011111000110010100100110";
        ram[42] = "0b10111101001101011111011100011000";
        ram[43] = "0b00111101110111110101101001010011";
        ram[44] = "0b10111100110101100000011100111110";
        ram[45] = "0b10111100010100100100000000111111";
        ram[46] = "0b00111101011001100001010011010010";
        ram[47] = "0b00111101100001100000100101010111";
        ram[48] = "0b00111110000111001011101000110000";
        ram[49] = "0b10111101001000001011001110000100";
        ram[50] = "0b00111100001011111001100110110110";
        ram[51] = "0b00111101000101110100011100101010";
        ram[52] = "0b10111101010001100100111100011111";
        ram[53] = "0b00111100010111110101010011111010";
        ram[54] = "0b00111101011010100000100100000011";
        ram[55] = "0b00111110000000001000110111010010";
        ram[56] = "0b10111100101001000001001111011011";
        ram[57] = "0b00111101100000011001100010100001";
        ram[58] = "0b10111101101110001101000000111001";
        ram[59] = "0b00111101101010110011010110110001";
        ram[60] = "0b10111110000000111000101100000101";
        ram[61] = "0b00111101001101101111011111111111";
        ram[62] = "0b10111101111010011101100011000111";
        ram[63] = "0b10111110001010000011101001010100";
        ram[64] = "0b00111101001000000111000000110011";
        ram[65] = "0b00111101101110010001100000100111";
        ram[66] = "0b00111100110011110011001011011001";
        ram[67] = "0b00111100111111011100011111100010";
        ram[68] = "0b10111101010110000100100110001000";
        ram[69] = "0b10111101101110111101100100011100";
        ram[70] = "0b00111100101001111000111011110000";
        ram[71] = "0b10111101111100101101101000010010";
        ram[72] = "0b00111110000110000010001000110110";
        ram[73] = "0b10111011101100001001101100101000";
        ram[74] = "0b10111101100010010001001101010100";
        ram[75] = "0b00111010000000000110000111100101";
        ram[76] = "0b00111101010011100100101100000010";
        ram[77] = "0b10111101101110001100100001011011";
        ram[78] = "0b00111100000111100000000100101000";
        ram[79] = "0b10111100110000110001101100001000";
        ram[80] = "0b10111100110011111010111110100000";
        ram[81] = "0b00111101001111000011100100110111";
        ram[82] = "0b00111110000110110111010111101010";
        ram[83] = "0b10111100010100000110011110001100";
        ram[84] = "0b00111011110000110011011011100001";
        ram[85] = "0b00111101101011000000100101001011";
        ram[86] = "0b10111100110011000100000000010101";
        ram[87] = "0b00111101110101010000010000111110";
        ram[88] = "0b10111110000010001110011101011000";
        ram[89] = "0b00111100111111001001100100001110";
        ram[90] = "0b10111101011101010010000100010100";
        ram[91] = "0b10111100111100110110110000111110";
        ram[92] = "0b00111101100011011000110000001111";
        ram[93] = "0b00111101110101100110101101100001";
        ram[94] = "0b00111101101010110100111100111001";
        ram[95] = "0b00111101000001010011100100100101";
        ram[96] = "0b00111101101010110010011001111100";
        ram[97] = "0b10111101000101111000111100011000";
        ram[98] = "0b10111101010000011011011101000000";
        ram[99] = "0b00111100101110010001000000100010";
        ram[100] = "0b10111100101110011111110100011100";
        ram[101] = "0b00111101100010011010111011001000";
        ram[102] = "0b00111100000111011001010101100111";
        ram[103] = "0b00111110000001001010101100011101";
        ram[104] = "0b00111101100010111110110010010000";
        ram[105] = "0b10111101101000111011110011100001";
        ram[106] = "0b00111100001011001111001100010011";
        ram[107] = "0b00111110001011000101101000111110";
        ram[108] = "0b10111011100101100101111100101000";
        ram[109] = "0b10111110000010001010111110000001";
        ram[110] = "0b00111101111000011101110000001110";
        ram[111] = "0b10111101001011001101001110111000";
        ram[112] = "0b00111101101110011101111011001110";
        ram[113] = "0b10111101111000010100000111101010";
        ram[114] = "0b00111101001111100010110111001110";
        ram[115] = "0b10111011110101110001101011011001";
        ram[116] = "0b10111110000101000100111001010001";
        ram[117] = "0b10111011011101010001001000010000";
        ram[118] = "0b00111011100001101011100010101100";
        ram[119] = "0b00111101101011001010101010101011";


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


SC_MODULE(inference_conv2d_f3_1_4_1) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 120;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


inference_conv2d_f3_1_4_1_ram* meminst;


SC_CTOR(inference_conv2d_f3_1_4_1) {
meminst = new inference_conv2d_f3_1_4_1_ram("inference_conv2d_f3_1_4_1_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~inference_conv2d_f3_1_4_1() {
    delete meminst;
}


};//endmodule
#endif