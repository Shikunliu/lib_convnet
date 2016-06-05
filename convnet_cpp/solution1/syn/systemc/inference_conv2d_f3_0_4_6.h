// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __inference_conv2d_f3_0_4_6_H__
#define __inference_conv2d_f3_0_4_6_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct inference_conv2d_f3_0_4_6_ram : public sc_core::sc_module {

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


   SC_CTOR(inference_conv2d_f3_0_4_6_ram) {
        ram[0] = "0b10111101110010111111100000100110";
        ram[1] = "0b10111101100001000110011110001001";
        ram[2] = "0b10111101001001100101001110000111";
        ram[3] = "0b10111101000001111101001011100011";
        ram[4] = "0b10111110010011110111011001100000";
        ram[5] = "0b10111011011100011010110001010101";
        ram[6] = "0b10111100101101010100001100001110";
        ram[7] = "0b10111101101101110001111101000100";
        ram[8] = "0b00111101000000110010011100010111";
        ram[9] = "0b00111100011101000001011010111110";
        ram[10] = "0b10111011111011101111011011000011";
        ram[11] = "0b10111101111100110111100101110100";
        ram[12] = "0b00111101001010100101011110001101";
        ram[13] = "0b00111110001110011110100000111110";
        ram[14] = "0b10111101011001100100001101100001";
        ram[15] = "0b00111101101111101111010110110111";
        ram[16] = "0b00111011100001001111110110101011";
        ram[17] = "0b00111101011111010010000111001001";
        ram[18] = "0b00111110001000011010111000101110";
        ram[19] = "0b10111110000010011110110100111001";
        ram[20] = "0b10111010001111111111110111101110";
        ram[21] = "0b10111110000100101111011011101000";
        ram[22] = "0b00111101101101101100110111011000";
        ram[23] = "0b10111101100111011001001011101110";
        ram[24] = "0b00111101011001010010011011001011";
        ram[25] = "0b10111101001100011110110111010100";
        ram[26] = "0b10111100111010010000111101011000";
        ram[27] = "0b00111100001100101001111001001101";
        ram[28] = "0b00111110011010101000001011101000";
        ram[29] = "0b00111110000010011001110101000101";
        ram[30] = "0b00111100110110110010110001110111";
        ram[31] = "0b00111100010001101101001010111000";
        ram[32] = "0b00111101110110110000010001101000";
        ram[33] = "0b00111101110001101001110001110100";
        ram[34] = "0b10111101001100111001001001101001";
        ram[35] = "0b00111100101001110011111110101010";
        ram[36] = "0b10111100110110110000000111100100";
        ram[37] = "0b00111011011001111011111110010111";
        ram[38] = "0b00111101111000111100000110001011";
        ram[39] = "0b10111101011001111011001110001000";
        ram[40] = "0b10111101100010100110000010101100";
        ram[41] = "0b00111110000000111011011100001111";
        ram[42] = "0b10111110000100100111001010000110";
        ram[43] = "0b00111101101100010001010111000101";
        ram[44] = "0b10111101101100000101110010010111";
        ram[45] = "0b00111101111100100101001011001110";
        ram[46] = "0b10111101010100000101110000000011";
        ram[47] = "0b00111100110011011010110010010001";
        ram[48] = "0b10111101110111111010001110111010";
        ram[49] = "0b10111100000100010010101010000000";
        ram[50] = "0b10111100100000000000010010011101";
        ram[51] = "0b00111110001111011011110111111001";
        ram[52] = "0b10111110001100100001010001101010";
        ram[53] = "0b00111101010101010011001110100100";
        ram[54] = "0b10111110100100001011111110100001";
        ram[55] = "0b00111110001011010011000010101101";
        ram[56] = "0b00111100111100000000111000011010";
        ram[57] = "0b00111100001111110010010000000010";
        ram[58] = "0b10111110000110000110100011111101";
        ram[59] = "0b00111101110100101101010011010100";
        ram[60] = "0b00111110000110110101101001100100";
        ram[61] = "0b10111101110100110110111101111110";
        ram[62] = "0b10111101100010011000100010111000";
        ram[63] = "0b10111101101110110000001101011100";
        ram[64] = "0b00111101111001001101100011111101";
        ram[65] = "0b10111101110011000110110101100001";
        ram[66] = "0b00111100110011001001100100110110";
        ram[67] = "0b10111110001010010000011110010110";
        ram[68] = "0b10111100011000110001101000010110";
        ram[69] = "0b00111101101001110111000101111001";
        ram[70] = "0b00111101101011000001101000010010";
        ram[71] = "0b00111101111000110001011010100000";
        ram[72] = "0b00111101100101000100001001110111";
        ram[73] = "0b00111011100011001100100001111011";
        ram[74] = "0b10111101110111001111010111110101";
        ram[75] = "0b00111101001011001100011110101001";
        ram[76] = "0b00111110000011010011111011010101";
        ram[77] = "0b10111101100010000001011100100110";
        ram[78] = "0b10111101000101010100111100011101";
        ram[79] = "0b00111011110110101101001011011111";
        ram[80] = "0b10111100000111101001101001110101";
        ram[81] = "0b10111100001010111010101010101001";
        ram[82] = "0b00111101001001100111100001010101";
        ram[83] = "0b00111101111001011011010000100100";
        ram[84] = "0b00111100110101001100001010011010";
        ram[85] = "0b00111110000100101111101111100011";
        ram[86] = "0b00111010000011010111000101010011";
        ram[87] = "0b00111101010101000010010011100110";
        ram[88] = "0b10111110000000011111110111011111";
        ram[89] = "0b10111101011011100010100111000100";
        ram[90] = "0b00111101010111010111000100001111";
        ram[91] = "0b00111100000001100110100010000101";
        ram[92] = "0b00111110000110001100000100010010";
        ram[93] = "0b00111110000110111101111010000011";
        ram[94] = "0b10111101010110011101111100011111";
        ram[95] = "0b10111011101100101000001110110110";
        ram[96] = "0b10111110010001101011010100001011";
        ram[97] = "0b10111100101011100111100010000100";
        ram[98] = "0b10111101101100101011110110110101";
        ram[99] = "0b00111100000011000011111100111110";
        ram[100] = "0b00111101100101110010110100011011";
        ram[101] = "0b00111101010101111010100100110100";
        ram[102] = "0b10111101101110011101000001001001";
        ram[103] = "0b00111101111010111100110011110011";
        ram[104] = "0b10111101101101000000111000001010";
        ram[105] = "0b10111101101111011000010100110001";
        ram[106] = "0b10111101000111000100111111000010";
        ram[107] = "0b10111101101101010100101101111111";
        ram[108] = "0b10111101000001011110011110000110";
        ram[109] = "0b10111101101000011011011011010100";
        ram[110] = "0b10111100001011010001010111100011";
        ram[111] = "0b00111101101100110000110110011100";
        ram[112] = "0b00111110010100010011101100011001";
        ram[113] = "0b10111110000100001101111001001100";
        ram[114] = "0b10111101001100100110111010110010";
        ram[115] = "0b00111100100100100111001110100000";
        ram[116] = "0b10111100100100101101010001001110";
        ram[117] = "0b10111101011010110000010011100001";
        ram[118] = "0b00111010000110010001110001111010";
        ram[119] = "0b10111110000000011111000000111101";


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


SC_MODULE(inference_conv2d_f3_0_4_6) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 120;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


inference_conv2d_f3_0_4_6_ram* meminst;


SC_CTOR(inference_conv2d_f3_0_4_6) {
meminst = new inference_conv2d_f3_0_4_6_ram("inference_conv2d_f3_0_4_6_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~inference_conv2d_f3_0_4_6() {
    delete meminst;
}


};//endmodule
#endif
