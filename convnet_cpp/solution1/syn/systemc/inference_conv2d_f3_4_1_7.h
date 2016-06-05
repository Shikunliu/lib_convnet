// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __inference_conv2d_f3_4_1_7_H__
#define __inference_conv2d_f3_4_1_7_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct inference_conv2d_f3_4_1_7_ram : public sc_core::sc_module {

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


   SC_CTOR(inference_conv2d_f3_4_1_7_ram) {
        ram[0] = "0b10111110000100111001000011001001";
        ram[1] = "0b00111101110111001000101110000111";
        ram[2] = "0b10111100100111000010100101100001";
        ram[3] = "0b00111110001101011000001101100010";
        ram[4] = "0b00111011010110001110000011010111";
        ram[5] = "0b10111110000101001100000011011111";
        ram[6] = "0b00111101101000100101100010010010";
        ram[7] = "0b00111101111010100100101000000110";
        ram[8] = "0b10111100100110111110110100110001";
        ram[9] = "0b00111101100011100001000010011010";
        ram[10] = "0b00111101110100010001011000100011";
        ram[11] = "0b10111110000101111111100111010111";
        ram[12] = "0b10111101111010101111010001101011";
        ram[13] = "0b10111110000000011111110011010010";
        ram[14] = "0b10111101111110110100111111101000";
        ram[15] = "0b00111100001010111010011001110111";
        ram[16] = "0b10111101001001111100000010100100";
        ram[17] = "0b10111101000011000111100110001011";
        ram[18] = "0b10111110010001100110111111010110";
        ram[19] = "0b10111110000011101001000000110110";
        ram[20] = "0b00111000111111100111001010001100";
        ram[21] = "0b00111110001110111101001010110111";
        ram[22] = "0b00111100100110011101100010000100";
        ram[23] = "0b00111101101000001011001100110100";
        ram[24] = "0b10111100011000000110111001101010";
        ram[25] = "0b10111101000010101011010101001011";
        ram[26] = "0b00111101010011101101000111011010";
        ram[27] = "0b00111110010001010001110000011001";
        ram[28] = "0b10111110000101100100100111010100";
        ram[29] = "0b10111101111010011110100110001110";
        ram[30] = "0b00111110001010110101001100001101";
        ram[31] = "0b10111011000110000101100111010100";
        ram[32] = "0b10111100100011011100100101001100";
        ram[33] = "0b10111110010110011101001101000110";
        ram[34] = "0b00111100101100100011100110100100";
        ram[35] = "0b10111101010000101110111011001000";
        ram[36] = "0b00111101011000010001010100100011";
        ram[37] = "0b00111101111001001001011001101000";
        ram[38] = "0b00111110010001111000001100010111";
        ram[39] = "0b10111101001010111000001001100101";
        ram[40] = "0b00111101100111010001101010001101";
        ram[41] = "0b00111101101011000100010001010100";
        ram[42] = "0b00111100100100100001100000110000";
        ram[43] = "0b00111101000110111001100000100111";
        ram[44] = "0b10111001110001100111001101101100";
        ram[45] = "0b00111100100110110000000101111001";
        ram[46] = "0b00111100100010110100000010100110";
        ram[47] = "0b10111101111001111000011111001111";
        ram[48] = "0b00111110001001011111001111011000";
        ram[49] = "0b10111101001100000011011110111011";
        ram[50] = "0b10111101110111110001000001100110";
        ram[51] = "0b00111110010101100110011101110011";
        ram[52] = "0b00111101100110011000000111100111";
        ram[53] = "0b00111101111111011001010001001011";
        ram[54] = "0b00111101000000010110100101110010";
        ram[55] = "0b10111100101010111110101010011111";
        ram[56] = "0b10111100110011011100011100110011";
        ram[57] = "0b10111101011100101101001001101011";
        ram[58] = "0b10111110000001010101111001101100";
        ram[59] = "0b00111100011100111010000000001011";
        ram[60] = "0b00111101111110101010110101100000";
        ram[61] = "0b10111011100010010010000011111011";
        ram[62] = "0b00111110000110000100011011101001";
        ram[63] = "0b00111101100100011100011000100011";
        ram[64] = "0b10111101101101000100111011100100";
        ram[65] = "0b10111101011000000101111011100101";
        ram[66] = "0b10111011111111101111010111010100";
        ram[67] = "0b10111101010001101111101011111100";
        ram[68] = "0b10111101011000001111111011101001";
        ram[69] = "0b10111110000101000010101000100100";
        ram[70] = "0b10111100001011101110001000000000";
        ram[71] = "0b00111100100010010101001100110000";
        ram[72] = "0b10111110000110111010101000010101";
        ram[73] = "0b00111100111100110101101100001100";
        ram[74] = "0b00111101011101011110001101000111";
        ram[75] = "0b00111011001111110010100000011111";
        ram[76] = "0b00111101110000110111001000101011";
        ram[77] = "0b00111101011011111101101010011110";
        ram[78] = "0b00111110000000011001011011011001";
        ram[79] = "0b10111110000001010011010010111101";
        ram[80] = "0b10111101000101111111000010011101";
        ram[81] = "0b00111101101100111001111110010010";
        ram[82] = "0b00111110010110011001011100111110";
        ram[83] = "0b10111100111100001101110001000001";
        ram[84] = "0b00111101010011010111110101000110";
        ram[85] = "0b00111101011001011101100001101100";
        ram[86] = "0b10111101110101110111011101001011";
        ram[87] = "0b10111101010110000111001001010010";
        ram[88] = "0b00111001011011001101001010101111";
        ram[89] = "0b00111101010101111001010110110011";
        ram[90] = "0b10111100110010100111110011000110";
        ram[91] = "0b10111110010010111010011110111001";
        ram[92] = "0b00111101011001111001010011001111";
        ram[93] = "0b10111100101010101000001010001011";
        ram[94] = "0b10111101011001100111110101111000";
        ram[95] = "0b10111101001100101010001000010100";
        ram[96] = "0b00111100100010001111010100111100";
        ram[97] = "0b00111101111101000101110011111111";
        ram[98] = "0b00111100100000010101000110100100";
        ram[99] = "0b00111110010001000001100010010011";
        ram[100] = "0b00111101011110001010000111010010";
        ram[101] = "0b00111101010100000110011100111011";
        ram[102] = "0b10111100111101100000111000001111";
        ram[103] = "0b10111100100101101010001110110000";
        ram[104] = "0b00111101111001111000100111100111";
        ram[105] = "0b10111101001010101000111110001011";
        ram[106] = "0b10111101000011101001000001010001";
        ram[107] = "0b00111101001111100001011100001101";
        ram[108] = "0b10111100111011110000010100111100";
        ram[109] = "0b00111101111000001001001011001101";
        ram[110] = "0b10111110000001110011010100111011";
        ram[111] = "0b00111011111101000011001111101111";
        ram[112] = "0b00111101100000100100011101010011";
        ram[113] = "0b00111101010100110000101101000000";
        ram[114] = "0b10111110000000011010101011000101";
        ram[115] = "0b10111101101011101101000000000101";
        ram[116] = "0b10111101001001000100101100011110";
        ram[117] = "0b10111101000100101110110001101100";
        ram[118] = "0b10111110010001101101011111101001";
        ram[119] = "0b00111101101100111001110001011111";


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


SC_MODULE(inference_conv2d_f3_4_1_7) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 120;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


inference_conv2d_f3_4_1_7_ram* meminst;


SC_CTOR(inference_conv2d_f3_4_1_7) {
meminst = new inference_conv2d_f3_4_1_7_ram("inference_conv2d_f3_4_1_7_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~inference_conv2d_f3_4_1_7() {
    delete meminst;
}


};//endmodule
#endif
