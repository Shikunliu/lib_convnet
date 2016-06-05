// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __inference_conv2d_f3_1_1_13_H__
#define __inference_conv2d_f3_1_1_13_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct inference_conv2d_f3_1_1_13_ram : public sc_core::sc_module {

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


   SC_CTOR(inference_conv2d_f3_1_1_13_ram) {
        ram[0] = "0b10111101010100000110100110100101";
        ram[1] = "0b10111110000100100111011110000001";
        ram[2] = "0b00111110000011101010111010011111";
        ram[3] = "0b00111101111101011100011011000001";
        ram[4] = "0b00111110000000011010010100000001";
        ram[5] = "0b10111101000000110110000111101010";
        ram[6] = "0b00111101100000100011110000110101";
        ram[7] = "0b10111110001101110110011011000111";
        ram[8] = "0b00111110000100000110111001011101";
        ram[9] = "0b10111101110000101011001111110101";
        ram[10] = "0b00111101011100100100011111001011";
        ram[11] = "0b00111100100001110110001011001011";
        ram[12] = "0b10111101010100101111110001000001";
        ram[13] = "0b00111101101111010000010010100011";
        ram[14] = "0b10111101001000101101000011001011";
        ram[15] = "0b10111101100110110111111011111100";
        ram[16] = "0b10111100010011000100011000101010";
        ram[17] = "0b00111101110110011001001001000011";
        ram[18] = "0b10111101011111101100111101001001";
        ram[19] = "0b10111011101110100010101110100000";
        ram[20] = "0b10111110000011110011000111110100";
        ram[21] = "0b00111101101010010000001100010100";
        ram[22] = "0b00111101111010011010001001000000";
        ram[23] = "0b00111100001110101010000000001111";
        ram[24] = "0b00111110001000110000010100010000";
        ram[25] = "0b10111101101101111101110110111101";
        ram[26] = "0b10111101101100110010101011101011";
        ram[27] = "0b10111110001011000011111000110010";
        ram[28] = "0b00111101100001001011001000001001";
        ram[29] = "0b00111101101111011110110011100101";
        ram[30] = "0b00111101010110100000101100101001";
        ram[31] = "0b10111101001001111111110100111111";
        ram[32] = "0b00111100000101100010010001100100";
        ram[33] = "0b10111100111111110000100111001011";
        ram[34] = "0b00111101100110100100110100111001";
        ram[35] = "0b00111101101010111100101011011010";
        ram[36] = "0b10111110001101010011100110111001";
        ram[37] = "0b10111100101011010011010011101100";
        ram[38] = "0b00111101111010111000000111111001";
        ram[39] = "0b10111101111110101100001011011111";
        ram[40] = "0b10111010101110111100000010110110";
        ram[41] = "0b10111101111001111010110110001110";
        ram[42] = "0b10111101110011010010000010110000";
        ram[43] = "0b00111100110000010101000100111001";
        ram[44] = "0b10111100000001010010010001110111";
        ram[45] = "0b00111110001010000110011110101110";
        ram[46] = "0b10111011111000010000001100111011";
        ram[47] = "0b10111110000101111001001011010001";
        ram[48] = "0b10111100100000100101100000110100";
        ram[49] = "0b00111101110101111101111100011010";
        ram[50] = "0b00111110001101010000110101101011";
        ram[51] = "0b00111101110111111011111110000011";
        ram[52] = "0b10111101101011101100011110101110";
        ram[53] = "0b00111101101011111011100101100001";
        ram[54] = "0b10111101100010101000000100010011";
        ram[55] = "0b00111101100011101111101001000111";
        ram[56] = "0b10111101001111001001010011000001";
        ram[57] = "0b10111110000001011010100110101000";
        ram[58] = "0b00111100100111001011111110111111";
        ram[59] = "0b00111101110001111011111000010010";
        ram[60] = "0b10111011101010110000110001011110";
        ram[61] = "0b10111110001110000100101101011110";
        ram[62] = "0b10111011110010000101010100101110";
        ram[63] = "0b00111101100000000001101101101100";
        ram[64] = "0b00111100101100001111100011000110";
        ram[65] = "0b00111101110100110100001001101000";
        ram[66] = "0b00111101101010010001100001010000";
        ram[67] = "0b00111101101001101011001111111111";
        ram[68] = "0b10111100101010110111000111010100";
        ram[69] = "0b00111011101001000110100111101101";
        ram[70] = "0b00111011100110111010111001000111";
        ram[71] = "0b00111101011111101101111100000011";
        ram[72] = "0b00111101010010000101101111101111";
        ram[73] = "0b00111101110011011101011000010111";
        ram[74] = "0b10111011110111101110101010110010";
        ram[75] = "0b00111011100001100011010100111001";
        ram[76] = "0b00111100101011110011111100011101";
        ram[77] = "0b00111101101001010001100111100110";
        ram[78] = "0b00111101011100011110100000001111";
        ram[79] = "0b00111101110100110100100010110010";
        ram[80] = "0b00111101011010100111110011000110";
        ram[81] = "0b00111101101000011101000101101001";
        ram[82] = "0b10111110000110011000100000001001";
        ram[83] = "0b00111100111011011010001001100101";
        ram[84] = "0b00111101101110100001000110011100";
        ram[85] = "0b10111101111100110111110110100110";
        ram[86] = "0b00111101110000111010000111010011";
        ram[87] = "0b10111100110101000011000001101110";
        ram[88] = "0b00111101100011101101010010100010";
        ram[89] = "0b10111011101000111000101100110101";
        ram[90] = "0b00111110001001100001110000110111";
        ram[91] = "0b10111100110100101011110111011101";
        ram[92] = "0b00111101101010100000111101110110";
        ram[93] = "0b00111110001011101010100110100100";
        ram[94] = "0b10111011101101010000011100001000";
        ram[95] = "0b00111101011101001010000111111110";
        ram[96] = "0b00111101000001101111101111010010";
        ram[97] = "0b10111101011101001111000100001110";
        ram[98] = "0b10111101110101011101111001011001";
        ram[99] = "0b10111101101101110011110010000101";
        ram[100] = "0b10111100100000100011010100101111";
        ram[101] = "0b10111100100101100110101010100110";
        ram[102] = "0b00111101100001111100111101111010";
        ram[103] = "0b10111101100110110011000101010111";
        ram[104] = "0b00111101110010000100101000110111";
        ram[105] = "0b10111110001010101100010000101111";
        ram[106] = "0b00111101011000000110101101000101";
        ram[107] = "0b10111101111011011101000001010011";
        ram[108] = "0b00111101101110001101000101111011";
        ram[109] = "0b00111110010010110011011111001010";
        ram[110] = "0b00111101001000110101001111011101";
        ram[111] = "0b00111110000001101111111100111011";
        ram[112] = "0b00111101101001000010011100011001";
        ram[113] = "0b00111100010001100111001100010110";
        ram[114] = "0b00111101111100101110111010000101";
        ram[115] = "0b00111100110101011000111101001001";
        ram[116] = "0b00111101001110011000111001111100";
        ram[117] = "0b00111100111100110100001010111000";
        ram[118] = "0b00111101111111011101100011111001";
        ram[119] = "0b10111101110101100111000110101100";


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


SC_MODULE(inference_conv2d_f3_1_1_13) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 120;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


inference_conv2d_f3_1_1_13_ram* meminst;


SC_CTOR(inference_conv2d_f3_1_1_13) {
meminst = new inference_conv2d_f3_1_1_13_ram("inference_conv2d_f3_1_1_13_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~inference_conv2d_f3_1_1_13() {
    delete meminst;
}


};//endmodule
#endif
