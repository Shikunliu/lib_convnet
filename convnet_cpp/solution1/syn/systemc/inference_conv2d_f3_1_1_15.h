// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __inference_conv2d_f3_1_1_15_H__
#define __inference_conv2d_f3_1_1_15_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct inference_conv2d_f3_1_1_15_ram : public sc_core::sc_module {

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


   SC_CTOR(inference_conv2d_f3_1_1_15_ram) {
        ram[0] = "0b00111101101011001010101111000101";
        ram[1] = "0b10111100100001111000110010111100";
        ram[2] = "0b00111011101101111011001010001001";
        ram[3] = "0b00111110001000001001000101111101";
        ram[4] = "0b10111010111110010000101011000011";
        ram[5] = "0b00111101101101100000011100001000";
        ram[6] = "0b10111101010111001110001000111110";
        ram[7] = "0b00111101000001000011000101101101";
        ram[8] = "0b10111101011101011011011110101000";
        ram[9] = "0b00111101110011101100010100101010";
        ram[10] = "0b00111101001111111111000110001000";
        ram[11] = "0b10111100001101010101100000111100";
        ram[12] = "0b10111101000111111110000110010111";
        ram[13] = "0b00111101011000111010011100011111";
        ram[14] = "0b00111101110011001110110101001110";
        ram[15] = "0b10111101111000101110001111000101";
        ram[16] = "0b10111101100110101111011111100000";
        ram[17] = "0b10111110011001111100111001010011";
        ram[18] = "0b00111101110000001000110110101010";
        ram[19] = "0b10111110000010111101100010111110";
        ram[20] = "0b00111011111001000101010110010101";
        ram[21] = "0b00111101101100111111010111011110";
        ram[22] = "0b10111011100100010100101110000010";
        ram[23] = "0b00111100101101110110110100011111";
        ram[24] = "0b10111011011000111010111000111011";
        ram[25] = "0b00111101100000110111110111000001";
        ram[26] = "0b00111110000001001010100101001000";
        ram[27] = "0b10111101100100011011111111100110";
        ram[28] = "0b10111101110010111011010111111100";
        ram[29] = "0b00111100100101111000010111111001";
        ram[30] = "0b00111110000100001010101010101000";
        ram[31] = "0b10111110000101001110001010110000";
        ram[32] = "0b10111101110100111010110111100010";
        ram[33] = "0b00111101000110011100101001011100";
        ram[34] = "0b10111110001100110011001101110110";
        ram[35] = "0b10111101111001011011100011011100";
        ram[36] = "0b10111100111011000110001110100001";
        ram[37] = "0b00111101010111011011111000111100";
        ram[38] = "0b10111100100100111011000011101101";
        ram[39] = "0b00111100000101100000001000101011";
        ram[40] = "0b00111101100011100100000001000010";
        ram[41] = "0b10111110000111111010111011111111";
        ram[42] = "0b10111100011011011101111111010111";
        ram[43] = "0b00111110001010101010010011111101";
        ram[44] = "0b00111100000100100101000011000101";
        ram[45] = "0b10111011111001101000101101100101";
        ram[46] = "0b10111100011011010101101000001011";
        ram[47] = "0b10111110000111100100111010101101";
        ram[48] = "0b10111101001011000011001111010000";
        ram[49] = "0b10111101101000010010011011101001";
        ram[50] = "0b00111110001000001100000101110110";
        ram[51] = "0b10111101001100101110111110101100";
        ram[52] = "0b10111101000101111010001110100110";
        ram[53] = "0b10111101010101111111100111110010";
        ram[54] = "0b10111101101101101101111111000110";
        ram[55] = "0b00111101101101000110001000100010";
        ram[56] = "0b10111101101000101010100001000100";
        ram[57] = "0b10111110001000000011100111101111";
        ram[58] = "0b10111101101100110100100101101110";
        ram[59] = "0b00111101110000011001111000111101";
        ram[60] = "0b10111101010001101011001111001001";
        ram[61] = "0b00111110001001110101101000110010";
        ram[62] = "0b10111101010110011000100010011101";
        ram[63] = "0b00111100011100000001110011001001";
        ram[64] = "0b10111101100101011101000111101100";
        ram[65] = "0b00111101100010001011000101001010";
        ram[66] = "0b00111101110001111000101011011001";
        ram[67] = "0b00111101100000011011110000111011";
        ram[68] = "0b10111110000100010101110101110000";
        ram[69] = "0b00111101110100001001111010011001";
        ram[70] = "0b10111110100010000010110010010001";
        ram[71] = "0b10111101111010011000010011100100";
        ram[72] = "0b00111110000110101100110101011011";
        ram[73] = "0b00111101110100000111011000111010";
        ram[74] = "0b00111110000000001001000001110001";
        ram[75] = "0b00111101101111000100100111100011";
        ram[76] = "0b00111110000111110000101011100101";
        ram[77] = "0b00111101011101100000101101010101";
        ram[78] = "0b00111101111001001001001000110110";
        ram[79] = "0b10111110000011101010111001011100";
        ram[80] = "0b00111110010110101011011011010000";
        ram[81] = "0b00111101001011100010011101011011";
        ram[82] = "0b10111101000010111000010111000000";
        ram[83] = "0b00111110010110000010111011001011";
        ram[84] = "0b10111110001011000001010100001001";
        ram[85] = "0b10111110000101010010010011000000";
        ram[86] = "0b10111101101101110100000000110000";
        ram[87] = "0b00111011100101100110010100110010";
        ram[88] = "0b00111101101110101000001000000100";
        ram[89] = "0b10111110010110011111110011110100";
        ram[90] = "0b10111101110110100010110011101101";
        ram[91] = "0b00111101011111101000000100101010";
        ram[92] = "0b10111100111000101101010110111000";
        ram[93] = "0b10111101000100011100010111100000";
        ram[94] = "0b10111101100000110100101001111010";
        ram[95] = "0b10111100101101000010101000111111";
        ram[96] = "0b10111011011101011000111110111010";
        ram[97] = "0b10111100100100001100110000000000";
        ram[98] = "0b10111101101011111010000100110101";
        ram[99] = "0b00111101001100011000011101000111";
        ram[100] = "0b10111101010011111011100111100111";
        ram[101] = "0b10111101110111101111111000001101";
        ram[102] = "0b10111101100111111111010000110100";
        ram[103] = "0b10111101111100101011110010110110";
        ram[104] = "0b10111011110111110011100110100001";
        ram[105] = "0b10111101101001110011111001001101";
        ram[106] = "0b00111011100001001010110001111000";
        ram[107] = "0b10111100011110101011010001100111";
        ram[108] = "0b10111101101011010000111100000100";
        ram[109] = "0b10111101011110010100001100110011";
        ram[110] = "0b10111110000001101111100110111010";
        ram[111] = "0b00111101001000101000000101001111";
        ram[112] = "0b00111101000110100100100010110110";
        ram[113] = "0b10111101101101001111101000100000";
        ram[114] = "0b10111110001010011101011010101110";
        ram[115] = "0b10111100100101000010111011110111";
        ram[116] = "0b00111101000110011111010010111001";
        ram[117] = "0b00111101111001011001101011111010";
        ram[118] = "0b00111011100000010111001111110011";
        ram[119] = "0b10111101100110111001101011000110";


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


SC_MODULE(inference_conv2d_f3_1_1_15) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 120;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


inference_conv2d_f3_1_1_15_ram* meminst;


SC_CTOR(inference_conv2d_f3_1_1_15) {
meminst = new inference_conv2d_f3_1_1_15_ram("inference_conv2d_f3_1_1_15_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~inference_conv2d_f3_1_1_15() {
    delete meminst;
}


};//endmodule
#endif
