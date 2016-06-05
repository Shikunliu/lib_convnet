// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __inference_conv2d_f3_1_1_10_H__
#define __inference_conv2d_f3_1_1_10_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct inference_conv2d_f3_1_1_10_ram : public sc_core::sc_module {

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


   SC_CTOR(inference_conv2d_f3_1_1_10_ram) {
        ram[0] = "0b00111101111110101001000010001010";
        ram[1] = "0b00111101000010010111011110101110";
        ram[2] = "0b00111101100101101111100101011100";
        ram[3] = "0b10111101101010101000000100101110";
        ram[4] = "0b00111101011110010100001011000111";
        ram[5] = "0b00111101001110100001001001100101";
        ram[6] = "0b10111101001101110000110001010110";
        ram[7] = "0b10111101110001101000111110001110";
        ram[8] = "0b00111101100111101111000110101101";
        ram[9] = "0b00111101100110110000000010000111";
        ram[10] = "0b10111101110111111110100111111011";
        ram[11] = "0b10111101111011010111010010010010";
        ram[12] = "0b00111101101001000000001100010101";
        ram[13] = "0b00111101011000001001110010101000";
        ram[14] = "0b10111101100011010001110100101100";
        ram[15] = "0b00111110000110011001001100001100";
        ram[16] = "0b10111101101110001111001000010111";
        ram[17] = "0b00111101101001001111100010101000";
        ram[18] = "0b00111101011110011010000011010110";
        ram[19] = "0b00111100111100001110111111000010";
        ram[20] = "0b10111101010010011011101011001010";
        ram[21] = "0b10111101000010100001111011010010";
        ram[22] = "0b00111101100101100101001010010101";
        ram[23] = "0b10111101111010011010000010101110";
        ram[24] = "0b00111101000011101110010011110000";
        ram[25] = "0b00111101101110011010000101110111";
        ram[26] = "0b00111110001101010111110000001011";
        ram[27] = "0b00111101101001100001110101000011";
        ram[28] = "0b10111101011011110101101110111110";
        ram[29] = "0b10111101000110001001001011101111";
        ram[30] = "0b00111101100110000111001001100000";
        ram[31] = "0b10111100011110101100011101000110";
        ram[32] = "0b00111101111001101101000001001110";
        ram[33] = "0b10111101100011101111100011101010";
        ram[34] = "0b00111100110101001110011111101111";
        ram[35] = "0b00111101010011100110111011011110";
        ram[36] = "0b10111101000001101011110100011110";
        ram[37] = "0b00111101101110111111100010101100";
        ram[38] = "0b10111110001000110011010100001001";
        ram[39] = "0b10111110001001101110100010110000";
        ram[40] = "0b10111101100001111101000100110101";
        ram[41] = "0b10111100101110111111111110001011";
        ram[42] = "0b10111100111000000010111010101001";
        ram[43] = "0b00111101100111100100111010000101";
        ram[44] = "0b10111110100000011100100000100001";
        ram[45] = "0b00111100100101101110100001111010";
        ram[46] = "0b00111011001001010001110010110000";
        ram[47] = "0b10111101000110101100100010100011";
        ram[48] = "0b00111101111111000010011101100011";
        ram[49] = "0b10111010111000010111010111111100";
        ram[50] = "0b10111100100011100000101011110000";
        ram[51] = "0b00111110010000111100001111100111";
        ram[52] = "0b00111011001111100001101000101100";
        ram[53] = "0b00111101000010010011001000101000";
        ram[54] = "0b10111101010110000101100111100100";
        ram[55] = "0b10111101001110001001100001001000";
        ram[56] = "0b00111101001000011100010101100111";
        ram[57] = "0b00111101010101001111101011001110";
        ram[58] = "0b00111101111110101111111110110000";
        ram[59] = "0b00111010001011100100101000100010";
        ram[60] = "0b10111101011110100010000101001001";
        ram[61] = "0b10111100101000010011000001100111";
        ram[62] = "0b00111101100100111000110000101100";
        ram[63] = "0b00111101110011000001111011100101";
        ram[64] = "0b10111101100111100101011110001001";
        ram[65] = "0b10111100111111110000101100001101";
        ram[66] = "0b00111101100011000101110110100111";
        ram[67] = "0b10111101100110100110011100111010";
        ram[68] = "0b00111101111101111100101100101110";
        ram[69] = "0b10111101010101001011011101100010";
        ram[70] = "0b10111100101100110100100001100010";
        ram[71] = "0b10111110001100000001110110011111";
        ram[72] = "0b00111100111001001011111001011011";
        ram[73] = "0b00111101100110100011111100011110";
        ram[74] = "0b00111100100011000010111001110111";
        ram[75] = "0b10111100110110111111001000111001";
        ram[76] = "0b10111110000011011010001000101111";
        ram[77] = "0b10111101100011011011000010000000";
        ram[78] = "0b10111101110011010111010110011111";
        ram[79] = "0b10111101010001101000011110001001";
        ram[80] = "0b10111101111011010010010011100001";
        ram[81] = "0b10111101110101101110100000101001";
        ram[82] = "0b00111100111000001011111001010001";
        ram[83] = "0b10111110000010101000001001100010";
        ram[84] = "0b10111100101110000111001100001110";
        ram[85] = "0b10111101111011011101011000010111";
        ram[86] = "0b10111010010011111001100110101000";
        ram[87] = "0b10111100110111011000000010101111";
        ram[88] = "0b10111101000000101110101110001000";
        ram[89] = "0b00111101100001011101000001011001";
        ram[90] = "0b00111101101100000100100000100100";
        ram[91] = "0b10111101101011110110011011101000";
        ram[92] = "0b00111110001100100011010110110101";
        ram[93] = "0b10111101111101011111010001011110";
        ram[94] = "0b10111101101100100111110000000100";
        ram[95] = "0b00111101000011010101000011010001";
        ram[96] = "0b10111101101111101111001001101001";
        ram[97] = "0b00111101101110010000110100010111";
        ram[98] = "0b10111110010010001010100001101101";
        ram[99] = "0b10111100001001111110001010011101";
        ram[100] = "0b00111101100000100000001000101011";
        ram[101] = "0b00111101100001110110100010011101";
        ram[102] = "0b00111101000001101010100000100101";
        ram[103] = "0b10111110010010101110000110001011";
        ram[104] = "0b00111100100110100111010000100000";
        ram[105] = "0b10111101101010101000111001111111";
        ram[106] = "0b10111101000000111000100111011101";
        ram[107] = "0b10111100010100110000100001010000";
        ram[108] = "0b00111100000011000000101110111100";
        ram[109] = "0b00111101100100110100001111000100";
        ram[110] = "0b00111101100000100101110000001000";
        ram[111] = "0b10111010010010110001110010110000";
        ram[112] = "0b00111101000000001011000100011011";
        ram[113] = "0b00111101011111001000001010011101";
        ram[114] = "0b00111011011001110110111001100100";
        ram[115] = "0b10111110000110011100110110000001";
        ram[116] = "0b00111101101010110101100110001101";
        ram[117] = "0b10111101110010010110110011010011";
        ram[118] = "0b00111100101101100101001001101101";
        ram[119] = "0b10111101100001011001100110111000";


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


SC_MODULE(inference_conv2d_f3_1_1_10) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 120;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


inference_conv2d_f3_1_1_10_ram* meminst;


SC_CTOR(inference_conv2d_f3_1_1_10) {
meminst = new inference_conv2d_f3_1_1_10_ram("inference_conv2d_f3_1_1_10_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~inference_conv2d_f3_1_1_10() {
    delete meminst;
}


};//endmodule
#endif
