// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __inference_conv2d_f3_4_0_13_H__
#define __inference_conv2d_f3_4_0_13_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct inference_conv2d_f3_4_0_13_ram : public sc_core::sc_module {

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


   SC_CTOR(inference_conv2d_f3_4_0_13_ram) {
        ram[0] = "0b10111110000100001110001111001110";
        ram[1] = "0b10111101100001101111011111010110";
        ram[2] = "0b00111101101110110010001100100001";
        ram[3] = "0b00111011111011111101001001100000";
        ram[4] = "0b10111101011100100100010100101100";
        ram[5] = "0b00111101100101000101000110101100";
        ram[6] = "0b10111110000010101100001100100010";
        ram[7] = "0b10111101001010110101110011110110";
        ram[8] = "0b10111101000000111000111011100110";
        ram[9] = "0b10111100111001000110110110011110";
        ram[10] = "0b10111110001111101011110010000100";
        ram[11] = "0b00111100110010110101111000000010";
        ram[12] = "0b10111101101010100100011100010110";
        ram[13] = "0b10111101011000011001100000011011";
        ram[14] = "0b00111101101001100011110001001101";
        ram[15] = "0b00111101101100001100001110000010";
        ram[16] = "0b00111110001010101000001100101100";
        ram[17] = "0b10111101110001010011000000101110";
        ram[18] = "0b00111101001111000101101100010101";
        ram[19] = "0b00111101101101010110001000100101";
        ram[20] = "0b10111110010000111011111100101111";
        ram[21] = "0b00111101100111011111010111110111";
        ram[22] = "0b00111101101010101101111000010101";
        ram[23] = "0b00111011010111101010111011110111";
        ram[24] = "0b10111110000111101111101111110100";
        ram[25] = "0b10111101010111000011111001011010";
        ram[26] = "0b00111101011110000001101101001010";
        ram[27] = "0b10111100010101000000100100000001";
        ram[28] = "0b10111101010110001001110111010110";
        ram[29] = "0b00111101110110010111000100111011";
        ram[30] = "0b00111110001111010000011110000101";
        ram[31] = "0b10111011111000100000101111001110";
        ram[32] = "0b10111110001010111100001010111001";
        ram[33] = "0b10111100101000010101110000000110";
        ram[34] = "0b00111110001010110010100101011111";
        ram[35] = "0b10111110001110000101100010111100";
        ram[36] = "0b00111101110100101000000101110111";
        ram[37] = "0b00111101110111100000101001000010";
        ram[38] = "0b00111101110010100001001010000000";
        ram[39] = "0b00111101110101111001110010000100";
        ram[40] = "0b10111100100001011000111011101011";
        ram[41] = "0b10111101101000101000110100101000";
        ram[42] = "0b10111101110110111111000011011100";
        ram[43] = "0b10111100110110101110010010001000";
        ram[44] = "0b10111101100100100000101000110001";
        ram[45] = "0b00111100010001111001010011101010";
        ram[46] = "0b10111101101000111100001011000000";
        ram[47] = "0b00111101010011110010111000100001";
        ram[48] = "0b00111101000000011111111101111111";
        ram[49] = "0b10111100111100101101101100011111";
        ram[50] = "0b00111101010000001000100000000000";
        ram[51] = "0b10111100011011011000101010110010";
        ram[52] = "0b10111101100010111101100001101110";
        ram[53] = "0b10111101110001110100001101010110";
        ram[54] = "0b00111100101011110101111001011101";
        ram[55] = "0b00111100001000001000000011101001";
        ram[56] = "0b10111110000110001100001110110001";
        ram[57] = "0b00111100110001111000000001011101";
        ram[58] = "0b10111101110000001011111000000001";
        ram[59] = "0b00111101111010010101011111001101";
        ram[60] = "0b00111101000101111110011011000001";
        ram[61] = "0b00111101000011100011010001000000";
        ram[62] = "0b10111011011111000000001100011011";
        ram[63] = "0b10111100010110111001011000101001";
        ram[64] = "0b10111101100101001111001110100000";
        ram[65] = "0b10111101000111111010100000111100";
        ram[66] = "0b10111101011111111010101110010111";
        ram[67] = "0b00111101000000101111011000111010";
        ram[68] = "0b10111110010101100110001111000111";
        ram[69] = "0b00111101011100000110001100111111";
        ram[70] = "0b10111110000110111010110101111101";
        ram[71] = "0b00111011011001100101110111000010";
        ram[72] = "0b00111110001101010100111000101011";
        ram[73] = "0b10111110001001100001010011100000";
        ram[74] = "0b00111110000010101001001001100000";
        ram[75] = "0b10111011110011111101111110111100";
        ram[76] = "0b00111101000001100111001011100001";
        ram[77] = "0b00111101011000000110000001111000";
        ram[78] = "0b10111101101011010011001010011110";
        ram[79] = "0b10111100100100101100001001111010";
        ram[80] = "0b10111100111110001101010101101001";
        ram[81] = "0b00111101110000010110010101110110";
        ram[82] = "0b00111110000111001111001000000110";
        ram[83] = "0b10111110000010000100101111100100";
        ram[84] = "0b10111011011111100101100010110110";
        ram[85] = "0b00111101110001010011110011101011";
        ram[86] = "0b10111010101010100110000110111110";
        ram[87] = "0b00111101001101011011011000010101";
        ram[88] = "0b10111110001010110101010110101100";
        ram[89] = "0b10111010100011111001111110011011";
        ram[90] = "0b10111110000000101011000101110000";
        ram[91] = "0b10111011101011011001111111100001";
        ram[92] = "0b00111110000011100010000101010011";
        ram[93] = "0b00111101011101110001000110010100";
        ram[94] = "0b00111011101001100101100100011011";
        ram[95] = "0b00111110000110011001000011110011";
        ram[96] = "0b00111101000001110101100110010001";
        ram[97] = "0b00111101100000010111011001001010";
        ram[98] = "0b00111100010101011011001100100101";
        ram[99] = "0b10111101011111100001000011111000";
        ram[100] = "0b10111101001000000111000110101010";
        ram[101] = "0b00111101101110011011000101100111";
        ram[102] = "0b10111101111001110001111101111001";
        ram[103] = "0b10111101001000000101111110111100";
        ram[104] = "0b00111101100001101001110000001001";
        ram[105] = "0b10111101100101110110011010101100";
        ram[106] = "0b00111101100100010011011111110100";
        ram[107] = "0b10111100001010000111110000100000";
        ram[108] = "0b00111100101000000000001100001010";
        ram[109] = "0b10111101011001111110011001100011";
        ram[110] = "0b00111100100100010110010001000001";
        ram[111] = "0b10111101100110100000111111000110";
        ram[112] = "0b00111101110101001111101101010101";
        ram[113] = "0b00111110000010110111111011010100";
        ram[114] = "0b10111101111100100101101100110001";
        ram[115] = "0b00111101101000000111101001111001";
        ram[116] = "0b00111110000100001101010011011100";
        ram[117] = "0b10111101000110101010111111001010";
        ram[118] = "0b10111101011010100001101011010110";
        ram[119] = "0b00111100110001011111111101010011";


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


SC_MODULE(inference_conv2d_f3_4_0_13) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 120;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


inference_conv2d_f3_4_0_13_ram* meminst;


SC_CTOR(inference_conv2d_f3_4_0_13) {
meminst = new inference_conv2d_f3_4_0_13_ram("inference_conv2d_f3_4_0_13_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~inference_conv2d_f3_4_0_13() {
    delete meminst;
}


};//endmodule
#endif