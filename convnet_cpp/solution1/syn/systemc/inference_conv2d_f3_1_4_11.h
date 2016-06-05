// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __inference_conv2d_f3_1_4_11_H__
#define __inference_conv2d_f3_1_4_11_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct inference_conv2d_f3_1_4_11_ram : public sc_core::sc_module {

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


   SC_CTOR(inference_conv2d_f3_1_4_11_ram) {
        ram[0] = "0b10111101001000101111000101001100";
        ram[1] = "0b10111101110000110001010010010101";
        ram[2] = "0b10111101111100011100001010100000";
        ram[3] = "0b00111101100010000100000101001101";
        ram[4] = "0b10111101110010111100100110110010";
        ram[5] = "0b00111101101111101110100000110000";
        ram[6] = "0b10111101001100101010100100011010";
        ram[7] = "0b10111101101011000111011111111000";
        ram[8] = "0b10111101001011000100001010011001";
        ram[9] = "0b00111101010111100011010111000110";
        ram[10] = "0b00111101010111011010110101011010";
        ram[11] = "0b00111100110110111100111100110100";
        ram[12] = "0b10111101010001110000000110110010";
        ram[13] = "0b00111101000001101100110010111110";
        ram[14] = "0b00111101101101001000011110101100";
        ram[15] = "0b10111110000111000000111110001000";
        ram[16] = "0b10111110010110001001100110111111";
        ram[17] = "0b00111101101100101010011000011101";
        ram[18] = "0b10111101011101000001011011110011";
        ram[19] = "0b00111100110000100110100001011010";
        ram[20] = "0b00111100101111101111001010111010";
        ram[21] = "0b10111101001010001111011111000001";
        ram[22] = "0b10111110000001001000100101001100";
        ram[23] = "0b00111101010010101001000001100010";
        ram[24] = "0b00111101100000110001000010001011";
        ram[25] = "0b00111101000110101101001111000001";
        ram[26] = "0b00111011111100001111011111100101";
        ram[27] = "0b00111101101011010001101001100101";
        ram[28] = "0b00111101010000010011000111011111";
        ram[29] = "0b10111101010001101011101011101010";
        ram[30] = "0b10111101100100000110000101101010";
        ram[31] = "0b00111011111011001011010011011111";
        ram[32] = "0b10111101111000011110111011101110";
        ram[33] = "0b00111100010100110100101010010101";
        ram[34] = "0b10111101011001001110111001111100";
        ram[35] = "0b00111100011010001011101101000000";
        ram[36] = "0b00111101001110111001100101101001";
        ram[37] = "0b00111110000010011000000110111111";
        ram[38] = "0b10111110001001001110100100111110";
        ram[39] = "0b10111101101101110101101110011100";
        ram[40] = "0b10111101111010011000111011011010";
        ram[41] = "0b10111100110001011101001101111111";
        ram[42] = "0b00111101010110111101111001001101";
        ram[43] = "0b00111110000010000011010001001100";
        ram[44] = "0b00111101000101010110111011111101";
        ram[45] = "0b00111101101101011000001010110100";
        ram[46] = "0b10111100000000010101011001110111";
        ram[47] = "0b10111101011001110111011101110011";
        ram[48] = "0b00111011110110111101100010011001";
        ram[49] = "0b10111101111100101001110000110100";
        ram[50] = "0b10111101110101000101010100100010";
        ram[51] = "0b00111001011011100111011101010011";
        ram[52] = "0b00111011001010101010101100001111";
        ram[53] = "0b10111101011100110111100110101010";
        ram[54] = "0b10111100001010010001101110000010";
        ram[55] = "0b00111101111100100011101010110000";
        ram[56] = "0b10111110001001010000000100011001";
        ram[57] = "0b00111100110111001101010111111010";
        ram[58] = "0b00111101101101000100111011001010";
        ram[59] = "0b10111110001110110000001101011100";
        ram[60] = "0b00111010010101110111101000000011";
        ram[61] = "0b10111011000111011011010100000111";
        ram[62] = "0b00111110010110100111000011010010";
        ram[63] = "0b10111101111011001010001001010101";
        ram[64] = "0b00111101001101100110111010111100";
        ram[65] = "0b10111110000111001111000111000011";
        ram[66] = "0b00111101100000011010000110011000";
        ram[67] = "0b10111110001010010100011100000110";
        ram[68] = "0b00111101010100110100110000001101";
        ram[69] = "0b00111101100110011001110101100000";
        ram[70] = "0b00111101100011111110001100000010";
        ram[71] = "0b10111101111010010011110000000100";
        ram[72] = "0b10111101100011101010101011100110";
        ram[73] = "0b10111110001000111010000010000100";
        ram[74] = "0b10111101111000100100101000100111";
        ram[75] = "0b10111101110001101101111010101100";
        ram[76] = "0b10111101011111101100001001001000";
        ram[77] = "0b10111110000001100010011101111100";
        ram[78] = "0b00111101101101010001111010011101";
        ram[79] = "0b00111101011000001111100011101111";
        ram[80] = "0b00111100100100110010100011010010";
        ram[81] = "0b00111110000110101000000000000110";
        ram[82] = "0b00111101100001000100010101011010";
        ram[83] = "0b00111101001011011010000010000010";
        ram[84] = "0b00111100110010111000111001110100";
        ram[85] = "0b00111100011110010001000101100100";
        ram[86] = "0b10111101101000011101111110111001";
        ram[87] = "0b10111101100010100100001111111110";
        ram[88] = "0b00111100101100110010011011010100";
        ram[89] = "0b00111101111011111101011011011000";
        ram[90] = "0b10111101100000111101101000100010";
        ram[91] = "0b10111101000110000101101110010001";
        ram[92] = "0b10111110000000110001101000001001";
        ram[93] = "0b10111110000100000000011011010001";
        ram[94] = "0b10111101100010011010000110011111";
        ram[95] = "0b00111101100101100101101011111000";
        ram[96] = "0b00111101010000010011111011111010";
        ram[97] = "0b00111101111010110100100011010100";
        ram[98] = "0b10111101011110101111101001110010";
        ram[99] = "0b00111101011000010111110000000001";
        ram[100] = "0b00111101010101100110110111100110";
        ram[101] = "0b10111101010101011010101011111000";
        ram[102] = "0b10111101001010101010100010000000";
        ram[103] = "0b00111100110011011010100100000000";
        ram[104] = "0b10111101010101110010001001110110";
        ram[105] = "0b10111110001111000010101111011000";
        ram[106] = "0b10111110000110001101011000001010";
        ram[107] = "0b10111110000011111001110100101100";
        ram[108] = "0b10111101010100100001100111111001";
        ram[109] = "0b00111101010001101000100110100010";
        ram[110] = "0b10111101101001010010110010011101";
        ram[111] = "0b00111101000010111101010010011010";
        ram[112] = "0b10111101000000101010111111000011";
        ram[113] = "0b10111101100101001001100110101000";
        ram[114] = "0b00111100011111010011111011110000";
        ram[115] = "0b10111101100011010100110000110100";
        ram[116] = "0b00111110000000101000001101001101";
        ram[117] = "0b10111100001101110000110001110001";
        ram[118] = "0b10111101110101001101010100001111";
        ram[119] = "0b00111110000000111000000010001000";


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


SC_MODULE(inference_conv2d_f3_1_4_11) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 120;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


inference_conv2d_f3_1_4_11_ram* meminst;


SC_CTOR(inference_conv2d_f3_1_4_11) {
meminst = new inference_conv2d_f3_1_4_11_ram("inference_conv2d_f3_1_4_11_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~inference_conv2d_f3_1_4_11() {
    delete meminst;
}


};//endmodule
#endif
