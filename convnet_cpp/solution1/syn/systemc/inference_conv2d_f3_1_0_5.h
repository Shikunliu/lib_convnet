// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __inference_conv2d_f3_1_0_5_H__
#define __inference_conv2d_f3_1_0_5_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct inference_conv2d_f3_1_0_5_ram : public sc_core::sc_module {

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


   SC_CTOR(inference_conv2d_f3_1_0_5_ram) {
        ram[0] = "0b00111101010001111101011000100011";
        ram[1] = "0b00111101001010000101110100010110";
        ram[2] = "0b00111101010101010011101100110000";
        ram[3] = "0b10111101110110011110100000111110";
        ram[4] = "0b10111100000011101101000110011111";
        ram[5] = "0b10111011110001010011110100001011";
        ram[6] = "0b00111101001101111001010101100011";
        ram[7] = "0b00111110000111011100111101000110";
        ram[8] = "0b00111100001110001110011001100110";
        ram[9] = "0b00111101000001000100011111011110";
        ram[10] = "0b10111101010101111101110111011000";
        ram[11] = "0b10111100101010110100011101000001";
        ram[12] = "0b10111101101101010011001101100000";
        ram[13] = "0b10111101110101010110110110100000";
        ram[14] = "0b10111101111111001101010101110011";
        ram[15] = "0b00111100110111110000010001110010";
        ram[16] = "0b10111101110000101010000110011011";
        ram[17] = "0b00111110000100101011010100011100";
        ram[18] = "0b10111101110000101100101101100100";
        ram[19] = "0b10111101110000101111011110100100";
        ram[20] = "0b10111100001001101010111100101100";
        ram[21] = "0b00111101111100000101111000011100";
        ram[22] = "0b00111110010000010110010011000111";
        ram[23] = "0b00111010100001001010001110111110";
        ram[24] = "0b10111101010111111110001101100000";
        ram[25] = "0b10111101001000010011010000010010";
        ram[26] = "0b10111101000100001001101100111110";
        ram[27] = "0b00111101110010111011100010001101";
        ram[28] = "0b00111110000100111100001011011011";
        ram[29] = "0b00111100011000011100001011111110";
        ram[30] = "0b10111101110111110101001001110110";
        ram[31] = "0b00111101010101101001001001100011";
        ram[32] = "0b00111101011101101100010001001101";
        ram[33] = "0b00111110000010010010001111100110";
        ram[34] = "0b00111101110001001111110110010110";
        ram[35] = "0b10111110000110101110001110100100";
        ram[36] = "0b10111011011000000101001111101000";
        ram[37] = "0b00111011000100101100110110100011";
        ram[38] = "0b10111101101100110110111110011001";
        ram[39] = "0b10111101011111010001010011100100";
        ram[40] = "0b10111101001000000110110010100010";
        ram[41] = "0b00111101111100011101000011001000";
        ram[42] = "0b00111011001101100101100010010111";
        ram[43] = "0b00111101110001100100011111100011";
        ram[44] = "0b10111110001100001000000110000000";
        ram[45] = "0b10111101101011100011110001000110";
        ram[46] = "0b10111100100010110111101010001000";
        ram[47] = "0b10111101000110101110100010011111";
        ram[48] = "0b10111100011010000111111011011010";
        ram[49] = "0b00111101000110101000100111010100";
        ram[50] = "0b10111101111100101101000110101111";
        ram[51] = "0b00111101110010011010000010000101";
        ram[52] = "0b10111101111110000000001111001101";
        ram[53] = "0b00111101101010101100110111111100";
        ram[54] = "0b00111100001001001101100111010100";
        ram[55] = "0b00111100110001100001101101101101";
        ram[56] = "0b10111100001110100101101001101111";
        ram[57] = "0b00111101000101000101010110101000";
        ram[58] = "0b10111100111000000100001111011000";
        ram[59] = "0b00111110001010011000110001111110";
        ram[60] = "0b10111101100010110100110000100001";
        ram[61] = "0b00111110000001110001000010001000";
        ram[62] = "0b00111101010011101101001100000010";
        ram[63] = "0b10111101001001111011110101001001";
        ram[64] = "0b10111101001011000111001001101010";
        ram[65] = "0b00111000111100010011111001101001";
        ram[66] = "0b00111101101001111111110010111001";
        ram[67] = "0b00111101101011111000110110001100";
        ram[68] = "0b10111101101010110101011100001001";
        ram[69] = "0b00111101001000101001010001111111";
        ram[70] = "0b10111101111011110000111110011101";
        ram[71] = "0b10111100001110011110101001110010";
        ram[72] = "0b00111100110001000101000101101001";
        ram[73] = "0b10111110000100000000001001011100";
        ram[74] = "0b10111010011101110111110110111111";
        ram[75] = "0b00111100000000001100000100100110";
        ram[76] = "0b10111110000111011100110101110000";
        ram[77] = "0b00111101110100001000001011001111";
        ram[78] = "0b00111101011100010100110110110110";
        ram[79] = "0b10111101101100101100101000101111";
        ram[80] = "0b10111110011011100001010001111011";
        ram[81] = "0b10111110000011011011011000011100";
        ram[82] = "0b00111101011011001101001111101110";
        ram[83] = "0b10111101110111111101011110100001";
        ram[84] = "0b10111101010010010111101010000010";
        ram[85] = "0b00111101110111000000001000101010";
        ram[86] = "0b00111101101111100011011110001110";
        ram[87] = "0b00111100110001000111010011011010";
        ram[88] = "0b00111101110100111110010001101001";
        ram[89] = "0b00111101110011001011100100001001";
        ram[90] = "0b00111100001110110100110000000110";
        ram[91] = "0b10111100011001011101100000110111";
        ram[92] = "0b00111110000010010011111001100000";
        ram[93] = "0b10111101110110010111101000100101";
        ram[94] = "0b00111101100010101110000000111011";
        ram[95] = "0b00111110001111000110011010010000";
        ram[96] = "0b00111101101001111100101001110010";
        ram[97] = "0b10111011010010010100011100110001";
        ram[98] = "0b00111110011010110001110010000110";
        ram[99] = "0b00111101001000101010111011010001";
        ram[100] = "0b00111101110110011100000001100110";
        ram[101] = "0b10111101101011110101001110111000";
        ram[102] = "0b10111101000111110010000000000110";
        ram[103] = "0b10111101101100110010100100100010";
        ram[104] = "0b00111011011011011111111001001011";
        ram[105] = "0b10111100011110011001011100110000";
        ram[106] = "0b00111101100110010110100011100101";
        ram[107] = "0b00111110001010001001111000110100";
        ram[108] = "0b10111100100110000001010101101011";
        ram[109] = "0b00111110000000001110010111100110";
        ram[110] = "0b00111101101110011001001111100011";
        ram[111] = "0b00111101101000001111011001111000";
        ram[112] = "0b00111101111000100101010000011110";
        ram[113] = "0b10111110000100010010011010100110";
        ram[114] = "0b10111110000011001001011000000011";
        ram[115] = "0b10111110001111000001101011001110";
        ram[116] = "0b10111100111000110010011001000000";
        ram[117] = "0b10111101110111100100001111101110";
        ram[118] = "0b00111100111111101110001001011110";
        ram[119] = "0b10111101100110110100101010000001";


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


SC_MODULE(inference_conv2d_f3_1_0_5) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 120;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


inference_conv2d_f3_1_0_5_ram* meminst;


SC_CTOR(inference_conv2d_f3_1_0_5) {
meminst = new inference_conv2d_f3_1_0_5_ram("inference_conv2d_f3_1_0_5_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~inference_conv2d_f3_1_0_5() {
    delete meminst;
}


};//endmodule
#endif