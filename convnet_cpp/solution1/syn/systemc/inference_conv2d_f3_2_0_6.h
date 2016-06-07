// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __inference_conv2d_f3_2_0_6_H__
#define __inference_conv2d_f3_2_0_6_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct inference_conv2d_f3_2_0_6_ram : public sc_core::sc_module {

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


   SC_CTOR(inference_conv2d_f3_2_0_6_ram) {
        ram[0] = "0b00111101101110111111110000000111";
        ram[1] = "0b00111101100000110001111100101100";
        ram[2] = "0b00111101000101010011100100110010";
        ram[3] = "0b10111100101111100111011010010011";
        ram[4] = "0b10111101100000110010010111111101";
        ram[5] = "0b00111101100101000011111001111011";
        ram[6] = "0b10111101111100010111010110001110";
        ram[7] = "0b10111011101000010110110010110111";
        ram[8] = "0b00111101110000111101111101111011";
        ram[9] = "0b00111100010010001101110000010010";
        ram[10] = "0b00111101101001001100001001010111";
        ram[11] = "0b10111100101111010001001010110000";
        ram[12] = "0b00111100100011001100000101000100";
        ram[13] = "0b10111101010000001000010101000110";
        ram[14] = "0b10111101101011111101100101110111";
        ram[15] = "0b10111100111101010100110011101001";
        ram[16] = "0b10111100100110100001010110001011";
        ram[17] = "0b00111100001010100101100010011001";
        ram[18] = "0b10111101001100111001111000101000";
        ram[19] = "0b10111101101001111111110101011010";
        ram[20] = "0b00111110000110010101110111010101";
        ram[21] = "0b10111101000000010110011010000010";
        ram[22] = "0b10111101110011011000101110100100";
        ram[23] = "0b00111011100110010010100000000101";
        ram[24] = "0b10111110001011100110111100101111";
        ram[25] = "0b10111100100101000111010011001100";
        ram[26] = "0b10111101011100110011101000011111";
        ram[27] = "0b00111110000000111001001111101110";
        ram[28] = "0b10111101100011100100100010100110";
        ram[29] = "0b00111100100010100010110010101010";
        ram[30] = "0b00111010001010100001000000100011";
        ram[31] = "0b10111101010110101011100110001010";
        ram[32] = "0b10111101110010011110110010110011";
        ram[33] = "0b00111110001111110000100110010110";
        ram[34] = "0b00111101000010100111101001111000";
        ram[35] = "0b10111101100110011011011011101000";
        ram[36] = "0b00111101100110001101001011001010";
        ram[37] = "0b00111110000000110000101010010001";
        ram[38] = "0b00111110010011000000011010011110";
        ram[39] = "0b00111101000000001110011110111100";
        ram[40] = "0b00111101000000101110000101000001";
        ram[41] = "0b10111011111010001011101101000000";
        ram[42] = "0b00111101100110001101100000110001";
        ram[43] = "0b00111101100011011000010011010011";
        ram[44] = "0b10111101110010011101110111001111";
        ram[45] = "0b00111101001000011001001010100111";
        ram[46] = "0b00111100101110011101010111100101";
        ram[47] = "0b10111100110001000111010000111001";
        ram[48] = "0b10111110001100111011100011100101";
        ram[49] = "0b10111101100101010011011111100011";
        ram[50] = "0b10111101001001010001100110010101";
        ram[51] = "0b10111100100100011101000111101111";
        ram[52] = "0b00111100000111100011010101001010";
        ram[53] = "0b00111101010101001000010000110110";
        ram[54] = "0b10111110000010111001011011110010";
        ram[55] = "0b00111001100000000101001000001111";
        ram[56] = "0b00111110000001110101000001111111";
        ram[57] = "0b10111101100010100110111100010111";
        ram[58] = "0b00111100101011010001101010000000";
        ram[59] = "0b00111101001110010001001010100110";
        ram[60] = "0b10111100100001110110110101111101";
        ram[61] = "0b00111100110010100100011011100001";
        ram[62] = "0b00111101110000010110101000010011";
        ram[63] = "0b10111110011000111010001011100000";
        ram[64] = "0b00111011111001011101110011111111";
        ram[65] = "0b10111101100001101011001101010000";
        ram[66] = "0b10111101001111010010110100000010";
        ram[67] = "0b00111101110110011110101101100100";
        ram[68] = "0b10111110000100000010111010101001";
        ram[69] = "0b00111110000101100000100001001010";
        ram[70] = "0b00111101001111101001110010001000";
        ram[71] = "0b10111100011110011000110100011111";
        ram[72] = "0b00111101111001000001101010101100";
        ram[73] = "0b10111101010110010010000010011000";
        ram[74] = "0b10111101011000110001000101100010";
        ram[75] = "0b10111010100111011100100001111101";
        ram[76] = "0b10111100101111111101000100111100";
        ram[77] = "0b10111110001011110011010101011101";
        ram[78] = "0b00111110001000000101110010001001";
        ram[79] = "0b10111100111101001101111110100110";
        ram[80] = "0b10111011010010001001101010111001";
        ram[81] = "0b00111101110100000100111001100010";
        ram[82] = "0b10111110010111111000010100001110";
        ram[83] = "0b10111100000011010000010101101100";
        ram[84] = "0b00111100011110100001011001000111";
        ram[85] = "0b10111110001010101110111010100110";
        ram[86] = "0b10111101011110011010100110001010";
        ram[87] = "0b10111101000000010000000001111011";
        ram[88] = "0b00111101000100101110100100101100";
        ram[89] = "0b00111101110011000001100001111111";
        ram[90] = "0b00111100111010110010111010111000";
        ram[91] = "0b10111101000010000101100110000110";
        ram[92] = "0b00111101000001001110010100100111";
        ram[93] = "0b10111100010101011010001110100001";
        ram[94] = "0b10111100000001000000111101111001";
        ram[95] = "0b10111110000000111010001100100011";
        ram[96] = "0b00111101111111101101101111111001";
        ram[97] = "0b00111101101010001011000111101011";
        ram[98] = "0b00111100110111110101100100101100";
        ram[99] = "0b10111101101100011111110100010101";
        ram[100] = "0b00111110000101101001010000000011";
        ram[101] = "0b10111100011111011010001011000011";
        ram[102] = "0b10111101100011001011100001011010";
        ram[103] = "0b00111101100010111101111110101010";
        ram[104] = "0b00111101101011010001011100110010";
        ram[105] = "0b00111101101000001011100000100001";
        ram[106] = "0b00111101110010000100101000000001";
        ram[107] = "0b10111101110110100101001110111001";
        ram[108] = "0b10111101000101001100111110000000";
        ram[109] = "0b10111011110100111100010100001111";
        ram[110] = "0b00111110000001011001101010110111";
        ram[111] = "0b10111011011010101111101110110111";
        ram[112] = "0b10111101101011000000101000010100";
        ram[113] = "0b10111101110010000110011011010111";
        ram[114] = "0b10111101011111011110010100100011";
        ram[115] = "0b00111101110000110101100110101111";
        ram[116] = "0b10111101101000111001001101110110";
        ram[117] = "0b00111100100111101010111001000001";
        ram[118] = "0b10111100000100100110000011001011";
        ram[119] = "0b10111101100011101001110010001000";


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


SC_MODULE(inference_conv2d_f3_2_0_6) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 120;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


inference_conv2d_f3_2_0_6_ram* meminst;


SC_CTOR(inference_conv2d_f3_2_0_6) {
meminst = new inference_conv2d_f3_2_0_6_ram("inference_conv2d_f3_2_0_6_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~inference_conv2d_f3_2_0_6() {
    delete meminst;
}


};//endmodule
#endif