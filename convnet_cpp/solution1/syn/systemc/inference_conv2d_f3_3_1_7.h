// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __inference_conv2d_f3_3_1_7_H__
#define __inference_conv2d_f3_3_1_7_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct inference_conv2d_f3_3_1_7_ram : public sc_core::sc_module {

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


   SC_CTOR(inference_conv2d_f3_3_1_7_ram) {
        ram[0] = "0b10111101110010111100001111010011";
        ram[1] = "0b00111000100011100011100010110101";
        ram[2] = "0b10111101101010010110100001010001";
        ram[3] = "0b10111100110100000001101100000000";
        ram[4] = "0b10111110001101000101010100100010";
        ram[5] = "0b00111110000101000011111000010000";
        ram[6] = "0b10111101100110100000110000000000";
        ram[7] = "0b10111110001001001010010111011111";
        ram[8] = "0b00111101010111100001100000110100";
        ram[9] = "0b00111101010001111010000000000111";
        ram[10] = "0b10111101001001110101101011010011";
        ram[11] = "0b00111100001001111010111000101111";
        ram[12] = "0b00111101110000110101110011101111";
        ram[13] = "0b00111110000000000011111100101101";
        ram[14] = "0b00111101111101010010101010000100";
        ram[15] = "0b00111101111110001001010110001110";
        ram[16] = "0b10111101000001001011010011010000";
        ram[17] = "0b10111101000001101110110100100100";
        ram[18] = "0b00111101101100111111001010111001";
        ram[19] = "0b10111110001000110101010111001110";
        ram[20] = "0b10111101001011001101110101000011";
        ram[21] = "0b10111011110010000111001100100001";
        ram[22] = "0b00111101110000010110011000010111";
        ram[23] = "0b00111101101101001101000001100100";
        ram[24] = "0b00111101111000010001001010111010";
        ram[25] = "0b00111101011011010101111101001001";
        ram[26] = "0b10111011010101001101111110010110";
        ram[27] = "0b00111010100111000110101010000100";
        ram[28] = "0b10111100000101110000101011110100";
        ram[29] = "0b00111110001100001000000111000011";
        ram[30] = "0b00111101101000100111111010110000";
        ram[31] = "0b00111011100011000011011100011011";
        ram[32] = "0b10111101110010011011000011111100";
        ram[33] = "0b10111110010001110000010010111100";
        ram[34] = "0b00111011111100111100011110111000";
        ram[35] = "0b10111010110101101011110011100110";
        ram[36] = "0b10111101000001111010101101110101";
        ram[37] = "0b00111101110110110000110001000110";
        ram[38] = "0b00111101101000100010001001011100";
        ram[39] = "0b00111101110001011000000111001111";
        ram[40] = "0b10111101101010010010110100100000";
        ram[41] = "0b10111101101011011000010110000010";
        ram[42] = "0b10111100001101001011000110111000";
        ram[43] = "0b00111100010010001101011111100000";
        ram[44] = "0b10111101011001111100001111111111";
        ram[45] = "0b10111101101001110111101011000001";
        ram[46] = "0b10111101100000111000011011000110";
        ram[47] = "0b00111101011110010010001001000110";
        ram[48] = "0b00111100011111010010001110101101";
        ram[49] = "0b00111110001000101110111010000101";
        ram[50] = "0b00111110000101101011001101111000";
        ram[51] = "0b10111100101001000011000010010111";
        ram[52] = "0b10111010111010011110111110011101";
        ram[53] = "0b00111101011000000100000111011010";
        ram[54] = "0b00111100100101010101100011000010";
        ram[55] = "0b10111110001000010100111001111111";
        ram[56] = "0b00111101000000101111111111111010";
        ram[57] = "0b10111101101001010011110011101011";
        ram[58] = "0b00111100010000000110010101001011";
        ram[59] = "0b00111010101100000101101100100111";
        ram[60] = "0b10111110000000110010111000111000";
        ram[61] = "0b00111110000010000011001101000000";
        ram[62] = "0b00111101010110000011001111101110";
        ram[63] = "0b10111100001001110110101000111101";
        ram[64] = "0b10111101001010000111000111110100";
        ram[65] = "0b10111101011100100000011110000100";
        ram[66] = "0b00111101110011101011111011100000";
        ram[67] = "0b00111101010010111101001100111101";
        ram[68] = "0b10111101001000010001011111111000";
        ram[69] = "0b10111101101010011001111111110010";
        ram[70] = "0b00111101100000110011110011110100";
        ram[71] = "0b00111101101110001000111110010100";
        ram[72] = "0b00111110001110010100100011011100";
        ram[73] = "0b10111100000001100011100010110100";
        ram[74] = "0b00111100100111010010001001010000";
        ram[75] = "0b10111101011011000000000110110001";
        ram[76] = "0b00111101110001001111010111101110";
        ram[77] = "0b00111100001001011011011000001000";
        ram[78] = "0b00111101110101011110000001110010";
        ram[79] = "0b10111101000010010001001100011111";
        ram[80] = "0b00111101101100100010110111001010";
        ram[81] = "0b10111101100001101111001101100010";
        ram[82] = "0b10111100100000001000011100001110";
        ram[83] = "0b00111100111111101011101010111011";
        ram[84] = "0b10111110000100001000110111010010";
        ram[85] = "0b00111101100001001010000000001101";
        ram[86] = "0b00111101011000011110000110110111";
        ram[87] = "0b10111101001100010110111011110011";
        ram[88] = "0b10111101100101101101100010010111";
        ram[89] = "0b10111101110011011100111101000110";
        ram[90] = "0b00111101101011100011000110100001";
        ram[91] = "0b10111101110110000000011001101100";
        ram[92] = "0b10111100111100000100111110001001";
        ram[93] = "0b10111101000000110110000011011110";
        ram[94] = "0b10111110001001001001000001100000";
        ram[95] = "0b10111011111010111000101000100111";
        ram[96] = "0b10111110000000111101110110011000";
        ram[97] = "0b00111100100001001110101010000000";
        ram[98] = "0b10111101100100011011110001010110";
        ram[99] = "0b00111100111001011011001110000011";
        ram[100] = "0b00111101111000110101001001100101";
        ram[101] = "0b10111100101001101111100111010100";
        ram[102] = "0b10111110000011110100000100101001";
        ram[103] = "0b00111101111000000010100011100101";
        ram[104] = "0b10111101000010100000010001100110";
        ram[105] = "0b00111100111110001100101111111001";
        ram[106] = "0b10111101000010101010111110000110";
        ram[107] = "0b10111100000110011100101111011001";
        ram[108] = "0b00111100100110011101001101111011";
        ram[109] = "0b10111101010111101000010011010110";
        ram[110] = "0b00111101101101011011010100100011";
        ram[111] = "0b00111101001100001101101001111001";
        ram[112] = "0b00111101010100110100110111110000";
        ram[113] = "0b00111110000001101000000000010111";
        ram[114] = "0b10111101101110101100001011111010";
        ram[115] = "0b10111101101100000111011101000111";
        ram[116] = "0b00111101101111000000110011110111";
        ram[117] = "0b10111100000110011111011110100011";
        ram[118] = "0b10111101100001111100101101100011";
        ram[119] = "0b10111110010010011101011101110111";


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


SC_MODULE(inference_conv2d_f3_3_1_7) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 120;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


inference_conv2d_f3_3_1_7_ram* meminst;


SC_CTOR(inference_conv2d_f3_3_1_7) {
meminst = new inference_conv2d_f3_3_1_7_ram("inference_conv2d_f3_3_1_7_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~inference_conv2d_f3_3_1_7() {
    delete meminst;
}


};//endmodule
#endif
