// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __inference_conv2d_f3_0_0_12_H__
#define __inference_conv2d_f3_0_0_12_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct inference_conv2d_f3_0_0_12_ram : public sc_core::sc_module {

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


   SC_CTOR(inference_conv2d_f3_0_0_12_ram) {
        ram[0] = "0b10111101100101001110100001001101";
        ram[1] = "0b00111011011101001100010110001111";
        ram[2] = "0b10111101101011000111100100100000";
        ram[3] = "0b00111101000000100101111110001100";
        ram[4] = "0b10111100110110000011110000000001";
        ram[5] = "0b00111101110101010011100000100110";
        ram[6] = "0b10111100100000001111000100101100";
        ram[7] = "0b10111101000101011011001110101100";
        ram[8] = "0b10111100011101010010011000011101";
        ram[9] = "0b10111101101010111100010100110000";
        ram[10] = "0b00111100110010111000110010010001";
        ram[11] = "0b10111110000101010101011000001000";
        ram[12] = "0b00111110000100110111000111011010";
        ram[13] = "0b00111100000111001100101011111100";
        ram[14] = "0b00111101101100001000000011101100";
        ram[15] = "0b00111100101001000101010000001000";
        ram[16] = "0b10111110000111000010001010101011";
        ram[17] = "0b00111101101110101110000011101010";
        ram[18] = "0b10111101010001100010001000111110";
        ram[19] = "0b10111101011010010010100010111001";
        ram[20] = "0b00111101000000111110010101001101";
        ram[21] = "0b00111110001010100001110111111100";
        ram[22] = "0b00111110001110100111100101111001";
        ram[23] = "0b10111101100111010110100101110101";
        ram[24] = "0b00111100111001011011001001110111";
        ram[25] = "0b10111101101011110101011011010000";
        ram[26] = "0b00111100000000111101001001101000";
        ram[27] = "0b00111101010111000110010011110000";
        ram[28] = "0b10111101100100111000110011001101";
        ram[29] = "0b00111101110000011011010100001100";
        ram[30] = "0b00111101011101000100010100010111";
        ram[31] = "0b00111101111101110101001100011110";
        ram[32] = "0b00111011100101101011110001000101";
        ram[33] = "0b00111101100111111110010000000001";
        ram[34] = "0b00111100111111110100111011001010";
        ram[35] = "0b10111110000010000000100100001011";
        ram[36] = "0b00111110010011010000011001111001";
        ram[37] = "0b10111110000000001100100100010000";
        ram[38] = "0b00111110001000100011111101101000";
        ram[39] = "0b10111110001101000111101010011110";
        ram[40] = "0b00111101101110100001001101010111";
        ram[41] = "0b10111101101111010101110001001100";
        ram[42] = "0b00111101100000011110011010100101";
        ram[43] = "0b10111101000011110001101111100010";
        ram[44] = "0b10111101100110101110110010011011";
        ram[45] = "0b10111101000111101101101000110000";
        ram[46] = "0b00111100010110100101000010101110";
        ram[47] = "0b10111100101110111111011011110001";
        ram[48] = "0b00111110000100101000111110011111";
        ram[49] = "0b10111100110000110110001011110110";
        ram[50] = "0b10111011110101001101000111111111";
        ram[51] = "0b00111101010010101010001011010110";
        ram[52] = "0b10111101011010000010100101111111";
        ram[53] = "0b00111101010100110000010111001100";
        ram[54] = "0b00111101111110110010100000001111";
        ram[55] = "0b00111110000111011110110011100101";
        ram[56] = "0b10111100111010001101100011010010";
        ram[57] = "0b10111101110110100011101110011011";
        ram[58] = "0b00111101100101000001010110010110";
        ram[59] = "0b00111101110010100010101011000110";
        ram[60] = "0b10111100100101001001100011011111";
        ram[61] = "0b00111101011110000000001101000111";
        ram[62] = "0b10111101000110010000011011100111";
        ram[63] = "0b10111101111101100011110111000101";
        ram[64] = "0b00111100101110100111001011111000";
        ram[65] = "0b00111100101001101011011100100100";
        ram[66] = "0b10111100110000100001101000100001";
        ram[67] = "0b00111101000001001110011000110100";
        ram[68] = "0b10111011000101100100110011011110";
        ram[69] = "0b00111110000000011010000110011000";
        ram[70] = "0b00111101100110100110010011111001";
        ram[71] = "0b10111100111100000000010000111111";
        ram[72] = "0b00111110010010110101101000100001";
        ram[73] = "0b00111101110000110100000011100010";
        ram[74] = "0b10111101101101100100111000100000";
        ram[75] = "0b10111110010100000111110001000010";
        ram[76] = "0b00111101110110001010000110011101";
        ram[77] = "0b10111110010001110101010110111101";
        ram[78] = "0b00111100111111111101010010010111";
        ram[79] = "0b10111100010001011111010011010111";
        ram[80] = "0b00111100011001010000110001011111";
        ram[81] = "0b00111110000000110100010110001101";
        ram[82] = "0b00111101011011001000111111100001";
        ram[83] = "0b10111101010101100000000100001110";
        ram[84] = "0b10111101111010101010010010111010";
        ram[85] = "0b10111101110000101001101110000110";
        ram[86] = "0b10111110000100100111110001111100";
        ram[87] = "0b10111010000011101001001110100100";
        ram[88] = "0b10111101110110010001101000110011";
        ram[89] = "0b10111101010011011000110110100010";
        ram[90] = "0b00111101000000010100011110101110";
        ram[91] = "0b10111100111011110110111101011001";
        ram[92] = "0b10111100011111111001001101011110";
        ram[93] = "0b00111110001000010101110110110011";
        ram[94] = "0b10111101000100011101100001110000";
        ram[95] = "0b00111101000010011101111101100010";
        ram[96] = "0b10111101110110110101101001100100";
        ram[97] = "0b10111100110011000010001100100100";
        ram[98] = "0b10111110001001100010100001000110";
        ram[99] = "0b00111110000010010011100001011000";
        ram[100] = "0b00111101100011111101001111001101";
        ram[101] = "0b10111101001000111111011100111011";
        ram[102] = "0b00111101000100111000111101111010";
        ram[103] = "0b00111100111001101100110110010100";
        ram[104] = "0b00111101000101001010010100001000";
        ram[105] = "0b00111101010110011011111011010011";
        ram[106] = "0b00111101010111100110110111011111";
        ram[107] = "0b10111101010000001111011110101100";
        ram[108] = "0b10111101001011001011111010100101";
        ram[109] = "0b10111101111111000001100111000001";
        ram[110] = "0b00111110001101100111110001101100";
        ram[111] = "0b10111101100111110111100010000110";
        ram[112] = "0b00111100100010101101000000001000";
        ram[113] = "0b10111101111101110001000010001000";
        ram[114] = "0b00111101110111101011111100100011";
        ram[115] = "0b10111101110111001100111110101111";
        ram[116] = "0b10111101110011111100000101011001";
        ram[117] = "0b00111100100011011001001011000101";
        ram[118] = "0b00111100010111000100111100100001";
        ram[119] = "0b00111101101111110101110100110101";


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


SC_MODULE(inference_conv2d_f3_0_0_12) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 120;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


inference_conv2d_f3_0_0_12_ram* meminst;


SC_CTOR(inference_conv2d_f3_0_0_12) {
meminst = new inference_conv2d_f3_0_0_12_ram("inference_conv2d_f3_0_0_12_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~inference_conv2d_f3_0_0_12() {
    delete meminst;
}


};//endmodule
#endif
