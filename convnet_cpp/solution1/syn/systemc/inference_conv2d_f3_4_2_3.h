// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __inference_conv2d_f3_4_2_3_H__
#define __inference_conv2d_f3_4_2_3_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct inference_conv2d_f3_4_2_3_ram : public sc_core::sc_module {

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


   SC_CTOR(inference_conv2d_f3_4_2_3_ram) {
        ram[0] = "0b10111101000010000110001000011111";
        ram[1] = "0b10111010100100111110111000110100";
        ram[2] = "0b00111101110010100011011110111010";
        ram[3] = "0b00111100111001110110001110000111";
        ram[4] = "0b00111100110000000001101000110111";
        ram[5] = "0b10111011010100101011000110111110";
        ram[6] = "0b10111101010110010101011011001110";
        ram[7] = "0b10111110001100011101011010001100";
        ram[8] = "0b00111101001010100101000101011101";
        ram[9] = "0b10111101000000001110001110100101";
        ram[10] = "0b10111101100000001001011110000101";
        ram[11] = "0b00111110001101001111110001100001";
        ram[12] = "0b00111101111011110100101011011100";
        ram[13] = "0b10111101111100000111011000111010";
        ram[14] = "0b00111101101000111101101011101011";
        ram[15] = "0b10111100101001101000000110101010";
        ram[16] = "0b00111101010011011010010001100011";
        ram[17] = "0b00111101101011000101110100010011";
        ram[18] = "0b00111101001100001010101101100100";
        ram[19] = "0b10111101100000111111101101101101";
        ram[20] = "0b10111101010111111001111011001100";
        ram[21] = "0b10111101011100010111011000010100";
        ram[22] = "0b10111101100101111010101111010011";
        ram[23] = "0b10111101100010001010001111111001";
        ram[24] = "0b10111100001011000000011101011010";
        ram[25] = "0b00111110000010000110111011000001";
        ram[26] = "0b10111101010100010110001111010110";
        ram[27] = "0b00111110000001100101101111101010";
        ram[28] = "0b10111101100100101000000100100111";
        ram[29] = "0b10111110000001101101111001110110";
        ram[30] = "0b10111100110001100111100001010101";
        ram[31] = "0b00111101101010011001101001100011";
        ram[32] = "0b00111101010011100000101100001011";
        ram[33] = "0b00111101000011110000101011100101";
        ram[34] = "0b00111101111100010110101110011000";
        ram[35] = "0b10111101111010011111010000001010";
        ram[36] = "0b10111100101000100011110001101011";
        ram[37] = "0b10111101000111111010110100001111";
        ram[38] = "0b00111101110000110111101000100011";
        ram[39] = "0b10111110001001110010100001100011";
        ram[40] = "0b00111100101100110010110001111101";
        ram[41] = "0b00111101100111100000010101111100";
        ram[42] = "0b10111011001000110100111101111011";
        ram[43] = "0b00111100101011011011101001001101";
        ram[44] = "0b10111101101000011101100111001101";
        ram[45] = "0b00111101110100111110110111011001";
        ram[46] = "0b00111110001011111100011100011101";
        ram[47] = "0b00111101101110000110101000111111";
        ram[48] = "0b00111101100111101011011110100011";
        ram[49] = "0b10111101000111010010110110111110";
        ram[50] = "0b00111001110110111000100011011011";
        ram[51] = "0b00111101101010010000110101000000";
        ram[52] = "0b00111110000000001111000011101001";
        ram[53] = "0b10111100000111101111110101011100";
        ram[54] = "0b00111101100011000111111000101000";
        ram[55] = "0b10111110000110101110010110111101";
        ram[56] = "0b10111101100010001010001101001010";
        ram[57] = "0b00111101011110010011000101111010";
        ram[58] = "0b10111101101000011000001000001001";
        ram[59] = "0b00111100010111011000111111111110";
        ram[60] = "0b00111110001110001101011100010111";
        ram[61] = "0b00111101011000111011000000100011";
        ram[62] = "0b00111011110001100110011100011000";
        ram[63] = "0b00111101010111100110110010000010";
        ram[64] = "0b10111101101110011011110001000001";
        ram[65] = "0b10111101111011110001110000110010";
        ram[66] = "0b00111101110111001010010000101011";
        ram[67] = "0b10111101101100001000110110110111";
        ram[68] = "0b00111100110100100101101000001010";
        ram[69] = "0b00111100110010010101111000011000";
        ram[70] = "0b10111101110000010000001010101111";
        ram[71] = "0b00111110000101110100110101011001";
        ram[72] = "0b10111110000100001010110011000001";
        ram[73] = "0b00111100100001110010110001000100";
        ram[74] = "0b00111101110101101010001011110101";
        ram[75] = "0b10111110000100010010011111110110";
        ram[76] = "0b10111101110001001111011110001110";
        ram[77] = "0b00111100010001010000011111011100";
        ram[78] = "0b10111100100110110000111000001110";
        ram[79] = "0b00111010110010110100000010000110";
        ram[80] = "0b10111101100000011101101011001100";
        ram[81] = "0b10111101110011110011010011010111";
        ram[82] = "0b10111101100110110011011100101001";
        ram[83] = "0b00111110000011001001101000110101";
        ram[84] = "0b10111101001100110001110101100100";
        ram[85] = "0b10111101010100001010111101111011";
        ram[86] = "0b00111100010001101101001100100011";
        ram[87] = "0b10111100100101110110011110010000";
        ram[88] = "0b10111110001010010101101001101100";
        ram[89] = "0b00111101100010000101110000010111";
        ram[90] = "0b00111100011111011000110010001000";
        ram[91] = "0b10111101000000011111100101001111";
        ram[92] = "0b10111101110101110111111010100010";
        ram[93] = "0b10111100101010000111011101001101";
        ram[94] = "0b10111101000101100111001111100000";
        ram[95] = "0b00111101100011110011001110111101";
        ram[96] = "0b10111101101011111011010110000000";
        ram[97] = "0b00111101110011010001100101011001";
        ram[98] = "0b00111011001010111000101000000111";
        ram[99] = "0b00111101110001011111010100110101";
        ram[100] = "0b00111011111101011011001001001001";
        ram[101] = "0b00111101110100111101011111010100";
        ram[102] = "0b10111101100010111011011100110001";
        ram[103] = "0b00111011110110010110101111000010";
        ram[104] = "0b10111100110110110011011010111101";
        ram[105] = "0b10111101000010101011001001000000";
        ram[106] = "0b00111110010011111101110111101100";
        ram[107] = "0b10111100111101001011110100001100";
        ram[108] = "0b10111100110111001110101001010001";
        ram[109] = "0b00111101000001001101011001011110";
        ram[110] = "0b10111011110001111000101111110000";
        ram[111] = "0b10111110000100000110011000111100";
        ram[112] = "0b00111101101111000001000100101000";
        ram[113] = "0b00111110000111101001111001011110";
        ram[114] = "0b10111100110010000100010000111100";
        ram[115] = "0b10111100101001101110101111000111";
        ram[116] = "0b10111101100101101000001110011010";
        ram[117] = "0b00111100110010111011111000001111";
        ram[118] = "0b10111100111011100110011000001111";
        ram[119] = "0b00111101000000010110100010110110";


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


SC_MODULE(inference_conv2d_f3_4_2_3) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 120;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


inference_conv2d_f3_4_2_3_ram* meminst;


SC_CTOR(inference_conv2d_f3_4_2_3) {
meminst = new inference_conv2d_f3_4_2_3_ram("inference_conv2d_f3_4_2_3_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~inference_conv2d_f3_4_2_3() {
    delete meminst;
}


};//endmodule
#endif