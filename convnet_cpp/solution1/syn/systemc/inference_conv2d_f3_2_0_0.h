// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __inference_conv2d_f3_2_0_0_H__
#define __inference_conv2d_f3_2_0_0_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct inference_conv2d_f3_2_0_0_ram : public sc_core::sc_module {

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


   SC_CTOR(inference_conv2d_f3_2_0_0_ram) {
        ram[0] = "0b10111101000001111010111101010111";
        ram[1] = "0b10111101101000011000110011100011";
        ram[2] = "0b10111110001000111011110100010110";
        ram[3] = "0b00111101011110101111011000100110";
        ram[4] = "0b10111100110101001010001111111100";
        ram[5] = "0b10111110001010111110101010010010";
        ram[6] = "0b10111101010101110000111011011011";
        ram[7] = "0b00111101001010001101100100100010";
        ram[8] = "0b10111100111011101110001000110110";
        ram[9] = "0b00111100110101001010010001100111";
        ram[10] = "0b10111110011011000100101111010011";
        ram[11] = "0b00111011111010000110111110101011";
        ram[12] = "0b00111101111101111010110101001011";
        ram[13] = "0b10111101100010110000001110010010";
        ram[14] = "0b00111101110110001100000100010010";
        ram[15] = "0b00111101110110110011001100010010";
        ram[16] = "0b00111101011000011100010001110110";
        ram[17] = "0b10111101001111100111111100101100";
        ram[18] = "0b00111101010100101011001100010000";
        ram[19] = "0b00111101001101111111110110111000";
        ram[20] = "0b10111100010101000101000100100110";
        ram[21] = "0b10111101001011011000000000110110";
        ram[22] = "0b10111101110001110110011010010001";
        ram[23] = "0b00111100100010000100111111111011";
        ram[24] = "0b00111101111111100101011101010100";
        ram[25] = "0b10111101011101011101110011100001";
        ram[26] = "0b00111001101101011000111101110111";
        ram[27] = "0b10111100010110001100001111100110";
        ram[28] = "0b00111101011110101110010010111110";
        ram[29] = "0b00111101001110001010111000010111";
        ram[30] = "0b10111011101011010111100101110101";
        ram[31] = "0b10111110000000110100000010010010";
        ram[32] = "0b00111101000001010100111000000011";
        ram[33] = "0b00111011111000001001101111001100";
        ram[34] = "0b00111100000010111101101011010101";
        ram[35] = "0b00111101101111001111001111000001";
        ram[36] = "0b00111101010001110011000101101000";
        ram[37] = "0b10111101110101001111100100111100";
        ram[38] = "0b10111101011010100000001101110100";
        ram[39] = "0b10111110000010001110110010010110";
        ram[40] = "0b10111101101110010001001100101100";
        ram[41] = "0b00111110001100111011110110011101";
        ram[42] = "0b00111100000101010100100000100110";
        ram[43] = "0b10111101100100100101011101010000";
        ram[44] = "0b00111101101111011111010110100111";
        ram[45] = "0b00111101001010101000110011101100";
        ram[46] = "0b00111101100010100010111100000110";
        ram[47] = "0b10111101100111010000010001101101";
        ram[48] = "0b00111101110001000101000001011100";
        ram[49] = "0b10111110001110010101000010111001";
        ram[50] = "0b00111100100100111111101010001001";
        ram[51] = "0b00111110011100101001001011000101";
        ram[52] = "0b10111110000000110100011100011111";
        ram[53] = "0b10111100010110001011001010110100";
        ram[54] = "0b00111101000101001000001110110000";
        ram[55] = "0b00111011110101110011101101010000";
        ram[56] = "0b10111101100001110111101101000111";
        ram[57] = "0b00111101011110111000001111001111";
        ram[58] = "0b10111101011111111011100100011110";
        ram[59] = "0b00111101111010101010001000011010";
        ram[60] = "0b00111101001110010111101111010010";
        ram[61] = "0b00111101110010011110110001110000";
        ram[62] = "0b10111101001101111011011010000101";
        ram[63] = "0b00111110000110101011111101110111";
        ram[64] = "0b10111101100010110000010100110010";
        ram[65] = "0b10111100100011001011001101101101";
        ram[66] = "0b10111100011101000100111000011011";
        ram[67] = "0b00111110001100000010010111000000";
        ram[68] = "0b00111101011111001101110101010001";
        ram[69] = "0b10111101110100101100100111010001";
        ram[70] = "0b00111110010101110011111000100101";
        ram[71] = "0b00111100000000001011000010101010";
        ram[72] = "0b10111011100111011010111010100111";
        ram[73] = "0b00111101101111101111111000011010";
        ram[74] = "0b00111101110010011001101100011111";
        ram[75] = "0b00111101010100110001000001100011";
        ram[76] = "0b00111100000011100010110011111111";
        ram[77] = "0b10111101111011110110101111100011";
        ram[78] = "0b00111101010010010000100010111101";
        ram[79] = "0b10111101000110010011101011101010";
        ram[80] = "0b10111101101011011110000010100001";
        ram[81] = "0b00111101111000001101101010100001";
        ram[82] = "0b10111101000000001110111110011010";
        ram[83] = "0b00111100101010000100110010111011";
        ram[84] = "0b00111110001100000000100110110011";
        ram[85] = "0b00111101101111000000111110111110";
        ram[86] = "0b00111101010010010000010111101000";
        ram[87] = "0b10111101001010111001001110110010";
        ram[88] = "0b10111100110100001100001101100111";
        ram[89] = "0b00111101100111101000011111101110";
        ram[90] = "0b10111101000001100100100111111100";
        ram[91] = "0b10111110000001101111101010000011";
        ram[92] = "0b00111101101101110111000010111101";
        ram[93] = "0b00111101101001010011101110110111";
        ram[94] = "0b10111110010011111001111110001000";
        ram[95] = "0b00111100001111110010101100100100";
        ram[96] = "0b10111101001100111110001111111101";
        ram[97] = "0b10111100101010010001011010101111";
        ram[98] = "0b00111101110100010010101000001111";
        ram[99] = "0b10111011000111111100000101010001";
        ram[100] = "0b00111101111001110001100100101111";
        ram[101] = "0b10111101101100010100001111011010";
        ram[102] = "0b10111101000010110101101111001110";
        ram[103] = "0b10111110000101100000011100111110";
        ram[104] = "0b10111110000011001001001001011000";
        ram[105] = "0b10111110000001011000001001010110";
        ram[106] = "0b10111100111110111000011011110100";
        ram[107] = "0b10111101010010110101100010101001";
        ram[108] = "0b00111101100001110100100010101111";
        ram[109] = "0b00111011100111110100101110110101";
        ram[110] = "0b10111110000110000101101000001100";
        ram[111] = "0b10111011011000111000011111001111";
        ram[112] = "0b00111110000110011101110011111001";
        ram[113] = "0b10111110000011100010001100101001";
        ram[114] = "0b00111101111011011001010110011010";
        ram[115] = "0b10111101101001001111001101011101";
        ram[116] = "0b00111011011111111000101001100100";
        ram[117] = "0b00111101011001111000110100001101";
        ram[118] = "0b00111100110101010001010011010000";
        ram[119] = "0b00111101111001000111101110101011";


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


SC_MODULE(inference_conv2d_f3_2_0_0) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 120;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


inference_conv2d_f3_2_0_0_ram* meminst;


SC_CTOR(inference_conv2d_f3_2_0_0) {
meminst = new inference_conv2d_f3_2_0_0_ram("inference_conv2d_f3_2_0_0_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~inference_conv2d_f3_2_0_0() {
    delete meminst;
}


};//endmodule
#endif
