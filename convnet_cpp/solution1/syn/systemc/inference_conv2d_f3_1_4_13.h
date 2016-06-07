// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __inference_conv2d_f3_1_4_13_H__
#define __inference_conv2d_f3_1_4_13_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct inference_conv2d_f3_1_4_13_ram : public sc_core::sc_module {

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


   SC_CTOR(inference_conv2d_f3_1_4_13_ram) {
        ram[0] = "0b10111101010100100010111010111100";
        ram[1] = "0b10111101101011001100011111111010";
        ram[2] = "0b00111101111010101011001101101000";
        ram[3] = "0b00111101111001000000010110110100";
        ram[4] = "0b00111110010011010111000001100001";
        ram[5] = "0b10111101001110100111111010011100";
        ram[6] = "0b00111100010110000010101100111010";
        ram[7] = "0b00111010011001011000001101001001";
        ram[8] = "0b00111100000111111111101000110001";
        ram[9] = "0b00111100111100111110001111001000";
        ram[10] = "0b00111101011111000001100100111011";
        ram[11] = "0b00111100101110001101010100110100";
        ram[12] = "0b10111101001100001110100000110101";
        ram[13] = "0b10111010011000000111011000011001";
        ram[14] = "0b00111110000011011111100100111000";
        ram[15] = "0b10111100111100111011001100100000";
        ram[16] = "0b10111011110111001100011110000001";
        ram[17] = "0b10111101101010010010111011001101";
        ram[18] = "0b10111101000100111011110010101011";
        ram[19] = "0b10111101000110010101010110100111";
        ram[20] = "0b10111110000001000001111100100001";
        ram[21] = "0b00111101110000010001100101110000";
        ram[22] = "0b10111110000111000100001000100000";
        ram[23] = "0b10111101101100010110001110010010";
        ram[24] = "0b10111101101100001001101001100111";
        ram[25] = "0b00111101101100001110101111000110";
        ram[26] = "0b10111101111011010100010001010110";
        ram[27] = "0b10111100110101111100110001110000";
        ram[28] = "0b10111101111110010110010000011111";
        ram[29] = "0b00111101110010011100000100100010";
        ram[30] = "0b10111100101101101110000111011111";
        ram[31] = "0b10111101100010100111110111101101";
        ram[32] = "0b10111101000111011111000000001011";
        ram[33] = "0b00111100110010010001100110000100";
        ram[34] = "0b10111101100100111101101111111000";
        ram[35] = "0b00111101011111110011101101111111";
        ram[36] = "0b00111101111000010111001110111000";
        ram[37] = "0b10111101100011110101010001001100";
        ram[38] = "0b10111101111110111101111110001111";
        ram[39] = "0b00111110000101010001111000110010";
        ram[40] = "0b10111110001101110010000001000011";
        ram[41] = "0b00111101111011101000110100010001";
        ram[42] = "0b10111101000001101110111101110011";
        ram[43] = "0b10111000000101010010100011110010";
        ram[44] = "0b00111101011100101101110001100001";
        ram[45] = "0b10111011011001010011100010101001";
        ram[46] = "0b10111110001101000010100100010111";
        ram[47] = "0b00111110000100010001001011111101";
        ram[48] = "0b00111101010111110001111100010101";
        ram[49] = "0b10111110001001100110010000001010";
        ram[50] = "0b00111110000010010000011010001010";
        ram[51] = "0b10111101011110011101000001110001";
        ram[52] = "0b00111101100010110100101111010001";
        ram[53] = "0b00111110000101111010001011001111";
        ram[54] = "0b00111101011000111101110011101001";
        ram[55] = "0b10111101010101111000000110101100";
        ram[56] = "0b00111100111011000110000100011100";
        ram[57] = "0b00111101010000111010000110010000";
        ram[58] = "0b10111101110000101001000111101110";
        ram[59] = "0b00111100011011010100110100001010";
        ram[60] = "0b00111011000111010110111001100101";
        ram[61] = "0b00111101101011110111011110111101";
        ram[62] = "0b00111100010111011101111001101101";
        ram[63] = "0b10111101111000010000000101101101";
        ram[64] = "0b00111101001000110110000010001101";
        ram[65] = "0b00111110000100101001101000011100";
        ram[66] = "0b10111100110000101001111110000010";
        ram[67] = "0b00111110010011000101000111011011";
        ram[68] = "0b10111110001110000101100111001001";
        ram[69] = "0b10111110000110001100100100110010";
        ram[70] = "0b10111011111001000101000010100010";
        ram[71] = "0b00111101100111100111111111110110";
        ram[72] = "0b00111110001110111100111110010010";
        ram[73] = "0b00111101100001100011111001001011";
        ram[74] = "0b10111100101010001101011010111001";
        ram[75] = "0b10111101101001111011010011001010";
        ram[76] = "0b00111101101001001000000100111001";
        ram[77] = "0b10111101111101011001001111100110";
        ram[78] = "0b00111101110111110100000010100011";
        ram[79] = "0b10111101111000111101111101101110";
        ram[80] = "0b10111101110000000111100010100011";
        ram[81] = "0b10111100001010011001100111000010";
        ram[82] = "0b00111101100011101001000010111100";
        ram[83] = "0b00111101101000100101110010101001";
        ram[84] = "0b10111101010001100111110010100001";
        ram[85] = "0b10111110000110001101001111110010";
        ram[86] = "0b10111100001010000001010010000111";
        ram[87] = "0b00111110011010010011010110111001";
        ram[88] = "0b00111101110000110010110111011010";
        ram[89] = "0b00111110000011100111100000011000";
        ram[90] = "0b00111101001001010010001101110000";
        ram[91] = "0b00111110000111100110001011011100";
        ram[92] = "0b10111100110100000000110010111101";
        ram[93] = "0b10111110000111110011101001011000";
        ram[94] = "0b10111100001010110010100101111001";
        ram[95] = "0b10111101100011101001001111010100";
        ram[96] = "0b10111110010011100001010110000111";
        ram[97] = "0b10111100111101000110100101011110";
        ram[98] = "0b10111100110111101011000101100110";
        ram[99] = "0b10111100100011110011010111111110";
        ram[100] = "0b00111101110100010101000101100001";
        ram[101] = "0b00111101111011100111001011011010";
        ram[102] = "0b10111101100001001011100110010110";
        ram[103] = "0b10111101100000101111100010001000";
        ram[104] = "0b10111100011001011001000101010100";
        ram[105] = "0b00111110000110010101010011101011";
        ram[106] = "0b00111101101101001100000101001011";
        ram[107] = "0b10111101100101101011010010101101";
        ram[108] = "0b10111101110011111010001101110111";
        ram[109] = "0b10111100110010111011011100100011";
        ram[110] = "0b00111110001000011010101000111111";
        ram[111] = "0b00111101100111100001001010001010";
        ram[112] = "0b10111110001101001011010111011101";
        ram[113] = "0b10111101000110111101111110001111";
        ram[114] = "0b10111110000110101111000101000101";
        ram[115] = "0b10111101001111111101000100111100";
        ram[116] = "0b10111100011100101101010111100000";
        ram[117] = "0b00111011001101010111001001101000";
        ram[118] = "0b00111110001110111101101010010100";
        ram[119] = "0b00111101100111110011000111110100";


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


SC_MODULE(inference_conv2d_f3_1_4_13) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 120;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


inference_conv2d_f3_1_4_13_ram* meminst;


SC_CTOR(inference_conv2d_f3_1_4_13) {
meminst = new inference_conv2d_f3_1_4_13_ram("inference_conv2d_f3_1_4_13_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~inference_conv2d_f3_1_4_13() {
    delete meminst;
}


};//endmodule
#endif