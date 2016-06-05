// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __inference_conv2d_f3_2_1_11_H__
#define __inference_conv2d_f3_2_1_11_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct inference_conv2d_f3_2_1_11_ram : public sc_core::sc_module {

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


   SC_CTOR(inference_conv2d_f3_2_1_11_ram) {
        ram[0] = "0b00111101110011111010011000010110";
        ram[1] = "0b00111101010001010100110001010101";
        ram[2] = "0b00111101101110111100100000101101";
        ram[3] = "0b10111100110011101101110101001000";
        ram[4] = "0b00111101101001101001111100111100";
        ram[5] = "0b00111110001010011001010000011000";
        ram[6] = "0b10111100100001010010011100011100";
        ram[7] = "0b00111110001100001011000111111111";
        ram[8] = "0b10111101100001100010010011011101";
        ram[9] = "0b10111110000111100011000000000001";
        ram[10] = "0b00111101100000111001001000110011";
        ram[11] = "0b10111100110000111101101010110110";
        ram[12] = "0b10111101101111001001110110011101";
        ram[13] = "0b10111100110111001000111001110110";
        ram[14] = "0b10111101100111010011010110110110";
        ram[15] = "0b10111101000011101100011011110011";
        ram[16] = "0b10111100010110110010100100011100";
        ram[17] = "0b00111101010100001100000000001100";
        ram[18] = "0b00111011010111101000111001101011";
        ram[19] = "0b00111101101010010101001010011101";
        ram[20] = "0b10111110000110001100111011110110";
        ram[21] = "0b00111101100010011011010100101101";
        ram[22] = "0b10111100001111101010010101010111";
        ram[23] = "0b10111100111010010010011111100010";
        ram[24] = "0b00111101100110110101110100000011";
        ram[25] = "0b10111101111001001011110010101110";
        ram[26] = "0b00111110000001001111000001010010";
        ram[27] = "0b00111100110001110111011011101101";
        ram[28] = "0b00111101100011100100101000111000";
        ram[29] = "0b00111101010000111100100000001100";
        ram[30] = "0b00111101111001110111001001010000";
        ram[31] = "0b10111101111111011111111010111001";
        ram[32] = "0b10111110000100100001101011111000";
        ram[33] = "0b00111100100101000000100100000001";
        ram[34] = "0b10111011001010100111100011100101";
        ram[35] = "0b00111101001010010010110111110111";
        ram[36] = "0b00111101000111000111101000000100";
        ram[37] = "0b00111100011001111101101000000100";
        ram[38] = "0b10111101101000011000011001110000";
        ram[39] = "0b00111101101100110010101000000110";
        ram[40] = "0b10111110000100100001000001111011";
        ram[41] = "0b10111100100001001000101110110110";
        ram[42] = "0b00111110000010011111111000000000";
        ram[43] = "0b00111100110001000001101010101100";
        ram[44] = "0b10111101111000111000111000101010";
        ram[45] = "0b10111110000001000010111100011111";
        ram[46] = "0b10111110001001011011010010101011";
        ram[47] = "0b00111100111110111111011101011101";
        ram[48] = "0b10111101001010010000000001110101";
        ram[49] = "0b10111100101001100011110010101011";
        ram[50] = "0b10111101001010111000101100110100";
        ram[51] = "0b10111101100001001000101011011111";
        ram[52] = "0b00111011110110011111100010101111";
        ram[53] = "0b00111101010110111110011100110111";
        ram[54] = "0b10111101100011110101110101011110";
        ram[55] = "0b00111110000011011100010010000111";
        ram[56] = "0b00111110000000100001001100011011";
        ram[57] = "0b00111101010100011010001000000100";
        ram[58] = "0b00111100100000010111100010100110";
        ram[59] = "0b10111110011000001111110100111011";
        ram[60] = "0b00111101110011000101101110011011";
        ram[61] = "0b00111101110111111001100000110001";
        ram[62] = "0b10111110000101111000001100010111";
        ram[63] = "0b00111100011001100111110000110110";
        ram[64] = "0b10111101000101010100111001100001";
        ram[65] = "0b00111100011110101101101111010100";
        ram[66] = "0b00111110000001010110000110010001";
        ram[67] = "0b00111101010001000001011010110000";
        ram[68] = "0b10111101011110010001010001101110";
        ram[69] = "0b00111110000110111101010101010110";
        ram[70] = "0b00111101100110001001001011101111";
        ram[71] = "0b10111110000100001110100010000110";
        ram[72] = "0b00111101010100000110010100001000";
        ram[73] = "0b00111101110011110100011010101010";
        ram[74] = "0b10111101111100101011110111000010";
        ram[75] = "0b00111101011101100010011011101001";
        ram[76] = "0b10111100100101110001110100011101";
        ram[77] = "0b10111101110101010101111001101100";
        ram[78] = "0b10111101011101001011011001110000";
        ram[79] = "0b00111101011100110011000010010100";
        ram[80] = "0b10111100111000011000000010000011";
        ram[81] = "0b10111100111100010000011010011110";
        ram[82] = "0b10111001100000000011110011111100";
        ram[83] = "0b00111101101100011011101110110100";
        ram[84] = "0b10111101010110110000110001100000";
        ram[85] = "0b00111100111010111100111110010010";
        ram[86] = "0b00111110000000011100011110011011";
        ram[87] = "0b10111010101101010011100001011100";
        ram[88] = "0b10111101111110110100011011111110";
        ram[89] = "0b00111100100100101010101010010010";
        ram[90] = "0b10111101011110010100000010101110";
        ram[91] = "0b10111011010101110010001100111101";
        ram[92] = "0b10111110001000100000110111011100";
        ram[93] = "0b10111100000101001000101100000111";
        ram[94] = "0b10111011111101000101010101100111";
        ram[95] = "0b00111110010010111101101000001110";
        ram[96] = "0b00111101101011011010010010100110";
        ram[97] = "0b10111101100101100001010000110001";
        ram[98] = "0b00111101000000110101100001111010";
        ram[99] = "0b00111110000001100111101110100010";
        ram[100] = "0b10111101011101111101011010011100";
        ram[101] = "0b10111100100111000000100010101010";
        ram[102] = "0b00111101010101110100010100010001";
        ram[103] = "0b00111101010001110010101100000010";
        ram[104] = "0b00111101101001110001111010010101";
        ram[105] = "0b10111101100000001011000011011000";
        ram[106] = "0b00111101010100001001110001001010";
        ram[107] = "0b00111101101000101010011000111000";
        ram[108] = "0b00111101011011010110111001100011";
        ram[109] = "0b10111110000000111011110010010000";
        ram[110] = "0b00111101101111101110101011001111";
        ram[111] = "0b00111011010111001101010011011000";
        ram[112] = "0b00111101101111111011111110011110";
        ram[113] = "0b00111110000100010011001010110101";
        ram[114] = "0b00111100000110100000000100010011";
        ram[115] = "0b10111101001110100001011100000010";
        ram[116] = "0b00111011100011101000101010000111";
        ram[117] = "0b10111100001100011111101100100101";
        ram[118] = "0b00111101011011110000101111010111";
        ram[119] = "0b00111110010011110001010101100010";


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


SC_MODULE(inference_conv2d_f3_2_1_11) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 120;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


inference_conv2d_f3_2_1_11_ram* meminst;


SC_CTOR(inference_conv2d_f3_2_1_11) {
meminst = new inference_conv2d_f3_2_1_11_ram("inference_conv2d_f3_2_1_11_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~inference_conv2d_f3_2_1_11() {
    delete meminst;
}


};//endmodule
#endif
