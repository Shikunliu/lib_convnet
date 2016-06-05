// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __inference_conv2d_f3_3_4_3_H__
#define __inference_conv2d_f3_3_4_3_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct inference_conv2d_f3_3_4_3_ram : public sc_core::sc_module {

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


   SC_CTOR(inference_conv2d_f3_3_4_3_ram) {
        ram[0] = "0b00111110000110100001001101111111";
        ram[1] = "0b10111101001110101000110100101111";
        ram[2] = "0b00111101001000011000100101010010";
        ram[3] = "0b10111101100101011000100011100011";
        ram[4] = "0b10111100111110010110000010101010";
        ram[5] = "0b00111101100000000101100011101011";
        ram[6] = "0b00111100101011000010000101011100";
        ram[7] = "0b00111101000011011111011001001000";
        ram[8] = "0b10111100011110000111011100001010";
        ram[9] = "0b00111101101110011111010011111100";
        ram[10] = "0b10111101011111001101010001001100";
        ram[11] = "0b00111101000010011011010000101110";
        ram[12] = "0b10111100100001101001100001101011";
        ram[13] = "0b00111101110010111100111110010010";
        ram[14] = "0b10111101111110100010000001011000";
        ram[15] = "0b00111101100000000100110100000101";
        ram[16] = "0b10111101110111101001110110010101";
        ram[17] = "0b10111101010111000100111001100101";
        ram[18] = "0b00111101110100000000000011001001";
        ram[19] = "0b00111101000010111111111111001110";
        ram[20] = "0b10111100010001100001111001011101";
        ram[21] = "0b10111110001111000110011001001101";
        ram[22] = "0b10111100100001010110011000000110";
        ram[23] = "0b00111101101001001101010111001011";
        ram[24] = "0b10111100110100001001011010111100";
        ram[25] = "0b10111101001101101111000110011001";
        ram[26] = "0b10111101100101100001101001111100";
        ram[27] = "0b00111101100001100110110110100011";
        ram[28] = "0b10111101110011001110011110001010";
        ram[29] = "0b00111100111111010000110000110000";
        ram[30] = "0b00111100110011011011101110101010";
        ram[31] = "0b10111110000001111001000000110010";
        ram[32] = "0b10111101111011010110011101110111";
        ram[33] = "0b10111101100110010101100011100111";
        ram[34] = "0b10111110000111111001110101101111";
        ram[35] = "0b00111101100101001101001011000000";
        ram[36] = "0b10111101011110111110000011010001";
        ram[37] = "0b00111110000001110110000000111001";
        ram[38] = "0b00111101101011111001100111111001";
        ram[39] = "0b10111101100010110101110001101111";
        ram[40] = "0b10111101101111001110101100000000";
        ram[41] = "0b10111101110101010111111111111010";
        ram[42] = "0b10111100111101011110110000010101";
        ram[43] = "0b10111110000111111110101011000100";
        ram[44] = "0b00111101110110100100101001001001";
        ram[45] = "0b00111101100100010110011111101100";
        ram[46] = "0b10111101101110101100101010010100";
        ram[47] = "0b00111101000010011100101001001110";
        ram[48] = "0b10111101100000110101010011000001";
        ram[49] = "0b00111110000101110100011110010101";
        ram[50] = "0b00111110000000110000100001111000";
        ram[51] = "0b10111101101110101001100010111000";
        ram[52] = "0b10111100110100011100001101000001";
        ram[53] = "0b10111100100110010100010110000001";
        ram[54] = "0b00111011000101111010111000110010";
        ram[55] = "0b10111101101001101001111000111101";
        ram[56] = "0b10111101111101110110101000101111";
        ram[57] = "0b00111101010100011110001000010101";
        ram[58] = "0b00111110000101100101010101011100";
        ram[59] = "0b10111100110000001010001000011100";
        ram[60] = "0b10111101110100010010011101110000";
        ram[61] = "0b10111101110100000011011011001010";
        ram[62] = "0b00111101010000101010011011110100";
        ram[63] = "0b00111101011001000001011001000101";
        ram[64] = "0b00111101101111110100001111010101";
        ram[65] = "0b00111101110111000011000011010011";
        ram[66] = "0b10111101100001101101001011111011";
        ram[67] = "0b10111101110110111011001011111111";
        ram[68] = "0b00111101100011111001001111001001";
        ram[69] = "0b10111100111001110000100110001111";
        ram[70] = "0b00111101110001100111000110111010";
        ram[71] = "0b00111100100000111000101011001111";
        ram[72] = "0b10111101000111110011011110111001";
        ram[73] = "0b00111101110101110110100010011101";
        ram[74] = "0b00111011101001000110101000011000";
        ram[75] = "0b10111101100110001001100101111100";
        ram[76] = "0b00111101111010101100111100110001";
        ram[77] = "0b00111110000110011101100100001010";
        ram[78] = "0b10111101111011110001000100110000";
        ram[79] = "0b10111110000100110010010101001110";
        ram[80] = "0b00111100001001001100101111111101";
        ram[81] = "0b00111101001000010010111010000100";
        ram[82] = "0b10111101011010001010101001111001";
        ram[83] = "0b10111101001110010000100000001111";
        ram[84] = "0b10111110001010111010101011011110";
        ram[85] = "0b00111110001011001111100011010111";
        ram[86] = "0b10111101011000010111111110010010";
        ram[87] = "0b00111101011000100100100110111100";
        ram[88] = "0b10111011101011010111010111000100";
        ram[89] = "0b00111101101110001001011101111110";
        ram[90] = "0b00111101111111101100001111011011";
        ram[91] = "0b10111101101111101000000001010011";
        ram[92] = "0b10111101100001011101100100011011";
        ram[93] = "0b10111101100111000110000100110111";
        ram[94] = "0b00111101100110000100110111000111";
        ram[95] = "0b10111110010110001111100101101110";
        ram[96] = "0b10111110001011000110000001000110";
        ram[97] = "0b10111011010010101101111000110101";
        ram[98] = "0b00111100111101000010000011001111";
        ram[99] = "0b00111100110100111010110111000111";
        ram[100] = "0b00111110001110111001011111111111";
        ram[101] = "0b10111110000101011110100100011000";
        ram[102] = "0b10111101000001101110101011010110";
        ram[103] = "0b00111110010111110001011001101110";
        ram[104] = "0b00111101111111110010001011000000";
        ram[105] = "0b00111110000000101000100110011000";
        ram[106] = "0b10111101000100001011111011100101";
        ram[107] = "0b10111101110001101010011000110101";
        ram[108] = "0b10111101010000001000111111000011";
        ram[109] = "0b10111101101011111000101110101001";
        ram[110] = "0b00111101110001101110100111001001";
        ram[111] = "0b10111011101000000000111110101010";
        ram[112] = "0b10111101101010110000100000000110";
        ram[113] = "0b10111101111100011100000010000111";
        ram[114] = "0b00111101111101010011101101001011";
        ram[115] = "0b10111101110010101111101110100111";
        ram[116] = "0b10111011100010101101111100000001";
        ram[117] = "0b10111110000111110111001001110001";
        ram[118] = "0b00111101111100011111101000110011";
        ram[119] = "0b00111101110111001100010010101100";


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


SC_MODULE(inference_conv2d_f3_3_4_3) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 120;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


inference_conv2d_f3_3_4_3_ram* meminst;


SC_CTOR(inference_conv2d_f3_3_4_3) {
meminst = new inference_conv2d_f3_3_4_3_ram("inference_conv2d_f3_3_4_3_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~inference_conv2d_f3_3_4_3() {
    delete meminst;
}


};//endmodule
#endif
