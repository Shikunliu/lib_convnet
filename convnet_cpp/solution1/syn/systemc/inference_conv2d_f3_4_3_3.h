// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __inference_conv2d_f3_4_3_3_H__
#define __inference_conv2d_f3_4_3_3_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct inference_conv2d_f3_4_3_3_ram : public sc_core::sc_module {

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


   SC_CTOR(inference_conv2d_f3_4_3_3_ram) {
        ram[0] = "0b10111101010000100011111011101111";
        ram[1] = "0b00111100000011010100101111111001";
        ram[2] = "0b10111100001111010110101100110000";
        ram[3] = "0b00111110001001110110011011000111";
        ram[4] = "0b10111101100101010110000110111001";
        ram[5] = "0b00111100100010001101001001101100";
        ram[6] = "0b10111100000101001001111100011110";
        ram[7] = "0b10111011101010001100011110110101";
        ram[8] = "0b10111101110001101010111110010111";
        ram[9] = "0b00111101110000101000111100100110";
        ram[10] = "0b10111100100111111010111001010001";
        ram[11] = "0b10111101001111101101111011001110";
        ram[12] = "0b10111101010001011011101001010100";
        ram[13] = "0b00111110000001101000011100101011";
        ram[14] = "0b00111101011110010110111000110000";
        ram[15] = "0b10111101111010110110011100111100";
        ram[16] = "0b00111101000110111010011101000000";
        ram[17] = "0b00111101000010010100000010111100";
        ram[18] = "0b00111101100010000110101001011010";
        ram[19] = "0b10111011100101011101100010011010";
        ram[20] = "0b10111101000111101010001110101010";
        ram[21] = "0b10111101001010100100010101101001";
        ram[22] = "0b10111110001110000110001100111001";
        ram[23] = "0b10111101001110001101101111101010";
        ram[24] = "0b10111100111001011011110010001000";
        ram[25] = "0b10111101100010010000101010101110";
        ram[26] = "0b00111101001000101011000110001011";
        ram[27] = "0b00111101011011111111011101110100";
        ram[28] = "0b10111100100001110100001001111111";
        ram[29] = "0b10111110000111010001110100000100";
        ram[30] = "0b00111101110101010011100100110010";
        ram[31] = "0b00111101101001000110000000111111";
        ram[32] = "0b00111101100011001011010110100000";
        ram[33] = "0b10111011111110010001100000101111";
        ram[34] = "0b00111101101010000010101101010101";
        ram[35] = "0b10111011101110110101110000100010";
        ram[36] = "0b00111011110110110100001011110010";
        ram[37] = "0b00111110001011010001111101100000";
        ram[38] = "0b10111100110000111011010110010111";
        ram[39] = "0b00111101001110110001100010001010";
        ram[40] = "0b00111110010001001000111100010001";
        ram[41] = "0b00111100101010010100010001100111";
        ram[42] = "0b10111100110100111011010100011110";
        ram[43] = "0b00111101111110011011101010100001";
        ram[44] = "0b10111100110101111111000110001110";
        ram[45] = "0b10111101011000010101010100110101";
        ram[46] = "0b00111101101001111111010011110111";
        ram[47] = "0b10111100011111011001111111010011";
        ram[48] = "0b10111101010011110101010100100010";
        ram[49] = "0b10111100110000111111100001001000";
        ram[50] = "0b10111101101010101100011001000111";
        ram[51] = "0b10111110010000111001111100110100";
        ram[52] = "0b00111110001010011010101111110011";
        ram[53] = "0b00111101011001100110000100101000";
        ram[54] = "0b00111101111110101000001001100010";
        ram[55] = "0b00111101100010011000100100111110";
        ram[56] = "0b10111110000100111000011010010000";
        ram[57] = "0b10111100111000010100000001010111";
        ram[58] = "0b10111101100000111101011110010000";
        ram[59] = "0b00111100001010100110001110000001";
        ram[60] = "0b10111110000111001001111101110011";
        ram[61] = "0b00111010000101100001111011000011";
        ram[62] = "0b10111110001100101111011111110101";
        ram[63] = "0b10111100000000101101001010001110";
        ram[64] = "0b00111110010011001011110111011100";
        ram[65] = "0b00111101101011000101011011001000";
        ram[66] = "0b00111110000100100101101100110001";
        ram[67] = "0b00111011010001000101101101100100";
        ram[68] = "0b10111101111100100100110100001010";
        ram[69] = "0b10111110000001010110110001010001";
        ram[70] = "0b00111101101001101000101010010011";
        ram[71] = "0b10111101100110111111011111110000";
        ram[72] = "0b10111110000010110010001110011010";
        ram[73] = "0b10111101101011010111101110100110";
        ram[74] = "0b00111011101000110001101001001100";
        ram[75] = "0b00111101100011001110110110000100";
        ram[76] = "0b00111110001100101001000100110010";
        ram[77] = "0b00111001001101010011011000110110";
        ram[78] = "0b00111101101010100110101100001110";
        ram[79] = "0b00111100011100010011000011000101";
        ram[80] = "0b00111011111010001000000100110011";
        ram[81] = "0b10111101000000111111010011010010";
        ram[82] = "0b00111101100110001110100110110100";
        ram[83] = "0b10111011001101101010010001101100";
        ram[84] = "0b10111101111110110111011111000000";
        ram[85] = "0b10111101110110101000101111010010";
        ram[86] = "0b10111011101000101111010001110111";
        ram[87] = "0b00111101010110011001011010101010";
        ram[88] = "0b00111101101110000010001100011010";
        ram[89] = "0b00111100111011011010001011010000";
        ram[90] = "0b00111100110111101011101010100000";
        ram[91] = "0b10111110001000000001001101100110";
        ram[92] = "0b10111101110101010010110010011101";
        ram[93] = "0b10111101001101010100100011010010";
        ram[94] = "0b10111110000100101100110010110100";
        ram[95] = "0b00111101010011000010010110001101";
        ram[96] = "0b00111101000101001011101101011110";
        ram[97] = "0b10111100101010001010011111110101";
        ram[98] = "0b10111101111110000110011111110001";
        ram[99] = "0b00111110001101000010111100011111";
        ram[100] = "0b10111101100110000101011101101101";
        ram[101] = "0b10111010001000110010010111001110";
        ram[102] = "0b00111110000011100001011101011101";
        ram[103] = "0b00111101101000111111011100101110";
        ram[104] = "0b00111101011000110010101001110010";
        ram[105] = "0b10111011110110001001101111001101";
        ram[106] = "0b10111110000011110101001001110110";
        ram[107] = "0b00111100111101101101001011000101";
        ram[108] = "0b00111101110110010000100011100110";
        ram[109] = "0b10111011101000111101010101011101";
        ram[110] = "0b00111100001011001001010100011111";
        ram[111] = "0b10111101111111011101100001110011";
        ram[112] = "0b10111101110101000001100011010111";
        ram[113] = "0b10111101100100100010101000111010";
        ram[114] = "0b10111101111100001000110000111111";
        ram[115] = "0b10111101001011000000010010111011";
        ram[116] = "0b00111101111100011111001001010110";
        ram[117] = "0b10111110001000100010011110001101";
        ram[118] = "0b10111101000111110011111011110101";
        ram[119] = "0b00111101111001110001111011110011";


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


SC_MODULE(inference_conv2d_f3_4_3_3) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 120;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


inference_conv2d_f3_4_3_3_ram* meminst;


SC_CTOR(inference_conv2d_f3_4_3_3) {
meminst = new inference_conv2d_f3_4_3_3_ram("inference_conv2d_f3_4_3_3_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~inference_conv2d_f3_4_3_3() {
    delete meminst;
}


};//endmodule
#endif