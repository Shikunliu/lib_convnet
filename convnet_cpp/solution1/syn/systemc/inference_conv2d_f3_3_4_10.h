// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __inference_conv2d_f3_3_4_10_H__
#define __inference_conv2d_f3_3_4_10_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct inference_conv2d_f3_3_4_10_ram : public sc_core::sc_module {

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


   SC_CTOR(inference_conv2d_f3_3_4_10_ram) {
        ram[0] = "0b00111101100111011011100010000101";
        ram[1] = "0b10111101000101000100001100011001";
        ram[2] = "0b00111100111100000111000000001010";
        ram[3] = "0b00111101000000000110111111111101";
        ram[4] = "0b00111101011100010010001110001110";
        ram[5] = "0b10111011110010111111000001000011";
        ram[6] = "0b00111101111100010000001000110110";
        ram[7] = "0b10111110000000010111011000010100";
        ram[8] = "0b00111101010101001001001110000110";
        ram[9] = "0b00111101000001110000011101000000";
        ram[10] = "0b10111101001001001001111000101010";
        ram[11] = "0b00111110010100101000100011001110";
        ram[12] = "0b10111101110001000110100001000101";
        ram[13] = "0b00111101100101110111011000110001";
        ram[14] = "0b00111101100100111111101101000101";
        ram[15] = "0b00111100001101111100010000100111";
        ram[16] = "0b00111101100100001111010001010001";
        ram[17] = "0b10111101111111111100001100101111";
        ram[18] = "0b00111101110101001100111111010001";
        ram[19] = "0b10111110010000001101001110001101";
        ram[20] = "0b10111101100110100101100100011111";
        ram[21] = "0b00111110000100001000011100000001";
        ram[22] = "0b10111100010111001010010010110001";
        ram[23] = "0b00111101111010011011000111111011";
        ram[24] = "0b10111101111100110111001110110000";
        ram[25] = "0b00111110000000100000010001101100";
        ram[26] = "0b00111100010000101000110011011000";
        ram[27] = "0b00111101000111011100010001010001";
        ram[28] = "0b00111101100101101110000001100111";
        ram[29] = "0b00111101000110111010100100111110";
        ram[30] = "0b10111110010101100010110011111110";
        ram[31] = "0b10111101000010100000001111000101";
        ram[32] = "0b00111100111110000000111100111011";
        ram[33] = "0b00111101101011000110100101110011";
        ram[34] = "0b00111101111001001101110010101001";
        ram[35] = "0b00111101000001010111110011100010";
        ram[36] = "0b10111101100001010111011000011110";
        ram[37] = "0b10111101101101011010101100101101";
        ram[38] = "0b00111110001000010000011000100101";
        ram[39] = "0b10111011101001100001100101101111";
        ram[40] = "0b10111101101110100111000100001000";
        ram[41] = "0b00111101100001101000001111000011";
        ram[42] = "0b00111100011101001010011111011101";
        ram[43] = "0b00111011010010101110101001110100";
        ram[44] = "0b00111101010111001011000100010001";
        ram[45] = "0b10111101010011010011101010010110";
        ram[46] = "0b00111101110111111011010110001101";
        ram[47] = "0b00111101010000000000101010110010";
        ram[48] = "0b10111101110101011101100010010101";
        ram[49] = "0b00111101000111011000100000111100";
        ram[50] = "0b00111110000100011100110110100011";
        ram[51] = "0b10111100010011010100011101000110";
        ram[52] = "0b10111101100001101001111001110010";
        ram[53] = "0b10111100111000001111001110010110";
        ram[54] = "0b10111101100101010001001111000011";
        ram[55] = "0b00111101111001011110111111101001";
        ram[56] = "0b00111101100010001000111101101011";
        ram[57] = "0b10111101001110110001111111100001";
        ram[58] = "0b10111100111111110010000000000110";
        ram[59] = "0b00111101010011110011101011101100";
        ram[60] = "0b00111100110100001101001001001011";
        ram[61] = "0b10111101111000000101000000110111";
        ram[62] = "0b00111101110010111101000000110011";
        ram[63] = "0b00111101100011010100110111100001";
        ram[64] = "0b00111100111011101101110000100001";
        ram[65] = "0b10111101101001001110001000000010";
        ram[66] = "0b00111011111011010010100011001101";
        ram[67] = "0b10111110001011011100110000100001";
        ram[68] = "0b10111100100110001100011101110111";
        ram[69] = "0b00111101110011000110001001010001";
        ram[70] = "0b10111101010011111010101011101000";
        ram[71] = "0b00111100101100111010110000110101";
        ram[72] = "0b10111100111011110100001100011001";
        ram[73] = "0b00111101111011110111000000010101";
        ram[74] = "0b00111101000100010100100001110111";
        ram[75] = "0b00111101101111110111010011110101";
        ram[76] = "0b10111011011001111100111110001000";
        ram[77] = "0b10111101001111001001000100010101";
        ram[78] = "0b10111100010001101111011001011111";
        ram[79] = "0b10111110001001101111111000101110";
        ram[80] = "0b00111110001011110011101001011000";
        ram[81] = "0b10111100001010100100100100010100";
        ram[82] = "0b00111101011011010011111011100011";
        ram[83] = "0b00111110001101100101101111101010";
        ram[84] = "0b00111110010000011010110110100111";
        ram[85] = "0b00111011001110101111101110010100";
        ram[86] = "0b10111101000010111110110010000010";
        ram[87] = "0b10111101000000101001110110111010";
        ram[88] = "0b00111101100010010101001000111111";
        ram[89] = "0b00111011000110001000110011010100";
        ram[90] = "0b10111110000011010100001110001101";
        ram[91] = "0b00111100110101001101110100111101";
        ram[92] = "0b10111101101100110010111100110111";
        ram[93] = "0b00111110010010000011000011100100";
        ram[94] = "0b00111101110010010001101011100001";
        ram[95] = "0b00111101000110110111001111111010";
        ram[96] = "0b10111101110100110110110111101100";
        ram[97] = "0b10111110000101101100111000110110";
        ram[98] = "0b00111110001101011000010011110101";
        ram[99] = "0b10111101111000001100010010011100";
        ram[100] = "0b00111101001001110101101101110100";
        ram[101] = "0b10111100110101111001011110010111";
        ram[102] = "0b00111011101100010010010001111011";
        ram[103] = "0b00111101111000010000101101100011";
        ram[104] = "0b00111011100100000110111001001101";
        ram[105] = "0b10111100101101000100110000111000";
        ram[106] = "0b00111100110100011101001100110001";
        ram[107] = "0b00111101001001000001000110101000";
        ram[108] = "0b10111101110011010001010110101101";
        ram[109] = "0b10111101110110001111000101001110";
        ram[110] = "0b00111110001111111111111010110000";
        ram[111] = "0b10111110000001000001010000011111";
        ram[112] = "0b10111100100111101000010110010010";
        ram[113] = "0b00111101011010100001110000011000";
        ram[114] = "0b00111101111010001101100001100110";
        ram[115] = "0b10111101111101111010001001001001";
        ram[116] = "0b10111110000111110111001100111011";
        ram[117] = "0b10111100100010010101100111100110";
        ram[118] = "0b00111100101010001111010100100001";
        ram[119] = "0b00111101110000100001000010001001";


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


SC_MODULE(inference_conv2d_f3_3_4_10) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 120;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


inference_conv2d_f3_3_4_10_ram* meminst;


SC_CTOR(inference_conv2d_f3_3_4_10) {
meminst = new inference_conv2d_f3_3_4_10_ram("inference_conv2d_f3_3_4_10_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~inference_conv2d_f3_3_4_10() {
    delete meminst;
}


};//endmodule
#endif
