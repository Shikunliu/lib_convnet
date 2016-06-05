// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __inference_conv2d_f3_4_4_2_H__
#define __inference_conv2d_f3_4_4_2_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct inference_conv2d_f3_4_4_2_ram : public sc_core::sc_module {

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


   SC_CTOR(inference_conv2d_f3_4_4_2_ram) {
        ram[0] = "0b10111101111111110100111101010001";
        ram[1] = "0b10111101011110101000111100010010";
        ram[2] = "0b00111110001110001111110111100011";
        ram[3] = "0b10111110000111011111100101111011";
        ram[4] = "0b00111100100010001011010010100101";
        ram[5] = "0b10111101011101000100001010101101";
        ram[6] = "0b00111100100100001101001010110110";
        ram[7] = "0b10111110000010100100100001110011";
        ram[8] = "0b10111101010110110010000011101110";
        ram[9] = "0b00111110010010100100101010001100";
        ram[10] = "0b10111101010100010010101111110010";
        ram[11] = "0b10111110000011010101000000100010";
        ram[12] = "0b10111101111000111001010011111011";
        ram[13] = "0b10111110001101000110001101001001";
        ram[14] = "0b00111110010001000001100110100000";
        ram[15] = "0b00111100101011110101001010011110";
        ram[16] = "0b00111100100110000010111011001011";
        ram[17] = "0b00111110010100101100101111101010";
        ram[18] = "0b00111101011100000011111101100011";
        ram[19] = "0b10111011110111000101011000101101";
        ram[20] = "0b00111101000110011001110010001001";
        ram[21] = "0b10111100010001111100010110010001";
        ram[22] = "0b00111101001111110000011000000101";
        ram[23] = "0b00111110000110000011010111011111";
        ram[24] = "0b00111101110000000000100111001110";
        ram[25] = "0b00111101111100011100100011101011";
        ram[26] = "0b00111101101001011100011111001110";
        ram[27] = "0b00111101001100001100000100011000";
        ram[28] = "0b00111101101010001000001100001100";
        ram[29] = "0b00111101000010110100100010111001";
        ram[30] = "0b10111101110011010000011110000101";
        ram[31] = "0b00111011001000110000110110001100";
        ram[32] = "0b00111100100100110110100011001000";
        ram[33] = "0b10111101101101100010110110011111";
        ram[34] = "0b10111101111101010000010000111110";
        ram[35] = "0b10111101001111010001010001011110";
        ram[36] = "0b00111101010000111001101001101111";
        ram[37] = "0b00111100011001011110001100011110";
        ram[38] = "0b00111110001011001010011110010011";
        ram[39] = "0b00111100011100000110010000010110";
        ram[40] = "0b00111101100011100010000111110100";
        ram[41] = "0b10111101100101000111110001011001";
        ram[42] = "0b10111100110110011000010001101011";
        ram[43] = "0b10111101010011011111110000001100";
        ram[44] = "0b00111011101110011100010010000111";
        ram[45] = "0b10111101101111010100110111100001";
        ram[46] = "0b10111011001010101110011101001010";
        ram[47] = "0b10111101110010000001010100001101";
        ram[48] = "0b00111101101110100110011100010010";
        ram[49] = "0b00111100110011000100000001001010";
        ram[50] = "0b10111110000111111100000001001101";
        ram[51] = "0b10111100111010110111000010010001";
        ram[52] = "0b00111101000010100110011101000111";
        ram[53] = "0b00111110000000110000001101111101";
        ram[54] = "0b10111101100111010100110110111001";
        ram[55] = "0b10111101100110011110100011101101";
        ram[56] = "0b00111100010100000010111111000011";
        ram[57] = "0b10111101011001001110101111000010";
        ram[58] = "0b10111101000001011011101001010100";
        ram[59] = "0b00111101000101110110110111011011";
        ram[60] = "0b10111101100000000101110110001000";
        ram[61] = "0b00111101101111001001010000010010";
        ram[62] = "0b00111110010010000111001000101010";
        ram[63] = "0b00111110001111001100000000111000";
        ram[64] = "0b00111101100000000100100100010110";
        ram[65] = "0b10111101100101110010000011001001";
        ram[66] = "0b10111100000000000010101110001001";
        ram[67] = "0b10111110000000110011001010101101";
        ram[68] = "0b10111011100111110001000111111111";
        ram[69] = "0b10111101011110111010101110001101";
        ram[70] = "0b10111110001101111101010001011010";
        ram[71] = "0b00111101001011010101001100111010";
        ram[72] = "0b10111101100010000011011111001111";
        ram[73] = "0b10111101010111111000100011000111";
        ram[74] = "0b10111101110110001101110111101000";
        ram[75] = "0b10111101101011011111001101100110";
        ram[76] = "0b00111100010001100001000010000110";
        ram[77] = "0b00111101101101001100111110001101";
        ram[78] = "0b10111101001011011111011001111110";
        ram[79] = "0b10111101101001010111101101101010";
        ram[80] = "0b10111110000100001011111110100001";
        ram[81] = "0b10111110001000010000000011100111";
        ram[82] = "0b10111110001101001100110111111011";
        ram[83] = "0b00111101010101101010000001010101";
        ram[84] = "0b10111101010001010000100000010010";
        ram[85] = "0b00111101100100100100100000001111";
        ram[86] = "0b10111101010101101001000100000110";
        ram[87] = "0b00111100000001010000001111100000";
        ram[88] = "0b10111101101011010010111111111111";
        ram[89] = "0b10111110000100000101111100101001";
        ram[90] = "0b00111101110110000110001010110010";
        ram[91] = "0b10111110000100001111110101111110";
        ram[92] = "0b00111101011101001011010010001101";
        ram[93] = "0b00111110010001001110011111101111";
        ram[94] = "0b10111101110101010011001111110100";
        ram[95] = "0b10111100101011011000100000101110";
        ram[96] = "0b10111011110011011100010100000101";
        ram[97] = "0b10111110010001001001101010011001";
        ram[98] = "0b00111011100011111101010011011111";
        ram[99] = "0b00111110000111110100101010011001";
        ram[100] = "0b10111101011000010101001100011100";
        ram[101] = "0b00111100000101001101110111101000";
        ram[102] = "0b00111110000110000101111111010000";
        ram[103] = "0b00111101010111101110111100001110";
        ram[104] = "0b10111100111110001010100011110100";
        ram[105] = "0b10111101101001000001100011010111";
        ram[106] = "0b00111100111110111011111100101001";
        ram[107] = "0b10111110000010000000101101100111";
        ram[108] = "0b10111110000100101010110001110101";
        ram[109] = "0b00111100010001101001011111111111";
        ram[110] = "0b10111101010001101000010100000101";
        ram[111] = "0b00111110000010011001111011011000";
        ram[112] = "0b00111101000000000110001111010011";
        ram[113] = "0b10111101010010100000000100001011";
        ram[114] = "0b00111110001000101011011101111000";
        ram[115] = "0b10111101100000100101011001101100";
        ram[116] = "0b10111100011110100101101000111001";
        ram[117] = "0b00111100101100101011001101000110";
        ram[118] = "0b00111110001011111110011100011001";
        ram[119] = "0b00111101111010110011101110111000";


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


SC_MODULE(inference_conv2d_f3_4_4_2) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 120;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


inference_conv2d_f3_4_4_2_ram* meminst;


SC_CTOR(inference_conv2d_f3_4_4_2) {
meminst = new inference_conv2d_f3_4_4_2_ram("inference_conv2d_f3_4_4_2_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~inference_conv2d_f3_4_4_2() {
    delete meminst;
}


};//endmodule
#endif
