// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __inference_conv2d_f3_4_2_7_H__
#define __inference_conv2d_f3_4_2_7_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct inference_conv2d_f3_4_2_7_ram : public sc_core::sc_module {

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


   SC_CTOR(inference_conv2d_f3_4_2_7_ram) {
        ram[0] = "0b00111101100000000100000101101110";
        ram[1] = "0b00111101110100000110100100011111";
        ram[2] = "0b10111101100110000111000111001100";
        ram[3] = "0b00111100100110110110110000110111";
        ram[4] = "0b00111100100001000111010101000101";
        ram[5] = "0b00111110000000110000000010011011";
        ram[6] = "0b10111100101101111010010000010001";
        ram[7] = "0b00111100111000011011101100111100";
        ram[8] = "0b00111101101110111010100110011100";
        ram[9] = "0b10111101011000011011010101000010";
        ram[10] = "0b00111100111100101101011010000010";
        ram[11] = "0b10111110000011011001010101010111";
        ram[12] = "0b10111101101101011110011010100010";
        ram[13] = "0b00111100011001100111011100101101";
        ram[14] = "0b00111101000100101111111001011010";
        ram[15] = "0b10111011001101010101100110010100";
        ram[16] = "0b00111101001000111001100000100000";
        ram[17] = "0b10111001110111010000101111001110";
        ram[18] = "0b00111100010010100001110101011011";
        ram[19] = "0b10111101110000011101000001011101";
        ram[20] = "0b00111101101001011001011001000010";
        ram[21] = "0b00111101010111110101111100001011";
        ram[22] = "0b00111101111110110110001111010100";
        ram[23] = "0b10111100001101011011110011100110";
        ram[24] = "0b10111100110100001001011001010000";
        ram[25] = "0b10111101110110000110111000111011";
        ram[26] = "0b00111110000000000110110110010100";
        ram[27] = "0b10111110000011110111110010101010";
        ram[28] = "0b00111101100110101001101100000111";
        ram[29] = "0b00111101101100101001111110001111";
        ram[30] = "0b10111101110001110100110011111011";
        ram[31] = "0b00111101010110000111000111100111";
        ram[32] = "0b00111101001110110001011110110011";
        ram[33] = "0b10111011111101000110111011101000";
        ram[34] = "0b00111101111101100101011011101111";
        ram[35] = "0b00111101101101100111001111010010";
        ram[36] = "0b00111101010100100000001000010000";
        ram[37] = "0b10111101100010001100000010011001";
        ram[38] = "0b00111101111010001101100101110011";
        ram[39] = "0b10111101010110110001110010111100";
        ram[40] = "0b10111101010011111011000100110011";
        ram[41] = "0b10111110000011110110001010110111";
        ram[42] = "0b10111110001011001000010100111100";
        ram[43] = "0b00111101110001010100011010111001";
        ram[44] = "0b10111101100010111100010110011100";
        ram[45] = "0b00111101111100101001111101011010";
        ram[46] = "0b10111101111110100100100100111101";
        ram[47] = "0b00111101110011110000100011001100";
        ram[48] = "0b00111100100101000110101000011010";
        ram[49] = "0b10111100100111111010100101001000";
        ram[50] = "0b00111100111101100010001100000111";
        ram[51] = "0b10111110000100000110010001100111";
        ram[52] = "0b10111110000100110110101010000011";
        ram[53] = "0b10111110000011010110111001001000";
        ram[54] = "0b10111110010100100001101011111000";
        ram[55] = "0b00111100001110001111000011100010";
        ram[56] = "0b10111101000101100011101111000110";
        ram[57] = "0b10111101101110001110000001111001";
        ram[58] = "0b00111100110000011101001110101010";
        ram[59] = "0b10111101000001010100011000001011";
        ram[60] = "0b00111101011011000101111000010010";
        ram[61] = "0b00111011111100010100011010010100";
        ram[62] = "0b10111101011001010100000110100011";
        ram[63] = "0b10111101111101111010000010110110";
        ram[64] = "0b10111101010000100000011110010010";
        ram[65] = "0b10111100101011001100111110100010";
        ram[66] = "0b00111101001010101110010110000111";
        ram[67] = "0b00111101000100011011010001011101";
        ram[68] = "0b00111101100011100101010101001000";
        ram[69] = "0b10111101000100100011111000001011";
        ram[70] = "0b10111101100011110101101101101101";
        ram[71] = "0b10111100101010100111101101101001";
        ram[72] = "0b00111101101011101110101101001000";
        ram[73] = "0b00111100101010111110111110101000";
        ram[74] = "0b00111101110100110101001010101000";
        ram[75] = "0b00111110001011000101100011101111";
        ram[76] = "0b00111101110101111011100101011010";
        ram[77] = "0b10111101001001001111011110011100";
        ram[78] = "0b10111101011101010011011100110100";
        ram[79] = "0b10111101001110001110100001111111";
        ram[80] = "0b10111100111001001010011010101000";
        ram[81] = "0b10111101000011010111110000000100";
        ram[82] = "0b00111100101101010100101001100101";
        ram[83] = "0b00111100110011111110101010001110";
        ram[84] = "0b10111100110011101010010110110101";
        ram[85] = "0b00111101010010100111100111010111";
        ram[86] = "0b10111101110110001110011111011110";
        ram[87] = "0b10111110000000011000110101101001";
        ram[88] = "0b10111101101000011011011001101001";
        ram[89] = "0b00111101011101000001101001101001";
        ram[90] = "0b10111110001000000000100100101101";
        ram[91] = "0b10111101101000101100101010101000";
        ram[92] = "0b00111110000000101110011001100100";
        ram[93] = "0b00111101011101110101010111011000";
        ram[94] = "0b10111100101100101001010010101000";
        ram[95] = "0b00111101100010100000110111001000";
        ram[96] = "0b00111101110011110100110011110101";
        ram[97] = "0b10111100111010000010110100010000";
        ram[98] = "0b00111101000111101000110001001000";
        ram[99] = "0b10111010101101110101101111110111";
        ram[100] = "0b00111101110011100101010101111110";
        ram[101] = "0b10111101100010000011001001110110";
        ram[102] = "0b00111011000010011110100001110111";
        ram[103] = "0b00111010001010010101000101001000";
        ram[104] = "0b10111100000111010011000010011101";
        ram[105] = "0b00111101000100100100101001101011";
        ram[106] = "0b00111101000010111101100111011000";
        ram[107] = "0b00111101101010111101110010010010";
        ram[108] = "0b10111101101011100011101110110010";
        ram[109] = "0b10111011111110110000011011110010";
        ram[110] = "0b00111101100000001010101000111100";
        ram[111] = "0b00111110000101000100011010110111";
        ram[112] = "0b10111101010000001100001010011110";
        ram[113] = "0b10111101000110111000110010111001";
        ram[114] = "0b00111100111001101010111000011111";
        ram[115] = "0b10111011001000101001011101101111";
        ram[116] = "0b00111100001110111010110001111110";
        ram[117] = "0b00111101101101110000110000100001";
        ram[118] = "0b10111101100000001000011010100011";
        ram[119] = "0b00111101110000111111111011001000";


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


SC_MODULE(inference_conv2d_f3_4_2_7) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 120;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


inference_conv2d_f3_4_2_7_ram* meminst;


SC_CTOR(inference_conv2d_f3_4_2_7) {
meminst = new inference_conv2d_f3_4_2_7_ram("inference_conv2d_f3_4_2_7_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~inference_conv2d_f3_4_2_7() {
    delete meminst;
}


};//endmodule
#endif
