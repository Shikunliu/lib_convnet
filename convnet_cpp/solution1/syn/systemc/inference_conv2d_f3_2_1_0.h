// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __inference_conv2d_f3_2_1_0_H__
#define __inference_conv2d_f3_2_1_0_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct inference_conv2d_f3_2_1_0_ram : public sc_core::sc_module {

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


   SC_CTOR(inference_conv2d_f3_2_1_0_ram) {
        ram[0] = "0b00111110000001001100010101010100";
        ram[1] = "0b10111101111110011001000110111100";
        ram[2] = "0b10111101100010011001001001101011";
        ram[3] = "0b10111101000010010100101101101110";
        ram[4] = "0b10111100110101100011010010001010";
        ram[5] = "0b00111101101100011010010111011000";
        ram[6] = "0b10111101000011110011010001101011";
        ram[7] = "0b10111110001001100110111000000001";
        ram[8] = "0b00111110011000100010011101001010";
        ram[9] = "0b10111101110110111001111110011001";
        ram[10] = "0b10111101110010100001011110111110";
        ram[11] = "0b10111101001010010100110100110110";
        ram[12] = "0b10111011111011011001010101011010";
        ram[13] = "0b00111100101000110011100011101010";
        ram[14] = "0b00111011111001001000110101001000";
        ram[15] = "0b10111110001100001000111100100001";
        ram[16] = "0b10111101111101000111101001011011";
        ram[17] = "0b10111110000000011110000000111111";
        ram[18] = "0b00111101110010101001001000001111";
        ram[19] = "0b10111101110010000000010111100110";
        ram[20] = "0b00111101011010100110000100010111";
        ram[21] = "0b00111101011010011000011011111101";
        ram[22] = "0b10111001111100001010111010000111";
        ram[23] = "0b00111101001110010011110001100010";
        ram[24] = "0b00111101001010101111100010011100";
        ram[25] = "0b10111100111100101000011011010000";
        ram[26] = "0b10111110001100111001011010001101";
        ram[27] = "0b00111100110110001010000101001100";
        ram[28] = "0b10111100111111000010101011110100";
        ram[29] = "0b00111101011000111100011011111111";
        ram[30] = "0b10111101000111111010111111100100";
        ram[31] = "0b10111011100110111011111110001111";
        ram[32] = "0b00111100111100111100111111011011";
        ram[33] = "0b10111110000101100111110001101100";
        ram[34] = "0b10111101101011001001111000111110";
        ram[35] = "0b10111100111110110000011000110001";
        ram[36] = "0b00111110000110001010001100101111";
        ram[37] = "0b00111100101000100110000001111101";
        ram[38] = "0b00111101000000000011100111000111";
        ram[39] = "0b00111101000000100111010111100001";
        ram[40] = "0b10111100100001001000001110001000";
        ram[41] = "0b10111101100010011001100100111100";
        ram[42] = "0b10111101010110101010100011011110";
        ram[43] = "0b10111011101100000011010111111110";
        ram[44] = "0b00111110001011110010010000010000";
        ram[45] = "0b00111101111111101011000011111011";
        ram[46] = "0b10111110001001110111110001000110";
        ram[47] = "0b00111101011100000011100010101101";
        ram[48] = "0b00111101000001011000100111001000";
        ram[49] = "0b10111101111101011000111000100010";
        ram[50] = "0b10111101011010010000011110010110";
        ram[51] = "0b10111100100101000000010010011010";
        ram[52] = "0b10111100101010100100000000010000";
        ram[53] = "0b10111101100001111000011000000110";
        ram[54] = "0b10111101000001111001100001100000";
        ram[55] = "0b10111110001000010110010001000001";
        ram[56] = "0b10111101010000001101100111100101";
        ram[57] = "0b10111101100100000000000011111111";
        ram[58] = "0b10111110000011010101011001101101";
        ram[59] = "0b00111101111110111011111000000001";
        ram[60] = "0b10111101111110100000011000100001";
        ram[61] = "0b00111101111100110111000010001011";
        ram[62] = "0b00111101010001110001111011110011";
        ram[63] = "0b00111101111011110110010100010011";
        ram[64] = "0b10111011100101001001111111100000";
        ram[65] = "0b10111101100110001110100001111111";
        ram[66] = "0b10111101000011101110010010000100";
        ram[67] = "0b00111100110000000010110010101011";
        ram[68] = "0b00111110001110011010000110111010";
        ram[69] = "0b00111101100100100010111110101101";
        ram[70] = "0b00111110010100101010011001101110";
        ram[71] = "0b00111101010000001000010001101111";
        ram[72] = "0b10111101010001100001011000010100";
        ram[73] = "0b10111110001000101101111000000001";
        ram[74] = "0b10111101011111000000100100010101";
        ram[75] = "0b00111101001101100000110101010011";
        ram[76] = "0b00111101100111110000011110100101";
        ram[77] = "0b10111011100000101111100111110000";
        ram[78] = "0b10111100110101010000110110101110";
        ram[79] = "0b00111101100101000100100001111111";
        ram[80] = "0b00111011010011011010000010110010";
        ram[81] = "0b00111101100101100011001001110001";
        ram[82] = "0b10111101101110110100110011111000";
        ram[83] = "0b00111101101111110110110011111101";
        ram[84] = "0b10111101010010111011011110101001";
        ram[85] = "0b00111010101100010101000100011011";
        ram[86] = "0b10111101100011011001100110100100";
        ram[87] = "0b00111101100101000111100111010101";
        ram[88] = "0b00111110001010110011101011101111";
        ram[89] = "0b00111011110001110100000110001000";
        ram[90] = "0b00111101011111101001111111111110";
        ram[91] = "0b00111101000111010010001111111101";
        ram[92] = "0b00111101101000110110000100100001";
        ram[93] = "0b00111110000011010001010100100111";
        ram[94] = "0b10111101111011110111000010011011";
        ram[95] = "0b10111101101111100010100000111111";
        ram[96] = "0b00111110000110101100000011000110";
        ram[97] = "0b00111110000001001011101111100100";
        ram[98] = "0b00111100100000011101110110000110";
        ram[99] = "0b00111101110000110001110100111011";
        ram[100] = "0b10111110000000101100110101111101";
        ram[101] = "0b00111101101101100001110010101111";
        ram[102] = "0b10111101100111000010101110010101";
        ram[103] = "0b10111110001011101110010011100010";
        ram[104] = "0b00111110000000110010011100100100";
        ram[105] = "0b10111011110111100010000110011110";
        ram[106] = "0b00111110001001101100111000110110";
        ram[107] = "0b10111100111011001001100011100101";
        ram[108] = "0b00111100100000010001001101011011";
        ram[109] = "0b00111101101001100000001111010101";
        ram[110] = "0b10111101100010001111001101110100";
        ram[111] = "0b00111110001000101111010111011100";
        ram[112] = "0b00111101000010101011000000001101";
        ram[113] = "0b10111011100010111100001110000011";
        ram[114] = "0b00111101010101011000110101100110";
        ram[115] = "0b00111101100000110010010010101101";
        ram[116] = "0b00111101011100000100111010110010";
        ram[117] = "0b00111101100010010001111110011001";
        ram[118] = "0b00111100110111101111110010110000";
        ram[119] = "0b00111110001110010000010101111101";


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


SC_MODULE(inference_conv2d_f3_2_1_0) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 120;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


inference_conv2d_f3_2_1_0_ram* meminst;


SC_CTOR(inference_conv2d_f3_2_1_0) {
meminst = new inference_conv2d_f3_2_1_0_ram("inference_conv2d_f3_2_1_0_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~inference_conv2d_f3_2_1_0() {
    delete meminst;
}


};//endmodule
#endif