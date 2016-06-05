// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __inference_conv2d_f3_1_4_0_H__
#define __inference_conv2d_f3_1_4_0_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct inference_conv2d_f3_1_4_0_ram : public sc_core::sc_module {

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


   SC_CTOR(inference_conv2d_f3_1_4_0_ram) {
        ram[0] = "0b00111100000001011101100110110100";
        ram[1] = "0b00111101001010001011110110001110";
        ram[2] = "0b10111101001000011111101001011011";
        ram[3] = "0b00111101100100100111001101011101";
        ram[4] = "0b10111100010010100011100010011110";
        ram[5] = "0b00111100110100000110101100011101";
        ram[6] = "0b10111110001111110011001001111011";
        ram[7] = "0b10111101100001101100100000101110";
        ram[8] = "0b10111110001000001101111101011001";
        ram[9] = "0b00111101000100100110100010111000";
        ram[10] = "0b00111101001011000001010111010011";
        ram[11] = "0b00111110001010110110000101111000";
        ram[12] = "0b00111101001111000001111100110101";
        ram[13] = "0b00111101101001110010111000100111";
        ram[14] = "0b00111110001011110001000101110011";
        ram[15] = "0b00111100101111110010110011010001";
        ram[16] = "0b00111101100010101010100100100001";
        ram[17] = "0b00111101101001010000110101000011";
        ram[18] = "0b10111101101001110100101001101010";
        ram[19] = "0b00111100100011001011110101001000";
        ram[20] = "0b00111100110101001000101111011110";
        ram[21] = "0b00111101110000001010111010001001";
        ram[22] = "0b10111100101100001001110011101011";
        ram[23] = "0b10111101111011000101011101011100";
        ram[24] = "0b00111110010011001000011100010010";
        ram[25] = "0b10111110000011101010010000100011";
        ram[26] = "0b00111101110100010111100100111010";
        ram[27] = "0b10111101001111001000010110100111";
        ram[28] = "0b00111011000100111110101010000011";
        ram[29] = "0b10111101001100111110100011101011";
        ram[30] = "0b00111101101011110011100001001100";
        ram[31] = "0b10111101111110011010101011100111";
        ram[32] = "0b10111101101000011111011100011011";
        ram[33] = "0b10111101011111111011001110001111";
        ram[34] = "0b10111101101101011010101010001100";
        ram[35] = "0b00111101010100100101110011011111";
        ram[36] = "0b00111101010101100101011001001110";
        ram[37] = "0b10111101111001111001001101010111";
        ram[38] = "0b10111101000101111000011111000001";
        ram[39] = "0b00111101111100100001001111100100";
        ram[40] = "0b10111100101011100101101000011011";
        ram[41] = "0b00111101000011000110001011001010";
        ram[42] = "0b10111110010011111100110010011111";
        ram[43] = "0b00111100001011000001101111101000";
        ram[44] = "0b10111101101010011100111111011101";
        ram[45] = "0b10111101110101010011100110111001";
        ram[46] = "0b10111101110101000011110100000100";
        ram[47] = "0b10111110000011010101011110111100";
        ram[48] = "0b10111101000001001100101110101100";
        ram[49] = "0b10111101101000100101101100110001";
        ram[50] = "0b00111011110111010100010011101010";
        ram[51] = "0b10111101100100111001110010010101";
        ram[52] = "0b10111110001100000000001100100101";
        ram[53] = "0b10111101000111110110000100111111";
        ram[54] = "0b10111100011011101011110001110110";
        ram[55] = "0b00111101111011101011001001001010";
        ram[56] = "0b10111101100111101110100011111001";
        ram[57] = "0b10111100010010000011010110001110";
        ram[58] = "0b10111101101110101000011110100000";
        ram[59] = "0b00111011110110101001010101001101";
        ram[60] = "0b00111100101101100001010011000101";
        ram[61] = "0b00111101101110111111001110111111";
        ram[62] = "0b10111101000011011010100101010001";
        ram[63] = "0b10111101110001001001101101110000";
        ram[64] = "0b10111101110011101101110111001110";
        ram[65] = "0b10111101110110001000010011000111";
        ram[66] = "0b10111110001000001011101010100110";
        ram[67] = "0b00111110001011011101100100111100";
        ram[68] = "0b10111101101110110011000010110110";
        ram[69] = "0b10111011111101000011111010000001";
        ram[70] = "0b00111011011100010001110000001100";
        ram[71] = "0b00111101110111000011001111111000";
        ram[72] = "0b10111110000100101111100110000111";
        ram[73] = "0b00111101001110011111000110010011";
        ram[74] = "0b10111101101000000001111000110011";
        ram[75] = "0b10111101011101111000000111100010";
        ram[76] = "0b00111101101100010011001001110010";
        ram[77] = "0b00111100000010001000100100010001";
        ram[78] = "0b10111110000111101101111011011011";
        ram[79] = "0b10111101101000110110100000001100";
        ram[80] = "0b00111100011111001101010001100111";
        ram[81] = "0b10111101001111000100110100111110";
        ram[82] = "0b10111110000001001110101011010001";
        ram[83] = "0b10111101111001010110111101110110";
        ram[84] = "0b10111101101110001110110101010010";
        ram[85] = "0b10111101111000000110001000001011";
        ram[86] = "0b10111101111110111000000100110000";
        ram[87] = "0b00111110001010110101010100100110";
        ram[88] = "0b10111101100111111111011110001111";
        ram[89] = "0b00111100111110000101000000001000";
        ram[90] = "0b00111100111100000100110011001111";
        ram[91] = "0b10111101000010111101110101101001";
        ram[92] = "0b10111101110111011010000101100110";
        ram[93] = "0b10111101011000111110100110011010";
        ram[94] = "0b00111011100101010100100101111110";
        ram[95] = "0b10111101101001111101101101111100";
        ram[96] = "0b00111110000110000111011010011111";
        ram[97] = "0b10111101111001110010001100100101";
        ram[98] = "0b10111110000101001011010010001101";
        ram[99] = "0b10111100101000000000010111000100";
        ram[100] = "0b10111101010111010000100001001111";
        ram[101] = "0b10111101000100011100011000010110";
        ram[102] = "0b10111110000100000000001000011001";
        ram[103] = "0b10111100010010001110111011110010";
        ram[104] = "0b10111110000110110110111010010011";
        ram[105] = "0b00111110000001011100001011010010";
        ram[106] = "0b10111011101000110011010101100100";
        ram[107] = "0b10111100000010100000100110000100";
        ram[108] = "0b10111101111010001111011011001111";
        ram[109] = "0b10111101101001001010010000010111";
        ram[110] = "0b00111101011011100100000110101100";
        ram[111] = "0b10111101101101101111101110000010";
        ram[112] = "0b00111101101101101100001110010001";
        ram[113] = "0b00111110000100100111000010110000";
        ram[114] = "0b00111100110110100011000100111001";
        ram[115] = "0b10111100010010110100010000110111";
        ram[116] = "0b10111110000100110100100000101100";
        ram[117] = "0b00111101100111111110100000100101";
        ram[118] = "0b00111110010100001110000111111000";
        ram[119] = "0b00111110000001101101001010101010";


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


SC_MODULE(inference_conv2d_f3_1_4_0) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 120;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


inference_conv2d_f3_1_4_0_ram* meminst;


SC_CTOR(inference_conv2d_f3_1_4_0) {
meminst = new inference_conv2d_f3_1_4_0_ram("inference_conv2d_f3_1_4_0_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~inference_conv2d_f3_1_4_0() {
    delete meminst;
}


};//endmodule
#endif
