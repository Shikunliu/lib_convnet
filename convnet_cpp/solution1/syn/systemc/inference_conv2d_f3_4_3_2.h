// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __inference_conv2d_f3_4_3_2_H__
#define __inference_conv2d_f3_4_3_2_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct inference_conv2d_f3_4_3_2_ram : public sc_core::sc_module {

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


   SC_CTOR(inference_conv2d_f3_4_3_2_ram) {
        ram[0] = "0b10111101010000000110001000100110";
        ram[1] = "0b00111101001011011000001101000001";
        ram[2] = "0b00111110001000010100000001010111";
        ram[3] = "0b00111101001000011111011000001111";
        ram[4] = "0b00111101111010010011001100011010";
        ram[5] = "0b10111100101001011111110000010011";
        ram[6] = "0b00111100101101100111101101010010";
        ram[7] = "0b10111101101001100000111000110111";
        ram[8] = "0b10111101011000001111110111000001";
        ram[9] = "0b00111101110111111000001110111110";
        ram[10] = "0b10111101001011100110011111110010";
        ram[11] = "0b10111101101101101000101001101011";
        ram[12] = "0b00111101100011111000000111101001";
        ram[13] = "0b00111100000011010000011101100101";
        ram[14] = "0b00111100111001001011110011100011";
        ram[15] = "0b10111101101110010101111110011101";
        ram[16] = "0b10111101011101011011000010000110";
        ram[17] = "0b10111100010110011100101000001011";
        ram[18] = "0b10111100101000110100111101011011";
        ram[19] = "0b00111101101001001011111100001010";
        ram[20] = "0b00111110000110000000111110011001";
        ram[21] = "0b10111101111100001111000011101001";
        ram[22] = "0b10111011100100011010111000101000";
        ram[23] = "0b00111101001010101111110001001000";
        ram[24] = "0b00111110000011101100100001010000";
        ram[25] = "0b00111101111111010001110011000001";
        ram[26] = "0b10111100111110100110000100100101";
        ram[27] = "0b00111110000010001000110010100100";
        ram[28] = "0b10111100100010110010100000011100";
        ram[29] = "0b10111101100100111101101111010000";
        ram[30] = "0b10111101011000100000001101111011";
        ram[31] = "0b10111101101101100100110000010101";
        ram[32] = "0b00111101000001111010001000111011";
        ram[33] = "0b00111100111000110010100010001111";
        ram[34] = "0b10111101001111001001101011110001";
        ram[35] = "0b10111101100100111010010110100111";
        ram[36] = "0b10111110001001010011010101000100";
        ram[37] = "0b10111101010101011001011110101100";
        ram[38] = "0b00111101101100101101010011000111";
        ram[39] = "0b10111110001011111100101000000000";
        ram[40] = "0b00111101010110001110100011001111";
        ram[41] = "0b00111110000100010111001010101100";
        ram[42] = "0b10111101011110011011100110010101";
        ram[43] = "0b00111101100010010110110011101110";
        ram[44] = "0b10111101111110011000010000011011";
        ram[45] = "0b00111010010100110000100101110100";
        ram[46] = "0b10111110000001101010000110100101";
        ram[47] = "0b00111101100100000010001001010111";
        ram[48] = "0b00111101101001100100000100100000";
        ram[49] = "0b00111100011001110001001001011110";
        ram[50] = "0b10111100000101000111101111101110";
        ram[51] = "0b00111101010111010010100100111011";
        ram[52] = "0b00111101000110001101100110011011";
        ram[53] = "0b10111101001000010010010101100100";
        ram[54] = "0b00111110000111111010101100010001";
        ram[55] = "0b00111101101010001101001000101001";
        ram[56] = "0b10111101001100110011011001011001";
        ram[57] = "0b00111101111001010001100011110100";
        ram[58] = "0b00111100111011100111000111001110";
        ram[59] = "0b10111110000111011110100000101101";
        ram[60] = "0b10111101110000010110100011101011";
        ram[61] = "0b00111100001110111101111110101010";
        ram[62] = "0b10111110000100110001110011101011";
        ram[63] = "0b10111101100010111001001011001110";
        ram[64] = "0b00111110001110011010101001100001";
        ram[65] = "0b10111100111000100101000000100010";
        ram[66] = "0b00111101010110110111100001000110";
        ram[67] = "0b00111101001110100110100010010111";
        ram[68] = "0b10111101011100101100011001110110";
        ram[69] = "0b10111101110111110010100100001011";
        ram[70] = "0b10111101001110010010010110100001";
        ram[71] = "0b10111011111001001011010110110111";
        ram[72] = "0b10111101110011111101011101011110";
        ram[73] = "0b00111101001110001001000101011100";
        ram[74] = "0b10111101101001111010001001100011";
        ram[75] = "0b00111011111111000100111011011011";
        ram[76] = "0b10111101001001101010000001001000";
        ram[77] = "0b00111101011000111001100110110011";
        ram[78] = "0b10111110000101111000100110100100";
        ram[79] = "0b00111110000100110101111000110001";
        ram[80] = "0b00111110010110011000000011110101";
        ram[81] = "0b00111101101001110010111100001100";
        ram[82] = "0b00111100001010110010111111000100";
        ram[83] = "0b00111101010010010001110110000000";
        ram[84] = "0b00111101010000010000010101101001";
        ram[85] = "0b00111110001000101000101101101110";
        ram[86] = "0b00111110000001011011010100110001";
        ram[87] = "0b00111101001011111101110000010110";
        ram[88] = "0b00111101000100000100001010100011";
        ram[89] = "0b10111110001001000000000000110010";
        ram[90] = "0b00111100110100010111010011010010";
        ram[91] = "0b10111100100101001100011001100001";
        ram[92] = "0b00111101011010100010001100000100";
        ram[93] = "0b10111101110101101111011011010111";
        ram[94] = "0b00111101010111011000001010101101";
        ram[95] = "0b10111110000000110001011101101010";
        ram[96] = "0b10111101001101110011011010110011";
        ram[97] = "0b10111101011010110010100110010100";
        ram[98] = "0b00111100000001001001000000001000";
        ram[99] = "0b00111101011111000010111000011001";
        ram[100] = "0b10111100001111011010010111101000";
        ram[101] = "0b00111101101111100100111101001110";
        ram[102] = "0b00111101110100000010000101001011";
        ram[103] = "0b10111101111110000101010110010111";
        ram[104] = "0b00111101100101110111010111000101";
        ram[105] = "0b10111011110001101000101011111111";
        ram[106] = "0b10111100101100000001100101101110";
        ram[107] = "0b10111011101000000101111101110001";
        ram[108] = "0b00111101110100001011100011010000";
        ram[109] = "0b00111110010011101110001011001010";
        ram[110] = "0b00111101100100100110000101100001";
        ram[111] = "0b00111101111001011001011001000010";
        ram[112] = "0b10111011100100101011001010100000";
        ram[113] = "0b10111110000100011100001110101101";
        ram[114] = "0b00111110010001110101111100101101";
        ram[115] = "0b10111101001010011011110011001000";
        ram[116] = "0b00111101101001100100011011111111";
        ram[117] = "0b10111100110000011111101011100010";
        ram[118] = "0b10111101000011110001110111000101";
        ram[119] = "0b00111101110111000011001011101100";


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


SC_MODULE(inference_conv2d_f3_4_3_2) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 120;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


inference_conv2d_f3_4_3_2_ram* meminst;


SC_CTOR(inference_conv2d_f3_4_3_2) {
meminst = new inference_conv2d_f3_4_3_2_ram("inference_conv2d_f3_4_3_2_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~inference_conv2d_f3_4_3_2() {
    delete meminst;
}


};//endmodule
#endif