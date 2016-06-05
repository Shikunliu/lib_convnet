// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __inference_conv2d_f3_3_4_12_H__
#define __inference_conv2d_f3_3_4_12_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct inference_conv2d_f3_3_4_12_ram : public sc_core::sc_module {

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


   SC_CTOR(inference_conv2d_f3_3_4_12_ram) {
        ram[0] = "0b10111101100110111000011000111001";
        ram[1] = "0b00111100100001110000110011001111";
        ram[2] = "0b00111100101101010011111000111011";
        ram[3] = "0b10111101001101111111110011111100";
        ram[4] = "0b10111100100011001100101110001011";
        ram[5] = "0b10111110010001000111011010110000";
        ram[6] = "0b10111110000111110001100110010011";
        ram[7] = "0b00111101101001111101101100000011";
        ram[8] = "0b00111101111100000101010010101100";
        ram[9] = "0b00111101010111011111110011010110";
        ram[10] = "0b10111110000111110001010100011110";
        ram[11] = "0b10111101000100011101101110010101";
        ram[12] = "0b00111101001100000110101111011001";
        ram[13] = "0b10111110001101101001011010100010";
        ram[14] = "0b00111110000000000100011110010001";
        ram[15] = "0b00111011111000000110101101010000";
        ram[16] = "0b00111101111001010110111011110000";
        ram[17] = "0b00111100001111000110011110001111";
        ram[18] = "0b10111110000010101001001110101111";
        ram[19] = "0b00111101000000001000000000100011";
        ram[20] = "0b00111110001000001010101101110001";
        ram[21] = "0b00111101100001100101101110011010";
        ram[22] = "0b00111110001000110111110011011101";
        ram[23] = "0b10111101011011010100010100010010";
        ram[24] = "0b10111101100000111000101010011001";
        ram[25] = "0b00111101100110010101100000111001";
        ram[26] = "0b10111101110010011111100001100100";
        ram[27] = "0b00111101101110110101110001100010";
        ram[28] = "0b00111101110101010000110110101110";
        ram[29] = "0b00111101010110110101001001010001";
        ram[30] = "0b00111101000010111000100001000100";
        ram[31] = "0b10111110000111111100110011100010";
        ram[32] = "0b10111101111011010000100000001011";
        ram[33] = "0b10111100111000000001001110011100";
        ram[34] = "0b00111101100101010111000110000001";
        ram[35] = "0b10111100110001110000010101000010";
        ram[36] = "0b00111101100000101110101100000001";
        ram[37] = "0b10111011101110010111111000100110";
        ram[38] = "0b00111100100101110111110010001001";
        ram[39] = "0b00111100110001100111100110010111";
        ram[40] = "0b10111101001010100010011011001010";
        ram[41] = "0b00111110010011100111010110111100";
        ram[42] = "0b00111101000001101011100111000011";
        ram[43] = "0b10111101001101111100010000001100";
        ram[44] = "0b00111101001100011010010011011001";
        ram[45] = "0b00111100111110101110000100010010";
        ram[46] = "0b00111101011101111011001010001001";
        ram[47] = "0b10111101100010110011100100011001";
        ram[48] = "0b00111101101010010111100001001111";
        ram[49] = "0b10111101000101011001111110100100";
        ram[50] = "0b00111110010001111000111000011001";
        ram[51] = "0b00111110000101010010011000001111";
        ram[52] = "0b00111101100010100010001011000001";
        ram[53] = "0b10111101100100101101001011111110";
        ram[54] = "0b10111011010101000010111101000010";
        ram[55] = "0b00111110010000111011111000100011";
        ram[56] = "0b00111101101100111000111001111011";
        ram[57] = "0b00111101001000001111011111100010";
        ram[58] = "0b00111101000110010110010000000101";
        ram[59] = "0b00111101111000100001001010010100";
        ram[60] = "0b00111101010111111101001110001010";
        ram[61] = "0b00111101101111111010111011001010";
        ram[62] = "0b10111100010001001010011010001110";
        ram[63] = "0b00111110000100101001010000010100";
        ram[64] = "0b10111100000001111000101111011011";
        ram[65] = "0b10111011001100101011001101000110";
        ram[66] = "0b00111101110010001010011100000011";
        ram[67] = "0b10111101110101010010001000100001";
        ram[68] = "0b00111101101100100001011100111111";
        ram[69] = "0b10111101001001011001011100110100";
        ram[70] = "0b00111101011010010111010101011111";
        ram[71] = "0b10111101011011111001110011000001";
        ram[72] = "0b10111101100010001101100110000000";
        ram[73] = "0b00111110000000101001001100001000";
        ram[74] = "0b10111101111011101000111010100100";
        ram[75] = "0b00111101100011111101101100010111";
        ram[76] = "0b10111101000110011111111100011010";
        ram[77] = "0b10111101010111111011111101101000";
        ram[78] = "0b10111101111010101110111000100000";
        ram[79] = "0b00111101111011110011111011001101";
        ram[80] = "0b10111101101010010111110000010101";
        ram[81] = "0b10111101011011101110111110000111";
        ram[82] = "0b10111101110111110110111101001100";
        ram[83] = "0b10111100111111001001000111101100";
        ram[84] = "0b00111101101010010100100111110110";
        ram[85] = "0b00111101010001001010101101111011";
        ram[86] = "0b00111110000011110001111110011011";
        ram[87] = "0b00111101011100101011001011000000";
        ram[88] = "0b00111010010010001110101010000100";
        ram[89] = "0b10111101110001100110010001011011";
        ram[90] = "0b10111101100001100111101101111010";
        ram[91] = "0b00111100110110010101110101101001";
        ram[92] = "0b00111101000101100000101010110100";
        ram[93] = "0b10111101101111000001010100001001";
        ram[94] = "0b00111101001110110000000010000111";
        ram[95] = "0b00111110000010011010011100111011";
        ram[96] = "0b00111100101011001011111001101111";
        ram[97] = "0b10111101111000101101011110110110";
        ram[98] = "0b00111101011000000000100100011111";
        ram[99] = "0b00111100100010011110110000010010";
        ram[100] = "0b10111101111101010011111011110111";
        ram[101] = "0b10111101000001011011100111101001";
        ram[102] = "0b10111101110000010110111100011011";
        ram[103] = "0b10111101110011001111010000011111";
        ram[104] = "0b00111101110100111010100100101010";
        ram[105] = "0b00111101111100001110000110110101";
        ram[106] = "0b00111101000111011100101010000001";
        ram[107] = "0b00111101110111001010101011111100";
        ram[108] = "0b10111101110110011110001001111010";
        ram[109] = "0b00111101011010001100000101010101";
        ram[110] = "0b00111100100100110100010111111000";
        ram[111] = "0b10111100010011110100000001000101";
        ram[112] = "0b10111101110011011101100100111100";
        ram[113] = "0b10111110001011100100111000100111";
        ram[114] = "0b00111100100110001111111100001010";
        ram[115] = "0b10111110000101010011110111101010";
        ram[116] = "0b10111101000101111101011110001101";
        ram[117] = "0b10111101101001101000010111001110";
        ram[118] = "0b10111101000010010101010111001111";
        ram[119] = "0b10111101101010010110000010101010";


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


SC_MODULE(inference_conv2d_f3_3_4_12) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 120;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


inference_conv2d_f3_3_4_12_ram* meminst;


SC_CTOR(inference_conv2d_f3_3_4_12) {
meminst = new inference_conv2d_f3_3_4_12_ram("inference_conv2d_f3_3_4_12_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~inference_conv2d_f3_3_4_12() {
    delete meminst;
}


};//endmodule
#endif
