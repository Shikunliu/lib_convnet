// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __inference_conv2d_f3_2_2_7_H__
#define __inference_conv2d_f3_2_2_7_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct inference_conv2d_f3_2_2_7_ram : public sc_core::sc_module {

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


   SC_CTOR(inference_conv2d_f3_2_2_7_ram) {
        ram[0] = "0b10111101101011000011110001110111";
        ram[1] = "0b10111101101101010000000001011101";
        ram[2] = "0b10111110000000110001110000100010";
        ram[3] = "0b00111101010000010110101100011111";
        ram[4] = "0b00111101101001001111000001101101";
        ram[5] = "0b00111101111100011110100001100000";
        ram[6] = "0b10111101000000010111010011111010";
        ram[7] = "0b00111100001100100111101100010010";
        ram[8] = "0b10111110000000010000100100000111";
        ram[9] = "0b00111110000001110111100010011010";
        ram[10] = "0b10111100100101110001101000101110";
        ram[11] = "0b00111101110111000100011111100101";
        ram[12] = "0b00111101101100100110110001001001";
        ram[13] = "0b00111101010100001011011101011000";
        ram[14] = "0b10111100011011001011110100101101";
        ram[15] = "0b00111101100000010001010111000101";
        ram[16] = "0b00111101110110000101011100101010";
        ram[17] = "0b00111110001110100100100000110000";
        ram[18] = "0b00111101001110110111011001001000";
        ram[19] = "0b00111110001011101000001101011110";
        ram[20] = "0b00111110001011011101110110110001";
        ram[21] = "0b00111101000110011001110000000011";
        ram[22] = "0b10111110000010011010000000100111";
        ram[23] = "0b10111101100001001101101011111011";
        ram[24] = "0b10111101011011101101110000100001";
        ram[25] = "0b00111100010001101110111001100110";
        ram[26] = "0b00111101100100000100001110010101";
        ram[27] = "0b00111101101100111010011000111011";
        ram[28] = "0b10111101100100100001101001110010";
        ram[29] = "0b10111101100001101110000110011100";
        ram[30] = "0b00111110001001101110000101011000";
        ram[31] = "0b10111100001000101100111001101100";
        ram[32] = "0b00111100010110101100000110000010";
        ram[33] = "0b00111101011101011101001010011010";
        ram[34] = "0b00111101011010111010011011000111";
        ram[35] = "0b00111110010011111111111110111101";
        ram[36] = "0b00111100110000001111101000110001";
        ram[37] = "0b00111101110111010011100010001011";
        ram[38] = "0b00111101001010011001100010000000";
        ram[39] = "0b00111101110010010110011101101101";
        ram[40] = "0b00111100100001110000001101011111";
        ram[41] = "0b10111101000111101000000101000101";
        ram[42] = "0b10111110000011000100100101110111";
        ram[43] = "0b00111110001101111001011110001001";
        ram[44] = "0b00111101001101101101101010111101";
        ram[45] = "0b00111101110000111001001110101011";
        ram[46] = "0b10111101100101100000000000001111";
        ram[47] = "0b10111101110101111011011000110101";
        ram[48] = "0b10111101100010011111000011001010";
        ram[49] = "0b10111110000100111000000010001000";
        ram[50] = "0b10111101011110110111011101110000";
        ram[51] = "0b00111101101001010001101000110110";
        ram[52] = "0b10111011110101110111010100110010";
        ram[53] = "0b00111101111111000111001111101111";
        ram[54] = "0b00111101000110100101101010001010";
        ram[55] = "0b10111110000110010110111010011100";
        ram[56] = "0b00111100111011000010101101101101";
        ram[57] = "0b10111011100101010100001111110100";
        ram[58] = "0b00111100101010100100001010010100";
        ram[59] = "0b10111101011000100110100000100101";
        ram[60] = "0b10111100111000111111011000010100";
        ram[61] = "0b10111100000001001101001010100011";
        ram[62] = "0b10111100110100111001011111111000";
        ram[63] = "0b00111101001011001010110000110000";
        ram[64] = "0b00111101000000011100110010111111";
        ram[65] = "0b10111100101000100100101110000100";
        ram[66] = "0b00111101100000111010010010101000";
        ram[67] = "0b10111101101111010111101000100001";
        ram[68] = "0b10111101001100111101100000100100";
        ram[69] = "0b10111101110001110000101000100011";
        ram[70] = "0b10111010110110100011001110111110";
        ram[71] = "0b10111110000101100000010100100101";
        ram[72] = "0b00111101010110001001000100001011";
        ram[73] = "0b10111110000000011111011111010111";
        ram[74] = "0b10111101101000011100110101111010";
        ram[75] = "0b10111101001101010001001100100010";
        ram[76] = "0b00111100100101110010011010001101";
        ram[77] = "0b00111101100110001100101001011001";
        ram[78] = "0b10111101000000111001110001010010";
        ram[79] = "0b10111101101001001101110011010001";
        ram[80] = "0b00111101001010001011011011110011";
        ram[81] = "0b10111101001001011110011000101001";
        ram[82] = "0b00111010110111110101001101100010";
        ram[83] = "0b10111101010000111110100111101010";
        ram[84] = "0b10111110010100101111101101011101";
        ram[85] = "0b10111101101011110100110110010110";
        ram[86] = "0b00111101010011011101100001100110";
        ram[87] = "0b00111101110100001001101011101101";
        ram[88] = "0b00111101010011010001010010100001";
        ram[89] = "0b00111101000110011110100110011011";
        ram[90] = "0b10111101100100101000111000011010";
        ram[91] = "0b10111101000111111000001111110100";
        ram[92] = "0b10111101010101100011000010001110";
        ram[93] = "0b00111101101100111001010011111011";
        ram[94] = "0b00111101101001000110111011111011";
        ram[95] = "0b00111110001011111100110011100010";
        ram[96] = "0b00111011100110011110110101010001";
        ram[97] = "0b10111100111111001010101001110110";
        ram[98] = "0b00111101001100001001011101000010";
        ram[99] = "0b10111101111110011010001010000011";
        ram[100] = "0b10111110001000010110010001000001";
        ram[101] = "0b10111100110100101000100101101111";
        ram[102] = "0b10111110000111000110110010011000";
        ram[103] = "0b00111101100000001001000000101110";
        ram[104] = "0b10111110000000011011000111011001";
        ram[105] = "0b10111110001000000000100111110110";
        ram[106] = "0b00111101101111010110001010010111";
        ram[107] = "0b00111101110100001000110011000101";
        ram[108] = "0b10111101010001000100111111010110";
        ram[109] = "0b10111100110000000100101000111101";
        ram[110] = "0b00111101111011011011101111100000";
        ram[111] = "0b10111101010000101001101011001010";
        ram[112] = "0b00111101011101000011101011101011";
        ram[113] = "0b00111101101101010110111011111101";
        ram[114] = "0b00111001110000011011111000000100";
        ram[115] = "0b00111101101010100010111111001111";
        ram[116] = "0b10111101100000001011110001101110";
        ram[117] = "0b00111101011111000101010001011111";
        ram[118] = "0b00111101011100101011011001010001";
        ram[119] = "0b10111100110110000111000000111001";


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


SC_MODULE(inference_conv2d_f3_2_2_7) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 120;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


inference_conv2d_f3_2_2_7_ram* meminst;


SC_CTOR(inference_conv2d_f3_2_2_7) {
meminst = new inference_conv2d_f3_2_2_7_ram("inference_conv2d_f3_2_2_7_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~inference_conv2d_f3_2_2_7() {
    delete meminst;
}


};//endmodule
#endif
