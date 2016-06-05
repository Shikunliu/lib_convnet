// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __inference_conv2d_f3_4_3_7_H__
#define __inference_conv2d_f3_4_3_7_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct inference_conv2d_f3_4_3_7_ram : public sc_core::sc_module {

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


   SC_CTOR(inference_conv2d_f3_4_3_7_ram) {
        ram[0] = "0b10111101000010110010001001110011";
        ram[1] = "0b10111110010001000001000000110000";
        ram[2] = "0b10111101010000010100011100101000";
        ram[3] = "0b00111110000101100111010111011110";
        ram[4] = "0b10111101111111000010111010111010";
        ram[5] = "0b00111110010101001010011101110010";
        ram[6] = "0b00111110000000000111011101000111";
        ram[7] = "0b10111101011010010111110011010001";
        ram[8] = "0b10111100111101011101010010011000";
        ram[9] = "0b00111101001001000000010001110001";
        ram[10] = "0b00111110000001110101111100101101";
        ram[11] = "0b00111101001100010111001000011000";
        ram[12] = "0b10111101111101100111110110111011";
        ram[13] = "0b00111110010101010100100101110011";
        ram[14] = "0b00111101101010010111000111000001";
        ram[15] = "0b00111101011000000110110011110010";
        ram[16] = "0b10111100110100001000011111011000";
        ram[17] = "0b00111110000001110111101101111100";
        ram[18] = "0b00111110000111011010101111100010";
        ram[19] = "0b00111110001100110100100101111011";
        ram[20] = "0b00111110011010010001011100001101";
        ram[21] = "0b10111100010011011011100111000111";
        ram[22] = "0b10111101101011010100010110110011";
        ram[23] = "0b00111101001110010100011110011010";
        ram[24] = "0b10111101000011000000100111000100";
        ram[25] = "0b00111101000010101110111010100110";
        ram[26] = "0b00111100001000101001010010010101";
        ram[27] = "0b00111101000100110000101010011111";
        ram[28] = "0b00111110010101001100100010111101";
        ram[29] = "0b10111101111110111100111001000010";
        ram[30] = "0b00111101011001110001011000100100";
        ram[31] = "0b00111101011101011100111010000100";
        ram[32] = "0b00111011101000010010101001000111";
        ram[33] = "0b00111110000101111001100110100010";
        ram[34] = "0b10111101001010101101011001101101";
        ram[35] = "0b10111011100100100111011000001111";
        ram[36] = "0b00111101001101110000101111101011";
        ram[37] = "0b00111101011011010100111100001000";
        ram[38] = "0b00111100110001000111001111001101";
        ram[39] = "0b10111101101101111000111011001000";
        ram[40] = "0b10111101111001100000111101011110";
        ram[41] = "0b10111100110011010101000100100001";
        ram[42] = "0b00111101011110001110110101010010";
        ram[43] = "0b00111011100101100000001010110110";
        ram[44] = "0b10111011111100010100111011100010";
        ram[45] = "0b00111101001010010110001110100111";
        ram[46] = "0b10111101111101101100000111100011";
        ram[47] = "0b10111101010110000001110000111100";
        ram[48] = "0b00111110000101011100001001001100";
        ram[49] = "0b10111100110111011010110010000100";
        ram[50] = "0b00111101101000110110101101011010";
        ram[51] = "0b10111110000111110100100111001111";
        ram[52] = "0b10111110000100100001100110101000";
        ram[53] = "0b00111101101111000110000011100111";
        ram[54] = "0b00111010100001010100010101111010";
        ram[55] = "0b10111110000110011001100010001101";
        ram[56] = "0b10111101110101101011001000101001";
        ram[57] = "0b10111101011110100011101100010101";
        ram[58] = "0b10111011001010011001110000011011";
        ram[59] = "0b00111001011000110000000001000000";
        ram[60] = "0b00111010100111010100010101001011";
        ram[61] = "0b10111100110000110100010011000011";
        ram[62] = "0b10111110010110001010101101010000";
        ram[63] = "0b00111100111011010111010011100011";
        ram[64] = "0b00111101111000111010001010011100";
        ram[65] = "0b00111101111111001010011111010110";
        ram[66] = "0b00111100001000010000111000111000";
        ram[67] = "0b00111101111000000100101011111001";
        ram[68] = "0b00111100101101100110100100010011";
        ram[69] = "0b00111101101100010110101100111010";
        ram[70] = "0b10111101110111101011111000010110";
        ram[71] = "0b10111101100011110010111010001100";
        ram[72] = "0b10111101101110111010100000110010";
        ram[73] = "0b10111110000100000010100110101110";
        ram[74] = "0b10111101110010100010001000111011";
        ram[75] = "0b10111110001010010101000110000011";
        ram[76] = "0b00111101110001111101010101100111";
        ram[77] = "0b10111100111111111001111000010000";
        ram[78] = "0b00111101100001011110111111110111";
        ram[79] = "0b10111110000110111110110100110001";
        ram[80] = "0b10111101000001101001011100101001";
        ram[81] = "0b00111100111100110111011010111010";
        ram[82] = "0b00111110000011101111101010100100";
        ram[83] = "0b00111101101011111010000000011100";
        ram[84] = "0b10111110000101100000101101110000";
        ram[85] = "0b00111110000101000100011000110000";
        ram[86] = "0b00111011101010110111000010110010";
        ram[87] = "0b00111101000110000010010000110100";
        ram[88] = "0b10111110000001010010001100101101";
        ram[89] = "0b00111100100000101010101101110110";
        ram[90] = "0b10111101010100101101000110010100";
        ram[91] = "0b10111101101001001101110001011000";
        ram[92] = "0b10111110000110111001100110010001";
        ram[93] = "0b10111100100110010001011100101000";
        ram[94] = "0b00111101011000011011110101010101";
        ram[95] = "0b00111100100101110101011011111111";
        ram[96] = "0b00111101110100011111010011110101";
        ram[97] = "0b10111110000000100100010111110110";
        ram[98] = "0b00111110000110000101110110110111";
        ram[99] = "0b10111101111101011011101100111000";
        ram[100] = "0b10111100001101010110101010110000";
        ram[101] = "0b10111100100000111101000011011010";
        ram[102] = "0b00111101011001100000100100010100";
        ram[103] = "0b00111101110000111110011011111010";
        ram[104] = "0b10111110000000100101101100110001";
        ram[105] = "0b00111101001010001010100010010110";
        ram[106] = "0b10111101000011011001110010100001";
        ram[107] = "0b10111101110000101100100100111110";
        ram[108] = "0b00111101100111011010101011111110";
        ram[109] = "0b10111110000110000011000010100001";
        ram[110] = "0b00111100110100011100101100000100";
        ram[111] = "0b10111110001011101010000010111010";
        ram[112] = "0b00111101001010001001110100001101";
        ram[113] = "0b10111110001100101111100100000001";
        ram[114] = "0b10111101101011000010100010001010";
        ram[115] = "0b10111101111111100111110110011010";
        ram[116] = "0b00111101101101111100010001101010";
        ram[117] = "0b00111101100000000000111111100011";
        ram[118] = "0b00111100110000100101000000111100";
        ram[119] = "0b10111100010010101001000010110010";


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


SC_MODULE(inference_conv2d_f3_4_3_7) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 120;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


inference_conv2d_f3_4_3_7_ram* meminst;


SC_CTOR(inference_conv2d_f3_4_3_7) {
meminst = new inference_conv2d_f3_4_3_7_ram("inference_conv2d_f3_4_3_7_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~inference_conv2d_f3_4_3_7() {
    delete meminst;
}


};//endmodule
#endif
