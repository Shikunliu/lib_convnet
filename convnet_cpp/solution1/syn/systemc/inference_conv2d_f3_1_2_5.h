// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __inference_conv2d_f3_1_2_5_H__
#define __inference_conv2d_f3_1_2_5_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct inference_conv2d_f3_1_2_5_ram : public sc_core::sc_module {

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


   SC_CTOR(inference_conv2d_f3_1_2_5_ram) {
        ram[0] = "0b00111101101011110011100101100110";
        ram[1] = "0b10111101010001110001111111111111";
        ram[2] = "0b00111101101110111001010101111010";
        ram[3] = "0b10111100111111001100110101000110";
        ram[4] = "0b00111101011010001100110110011001";
        ram[5] = "0b00111110001000000100100011100000";
        ram[6] = "0b00111101110100101110100011000000";
        ram[7] = "0b00111110000101100000111010010101";
        ram[8] = "0b10111110000101010000111111000111";
        ram[9] = "0b10111101100000011000001111010001";
        ram[10] = "0b10111100100001000011101110011001";
        ram[11] = "0b10111100110111010111101100000101";
        ram[12] = "0b10111101100000100010001011100011";
        ram[13] = "0b10111101010111111110110000101111";
        ram[14] = "0b00111100110000101101101010100110";
        ram[15] = "0b10111101100001010110001111100000";
        ram[16] = "0b10111101111011001000000101001101";
        ram[17] = "0b00111110000000011110101011111111";
        ram[18] = "0b00111101110011010101000111111000";
        ram[19] = "0b10111101111000000100011101001110";
        ram[20] = "0b10111110001011101111101000011110";
        ram[21] = "0b10111010101101000111101011000110";
        ram[22] = "0b00111101100110100100000010111110";
        ram[23] = "0b00111101111000011100110011011001";
        ram[24] = "0b10111101001000101110101100011100";
        ram[25] = "0b10111100101110011001011001011001";
        ram[26] = "0b10111100110111001000101111110010";
        ram[27] = "0b00111101100101001001111000011101";
        ram[28] = "0b10111101100111011000111011110010";
        ram[29] = "0b00111101111000011011010111001000";
        ram[30] = "0b00111101011101101111000010001101";
        ram[31] = "0b10111100001010110110111110000101";
        ram[32] = "0b10111101011101111000111010101101";
        ram[33] = "0b10111101110000101001101100001101";
        ram[34] = "0b00111101101101101010001101100000";
        ram[35] = "0b10111101011000110110010110110000";
        ram[36] = "0b10111101100111100100111101101001";
        ram[37] = "0b00111101000110001000101101100010";
        ram[38] = "0b00111101100000100100101110011111";
        ram[39] = "0b10111101101100110100100000111001";
        ram[40] = "0b00111101100010100111100110101110";
        ram[41] = "0b10111101000101110011011001111101";
        ram[42] = "0b00111110001001010001101000000000";
        ram[43] = "0b00111101110100101101001010111011";
        ram[44] = "0b10111101000011101111010101001011";
        ram[45] = "0b10111101111010001100100010101100";
        ram[46] = "0b00111110000111000100111100111100";
        ram[47] = "0b10111101001101110110000100010000";
        ram[48] = "0b00111101010110001011010001000111";
        ram[49] = "0b10111110001001110001010101000000";
        ram[50] = "0b00111110000100000011110110011011";
        ram[51] = "0b10111110001000000100000000111010";
        ram[52] = "0b10111101001110000110110101001010";
        ram[53] = "0b10111101110111101010010111111000";
        ram[54] = "0b00111101000011011001101101111001";
        ram[55] = "0b00111110000111101111100101010101";
        ram[56] = "0b00111100011110110110110000011101";
        ram[57] = "0b00111101011001011001101000001000";
        ram[58] = "0b00111101111001010000000011010110";
        ram[59] = "0b00111101110001111111011001101111";
        ram[60] = "0b00111100010101101101101101000100";
        ram[61] = "0b00111101001000001000110010000010";
        ram[62] = "0b10111101010000010101111110010110";
        ram[63] = "0b00111101100011000111010001110101";
        ram[64] = "0b00111101110011101000000100000010";
        ram[65] = "0b00111011000110110101000100101010";
        ram[66] = "0b10111101011100111011011110001000";
        ram[67] = "0b00111011101110111010101101111101";
        ram[68] = "0b10111100110100111000111011110011";
        ram[69] = "0b00111101001000011011110111110110";
        ram[70] = "0b10111101010010011101100111101110";
        ram[71] = "0b00111101110101000101111000001011";
        ram[72] = "0b00111100001000111111010110101001";
        ram[73] = "0b10111110000001100100111111011011";
        ram[74] = "0b00111101001000001101110110010000";
        ram[75] = "0b00111101100000011000000110011101";
        ram[76] = "0b00111100010100010110011000100100";
        ram[77] = "0b00111110001100110110001100101100";
        ram[78] = "0b10111110000001111110111101011011";
        ram[79] = "0b00111101110100001010110111001101";
        ram[80] = "0b00111001100111100100010001001110";
        ram[81] = "0b00111101110010010111001000010010";
        ram[82] = "0b10111110000101110111010111111011";
        ram[83] = "0b10111100001000110011001101110110";
        ram[84] = "0b10111100110000001101001100101111";
        ram[85] = "0b10111110000010011010111100011001";
        ram[86] = "0b00111101101111101000000111110100";
        ram[87] = "0b00111101100111011100111110010111";
        ram[88] = "0b10111101101000001111100001110110";
        ram[89] = "0b10111101110001001001010011110000";
        ram[90] = "0b00111100000010101011001001000000";
        ram[91] = "0b00111101110010101011000110010010";
        ram[92] = "0b10111101000100100111110010001010";
        ram[93] = "0b10111101100010011100101100011000";
        ram[94] = "0b10111110001100011100100100101110";
        ram[95] = "0b10111101100011100000000011011111";
        ram[96] = "0b00111100111100000100010000000000";
        ram[97] = "0b00111101100110010101100100111000";
        ram[98] = "0b00111011010101111111110101011000";
        ram[99] = "0b00111010110101101000010110001000";
        ram[100] = "0b00111101101001001111000011001011";
        ram[101] = "0b00111101111000101010001111001111";
        ram[102] = "0b10111100011001000000001000001000";
        ram[103] = "0b10111101011111110110011001100010";
        ram[104] = "0b00111101001001000000001011111010";
        ram[105] = "0b00111101101001000100100010110101";
        ram[106] = "0b10111101101001011100010101001001";
        ram[107] = "0b10111100000011010010100100010011";
        ram[108] = "0b00111101101111110001011001010011";
        ram[109] = "0b10111101100010101110100001000001";
        ram[110] = "0b00111110001010111001000100101110";
        ram[111] = "0b00111110000000100100111010011100";
        ram[112] = "0b10111101001111001000100001000111";
        ram[113] = "0b00111101101110100000011101001000";
        ram[114] = "0b10111101000110001101010011111110";
        ram[115] = "0b00111110010000110001100001110110";
        ram[116] = "0b10111101001000101001010011010000";
        ram[117] = "0b10111011101111110101110100111000";
        ram[118] = "0b00111011010101001100000011100010";
        ram[119] = "0b00111101001101100100000101010101";


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


SC_MODULE(inference_conv2d_f3_1_2_5) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 120;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


inference_conv2d_f3_1_2_5_ram* meminst;


SC_CTOR(inference_conv2d_f3_1_2_5) {
meminst = new inference_conv2d_f3_1_2_5_ram("inference_conv2d_f3_1_2_5_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~inference_conv2d_f3_1_2_5() {
    delete meminst;
}


};//endmodule
#endif
