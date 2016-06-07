// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __inference_conv2d_f3_4_1_11_H__
#define __inference_conv2d_f3_4_1_11_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct inference_conv2d_f3_4_1_11_ram : public sc_core::sc_module {

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


   SC_CTOR(inference_conv2d_f3_4_1_11_ram) {
        ram[0] = "0b00111100110000100101010101111011";
        ram[1] = "0b00111101101001101111100110101100";
        ram[2] = "0b00111101011010101101100011010111";
        ram[3] = "0b10111100101001110111101100000100";
        ram[4] = "0b10111101000010110011101110011101";
        ram[5] = "0b00111101110110101000011000001110";
        ram[6] = "0b00111101110010111111101110101001";
        ram[7] = "0b00111011101111001001100110100100";
        ram[8] = "0b00111100110010110100001001010011";
        ram[9] = "0b00111101110110100010100111000111";
        ram[10] = "0b00111101001111010100101000101000";
        ram[11] = "0b10111101101101100000110001100001";
        ram[12] = "0b10111101111100100010111100100111";
        ram[13] = "0b00111110001011111100110110101011";
        ram[14] = "0b00111101100001100011110000111111";
        ram[15] = "0b10111110001000100100010100101100";
        ram[16] = "0b10111101010000001011110011011001";
        ram[17] = "0b10111110001110111110110101110100";
        ram[18] = "0b00111101000111100001101000010111";
        ram[19] = "0b00111101011001100011010110111111";
        ram[20] = "0b10111101010001101001010100101011";
        ram[21] = "0b10111101100000101010011101010010";
        ram[22] = "0b00111101101110001110011010101001";
        ram[23] = "0b00111101001011000001100001010111";
        ram[24] = "0b10111101110011111011111010111010";
        ram[25] = "0b00111011110101111011111100000100";
        ram[26] = "0b10111011111011010100001010001110";
        ram[27] = "0b10111101011010010001011110000110";
        ram[28] = "0b10111100111110011010101001000110";
        ram[29] = "0b00111110010000010100011111110001";
        ram[30] = "0b10111101110101010101000011001010";
        ram[31] = "0b10111110000000101111111110001111";
        ram[32] = "0b10111100101000011111010110111110";
        ram[33] = "0b10111101010000111101000101111100";
        ram[34] = "0b00111110000010010001011001000100";
        ram[35] = "0b00111101001101101001010110001001";
        ram[36] = "0b10111101100010001001100100010001";
        ram[37] = "0b00111101101101011000110101100110";
        ram[38] = "0b00111101100010001100011001000010";
        ram[39] = "0b10111101110100110100000011010101";
        ram[40] = "0b00111101000100100011000101000000";
        ram[41] = "0b10111100101101100100100111010100";
        ram[42] = "0b10111101101000000010111010101001";
        ram[43] = "0b00111011000000001010101010110101";
        ram[44] = "0b10111101100011010010111011011000";
        ram[45] = "0b10111101100001101101110000011010";
        ram[46] = "0b10111100000101110101100010001100";
        ram[47] = "0b10111100101001100010001100010101";
        ram[48] = "0b10111101110011101110001000000000";
        ram[49] = "0b10111110000001111001101010101110";
        ram[50] = "0b10111101101000110011101000011111";
        ram[51] = "0b00111110001000011011000100010000";
        ram[52] = "0b00111101100010101100101000101001";
        ram[53] = "0b00111100111101011110100100100110";
        ram[54] = "0b10111110001000101110110101111000";
        ram[55] = "0b00111100000010010111011101100011";
        ram[56] = "0b10111101111011111111110100011110";
        ram[57] = "0b00111010010001011001111111000011";
        ram[58] = "0b10111101110100110101010000111011";
        ram[59] = "0b10111101010011010001000111001100";
        ram[60] = "0b00111101111000111000111000101010";
        ram[61] = "0b00111011101110001010100000111101";
        ram[62] = "0b10111110000011011101011100100011";
        ram[63] = "0b10111101100101011110111000010011";
        ram[64] = "0b00111101010011101111001010010010";
        ram[65] = "0b00111101111011011101011100100011";
        ram[66] = "0b00111101101100101000110001010010";
        ram[67] = "0b00111100101000001110000001001010";
        ram[68] = "0b00111101101110000101000100110000";
        ram[69] = "0b10111100111110101011000101000001";
        ram[70] = "0b10111101111111011101001100110101";
        ram[71] = "0b10111100001101100110110101111010";
        ram[72] = "0b10111110000111000001010110010000";
        ram[73] = "0b00111101100000001110100010101110";
        ram[74] = "0b10111100011010001100101100110000";
        ram[75] = "0b10111100111010100111110011100001";
        ram[76] = "0b00111101110010011110010010111011";
        ram[77] = "0b00111101000010111000101110111010";
        ram[78] = "0b00111101101101111011001101111011";
        ram[79] = "0b00111101101110100111101000011010";
        ram[80] = "0b00111011110101101110010100010100";
        ram[81] = "0b00111101101001010111101110101101";
        ram[82] = "0b00111001101011101101011100110010";
        ram[83] = "0b10111101111100100101000010110101";
        ram[84] = "0b10111100011011001101010100010101";
        ram[85] = "0b10111101010100101100111010001001";
        ram[86] = "0b00111101111111101110011011111011";
        ram[87] = "0b00111100010001011000001001010110";
        ram[88] = "0b10111100111111101000011101011010";
        ram[89] = "0b10111101101100011010101101011001";
        ram[90] = "0b10111101101111110100111011100101";
        ram[91] = "0b10111100110000101001101010101111";
        ram[92] = "0b10111101101010111010110010001100";
        ram[93] = "0b00111100101001011111100101011001";
        ram[94] = "0b00111101101110100000111101001101";
        ram[95] = "0b00111101100001111100010001000010";
        ram[96] = "0b00111110010000000101010100110010";
        ram[97] = "0b00111101001001100001011100111100";
        ram[98] = "0b10111100101000100011110111100011";
        ram[99] = "0b10111101110101011011000101000010";
        ram[100] = "0b10111101100111110000001001001100";
        ram[101] = "0b00111101110101001010011011101100";
        ram[102] = "0b10111101101101000101100010110010";
        ram[103] = "0b10111101110100011010010101000100";
        ram[104] = "0b00111100100010001110001001011101";
        ram[105] = "0b00111101001111000111010010010000";
        ram[106] = "0b00111100010100000010000110000001";
        ram[107] = "0b00111101100110101101110111101101";
        ram[108] = "0b10111101000000100001100101100101";
        ram[109] = "0b00111101001110100010110011101101";
        ram[110] = "0b10111101010100110000111010000000";
        ram[111] = "0b00111101101110000001111010011000";
        ram[112] = "0b00111101101111110100000100110110";
        ram[113] = "0b10111101101001110000010110101110";
        ram[114] = "0b00111101001111011010111010000010";
        ram[115] = "0b10111101000111110110001010000001";
        ram[116] = "0b10111101111000000111110001000010";
        ram[117] = "0b10111101011000101000011111101010";
        ram[118] = "0b10111101101001100011110101011001";
        ram[119] = "0b00111101101011001100001000011011";


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


SC_MODULE(inference_conv2d_f3_4_1_11) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 120;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


inference_conv2d_f3_4_1_11_ram* meminst;


SC_CTOR(inference_conv2d_f3_4_1_11) {
meminst = new inference_conv2d_f3_4_1_11_ram("inference_conv2d_f3_4_1_11_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~inference_conv2d_f3_4_1_11() {
    delete meminst;
}


};//endmodule
#endif