// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __inference_conv2d_f3_2_0_12_H__
#define __inference_conv2d_f3_2_0_12_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct inference_conv2d_f3_2_0_12_ram : public sc_core::sc_module {

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


   SC_CTOR(inference_conv2d_f3_2_0_12_ram) {
        ram[0] = "0b10111101101011000010111010011111";
        ram[1] = "0b10111100101110110000110001111011";
        ram[2] = "0b00111100111111111111001010010100";
        ram[3] = "0b00111101011101110110010011110001";
        ram[4] = "0b00111100100010110011100010101110";
        ram[5] = "0b00111110000010110100100000001010";
        ram[6] = "0b00111100101000110100101100101001";
        ram[7] = "0b10111110000101001001001101000010";
        ram[8] = "0b10111100011000001011100100010011";
        ram[9] = "0b10111110000100101000000110111010";
        ram[10] = "0b10111110001001001110110001100011";
        ram[11] = "0b10111011110000110000010111111010";
        ram[12] = "0b10111101111101001100110010101011";
        ram[13] = "0b10111110001110010111110000111101";
        ram[14] = "0b10111101000010000011111110000100";
        ram[15] = "0b10111101111100001000111101100101";
        ram[16] = "0b10111101101000110000011011001011";
        ram[17] = "0b10111100000000100101101000011000";
        ram[18] = "0b00111110001011111110111100111001";
        ram[19] = "0b10111101000000010110010011010101";
        ram[20] = "0b00111101101111101100001100111010";
        ram[21] = "0b00111101100100000000110111110010";
        ram[22] = "0b00111110000010111101000011100001";
        ram[23] = "0b10111110010100000110011101001001";
        ram[24] = "0b10111101111111011100110101110000";
        ram[25] = "0b00111101111001110100011101010010";
        ram[26] = "0b10111011011110000000100011100110";
        ram[27] = "0b00111001010000111000101111111110";
        ram[28] = "0b00111110010011110000110011111110";
        ram[29] = "0b00111100110111000111111101011101";
        ram[30] = "0b00111101000110100010111100100000";
        ram[31] = "0b00111101100000010001011010000000";
        ram[32] = "0b00111011110001000010101101010011";
        ram[33] = "0b00111101110001000010101111010001";
        ram[34] = "0b10111100110001000010100100100101";
        ram[35] = "0b10111101110000011100000110000110";
        ram[36] = "0b00111101011011010111111011110100";
        ram[37] = "0b10111101010000010101110100101101";
        ram[38] = "0b10111100100001110011011110010111";
        ram[39] = "0b10111101000101011100010110011010";
        ram[40] = "0b00111100110110110001101101000100";
        ram[41] = "0b00111101100011010101010110100100";
        ram[42] = "0b10111110001011000110001100101000";
        ram[43] = "0b00111101101001100001100101111101";
        ram[44] = "0b10111100110011000011101101000010";
        ram[45] = "0b00111101110111010000011101000010";
        ram[46] = "0b10111100100001010010110010010000";
        ram[47] = "0b00111101101000000010010010100110";
        ram[48] = "0b10111101011111100111111011000001";
        ram[49] = "0b10111101111110001101011110011101";
        ram[50] = "0b10111101110010101100010100101110";
        ram[51] = "0b10111110001000111001001001011100";
        ram[52] = "0b00111101011110101101011101101100";
        ram[53] = "0b00111101001010000010010011000111";
        ram[54] = "0b00111101101110000011001100100101";
        ram[55] = "0b10111100101010000100000111010011";
        ram[56] = "0b00111110000111111001101101010110";
        ram[57] = "0b00111101100010101011110111001001";
        ram[58] = "0b00111110000011110011000011101000";
        ram[59] = "0b00111100101001010001101101111000";
        ram[60] = "0b10111101100101111101001110011110";
        ram[61] = "0b10111101001001011001000001100011";
        ram[62] = "0b10111101100000000111100111001011";
        ram[63] = "0b00111100111110011011011010100101";
        ram[64] = "0b10111100110100111101100110011100";
        ram[65] = "0b10111100010000100000011010100000";
        ram[66] = "0b10111101110110000011100000111011";
        ram[67] = "0b00111101010001100110111111010110";
        ram[68] = "0b00111100100011000100000000010101";
        ram[69] = "0b10111101011000100010000010111100";
        ram[70] = "0b00111100010101111101010100111111";
        ram[71] = "0b00111110001001010010010001111101";
        ram[72] = "0b00111110010101101010001100111000";
        ram[73] = "0b10111101011111000001011001001100";
        ram[74] = "0b00111101100001000110000110001111";
        ram[75] = "0b00111101110000110011011101001010";
        ram[76] = "0b00111101111001101101101111010111";
        ram[77] = "0b00111100100001000101011001110001";
        ram[78] = "0b00111101110010110101010001110111";
        ram[79] = "0b10111101010111110011011100011000";
        ram[80] = "0b00111101110001111011101010000001";
        ram[81] = "0b10111101010000000100010001000011";
        ram[82] = "0b10111101010000110001000101111101";
        ram[83] = "0b10111100111100010111000010000110";
        ram[84] = "0b00111101001011101111010101001011";
        ram[85] = "0b10111110000101101111101100001001";
        ram[86] = "0b10111101001110000001100111010010";
        ram[87] = "0b10111011000000001110101000100000";
        ram[88] = "0b10111110000001111001000100111111";
        ram[89] = "0b00111011110100011010111111110110";
        ram[90] = "0b10111101100000011001000011010001";
        ram[91] = "0b00111010101110110000000101110011";
        ram[92] = "0b10111101100101011100100100011101";
        ram[93] = "0b00111101110101111110010101100100";
        ram[94] = "0b00111110001110010011111110101111";
        ram[95] = "0b00111101100111011110000001010000";
        ram[96] = "0b10111110001011100001100010101101";
        ram[97] = "0b10111110001000000010111010101001";
        ram[98] = "0b10111110000101110001001010100001";
        ram[99] = "0b10111101110110000001100101001100";
        ram[100] = "0b00111101100111010011100101101111";
        ram[101] = "0b00111101100000111101100100001000";
        ram[102] = "0b00111100100101101110110101001101";
        ram[103] = "0b10111101011010101101000011011111";
        ram[104] = "0b10111100111100001111011110111010";
        ram[105] = "0b10111101110100101000000001101011";
        ram[106] = "0b10111101010010110010000011000101";
        ram[107] = "0b10111101010010100100100101001010";
        ram[108] = "0b10111100110001000110111011000101";
        ram[109] = "0b00111110000000000101101100111010";
        ram[110] = "0b00111100111100101010010111011010";
        ram[111] = "0b00111100111110000000110010110111";
        ram[112] = "0b10111101100001100110101101010100";
        ram[113] = "0b10111100100010010001000001001010";
        ram[114] = "0b10111101100111110010001101101111";
        ram[115] = "0b10111101100010101010001110111011";
        ram[116] = "0b10111011000011001111001101000011";
        ram[117] = "0b00111101101101110010011111000010";
        ram[118] = "0b00111100111001010010000101010111";
        ram[119] = "0b10111110001100000100100111101101";


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


SC_MODULE(inference_conv2d_f3_2_0_12) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 120;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


inference_conv2d_f3_2_0_12_ram* meminst;


SC_CTOR(inference_conv2d_f3_2_0_12) {
meminst = new inference_conv2d_f3_2_0_12_ram("inference_conv2d_f3_2_0_12_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~inference_conv2d_f3_2_0_12() {
    delete meminst;
}


};//endmodule
#endif