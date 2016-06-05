// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __inference_conv2d_f3_3_2_0_H__
#define __inference_conv2d_f3_3_2_0_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct inference_conv2d_f3_3_2_0_ram : public sc_core::sc_module {

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


   SC_CTOR(inference_conv2d_f3_3_2_0_ram) {
        ram[0] = "0b10111101111001000110011100111000";
        ram[1] = "0b10111100110111110110110100011000";
        ram[2] = "0b10111101000000000011000000000110";
        ram[3] = "0b10111110000001111011100001001110";
        ram[4] = "0b10111101100100001010101000000111";
        ram[5] = "0b00111100110101100100101010001111";
        ram[6] = "0b10111101111111011100011000011001";
        ram[7] = "0b10111101110000101110011000000110";
        ram[8] = "0b00111101101110111100110100011011";
        ram[9] = "0b10111101101001010111010011011100";
        ram[10] = "0b10111101111101010100101010000000";
        ram[11] = "0b10111110010101011011001111100001";
        ram[12] = "0b00111100000010011011001001010001";
        ram[13] = "0b10111110000100010111011001010111";
        ram[14] = "0b00111101011010011001101100011111";
        ram[15] = "0b00111110001111000111110101011111";
        ram[16] = "0b10111101001001111010110000010110";
        ram[17] = "0b00111101000101100101011111111011";
        ram[18] = "0b00111101100010001010100001101101";
        ram[19] = "0b10111110001010011000101111111000";
        ram[20] = "0b00111101110101010000111010111011";
        ram[21] = "0b10111101100010011011010000100001";
        ram[22] = "0b00111101011000001001110011111001";
        ram[23] = "0b00111101000111101100111011011101";
        ram[24] = "0b00111101101110001110110111100101";
        ram[25] = "0b00111101101000011100001111010101";
        ram[26] = "0b00111100101001011101001001010111";
        ram[27] = "0b00111100110101000000010001100100";
        ram[28] = "0b10111110001011011001100110001001";
        ram[29] = "0b10111101101001001010010010010000";
        ram[30] = "0b10111101101100010010111000100110";
        ram[31] = "0b00111101111101001100100001111010";
        ram[32] = "0b00111110000010111011111101010001";
        ram[33] = "0b10111101110000010101000000010010";
        ram[34] = "0b00111101101001011100011110001010";
        ram[35] = "0b10111101000110101010110000000011";
        ram[36] = "0b10111101100010110101011011010011";
        ram[37] = "0b10111110000100100110000100111001";
        ram[38] = "0b00111110000111101111010000010111";
        ram[39] = "0b00111101111000110000011111110010";
        ram[40] = "0b00111101111110001111110011010110";
        ram[41] = "0b00111100101010011101010011100110";
        ram[42] = "0b00111101100011001110100100101010";
        ram[43] = "0b10111110010000111011011000000011";
        ram[44] = "0b10111110000000101011011000101000";
        ram[45] = "0b00111110000100010001111000000000";
        ram[46] = "0b00111110010001111100000101111011";
        ram[47] = "0b00111101111001111100011000110010";
        ram[48] = "0b00111101011001100011101001000001";
        ram[49] = "0b10111100110001011001100000100101";
        ram[50] = "0b10111100100010011110100111111001";
        ram[51] = "0b00111101010000001001000100000101";
        ram[52] = "0b10111100011100000010000010001111";
        ram[53] = "0b00111110000010100101010000111111";
        ram[54] = "0b00111101011100001011101011101001";
        ram[55] = "0b10111100110001001111111101111001";
        ram[56] = "0b10111100011101111001110010000100";
        ram[57] = "0b10111101000011000000100101011000";
        ram[58] = "0b10111110010100011010111000101110";
        ram[59] = "0b10111110010111000001000000001110";
        ram[60] = "0b10111101011101110001001001010000";
        ram[61] = "0b00111101100010100111111010011100";
        ram[62] = "0b10111101011011101010110101011101";
        ram[63] = "0b10111101010011001010101100111111";
        ram[64] = "0b10111101100110000011101001000110";
        ram[65] = "0b00111100000110000111100100111110";
        ram[66] = "0b00111101011001100110000101000011";
        ram[67] = "0b10111110000001011010010010101101";
        ram[68] = "0b00111100110011111110011000100111";
        ram[69] = "0b00111101111111101011001100010100";
        ram[70] = "0b10111101111000100100110111010011";
        ram[71] = "0b10111101101100100000111010011000";
        ram[72] = "0b10111101000111011110111100011001";
        ram[73] = "0b00111101100101111110110011001001";
        ram[74] = "0b00111100100100111110011001100111";
        ram[75] = "0b10111101010011100111101011101101";
        ram[76] = "0b00111010000101000001011110001011";
        ram[77] = "0b00111100100101101110010101010101";
        ram[78] = "0b00111101101000010000110010100101";
        ram[79] = "0b10111100111000100001101101111110";
        ram[80] = "0b10111100111101111010110011100000";
        ram[81] = "0b10111101110101001010001000110100";
        ram[82] = "0b10111110000011000000111111001011";
        ram[83] = "0b00111101001111111100110011101111";
        ram[84] = "0b00111101111010011000110111001110";
        ram[85] = "0b10111110001101000110110000110011";
        ram[86] = "0b10111101110111110010011011110010";
        ram[87] = "0b10111110001100111100110100010100";
        ram[88] = "0b10111100111100110111101011101100";
        ram[89] = "0b00111110011000101001000001101001";
        ram[90] = "0b10111100101011101011000101011001";
        ram[91] = "0b10111101111110011100111000000111";
        ram[92] = "0b00111100101011110100011000001001";
        ram[93] = "0b10111101111001111101011001110011";
        ram[94] = "0b00111101000101100001010101001011";
        ram[95] = "0b00111101000100011000011000011111";
        ram[96] = "0b00111100100010011110010110010010";
        ram[97] = "0b10111100000010100001011101100110";
        ram[98] = "0b10111101011011111000011010100001";
        ram[99] = "0b10111100001100001011100100000101";
        ram[100] = "0b00111101111000101110011001100100";
        ram[101] = "0b10111110001111110110001100111101";
        ram[102] = "0b00111110000000101000111001010000";
        ram[103] = "0b10111101111010010011010110111001";
        ram[104] = "0b10111110011101111010000101111111";
        ram[105] = "0b10111101101111100101110011110000";
        ram[106] = "0b00111100101010011101111001010110";
        ram[107] = "0b00111101000110001111010111010000";
        ram[108] = "0b10111101001110011000111110111110";
        ram[109] = "0b10111100010101011011001110010001";
        ram[110] = "0b10111101010110101011000000011010";
        ram[111] = "0b10111101011101110110101110100111";
        ram[112] = "0b00111101110100110011011101100101";
        ram[113] = "0b00111100100000000100011001110111";
        ram[114] = "0b00111011001101001010101000010110";
        ram[115] = "0b10111110000101101010101101011000";
        ram[116] = "0b10111101100000000110000100011001";
        ram[117] = "0b00111101101001101100011101100101";
        ram[118] = "0b00111100010001110010100111110110";
        ram[119] = "0b00111011111111001010110110100110";


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


SC_MODULE(inference_conv2d_f3_3_2_0) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 120;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


inference_conv2d_f3_3_2_0_ram* meminst;


SC_CTOR(inference_conv2d_f3_3_2_0) {
meminst = new inference_conv2d_f3_3_2_0_ram("inference_conv2d_f3_3_2_0_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~inference_conv2d_f3_3_2_0() {
    delete meminst;
}


};//endmodule
#endif
