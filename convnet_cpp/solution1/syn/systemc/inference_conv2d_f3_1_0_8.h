// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __inference_conv2d_f3_1_0_8_H__
#define __inference_conv2d_f3_1_0_8_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct inference_conv2d_f3_1_0_8_ram : public sc_core::sc_module {

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


   SC_CTOR(inference_conv2d_f3_1_0_8_ram) {
        ram[0] = "0b10111100110000111000111110100010";
        ram[1] = "0b10111100100100011101000101001110";
        ram[2] = "0b10111101001011011011001011110110";
        ram[3] = "0b00111101001000110100100110010110";
        ram[4] = "0b10111101000010101001010101010000";
        ram[5] = "0b10111110011100001001010010100011";
        ram[6] = "0b10111101100010001011111101010111";
        ram[7] = "0b10111101111000000100100011100000";
        ram[8] = "0b10111101011000000111111111101101";
        ram[9] = "0b10111100111011100001001100111001";
        ram[10] = "0b00111100110111011000010111101101";
        ram[11] = "0b10111100110001011100011111110110";
        ram[12] = "0b00111100010100101000011111111000";
        ram[13] = "0b00111101011001011010000101111010";
        ram[14] = "0b10111011000000100101101010001110";
        ram[15] = "0b00111110010010110100001010001001";
        ram[16] = "0b00111100011111110100101001100011";
        ram[17] = "0b00111101111111110010000110110100";
        ram[18] = "0b10111110001011100110101101000000";
        ram[19] = "0b00111110000011100111000011000001";
        ram[20] = "0b10111100110000000101001110101101";
        ram[21] = "0b10111101000110010000110011100010";
        ram[22] = "0b10111100000100000100010110111110";
        ram[23] = "0b00111101011100111000111101000100";
        ram[24] = "0b10111101101101110111101010100110";
        ram[25] = "0b00111101000000001011001000100111";
        ram[26] = "0b00111101100010110111101111001010";
        ram[27] = "0b10111100110011100101101110101110";
        ram[28] = "0b00111110011111101100110010000001";
        ram[29] = "0b00111101000001101001011111100101";
        ram[30] = "0b00111110011110110111111001001110";
        ram[31] = "0b10111110010110100111000011010010";
        ram[32] = "0b00111101100111011100111001100010";
        ram[33] = "0b10111101100111111101000110100111";
        ram[34] = "0b00111110001100101111110001101001";
        ram[35] = "0b00111101111011100011110001010011";
        ram[36] = "0b00111101101011011100000010001011";
        ram[37] = "0b10111101101001110010101000000011";
        ram[38] = "0b00111101100101110001110010100100";
        ram[39] = "0b10111101111001100000100000000111";
        ram[40] = "0b10111101001010011100100010000110";
        ram[41] = "0b00111110011011111101110110101001";
        ram[42] = "0b10111101000000001111011101110111";
        ram[43] = "0b10111101000110110110101010100101";
        ram[44] = "0b00111101101001111011001010110010";
        ram[45] = "0b10111110001101111001101001101011";
        ram[46] = "0b10111101111101001101011000011011";
        ram[47] = "0b10111110000100000110000101000001";
        ram[48] = "0b00111101110111100000100100110101";
        ram[49] = "0b00111011100010010100001101100000";
        ram[50] = "0b10111101001110110111111001011011";
        ram[51] = "0b00111110001010001000000110100001";
        ram[52] = "0b00111100000111101000001101011001";
        ram[53] = "0b10111101000111110111100111111110";
        ram[54] = "0b00111101110011100110010010110010";
        ram[55] = "0b00111110001000111110010001101001";
        ram[56] = "0b10111110010111110011000110110001";
        ram[57] = "0b00111110000001110100011000000010";
        ram[58] = "0b00111110001011110001011001101110";
        ram[59] = "0b10111101010010110010000011111011";
        ram[60] = "0b10111101101011110001101101011100";
        ram[61] = "0b00111101100011010111101111000001";
        ram[62] = "0b00111101111111011010011010100100";
        ram[63] = "0b10111101100000110101100101111001";
        ram[64] = "0b10111100001111011001101111010111";
        ram[65] = "0b00111110000101000010101110110110";
        ram[66] = "0b10111110000110101000011111100100";
        ram[67] = "0b10111101010000001110001111110110";
        ram[68] = "0b10111101101001001100100010100010";
        ram[69] = "0b00111100101000110110010111001011";
        ram[70] = "0b00111110000111000100101101001101";
        ram[71] = "0b10111101100011011110000100100111";
        ram[72] = "0b10111110011001101011011111101101";
        ram[73] = "0b00111011100000100110001010011011";
        ram[74] = "0b10111110000100001101000010101011";
        ram[75] = "0b00111101010101111011001110110001";
        ram[76] = "0b10111101001011101010011101001000";
        ram[77] = "0b00111101100010110101111001100000";
        ram[78] = "0b00111101001011101111001010101100";
        ram[79] = "0b10111101101010000111011101110110";
        ram[80] = "0b00111100110101001101100101000000";
        ram[81] = "0b10111110000011000000001100110110";
        ram[82] = "0b00111110001101011111001001000101";
        ram[83] = "0b10111110000111111100000000001001";
        ram[84] = "0b10111100110111100110100110101101";
        ram[85] = "0b10111100010110011001101101111101";
        ram[86] = "0b10111011110101001110110111101110";
        ram[87] = "0b10111110000001101011011111101101";
        ram[88] = "0b10111110000010001101011111100000";
        ram[89] = "0b00111101000111100111011001011101";
        ram[90] = "0b10111101010101100110100101001001";
        ram[91] = "0b10111110000000000000011000001000";
        ram[92] = "0b00111110000110100000001100111110";
        ram[93] = "0b10111101000110100011110010100111";
        ram[94] = "0b00111101111001110111000101000011";
        ram[95] = "0b10111101101100110001001011011010";
        ram[96] = "0b10111100100000100110011001000001";
        ram[97] = "0b10111100010010101001011010010010";
        ram[98] = "0b10111101000111110010011010111100";
        ram[99] = "0b10111100101110100011000111000000";
        ram[100] = "0b10111101110110101111001110100001";
        ram[101] = "0b10111101000101000111101000100101";
        ram[102] = "0b10111101100100101001111011100001";
        ram[103] = "0b00111101000011111011110010111100";
        ram[104] = "0b00111110000111101111111010010011";
        ram[105] = "0b00111101100010101000101101001100";
        ram[106] = "0b10111110100100000100101100111100";
        ram[107] = "0b10111101100011010110000010110100";
        ram[108] = "0b10111100101110100010110111000100";
        ram[109] = "0b10111101111101001110010001000011";
        ram[110] = "0b00111101100010011110001100101000";
        ram[111] = "0b10111101000010010000101101011100";
        ram[112] = "0b00111101000000000110100001010101";
        ram[113] = "0b00111110001100000010000010000001";
        ram[114] = "0b00111100111010110011001001111110";
        ram[115] = "0b10111010101101011011011110000111";
        ram[116] = "0b00111101100001111110111011111101";
        ram[117] = "0b10111101100011010010100111011100";
        ram[118] = "0b00111101110001001000100001110110";
        ram[119] = "0b10111101011111001001110010011110";


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


SC_MODULE(inference_conv2d_f3_1_0_8) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 120;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


inference_conv2d_f3_1_0_8_ram* meminst;


SC_CTOR(inference_conv2d_f3_1_0_8) {
meminst = new inference_conv2d_f3_1_0_8_ram("inference_conv2d_f3_1_0_8_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~inference_conv2d_f3_1_0_8() {
    delete meminst;
}


};//endmodule
#endif
