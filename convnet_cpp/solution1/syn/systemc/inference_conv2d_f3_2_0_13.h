// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __inference_conv2d_f3_2_0_13_H__
#define __inference_conv2d_f3_2_0_13_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct inference_conv2d_f3_2_0_13_ram : public sc_core::sc_module {

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


   SC_CTOR(inference_conv2d_f3_2_0_13_ram) {
        ram[0] = "0b10111110001001011110100100011000";
        ram[1] = "0b00111101011010000110111011101010";
        ram[2] = "0b10111101010110100010110100100010";
        ram[3] = "0b00111101101100010110100100000110";
        ram[4] = "0b10111101100000111000011110011100";
        ram[5] = "0b10111110000011100000111010110110";
        ram[6] = "0b10111101100101101010111000010010";
        ram[7] = "0b10111101110111001111001111011100";
        ram[8] = "0b00111100100010100011110100000101";
        ram[9] = "0b00111101111100101111011111110101";
        ram[10] = "0b00111101110010000001110001010110";
        ram[11] = "0b10111100100100111110111011001010";
        ram[12] = "0b00111101101011110101110001000100";
        ram[13] = "0b10111110000101010010001101110000";
        ram[14] = "0b00111101110010010000111111010001";
        ram[15] = "0b10111100000101110001100010010110";
        ram[16] = "0b00111101100111000111001110111001";
        ram[17] = "0b00111101110101110110110111011011";
        ram[18] = "0b00111101011001111001100001100000";
        ram[19] = "0b10111101111011010000001001000111";
        ram[20] = "0b10111101010010110100111011101001";
        ram[21] = "0b00111110000001101101111000110011";
        ram[22] = "0b00111101110100001100010111101011";
        ram[23] = "0b00111101010011101101101110011011";
        ram[24] = "0b00111110010000011101110110100000";
        ram[25] = "0b00111101000101001001110001101111";
        ram[26] = "0b10111101010101001001100110000000";
        ram[27] = "0b00111101100010111110100011010111";
        ram[28] = "0b00111100011101110010100001010110";
        ram[29] = "0b00111101101001100010011110001010";
        ram[30] = "0b00111101101010000001010101111000";
        ram[31] = "0b00111110001011000011100011110011";
        ram[32] = "0b00111101111101000101101101101100";
        ram[33] = "0b10111101111000010101010011001010";
        ram[34] = "0b00111101100000001011010101011010";
        ram[35] = "0b00111100011101011111110001110001";
        ram[36] = "0b00111101001100000010101001101010";
        ram[37] = "0b10111101100000000001100010010111";
        ram[38] = "0b00111101111000100111001100001100";
        ram[39] = "0b10111110000001011110000100111011";
        ram[40] = "0b00111100110110101110100010111010";
        ram[41] = "0b00111101101111011100011011010101";
        ram[42] = "0b10111110000001000110111111011111";
        ram[43] = "0b10111100101111011111001011100000";
        ram[44] = "0b10111100100111100100000011001000";
        ram[45] = "0b10111101101011110110000111101101";
        ram[46] = "0b10111100101100100010110111100101";
        ram[47] = "0b10111101110001001111101100010010";
        ram[48] = "0b10111100110110010101111110111000";
        ram[49] = "0b00111101010101010000101110010101";
        ram[50] = "0b10111110001000111000110011011010";
        ram[51] = "0b00111101001010000010001011001001";
        ram[52] = "0b10111101101011010010000010000111";
        ram[53] = "0b00111110000100011001110100100100";
        ram[54] = "0b10111101100100111010011110001010";
        ram[55] = "0b10111101010011010101010100000011";
        ram[56] = "0b00111101110011111110111011110110";
        ram[57] = "0b10111101001101100000001001010000";
        ram[58] = "0b10111101111101011010110100010000";
        ram[59] = "0b10111101101110010111000101001000";
        ram[60] = "0b00111101110111110000101010100010";
        ram[61] = "0b10111100110000111001110101000011";
        ram[62] = "0b00111100110100100011011001100011";
        ram[63] = "0b00111010110110110100001110001000";
        ram[64] = "0b10111101000010010111101100100100";
        ram[65] = "0b00111101101111010110100101011010";
        ram[66] = "0b10111101100000100110010101011101";
        ram[67] = "0b00111101101001000011100011010010";
        ram[68] = "0b10111110000001001010010001001100";
        ram[69] = "0b10111101000110111111010001010010";
        ram[70] = "0b00111101111101000100101010100101";
        ram[71] = "0b10111101000111101000001101000011";
        ram[72] = "0b00111100001110001010001000001000";
        ram[73] = "0b00111110001100101010101111101111";
        ram[74] = "0b00111001111011011101011011101111";
        ram[75] = "0b00111101100110110111011100010010";
        ram[76] = "0b10111101011011110111110111101101";
        ram[77] = "0b10111110000101001010001110000011";
        ram[78] = "0b10111100000111010111011111101011";
        ram[79] = "0b00111101001110000111101010110110";
        ram[80] = "0b10111101100010000111100110110111";
        ram[81] = "0b10111011110010011111011001101110";
        ram[82] = "0b00111011110010011011100111011101";
        ram[83] = "0b00111101001000000101010110010000";
        ram[84] = "0b10111101000011001101101001010100";
        ram[85] = "0b10111101101011101001010100001001";
        ram[86] = "0b00111101100011110110111001011010";
        ram[87] = "0b10111101101111010101000100000111";
        ram[88] = "0b10111100011011001000001001110101";
        ram[89] = "0b00111100011101101001111011000011";
        ram[90] = "0b10111011111010000110100111110111";
        ram[91] = "0b00111101101110000000000111101010";
        ram[92] = "0b00111101100110001011101000011001";
        ram[93] = "0b10111101111110111100001111000110";
        ram[94] = "0b10111101011010110101011010101011";
        ram[95] = "0b10111101100110001000101001001000";
        ram[96] = "0b10111011100010100100100001000011";
        ram[97] = "0b10111101110111001101010101110011";
        ram[98] = "0b00111101011010100010110001011001";
        ram[99] = "0b10111101001011011100101001110011";
        ram[100] = "0b00111101010000110010100001110100";
        ram[101] = "0b00111100110101100010000110101010";
        ram[102] = "0b00111101111101110000010001111001";
        ram[103] = "0b00111101101010101100001000001000";
        ram[104] = "0b00111110000011011011000011011110";
        ram[105] = "0b00111100110011100001000100000101";
        ram[106] = "0b00111101011010011011010010110101";
        ram[107] = "0b10111010100000100010000000011010";
        ram[108] = "0b00111101110001011000100000101000";
        ram[109] = "0b00111101000000010000000000101011";
        ram[110] = "0b00111110010010011111111001000011";
        ram[111] = "0b00111100000001101000001111001000";
        ram[112] = "0b00111101100111001111101111111100";
        ram[113] = "0b00111110000010111010101101100101";
        ram[114] = "0b10111101011100011010011101111000";
        ram[115] = "0b10111110001001100010011011110110";
        ram[116] = "0b10111110000111101011011110001001";
        ram[117] = "0b00111100110111110001001001001010";
        ram[118] = "0b00111101111111010111111001000110";
        ram[119] = "0b00111100110001001101110110110101";


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


SC_MODULE(inference_conv2d_f3_2_0_13) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 120;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


inference_conv2d_f3_2_0_13_ram* meminst;


SC_CTOR(inference_conv2d_f3_2_0_13) {
meminst = new inference_conv2d_f3_2_0_13_ram("inference_conv2d_f3_2_0_13_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~inference_conv2d_f3_2_0_13() {
    delete meminst;
}


};//endmodule
#endif
