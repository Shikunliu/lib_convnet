// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __inference_conv2d_f3_0_1_7_H__
#define __inference_conv2d_f3_0_1_7_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct inference_conv2d_f3_0_1_7_ram : public sc_core::sc_module {

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


   SC_CTOR(inference_conv2d_f3_0_1_7_ram) {
        ram[0] = "0b00111010101100110100111011001100";
        ram[1] = "0b00111100110110111111111011001111";
        ram[2] = "0b10111101111110010001111001100100";
        ram[3] = "0b10111101010000111110010101101000";
        ram[4] = "0b00111101000010101001110010100111";
        ram[5] = "0b10111110000001100000100110011010";
        ram[6] = "0b10111100111101001011001010001111";
        ram[7] = "0b00111110001001001101100110000100";
        ram[8] = "0b10111110000010011010000010101110";
        ram[9] = "0b00111011111011010101100000001000";
        ram[10] = "0b10111100001100111000011100010110";
        ram[11] = "0b10111100000011000011110001001110";
        ram[12] = "0b10111101001100000111110010000101";
        ram[13] = "0b10111100010011011001001110011100";
        ram[14] = "0b00111110000011110111111111010000";
        ram[15] = "0b00111110000001000001111100100001";
        ram[16] = "0b00111101001000100001110100101100";
        ram[17] = "0b00111110000110100010010111011001";
        ram[18] = "0b10111110001101011001111001100010";
        ram[19] = "0b10111110000000010100000101100011";
        ram[20] = "0b00111101100111100101110111100001";
        ram[21] = "0b10111100100000111101100110101001";
        ram[22] = "0b10111110000010101010100010101000";
        ram[23] = "0b10111101001101000101001000110010";
        ram[24] = "0b10111101110001001111111001000100";
        ram[25] = "0b10111101111100001010101110110100";
        ram[26] = "0b00111100100111111000011100011001";
        ram[27] = "0b00111101111010101011101000111000";
        ram[28] = "0b10111100100000001010101111110111";
        ram[29] = "0b10111110000101100011111001001011";
        ram[30] = "0b00111101101100100110101111111000";
        ram[31] = "0b10111101111001110110010000101000";
        ram[32] = "0b00111100110011111010000010111101";
        ram[33] = "0b00111100101101010000010011000101";
        ram[34] = "0b00111100101000100101110001001011";
        ram[35] = "0b10111101111111110001010110100101";
        ram[36] = "0b00111100010100000010011101100000";
        ram[37] = "0b00111101111101111101001100001011";
        ram[38] = "0b00111100110110111011110011110101";
        ram[39] = "0b00111101100110000110110110101000";
        ram[40] = "0b00111101011001011010101111011100";
        ram[41] = "0b00111101101100001010100000100100";
        ram[42] = "0b00111101111000010100010010001001";
        ram[43] = "0b10111101110100100001100110101000";
        ram[44] = "0b10111110010010110110010001011010";
        ram[45] = "0b00111100111110011010101110111110";
        ram[46] = "0b00111101010110100100100010011011";
        ram[47] = "0b00111101101110011111001010111011";
        ram[48] = "0b10111101100110001100111001110000";
        ram[49] = "0b00111011000010001001101001000011";
        ram[50] = "0b10111101000111111000101000100100";
        ram[51] = "0b00111110000101010001110110101100";
        ram[52] = "0b00111110000100011101101111001011";
        ram[53] = "0b10111101101001010010000010000001";
        ram[54] = "0b00111101011101010011001100000011";
        ram[55] = "0b00111110010010101110100000011001";
        ram[56] = "0b00111101100001110101000011000010";
        ram[57] = "0b00111100010011001101010001011010";
        ram[58] = "0b10111100110011011100111011000000";
        ram[59] = "0b10111101101000000011011100011010";
        ram[60] = "0b10111101101110110010101101000010";
        ram[61] = "0b00111101111110011100010000010001";
        ram[62] = "0b00111101000111000011010100000101";
        ram[63] = "0b10111110000011010111111101010010";
        ram[64] = "0b00111101111111000100111111000010";
        ram[65] = "0b00111101100111011101100101111111";
        ram[66] = "0b00111101100111001000100110111110";
        ram[67] = "0b00111101001000001000100001101011";
        ram[68] = "0b10111101110010011001000100011011";
        ram[69] = "0b00111110001110111101010111011100";
        ram[70] = "0b00111100101111001011100000010111";
        ram[71] = "0b00111101111010011101000011101010";
        ram[72] = "0b00111011111010000000101001000000";
        ram[73] = "0b10111101000011000110010010010010";
        ram[74] = "0b00111101111100011000110110101100";
        ram[75] = "0b00111110000101110111001100011001";
        ram[76] = "0b10111110001000010000000011100111";
        ram[77] = "0b00111101110100101000100001001000";
        ram[78] = "0b10111101111000000001110101011100";
        ram[79] = "0b10111101110111010111111011001100";
        ram[80] = "0b00111100101011010001011101011011";
        ram[81] = "0b00111101101101001010001011100010";
        ram[82] = "0b10111101111001001101000000010100";
        ram[83] = "0b00111101000101000010000010110100";
        ram[84] = "0b00111101001000011111001111000000";
        ram[85] = "0b10111011110000100110111101010001";
        ram[86] = "0b10111101110001100101001010111101";
        ram[87] = "0b10111110000001000010110011000011";
        ram[88] = "0b00111110000111111110010110000110";
        ram[89] = "0b00111101101100110011100111000001";
        ram[90] = "0b00111101000101100101000000011110";
        ram[91] = "0b10111100011010101110011101101010";
        ram[92] = "0b00111101101001110101010001101101";
        ram[93] = "0b10111101111010000100001001110100";
        ram[94] = "0b00111100001001001011111101101000";
        ram[95] = "0b00111101010110111000000110000001";
        ram[96] = "0b10111101000011001110101101101011";
        ram[97] = "0b10111110001010000110111100000101";
        ram[98] = "0b10111100111011011110111000011010";
        ram[99] = "0b00111110000000101111101010010100";
        ram[100] = "0b10111100011011100010011010111010";
        ram[101] = "0b00111101111100010001001110000011";
        ram[102] = "0b00111101101000011011110101010101";
        ram[103] = "0b10111110001101000010011001111000";
        ram[104] = "0b00111100100110110001100010001010";
        ram[105] = "0b00111101000101100001010100110000";
        ram[106] = "0b10111101010010001000001100001100";
        ram[107] = "0b10111100101111100011001011010110";
        ram[108] = "0b00111110000111110110100100000001";
        ram[109] = "0b00111110000111101100000000101111";
        ram[110] = "0b00111101100001001100100000000001";
        ram[111] = "0b00111110000110001100110000010100";
        ram[112] = "0b00111100001111110010000000111100";
        ram[113] = "0b00111101000001001001101111110110";
        ram[114] = "0b00111010010010011010010111100010";
        ram[115] = "0b10111101110110100101001110111001";
        ram[116] = "0b10111101000111110011100100110001";
        ram[117] = "0b00111100001010010101011101111101";
        ram[118] = "0b00111011001010101101110000001100";
        ram[119] = "0b00111101101011001101111110010010";


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


SC_MODULE(inference_conv2d_f3_0_1_7) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 120;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


inference_conv2d_f3_0_1_7_ram* meminst;


SC_CTOR(inference_conv2d_f3_0_1_7) {
meminst = new inference_conv2d_f3_0_1_7_ram("inference_conv2d_f3_0_1_7_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~inference_conv2d_f3_0_1_7() {
    delete meminst;
}


};//endmodule
#endif