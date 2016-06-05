// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __inference_conv2d_f3_3_2_8_H__
#define __inference_conv2d_f3_3_2_8_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct inference_conv2d_f3_3_2_8_ram : public sc_core::sc_module {

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


   SC_CTOR(inference_conv2d_f3_3_2_8_ram) {
        ram[0] = "0b00111101001011111100101000001101";
        ram[1] = "0b10111110001010001011100011110001";
        ram[2] = "0b10111101111001111011110101001001";
        ram[3] = "0b10111110000000001010110110001010";
        ram[4] = "0b00111101010100111110000001101101";
        ram[5] = "0b00111101010001101100100000111011";
        ram[6] = "0b00111110000000110110111000101111";
        ram[7] = "0b10111101110100111000111011110011";
        ram[8] = "0b10111101110100000100101000110000";
        ram[9] = "0b00111101101000010010100111011001";
        ram[10] = "0b00111101001000011111101011100010";
        ram[11] = "0b10111101011010000111000100000011";
        ram[12] = "0b00111110000111011111110001011101";
        ram[13] = "0b00111110001011111010110101101101";
        ram[14] = "0b00111110000001111101100100010010";
        ram[15] = "0b00111110001001011011011011000011";
        ram[16] = "0b10111100111111110011111001101111";
        ram[17] = "0b00111101100101111010001001001001";
        ram[18] = "0b00111101100100101101010001101001";
        ram[19] = "0b00111011111011110111100100110101";
        ram[20] = "0b00111101010101010010111101010111";
        ram[21] = "0b10111101011011001011001001111011";
        ram[22] = "0b10111100101010011010111010000101";
        ram[23] = "0b10111101011001000111100100001100";
        ram[24] = "0b10111101000101100011100011110010";
        ram[25] = "0b10111110000000100110011001110111";
        ram[26] = "0b00111011011110001100101010000010";
        ram[27] = "0b00111101000001111001011000010001";
        ram[28] = "0b10111101110111101111111000001101";
        ram[29] = "0b00111101100010101111010001011101";
        ram[30] = "0b10111101111000111011100000011011";
        ram[31] = "0b00111101111000110010011011100001";
        ram[32] = "0b00111110001111101101010100101000";
        ram[33] = "0b00111101101010111001111111110111";
        ram[34] = "0b00111101110011101011010101110000";
        ram[35] = "0b00111101000001010100110000000101";
        ram[36] = "0b10111110000111010010100111011100";
        ram[37] = "0b00111101001100000111101010000111";
        ram[38] = "0b00111011111100000111101110010011";
        ram[39] = "0b00111100100110101100110001101010";
        ram[40] = "0b00111100111100110000010010100101";
        ram[41] = "0b10111101111010010010101100111101";
        ram[42] = "0b10111110000010010101101101111001";
        ram[43] = "0b00111010111101111010111101111001";
        ram[44] = "0b10111101101011010110010001101101";
        ram[45] = "0b00111101111010010110100100011010";
        ram[46] = "0b00111101100111100101000010101011";
        ram[47] = "0b00111101110110110101001110010011";
        ram[48] = "0b10111101101000110001100111000110";
        ram[49] = "0b10111101001000000101011101011001";
        ram[50] = "0b10111100101100010110101000000101";
        ram[51] = "0b00111101000001100100111111011011";
        ram[52] = "0b10111100110100011011001110111100";
        ram[53] = "0b00111101111001010001111100111111";
        ram[54] = "0b00111101110101100100000101110000";
        ram[55] = "0b10111101110100010001100011000010";
        ram[56] = "0b10111011111111010100011100111110";
        ram[57] = "0b10111101110001110000101100100010";
        ram[58] = "0b00111110000000010100100101000001";
        ram[59] = "0b00111101001000110000111000100010";
        ram[60] = "0b10111101111010111101001010110111";
        ram[61] = "0b10111101101110111100011001110010";
        ram[62] = "0b00111101101110001100101100001000";
        ram[63] = "0b00111110000100000001101111001010";
        ram[64] = "0b00111101110101100101101100100001";
        ram[65] = "0b10111100101001100110000111111111";
        ram[66] = "0b00111101111111001001000000111111";
        ram[67] = "0b10111110000001001010000011100100";
        ram[68] = "0b00111101101011111101111010110101";
        ram[69] = "0b00111011100100110110110001101110";
        ram[70] = "0b10111100100010101001100110000001";
        ram[71] = "0b00111101110011010100011001101111";
        ram[72] = "0b10111101101001111111101101110111";
        ram[73] = "0b10111011111011100001010000000101";
        ram[74] = "0b00111101010000010000010010101101";
        ram[75] = "0b10111101110110001000011101100110";
        ram[76] = "0b10111110001110110000101110111111";
        ram[77] = "0b10111101000100010101001111100101";
        ram[78] = "0b10111100110010000011011110100111";
        ram[79] = "0b00111101100100111110111000001110";
        ram[80] = "0b00111110001100101100101111101010";
        ram[81] = "0b10111010101110101101111111100101";
        ram[82] = "0b00111101100011001001111011011111";
        ram[83] = "0b10111001101100011101011101010011";
        ram[84] = "0b10111110000111110100001001111000";
        ram[85] = "0b00111100101110010101100001111100";
        ram[86] = "0b10111110001010010010101001110011";
        ram[87] = "0b10111101110100010011000001011001";
        ram[88] = "0b10111110000010111110101110011110";
        ram[89] = "0b10111101101001011110011000101001";
        ram[90] = "0b00111100100011011010100011001011";
        ram[91] = "0b10111101010000001000100100001101";
        ram[92] = "0b10111101001000000000000101011101";
        ram[93] = "0b00111110000001011011111011100100";
        ram[94] = "0b10111110000001100100101111101100";
        ram[95] = "0b00111101011011101110110100011110";
        ram[96] = "0b10111100100000000111111001000000";
        ram[97] = "0b00111101110110011110000001100001";
        ram[98] = "0b00111101100100111111011001001010";
        ram[99] = "0b00111101000111110111101011110000";
        ram[100] = "0b00111100000010101001000100110011";
        ram[101] = "0b00111110000011111010001001101010";
        ram[102] = "0b00111101101010000111110011001111";
        ram[103] = "0b10111011100101100010011100110100";
        ram[104] = "0b00111101001110001110110101010010";
        ram[105] = "0b00111100111100101111100001111011";
        ram[106] = "0b10111100010011010000101000001001";
        ram[107] = "0b10111100110111100111100111010011";
        ram[108] = "0b10111101001000110101000100100011";
        ram[109] = "0b10111110001110011001111001010010";
        ram[110] = "0b00111101011110011011011100010001";
        ram[111] = "0b10111101110001100011100001010001";
        ram[112] = "0b10111110000011111010100011111000";
        ram[113] = "0b00111101101011100101111101110100";
        ram[114] = "0b10111101010111110010111100000101";
        ram[115] = "0b10111101011000001000010111100111";
        ram[116] = "0b00111110001010100011111001111101";
        ram[117] = "0b10111100111111101100010011001100";
        ram[118] = "0b00111110010000111011000011000100";
        ram[119] = "0b00111011111000101010001010110111";


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


SC_MODULE(inference_conv2d_f3_3_2_8) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 120;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


inference_conv2d_f3_3_2_8_ram* meminst;


SC_CTOR(inference_conv2d_f3_3_2_8) {
meminst = new inference_conv2d_f3_3_2_8_ram("inference_conv2d_f3_3_2_8_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~inference_conv2d_f3_3_2_8() {
    delete meminst;
}


};//endmodule
#endif
