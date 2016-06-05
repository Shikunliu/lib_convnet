// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __inference_conv2d_f3_3_4_8_H__
#define __inference_conv2d_f3_3_4_8_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct inference_conv2d_f3_3_4_8_ram : public sc_core::sc_module {

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


   SC_CTOR(inference_conv2d_f3_3_4_8_ram) {
        ram[0] = "0b10111011101010011100110111101111";
        ram[1] = "0b10111101000000011111100000001101";
        ram[2] = "0b10111110001011001101100000010010";
        ram[3] = "0b10111110001100001111111010001011";
        ram[4] = "0b10111100001101111111000111011111";
        ram[5] = "0b00111101100110001000000010111101";
        ram[6] = "0b00111101011010011010111011010101";
        ram[7] = "0b10111101110000100010010111100000";
        ram[8] = "0b00111101101101101000101011001001";
        ram[9] = "0b00111100000100000111010011011000";
        ram[10] = "0b10111100101111001110011010100110";
        ram[11] = "0b10111101000100110111110010011010";
        ram[12] = "0b10111101111110101110000111001110";
        ram[13] = "0b00111100110010010001110010101010";
        ram[14] = "0b00111101100101010011110000100010";
        ram[15] = "0b00111100011110010100010101100110";
        ram[16] = "0b10111011011011000011110001010100";
        ram[17] = "0b10111101010110111111010100001110";
        ram[18] = "0b00111010111011111101011110010100";
        ram[19] = "0b00111101100010100110111000110011";
        ram[20] = "0b10111110000010100001000100100011";
        ram[21] = "0b10111100111101111000101001000101";
        ram[22] = "0b10111110000011101000111111110011";
        ram[23] = "0b00111101011101011101000111111001";
        ram[24] = "0b10111101111000000111111001011010";
        ram[25] = "0b00111110000001100001001100001010";
        ram[26] = "0b00111100111011000000100000110001";
        ram[27] = "0b00111101010011001110101010101111";
        ram[28] = "0b10111100111100111001110000001111";
        ram[29] = "0b00111110000101111010101001101001";
        ram[30] = "0b00111011100001110010001000011110";
        ram[31] = "0b10111101101001001111010101110101";
        ram[32] = "0b00111101000010110100000111001101";
        ram[33] = "0b10111110000110011100110111000100";
        ram[34] = "0b00111101101100111000101010001100";
        ram[35] = "0b10111110000000010110110001100001";
        ram[36] = "0b00110111001110000100011100010000";
        ram[37] = "0b10111100011111011100100010000011";
        ram[38] = "0b00111101000001110001110000111001";
        ram[39] = "0b10111100100011011111110010101101";
        ram[40] = "0b00111101110110101101101110000011";
        ram[41] = "0b00111101101110001001010100100010";
        ram[42] = "0b00111100011010101100100100110111";
        ram[43] = "0b10111110000011111110011000001100";
        ram[44] = "0b00111100100001010100110001110000";
        ram[45] = "0b10111110000000000011100110101100";
        ram[46] = "0b00111101111011001100101010110100";
        ram[47] = "0b10111101011000001011011110110110";
        ram[48] = "0b10111101111110001011010100000011";
        ram[49] = "0b10111101101100110010000000010000";
        ram[50] = "0b00111100100001100011111110110101";
        ram[51] = "0b10111101101101010010010100111001";
        ram[52] = "0b10111101110111101100101110111000";
        ram[53] = "0b00111100000000000110111111000111";
        ram[54] = "0b00111101110011011011101111100000";
        ram[55] = "0b10111110001100110100011111101001";
        ram[56] = "0b10111101101000110101000001110101";
        ram[57] = "0b10111101100100111100110011111001";
        ram[58] = "0b00111101110100110110010110001000";
        ram[59] = "0b10111100100011011111010110001100";
        ram[60] = "0b00111011001100101001111111111011";
        ram[61] = "0b00111101110110111111110011101011";
        ram[62] = "0b10111101110001101101101110100001";
        ram[63] = "0b10111101010001101111101011111100";
        ram[64] = "0b00111101100100000000110001101101";
        ram[65] = "0b10111101101011001011010011110010";
        ram[66] = "0b10111101100000111100110110110101";
        ram[67] = "0b10111110010011010000010000011101";
        ram[68] = "0b10111110001100111100011111010110";
        ram[69] = "0b10111101011010011011111011111011";
        ram[70] = "0b10111101000001111011000000010011";
        ram[71] = "0b00111110001000010010101000001111";
        ram[72] = "0b10111110000010001111001000010111";
        ram[73] = "0b00111101100110111111100011010101";
        ram[74] = "0b00111010000101011010110001011000";
        ram[75] = "0b00111100010101010011110011011110";
        ram[76] = "0b10111101010000001100100100111001";
        ram[77] = "0b10111101111011010101000101110010";
        ram[78] = "0b10111110000101111011001010001001";
        ram[79] = "0b10111100001011101110100111111000";
        ram[80] = "0b00111101001100001100010000001000";
        ram[81] = "0b10111101111011100001111101111101";
        ram[82] = "0b10111101110110000110010001000101";
        ram[83] = "0b10111100010111101101011010111011";
        ram[84] = "0b00111101011111000010111110010001";
        ram[85] = "0b00111100000110101011011101110001";
        ram[86] = "0b00111101111110000011111010000101";
        ram[87] = "0b00111101100100000010111001001011";
        ram[88] = "0b00111110001111001111010010100101";
        ram[89] = "0b00111101100001010101110010100011";
        ram[90] = "0b00111101011010100010110111101100";
        ram[91] = "0b00111101110100011011001111110010";
        ram[92] = "0b00111110001010110011010111110100";
        ram[93] = "0b00111101111011011100011101101001";
        ram[94] = "0b00111101100110101110010001111010";
        ram[95] = "0b10111100010100000010101100100110";
        ram[96] = "0b00111101000011101110001101000010";
        ram[97] = "0b00111101111111000111001001011100";
        ram[98] = "0b10111101110100011111011000000001";
        ram[99] = "0b10111100101101010110001110001111";
        ram[100] = "0b00111100100110000110110110110101";
        ram[101] = "0b10111101001000010000001100110101";
        ram[102] = "0b10111110010000100001000010111111";
        ram[103] = "0b00111101110101100000101001100011";
        ram[104] = "0b10111101110000001110110111101100";
        ram[105] = "0b00111101000100110000101001001110";
        ram[106] = "0b00111101111010100000010111011110";
        ram[107] = "0b00111011110111111010100011011101";
        ram[108] = "0b00111101010001001101110010001110";
        ram[109] = "0b00111110001011111010100000101111";
        ram[110] = "0b00111101110111000010101010001000";
        ram[111] = "0b00111100110110001000000000101010";
        ram[112] = "0b00111110001011010010111101011110";
        ram[113] = "0b00111100101101101000110010111010";
        ram[114] = "0b10111110000111100111110010001101";
        ram[115] = "0b10111101100010011010100011000000";
        ram[116] = "0b00111110000010110101011100111111";
        ram[117] = "0b00111100101101010001000110001111";
        ram[118] = "0b10111100110001011000101101011010";
        ram[119] = "0b00111101000101001110100110110111";


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


SC_MODULE(inference_conv2d_f3_3_4_8) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 120;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


inference_conv2d_f3_3_4_8_ram* meminst;


SC_CTOR(inference_conv2d_f3_3_4_8) {
meminst = new inference_conv2d_f3_3_4_8_ram("inference_conv2d_f3_3_4_8_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~inference_conv2d_f3_3_4_8() {
    delete meminst;
}


};//endmodule
#endif
