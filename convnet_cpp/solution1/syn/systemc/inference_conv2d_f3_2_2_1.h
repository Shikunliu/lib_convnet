// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __inference_conv2d_f3_2_2_1_H__
#define __inference_conv2d_f3_2_2_1_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct inference_conv2d_f3_2_2_1_ram : public sc_core::sc_module {

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


   SC_CTOR(inference_conv2d_f3_2_2_1_ram) {
        ram[0] = "0b00111101000001100000010101101000";
        ram[1] = "0b10111101010010111110001000111100";
        ram[2] = "0b10111100000100011010010010100011";
        ram[3] = "0b00111101101110011101100111101110";
        ram[4] = "0b10111101011100000010101011010110";
        ram[5] = "0b10111101000101011011011100100001";
        ram[6] = "0b00111110000101100101000101101110";
        ram[7] = "0b10111110010010011000010010100001";
        ram[8] = "0b10111110000000011101111111111100";
        ram[9] = "0b10111101011001010010110110000001";
        ram[10] = "0b00111110000110000100101101011110";
        ram[11] = "0b10111101010011000110000000101011";
        ram[12] = "0b10111101100001001111100010000000";
        ram[13] = "0b00111110000001101001011011100110";
        ram[14] = "0b10111101001110111100100101101111";
        ram[15] = "0b00111101010101010001001010110111";
        ram[16] = "0b10111110000110000001001101000101";
        ram[17] = "0b00111110000111010001110011000001";
        ram[18] = "0b10111101101110000101001001110010";
        ram[19] = "0b00111101001100011100111001111001";
        ram[20] = "0b10111100010110001011011011100110";
        ram[21] = "0b00111101101110010000000110110111";
        ram[22] = "0b00111101100011110101110010101111";
        ram[23] = "0b00111110010011010001000011110101";
        ram[24] = "0b00111100011000111011111010000001";
        ram[25] = "0b00111101001111111000000100111010";
        ram[26] = "0b00111101011010101111000101100000";
        ram[27] = "0b10111101000101011001110001100100";
        ram[28] = "0b00111100101000001100101110111101";
        ram[29] = "0b10111101110111011001011011101010";
        ram[30] = "0b00111101010000111100000010110101";
        ram[31] = "0b00111101010110001001100100011110";
        ram[32] = "0b00111101101011111100111110001110";
        ram[33] = "0b00111011110001110011010110001001";
        ram[34] = "0b10111100100010101000100011110000";
        ram[35] = "0b00111101111011001010110001001011";
        ram[36] = "0b00111110010010110110000100110101";
        ram[37] = "0b10111101110110011001101000100000";
        ram[38] = "0b10111101110011010010110000111000";
        ram[39] = "0b00111101111011001111001010001100";
        ram[40] = "0b00111101001001000101101000111000";
        ram[41] = "0b10111101010000100010001110010001";
        ram[42] = "0b00111101010011001010010100101010";
        ram[43] = "0b10111001011000010001001010011001";
        ram[44] = "0b00111011010010110100100011101001";
        ram[45] = "0b00111011101011011101101101110000";
        ram[46] = "0b10111100110001110110110010100110";
        ram[47] = "0b10111101110110001011011100011100";
        ram[48] = "0b00111110000001001010011101110010";
        ram[49] = "0b00111101011000010100101100111111";
        ram[50] = "0b10111110001110101110101110000001";
        ram[51] = "0b10111101101101011001110100100000";
        ram[52] = "0b10111100100110000100101110111100";
        ram[53] = "0b10111100111100000110000010000101";
        ram[54] = "0b00111101010011111010000011010111";
        ram[55] = "0b10111101000011101010001011000110";
        ram[56] = "0b10111101100000100110110110001011";
        ram[57] = "0b00111101010110001111000110111001";
        ram[58] = "0b00111100011110110011101000110011";
        ram[59] = "0b10111100011100011000011110010111";
        ram[60] = "0b00111100011100100111011010101011";
        ram[61] = "0b00111110010100000111101000101001";
        ram[62] = "0b00111011100011111011110001100001";
        ram[63] = "0b00111101100011011001111101011011";
        ram[64] = "0b00111110001000001011110110001000";
        ram[65] = "0b00111110001010100110010101001001";
        ram[66] = "0b10111101011011100111100111000110";
        ram[67] = "0b00111011000001100101011001110001";
        ram[68] = "0b10111110000100101110000010100000";
        ram[69] = "0b10111100110100011011111011011010";
        ram[70] = "0b10111110010101001111110011100111";
        ram[71] = "0b00111101001111011111001011111010";
        ram[72] = "0b00111101101110101111000000011110";
        ram[73] = "0b10111110010101011110101111111011";
        ram[74] = "0b00111101101010100100010110101100";
        ram[75] = "0b00111101100000100110000111011010";
        ram[76] = "0b00111101010001001110110001001001";
        ram[77] = "0b10111100110111010101100011010110";
        ram[78] = "0b10111101010000011111011010110000";
        ram[79] = "0b00111101100111101001110110100010";
        ram[80] = "0b00111110000111101000101010110101";
        ram[81] = "0b10111101110000000001110011100011";
        ram[82] = "0b10111101111111111110000010001011";
        ram[83] = "0b00111101000010100001101001101011";
        ram[84] = "0b10111100100000110011111100011010";
        ram[85] = "0b10111101010111000111010001011010";
        ram[86] = "0b10111110000011001000111010101100";
        ram[87] = "0b00111100001101111100011001000000";
        ram[88] = "0b10111101000100110100111110111001";
        ram[89] = "0b00111110000111001101100000010010";
        ram[90] = "0b10111101111101100001001001000000";
        ram[91] = "0b00111101100010011101110111001111";
        ram[92] = "0b10111101111001011100000010111010";
        ram[93] = "0b10111011101011000111111000100011";
        ram[94] = "0b00111101101011011101111001101101";
        ram[95] = "0b10111101100001110111101000100000";
        ram[96] = "0b00111101110001010001111111000101";
        ram[97] = "0b10111101101001010011010010100011";
        ram[98] = "0b10111101100110011011001011010001";
        ram[99] = "0b00111101110011010010111001010001";
        ram[100] = "0b00111101110100100100100011011000";
        ram[101] = "0b10111101010011100110010000101100";
        ram[102] = "0b00111011011010111111110001101000";
        ram[103] = "0b10111110001111011101100001110011";
        ram[104] = "0b10111011111000011110100011010011";
        ram[105] = "0b10111100110111000001111110000110";
        ram[106] = "0b10111101100010011000100111011111";
        ram[107] = "0b10111101000110011000100101110100";
        ram[108] = "0b00111110000110011101101010011101";
        ram[109] = "0b00111100111010110110000011010111";
        ram[110] = "0b00111100111111110010111110001011";
        ram[111] = "0b10111100101110000110110101100101";
        ram[112] = "0b10111101101101111111100001000100";
        ram[113] = "0b00111110010000111101111110110001";
        ram[114] = "0b10111101001100101011011110101110";
        ram[115] = "0b00111101011101011101111000111110";
        ram[116] = "0b00111100101100111100001001101111";
        ram[117] = "0b00111101111000100100110101001101";
        ram[118] = "0b00111110001011000100100101110111";
        ram[119] = "0b10111101010101000001010011000000";


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


SC_MODULE(inference_conv2d_f3_2_2_1) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 120;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


inference_conv2d_f3_2_2_1_ram* meminst;


SC_CTOR(inference_conv2d_f3_2_2_1) {
meminst = new inference_conv2d_f3_2_2_1_ram("inference_conv2d_f3_2_2_1_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~inference_conv2d_f3_2_2_1() {
    delete meminst;
}


};//endmodule
#endif
