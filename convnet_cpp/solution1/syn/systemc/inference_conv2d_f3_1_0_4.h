// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __inference_conv2d_f3_1_0_4_H__
#define __inference_conv2d_f3_1_0_4_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct inference_conv2d_f3_1_0_4_ram : public sc_core::sc_module {

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


   SC_CTOR(inference_conv2d_f3_1_0_4_ram) {
        ram[0] = "0b10111101010001001010000001000011";
        ram[1] = "0b00111101101100010110000001000101";
        ram[2] = "0b00111101001110100011100011000110";
        ram[3] = "0b10111110000100101110001000110011";
        ram[4] = "0b00111101100001000001101011100010";
        ram[5] = "0b00111101000110000010111000001111";
        ram[6] = "0b00111110001000110110001010100110";
        ram[7] = "0b00111110011001011111110000111011";
        ram[8] = "0b00111110001110100010110011101101";
        ram[9] = "0b10111101001010101101011000111000";
        ram[10] = "0b00111101001101000010000111000000";
        ram[11] = "0b00111101101101100001100010011000";
        ram[12] = "0b10111101011101000101010110101000";
        ram[13] = "0b10111110100000100010001100111010";
        ram[14] = "0b00111101101001011000101011101111";
        ram[15] = "0b10111110001100101100011010101100";
        ram[16] = "0b10111110001100000000110101011111";
        ram[17] = "0b10111110000101010000100011110110";
        ram[18] = "0b10111100110110011111001001001111";
        ram[19] = "0b10111101010001001100101010100000";
        ram[20] = "0b00111100111010010001110110011011";
        ram[21] = "0b00111110000111101101110101001000";
        ram[22] = "0b10111101100000000011100011010101";
        ram[23] = "0b10111011101000101111011010111011";
        ram[24] = "0b00111101010111011111001111101100";
        ram[25] = "0b00111101010100001000101110011110";
        ram[26] = "0b00111110001111101001110011001011";
        ram[27] = "0b00111101110110011001011110000001";
        ram[28] = "0b00111100100110010110110111111011";
        ram[29] = "0b10111101111011001100001001010000";
        ram[30] = "0b00111101110000100111100011010001";
        ram[31] = "0b00111100110110001001000011110000";
        ram[32] = "0b10111101110011000100011001111010";
        ram[33] = "0b10111101010110001010101101111000";
        ram[34] = "0b10111101111110000100011111110101";
        ram[35] = "0b10111110001101001110111100000011";
        ram[36] = "0b10111101101000000110111101000001";
        ram[37] = "0b10111100111010111110011101111010";
        ram[38] = "0b00111110001000000111001110011011";
        ram[39] = "0b10111011011110101000100010011101";
        ram[40] = "0b00111110010011010100010000010011";
        ram[41] = "0b10111110001100000111001110011011";
        ram[42] = "0b00111101000100001111010001111010";
        ram[43] = "0b00111101111000001010010000011010";
        ram[44] = "0b10111101000010110010100011011000";
        ram[45] = "0b00111101011100001011010111100000";
        ram[46] = "0b10111101110111100110111001100101";
        ram[47] = "0b10111101111001100110101110100101";
        ram[48] = "0b00111100010110101100111111000101";
        ram[49] = "0b00111101000110000101101100100110";
        ram[50] = "0b10111011110111110111101111010001";
        ram[51] = "0b10111101100001000001001101001000";
        ram[52] = "0b10111101010100000010100001010001";
        ram[53] = "0b00111101101010000011010011000101";
        ram[54] = "0b00111010111000111010110100001110";
        ram[55] = "0b10111101010011110110010001010111";
        ram[56] = "0b00111100110011101010111101011011";
        ram[57] = "0b10111100000001110001110110010110";
        ram[58] = "0b10111101001001101011011001101000";
        ram[59] = "0b10111110000111011001111011000111";
        ram[60] = "0b00111100000000001111000001010101";
        ram[61] = "0b00111100100011001010101000110010";
        ram[62] = "0b10111110010001111011111011011011";
        ram[63] = "0b10111100100101101111011101011110";
        ram[64] = "0b00111101101000011110010000010011";
        ram[65] = "0b10111100111100111011000000110001";
        ram[66] = "0b00111100110111101101101111111001";
        ram[67] = "0b00111101101100000000100111110110";
        ram[68] = "0b00111101111010010010011100001011";
        ram[69] = "0b10111101100010010111010001010011";
        ram[70] = "0b10111110000010100111100101111001";
        ram[71] = "0b00111100111100101100110111101000";
        ram[72] = "0b00111100100000000010111111010001";
        ram[73] = "0b00111101110001110111111100011011";
        ram[74] = "0b00111110001111011110110110101111";
        ram[75] = "0b10111101100101010100000000000011";
        ram[76] = "0b10111101101010110011000011000011";
        ram[77] = "0b10111101101101001100111001110100";
        ram[78] = "0b10111101111001111101100110011001";
        ram[79] = "0b00111101011100101111001111011110";
        ram[80] = "0b10111100110010110110101010010111";
        ram[81] = "0b00111101110000110011000010101111";
        ram[82] = "0b00111011011100100011110110100000";
        ram[83] = "0b00111100110010010011100010001110";
        ram[84] = "0b00111101110101100010101001011110";
        ram[85] = "0b10111101100010110010111100001000";
        ram[86] = "0b10111101011101000010101001110100";
        ram[87] = "0b10111101101100010110101111101001";
        ram[88] = "0b00111101000101011101111001110100";
        ram[89] = "0b10111100011000110100011111001110";
        ram[90] = "0b10111011011001110101000101011101";
        ram[91] = "0b00111100001010111000011010010111";
        ram[92] = "0b00111101101100101111110001011100";
        ram[93] = "0b10111101100000001100110100110101";
        ram[94] = "0b10111101110111000011001011101100";
        ram[95] = "0b10111101110010000110100011000111";
        ram[96] = "0b10111101000000011100101100101100";
        ram[97] = "0b10111100010001100110110110100011";
        ram[98] = "0b10111101001001101010101001110100";
        ram[99] = "0b10111101010000111011000111010001";
        ram[100] = "0b00111110001101010001100000101011";
        ram[101] = "0b10111110011011000011110101101000";
        ram[102] = "0b10111101000010100101110001011111";
        ram[103] = "0b10111101111010100000010111011110";
        ram[104] = "0b00111101100001101010000000101101";
        ram[105] = "0b10111101011111010000010100101001";
        ram[106] = "0b00111101000111011010101101110111";
        ram[107] = "0b10111011111011110001110101011010";
        ram[108] = "0b00111110000011101000100110101001";
        ram[109] = "0b00111100101111100000010110001010";
        ram[110] = "0b00111100111001000101100100010000";
        ram[111] = "0b00111010010000000110010011011111";
        ram[112] = "0b00111101000101000110000100010110";
        ram[113] = "0b10111110010000000010010100111001";
        ram[114] = "0b10111100111101000101011001111111";
        ram[115] = "0b10111100111111011010011110010110";
        ram[116] = "0b10111101111001001010111000000000";
        ram[117] = "0b10111110001101011000011111010111";
        ram[118] = "0b10111101111010101100010010110101";
        ram[119] = "0b10111110010001100111110110111011";


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


SC_MODULE(inference_conv2d_f3_1_0_4) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 120;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


inference_conv2d_f3_1_0_4_ram* meminst;


SC_CTOR(inference_conv2d_f3_1_0_4) {
meminst = new inference_conv2d_f3_1_0_4_ram("inference_conv2d_f3_1_0_4_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~inference_conv2d_f3_1_0_4() {
    delete meminst;
}


};//endmodule
#endif