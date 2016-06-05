// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __inference_conv2d_f3_0_0_10_H__
#define __inference_conv2d_f3_0_0_10_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct inference_conv2d_f3_0_0_10_ram : public sc_core::sc_module {

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


   SC_CTOR(inference_conv2d_f3_0_0_10_ram) {
        ram[0] = "0b10111110001100010110000100011100";
        ram[1] = "0b10111110000111000011110000011001";
        ram[2] = "0b00111101000001000110101011001001";
        ram[3] = "0b00111101010011101111011001110011";
        ram[4] = "0b10111110010100001100111100011000";
        ram[5] = "0b00111101101100111101101101111111";
        ram[6] = "0b10111101111000110001000001010110";
        ram[7] = "0b10111101100011100100101100101010";
        ram[8] = "0b00111101111011000011110100100101";
        ram[9] = "0b00111101000101001101011000110110";
        ram[10] = "0b10111100100010011000000110111111";
        ram[11] = "0b00111101110110110110001111010100";
        ram[12] = "0b10111101001111000111000100110101";
        ram[13] = "0b00111100111101010011101110110111";
        ram[14] = "0b10111100110101011010100110110101";
        ram[15] = "0b00111100111111000101100010101100";
        ram[16] = "0b00111101001101001001010111101111";
        ram[17] = "0b10111101100010100010001001111110";
        ram[18] = "0b00111110000100111100001011011011";
        ram[19] = "0b00111100011101000111001100000100";
        ram[20] = "0b10111110001000001010111011011010";
        ram[21] = "0b10111110000001100000111111100100";
        ram[22] = "0b10111101011010110001110110000101";
        ram[23] = "0b10111100001111011000010100110001";
        ram[24] = "0b10111100100101010101101101111100";
        ram[25] = "0b00111100110111011101000111011000";
        ram[26] = "0b00111101110001111111011110100011";
        ram[27] = "0b10111100110100111100110111011101";
        ram[28] = "0b10111101010111101100011101010001";
        ram[29] = "0b10111011111000000000101100101110";
        ram[30] = "0b00111100010101010100011111000110";
        ram[31] = "0b10111101101000001110111111000010";
        ram[32] = "0b10111110000000010010110000101000";
        ram[33] = "0b10111100111011111101001110011000";
        ram[34] = "0b10111100110100101111100100110111";
        ram[35] = "0b10111101110011101101100000001010";
        ram[36] = "0b10111110000101100100100001000001";
        ram[37] = "0b10111100101101011100111111000110";
        ram[38] = "0b10111110000000111010101001111010";
        ram[39] = "0b10111101110011001011110101001000";
        ram[40] = "0b10111101100011111000001100011101";
        ram[41] = "0b10111101110011100000111010110110";
        ram[42] = "0b00111110001100110111000011001110";
        ram[43] = "0b00111110001101101000000100100100";
        ram[44] = "0b10111110010011011101001011110010";
        ram[45] = "0b00111101110010110101101011001111";
        ram[46] = "0b10111100101100010100000100100000";
        ram[47] = "0b10111101101110000010010001011100";
        ram[48] = "0b10111101111011111101000010001101";
        ram[49] = "0b00111101101100000011100101001110";
        ram[50] = "0b00111101110101011011010111111010";
        ram[51] = "0b10111101101101011101011111001011";
        ram[52] = "0b10111101000000111110011010001111";
        ram[53] = "0b00111110000111011100010010000111";
        ram[54] = "0b10111101011111011000001110111001";
        ram[55] = "0b10111101111001011111010100100111";
        ram[56] = "0b10111100001011011100111001101111";
        ram[57] = "0b00111101110101010101001101101001";
        ram[58] = "0b00111101010001111010001100010010";
        ram[59] = "0b00111101101110100001111101011001";
        ram[60] = "0b00111110001000001100110110000101";
        ram[61] = "0b10111101100110010010111001100010";
        ram[62] = "0b10111101101010001001010001011001";
        ram[63] = "0b10111100100000100000001110110001";
        ram[64] = "0b00111100011010000101110001110101";
        ram[65] = "0b10111101011110011010111110011111";
        ram[66] = "0b00111101101100111000100000110000";
        ram[67] = "0b00111101011001011111001110010101";
        ram[68] = "0b10111101000000100110111000011111";
        ram[69] = "0b00111001011100110100001111110100";
        ram[70] = "0b00111101110011110100111110010100";
        ram[71] = "0b10111110001000101011101010011101";
        ram[72] = "0b10111100010111100110010101111100";
        ram[73] = "0b00111011010011010011000111110111";
        ram[74] = "0b00111101100110001111000000100110";
        ram[75] = "0b10111100011110101001100110001111";
        ram[76] = "0b00111100101101010000101000111000";
        ram[77] = "0b00111101110000100011000110010001";
        ram[78] = "0b10111101100010011000100101011001";
        ram[79] = "0b10111110000101000110010000010011";
        ram[80] = "0b00111100110011010010101011000001";
        ram[81] = "0b10111101000100010011001101111111";
        ram[82] = "0b00111100000011101011010011000100";
        ram[83] = "0b10111110001010011100110001110101";
        ram[84] = "0b00111101001001111011101101100110";
        ram[85] = "0b00111101000000101011110011111001";
        ram[86] = "0b10111101000000010010000011100010";
        ram[87] = "0b10111101110010101001110000000110";
        ram[88] = "0b00111101100101111001000100010110";
        ram[89] = "0b00111101100111110110011011001110";
        ram[90] = "0b00111101010110110100010011100101";
        ram[91] = "0b00111101000010101000010011011001";
        ram[92] = "0b00111100111101000011101100111011";
        ram[93] = "0b00111110000010000110100111000110";
        ram[94] = "0b00111110001000101100000111110100";
        ram[95] = "0b00111110000100001001001110010110";
        ram[96] = "0b00111011010101100101001000110010";
        ram[97] = "0b00111101000010010100110010010101";
        ram[98] = "0b10111100111000000001001011111011";
        ram[99] = "0b00111101000000111101000000011111";
        ram[100] = "0b10111101001111100010001100011100";
        ram[101] = "0b10111101101000111110010011010100";
        ram[102] = "0b10111101100111000001010001000000";
        ram[103] = "0b10111100011111110100010011101111";
        ram[104] = "0b10111011110010010110000111110100";
        ram[105] = "0b00111011000101001110111010001111";
        ram[106] = "0b10111110000000100111010101101000";
        ram[107] = "0b10111100111010011000111101111011";
        ram[108] = "0b00111101100011110100111000011100";
        ram[109] = "0b00111110000001001011100001111100";
        ram[110] = "0b00111101100100010100110111111001";
        ram[111] = "0b00111110010010000010000110101111";
        ram[112] = "0b10111101001101111000011001100100";
        ram[113] = "0b00111101100101010101111001010001";
        ram[114] = "0b10111110010000011110110111100001";
        ram[115] = "0b00111101101100110110011111111111";
        ram[116] = "0b00111110001100001100101011100110";
        ram[117] = "0b00111101101001011111001010111110";
        ram[118] = "0b00111100000101110101111110001101";
        ram[119] = "0b10111101100110100001000000100100";


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


SC_MODULE(inference_conv2d_f3_0_0_10) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 120;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


inference_conv2d_f3_0_0_10_ram* meminst;


SC_CTOR(inference_conv2d_f3_0_0_10) {
meminst = new inference_conv2d_f3_0_0_10_ram("inference_conv2d_f3_0_0_10_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~inference_conv2d_f3_0_0_10() {
    delete meminst;
}


};//endmodule
#endif
