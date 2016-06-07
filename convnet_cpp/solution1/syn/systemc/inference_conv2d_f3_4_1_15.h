// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __inference_conv2d_f3_4_1_15_H__
#define __inference_conv2d_f3_4_1_15_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct inference_conv2d_f3_4_1_15_ram : public sc_core::sc_module {

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


   SC_CTOR(inference_conv2d_f3_4_1_15_ram) {
        ram[0] = "0b00111110000010111111011111110000";
        ram[1] = "0b10111100110100101101101000101101";
        ram[2] = "0b10111101100110110110011011011110";
        ram[3] = "0b00111101100101101100010100100100";
        ram[4] = "0b10111101000010111100001111010011";
        ram[5] = "0b10111101011011011101001010111100";
        ram[6] = "0b00111101100010000111010010100001";
        ram[7] = "0b10111100011010001001001111010011";
        ram[8] = "0b00111101100011000101110001100101";
        ram[9] = "0b10111101011100111111001011000110";
        ram[10] = "0b00111100111011011010010011101001";
        ram[11] = "0b10111101011110110011110010011100";
        ram[12] = "0b10111100110110101011111111010101";
        ram[13] = "0b10111101011010110101000110111101";
        ram[14] = "0b00111101110010101100110000001100";
        ram[15] = "0b10111101110111111000001000101100";
        ram[16] = "0b00111101100010010110111110011011";
        ram[17] = "0b00111101101010011110110011001110";
        ram[18] = "0b00111110000010110111010001011000";
        ram[19] = "0b00111110000111100111100110101011";
        ram[20] = "0b00111101110100000111010010100111";
        ram[21] = "0b10111100000101001011000011111101";
        ram[22] = "0b10111101110010011111011101100101";
        ram[23] = "0b00111101110101111010011100000001";
        ram[24] = "0b10111101011100010110101010001100";
        ram[25] = "0b10111101111101001010100100000100";
        ram[26] = "0b00111110000000011000110010100000";
        ram[27] = "0b10111101101011001110001101100110";
        ram[28] = "0b10111101111110111111000011011100";
        ram[29] = "0b10111100100111100110010000000100";
        ram[30] = "0b10111101101001110011010101010110";
        ram[31] = "0b10111110010000111100011111010110";
        ram[32] = "0b10111110000000111000111100110110";
        ram[33] = "0b10111101011110101000010010110001";
        ram[34] = "0b10111100100110000101011101000101";
        ram[35] = "0b10111101010110011000101110001101";
        ram[36] = "0b10111110001010100010110000100011";
        ram[37] = "0b00111100110110101010110101100000";
        ram[38] = "0b10111110001111011101101110011000";
        ram[39] = "0b10111101100101010000110100001101";
        ram[40] = "0b10111101000011011000110100110111";
        ram[41] = "0b10111110001111000010010011000100";
        ram[42] = "0b00111100100010111101011111011010";
        ram[43] = "0b00111101101000101101100110100111";
        ram[44] = "0b10111101101101001101001010001010";
        ram[45] = "0b10111100101100100111100011111001";
        ram[46] = "0b00111101000001010011110111111000";
        ram[47] = "0b10111101000100111000011110110111";
        ram[48] = "0b00111101101001000111100100001100";
        ram[49] = "0b10111100001011101111101001010100";
        ram[50] = "0b10111101011001110010101111110100";
        ram[51] = "0b10111101100101100100010000110111";
        ram[52] = "0b00111101100110011111001010010010";
        ram[53] = "0b10111101010101101010000001110000";
        ram[54] = "0b00111101101101111010110001110100";
        ram[55] = "0b10111101010000000111011111011010";
        ram[56] = "0b00111101111110010010011011001000";
        ram[57] = "0b00111011101100010001010101100001";
        ram[58] = "0b10111101000011001111000111010001";
        ram[59] = "0b10111101001011010111100110110110";
        ram[60] = "0b10111100100001101100010110000001";
        ram[61] = "0b00111101100111100111000011011100";
        ram[62] = "0b10111101101011001000000111100001";
        ram[63] = "0b00111010111111011101011010000101";
        ram[64] = "0b10111101101100001011000101010000";
        ram[65] = "0b10111101111000011001000110011011";
        ram[66] = "0b00111100110111110001011001000110";
        ram[67] = "0b00111011111110100111101100011011";
        ram[68] = "0b00111100100110110110011100101111";
        ram[69] = "0b00111101011100010011011011110101";
        ram[70] = "0b10111101100001101110010111011011";
        ram[71] = "0b00111011100010100011100111101011";
        ram[72] = "0b10111101111000011111010000101100";
        ram[73] = "0b00111110000000111111111011100011";
        ram[74] = "0b10111011101111010001100000100100";
        ram[75] = "0b00111100100100101010100100011010";
        ram[76] = "0b10111011110110111110011000000101";
        ram[77] = "0b10111100011110001101111101111010";
        ram[78] = "0b10111101110100111101111000011110";
        ram[79] = "0b10111100100011010011011001001001";
        ram[80] = "0b00111011110000000110101000010011";
        ram[81] = "0b00111101110100001101000101110100";
        ram[82] = "0b00111101100011000100111101111111";
        ram[83] = "0b00111110000110010011110000000100";
        ram[84] = "0b00111101010000110111001001000110";
        ram[85] = "0b10111100101111011010011000011110";
        ram[86] = "0b10111110000100001110110100111110";
        ram[87] = "0b00111110001101011011110001000101";
        ram[88] = "0b10111101001111111001000110010110";
        ram[89] = "0b00111011110101111010101101111000";
        ram[90] = "0b00111101100101011111011111111100";
        ram[91] = "0b00111101100001010001111111100000";
        ram[92] = "0b00111100010111100100010011000100";
        ram[93] = "0b00111100101110101011000110101101";
        ram[94] = "0b10111101100101001101101110110111";
        ram[95] = "0b00111101100000010100010110111101";
        ram[96] = "0b10111010101110111110100111111100";
        ram[97] = "0b00111101101110001011010011001101";
        ram[98] = "0b00111101101001011010111000001111";
        ram[99] = "0b00111010100011000011000011010000";
        ram[100] = "0b10111101011011111000011001101011";
        ram[101] = "0b10111101100000110110011101011110";
        ram[102] = "0b00111101111000100011010110110101";
        ram[103] = "0b10111101110100101110000111101111";
        ram[104] = "0b00111101100011110001111001110100";
        ram[105] = "0b00111110000010010101111100100100";
        ram[106] = "0b00111101101001000001100101000010";
        ram[107] = "0b10111101110000100011011111001110";
        ram[108] = "0b00111101011110101101010001000111";
        ram[109] = "0b00111001000101010111100100110101";
        ram[110] = "0b10111101000010111001110010110111";
        ram[111] = "0b00111101101010010101111010011110";
        ram[112] = "0b10111101100100000110111000011010";
        ram[113] = "0b10111110000100101000011101111111";
        ram[114] = "0b00111100110111111101110001110100";
        ram[115] = "0b00111101010011001110101110000110";
        ram[116] = "0b00111101100101000110101010101110";
        ram[117] = "0b00111100111110001111011010001100";
        ram[118] = "0b00111110001110100010100101000001";
        ram[119] = "0b10111101101101000110100000110111";


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


SC_MODULE(inference_conv2d_f3_4_1_15) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 120;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


inference_conv2d_f3_4_1_15_ram* meminst;


SC_CTOR(inference_conv2d_f3_4_1_15) {
meminst = new inference_conv2d_f3_4_1_15_ram("inference_conv2d_f3_4_1_15_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~inference_conv2d_f3_4_1_15() {
    delete meminst;
}


};//endmodule
#endif