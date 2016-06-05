// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __inference_conv2d_f3_0_1_6_H__
#define __inference_conv2d_f3_0_1_6_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct inference_conv2d_f3_0_1_6_ram : public sc_core::sc_module {

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


   SC_CTOR(inference_conv2d_f3_0_1_6_ram) {
        ram[0] = "0b10111101111010101011101000111000";
        ram[1] = "0b00111101010011110101111101101001";
        ram[2] = "0b00111101100101100111001001101000";
        ram[3] = "0b00111101111011000010110011100100";
        ram[4] = "0b10111101110100011110100001100000";
        ram[5] = "0b10111101001100101110111101000001";
        ram[6] = "0b00111101010101010100000000111001";
        ram[7] = "0b10111101000011000001110010100100";
        ram[8] = "0b00111101110100000111010110110100";
        ram[9] = "0b10111101110010001111100101100001";
        ram[10] = "0b10111101111000000010100001011111";
        ram[11] = "0b00111100110111111100100011110011";
        ram[12] = "0b10111101000011110101100100011110";
        ram[13] = "0b10111101010100010101001001101110";
        ram[14] = "0b10111110000110000101101001001111";
        ram[15] = "0b10111100111100011011000011101000";
        ram[16] = "0b00111100001101100111110010010100";
        ram[17] = "0b00111110010010010110101100110011";
        ram[18] = "0b00111101011010111101110011111110";
        ram[19] = "0b10111110000100111100001110100100";
        ram[20] = "0b00111101100110010011010111100001";
        ram[21] = "0b00111100101111000110100100000111";
        ram[22] = "0b00111101000001111000011001110010";
        ram[23] = "0b10111110011011000010111000110100";
        ram[24] = "0b10111101011000000001001110110111";
        ram[25] = "0b00111101110111100101110110011110";
        ram[26] = "0b10111101101000101010110000001010";
        ram[27] = "0b00111100100001100011000000110000";
        ram[28] = "0b00111110001010111101000001011011";
        ram[29] = "0b00111101001000111101010100001100";
        ram[30] = "0b10111011001110110100000011011110";
        ram[31] = "0b00111101100011000110110010001010";
        ram[32] = "0b10111101111100111000110011011010";
        ram[33] = "0b10111101100000011010110000110000";
        ram[34] = "0b10111110000101011111110011000010";
        ram[35] = "0b10111110001000001111100111010011";
        ram[36] = "0b00111101011001100101000100000010";
        ram[37] = "0b00111110001110010000011100010000";
        ram[38] = "0b00111110000001011001010001101100";
        ram[39] = "0b10111011010000010000101010100010";
        ram[40] = "0b10111100000010000000110000110011";
        ram[41] = "0b10111110001001011111111000010001";
        ram[42] = "0b00111110001010000110100010111010";
        ram[43] = "0b10111101001010011110010111000111";
        ram[44] = "0b00111101111010110100100111100000";
        ram[45] = "0b10111101110100010000110010110011";
        ram[46] = "0b00111100111001010100001110000110";
        ram[47] = "0b10111101111110111111100101000000";
        ram[48] = "0b00111110000000101101110100110111";
        ram[49] = "0b10111101101001101011100100111101";
        ram[50] = "0b00111110000111000111001101101001";
        ram[51] = "0b00111100011000100001101010100111";
        ram[52] = "0b00111010111101011100000000110110";
        ram[53] = "0b00111101110100111001110110100001";
        ram[54] = "0b00111110000100010010111011000111";
        ram[55] = "0b00111101011001000010000101111101";
        ram[56] = "0b10111101101000111101000111011001";
        ram[57] = "0b00111100010111010101100101110111";
        ram[58] = "0b00111101111110110001010110110101";
        ram[59] = "0b00111101010000100101101110101010";
        ram[60] = "0b10111101101110011111001000110100";
        ram[61] = "0b00111101110111001100001110100000";
        ram[62] = "0b10111101000101011001000011011100";
        ram[63] = "0b00111101000011111001101011111000";
        ram[64] = "0b00111101100100110010111011001100";
        ram[65] = "0b00111110000101101000111011000101";
        ram[66] = "0b00111110000000010001001011111101";
        ram[67] = "0b10111101001110001010100010001000";
        ram[68] = "0b00111010011101101100110100011110";
        ram[69] = "0b00111100111011101101000001100011";
        ram[70] = "0b00111100011001001100111010110111";
        ram[71] = "0b00111110000110110010101011110001";
        ram[72] = "0b00111101111001000100001010000101";
        ram[73] = "0b10111010101000110110010010011111";
        ram[74] = "0b10111101101110101111000011100111";
        ram[75] = "0b00111110000001111010011111001010";
        ram[76] = "0b00111101011111011001010111000010";
        ram[77] = "0b00111101000111111111010000001100";
        ram[78] = "0b00111101100000100001110101010100";
        ram[79] = "0b00111101110000111101010001101011";
        ram[80] = "0b10111110000111001001011001000110";
        ram[81] = "0b10111110001101000001101010101100";
        ram[82] = "0b00111101110001100101110100010001";
        ram[83] = "0b10111101000110110101001101000011";
        ram[84] = "0b00111110000010100110110101101010";
        ram[85] = "0b00111100100110010001010011011010";
        ram[86] = "0b00111110000010011111001001111000";
        ram[87] = "0b00111110001111011111100100111000";
        ram[88] = "0b10111100011100101100110111101000";
        ram[89] = "0b00111101111011001000111101110101";
        ram[90] = "0b00111110000111011001101101011111";
        ram[91] = "0b00111101110101000101111000001011";
        ram[92] = "0b00111110000011000010100010110011";
        ram[93] = "0b00111101110110111011010000001011";
        ram[94] = "0b00111110010000110101101111010101";
        ram[95] = "0b00111101011011011110011010001101";
        ram[96] = "0b10111101110011010111000111110011";
        ram[97] = "0b00111101111111111110110110100110";
        ram[98] = "0b00111101110000001101100100001110";
        ram[99] = "0b00111101100001101110110110010000";
        ram[100] = "0b00111101010010101011011111101010";
        ram[101] = "0b10111101101110110001001100010110";
        ram[102] = "0b10111101110100110010001001101100";
        ram[103] = "0b10111101000111111010000100110101";
        ram[104] = "0b10111100100101100110101011011011";
        ram[105] = "0b10111101110000000100011001110111";
        ram[106] = "0b10111011011000010110101101101010";
        ram[107] = "0b10111011100101101111001001110101";
        ram[108] = "0b00111101010111000110101111110111";
        ram[109] = "0b10111110010101001000101100100010";
        ram[110] = "0b10111101111110111100110000101001";
        ram[111] = "0b00111110001111000011011100011110";
        ram[112] = "0b10111100010101011101000111000100";
        ram[113] = "0b10111100100011001111010000000100";
        ram[114] = "0b00111110000001001100011100101010";
        ram[115] = "0b00111101110110110010010011101010";
        ram[116] = "0b00111101000000010010110101110111";
        ram[117] = "0b00111101100100001010001110100001";
        ram[118] = "0b00111100100111010100110101001110";
        ram[119] = "0b00111101010101111110101010100011";


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


SC_MODULE(inference_conv2d_f3_0_1_6) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 120;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


inference_conv2d_f3_0_1_6_ram* meminst;


SC_CTOR(inference_conv2d_f3_0_1_6) {
meminst = new inference_conv2d_f3_0_1_6_ram("inference_conv2d_f3_0_1_6_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~inference_conv2d_f3_0_1_6() {
    delete meminst;
}


};//endmodule
#endif
