// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __inference_conv2d_f3_2_0_4_H__
#define __inference_conv2d_f3_2_0_4_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct inference_conv2d_f3_2_0_4_ram : public sc_core::sc_module {

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


   SC_CTOR(inference_conv2d_f3_2_0_4_ram) {
        ram[0] = "0b10111101011011000101010011110011";
        ram[1] = "0b10111100001110010111111100010010";
        ram[2] = "0b10111101100000100000001100001111";
        ram[3] = "0b00111110000010100011100110000010";
        ram[4] = "0b00111101011000110001000101111101";
        ram[5] = "0b00111101110111101011101001101011";
        ram[6] = "0b10111011110111000100001110100011";
        ram[7] = "0b00111110010001101101110110101101";
        ram[8] = "0b00111110001000011101000101001110";
        ram[9] = "0b00111101100001111001101111110001";
        ram[10] = "0b00111101110000101101101101101111";
        ram[11] = "0b10111100111011100001001110100100";
        ram[12] = "0b10111101000011110100101000000101";
        ram[13] = "0b10111101101100000111010111110111";
        ram[14] = "0b10111101001011100100100001111101";
        ram[15] = "0b10111101100111000000010111001000";
        ram[16] = "0b10111100001001110110000111011001";
        ram[17] = "0b10111110011001110000011010010010";
        ram[18] = "0b00111101100011111111010000110100";
        ram[19] = "0b00111101110101111111000111111010";
        ram[20] = "0b10111101011101101101010101001001";
        ram[21] = "0b10111101001000010110000100101001";
        ram[22] = "0b10111011100111111001011100011111";
        ram[23] = "0b00111100100010001100000001100011";
        ram[24] = "0b00111101001011110111010110100100";
        ram[25] = "0b10111101101111111001100010011100";
        ram[26] = "0b00111100100000101011011110100000";
        ram[27] = "0b00111100001110111000010000111011";
        ram[28] = "0b00111101100100001011011101011000";
        ram[29] = "0b00111101010101110010110000000001";
        ram[30] = "0b10111100010000010110111001011111";
        ram[31] = "0b00111101000101001100100000101001";
        ram[32] = "0b10111101100010010001010101111011";
        ram[33] = "0b10111101101010100100011010010000";
        ram[34] = "0b00111011110110010110111011011100";
        ram[35] = "0b00111101011000100011101111001010";
        ram[36] = "0b00111110000001010111011101010011";
        ram[37] = "0b00111101101010101110100011111101";
        ram[38] = "0b10111101101000010110111011011000";
        ram[39] = "0b10111110001110000111001110111101";
        ram[40] = "0b00111100101101000111110000111110";
        ram[41] = "0b10111100001001100000111010001000";
        ram[42] = "0b00111101101011110001100001111001";
        ram[43] = "0b10111101100000001001001111110100";
        ram[44] = "0b00111101100000101110000100110100";
        ram[45] = "0b00111100010001010101101000010010";
        ram[46] = "0b00111101111011101110011100111110";
        ram[47] = "0b10111101011111001011001111100101";
        ram[48] = "0b10111110001111000001011010011100";
        ram[49] = "0b10111011100011001001011011100111";
        ram[50] = "0b00111110000011001100000111001010";
        ram[51] = "0b10111101110001101110110011010100";
        ram[52] = "0b10111101100110111100001111101110";
        ram[53] = "0b10111101100101001111010110010000";
        ram[54] = "0b00111110000011100000001010100111";
        ram[55] = "0b10111101101001000110110011010100";
        ram[56] = "0b10111110001110001000101101010100";
        ram[57] = "0b10111101101000110101101001111000";
        ram[58] = "0b00111101100110011011100010010110";
        ram[59] = "0b10111101000111010100010100000101";
        ram[60] = "0b10111101001010101100000100111111";
        ram[61] = "0b10111101100110010101011010011001";
        ram[62] = "0b00111101000110110101110111110101";
        ram[63] = "0b10111110000110110111010010011011";
        ram[64] = "0b00111011100110101100100111000101";
        ram[65] = "0b10111101010101100000101010110100";
        ram[66] = "0b00111101111100111101011111010100";
        ram[67] = "0b10111101101011001011011111010100";
        ram[68] = "0b10111100011111110110110011001000";
        ram[69] = "0b00111100101111100100110101000011";
        ram[70] = "0b00111100110010011001100111011101";
        ram[71] = "0b00111011101100011000101011100111";
        ram[72] = "0b00111110100001101110111011111010";
        ram[73] = "0b00111101011100010110000101010001";
        ram[74] = "0b00111101110110000111011000011001";
        ram[75] = "0b00111101110111001101111111110000";
        ram[76] = "0b10111101110111100101100111110011";
        ram[77] = "0b10111110000000011111100101101010";
        ram[78] = "0b10111101110100110000001001110001";
        ram[79] = "0b00111110010111010111110011110110";
        ram[80] = "0b00111101010010101011100100010001";
        ram[81] = "0b10111100010100111111000110000100";
        ram[82] = "0b10111110000000000001101000110111";
        ram[83] = "0b10111101110010111001101110111000";
        ram[84] = "0b10111101111100110110000001001010";
        ram[85] = "0b10111010111111001111100001100100";
        ram[86] = "0b10111110000110010001110111011110";
        ram[87] = "0b00111101110001011001100011100001";
        ram[88] = "0b00111110001101101000000101100111";
        ram[89] = "0b10111100100110111110110111010010";
        ram[90] = "0b10111101011001010001100010111110";
        ram[91] = "0b10111101100000010111110010100010";
        ram[92] = "0b00111101000011001101111000110101";
        ram[93] = "0b10111101111101000111000111111000";
        ram[94] = "0b00111110001100101100011010101100";
        ram[95] = "0b10111101011100001001100100001010";
        ram[96] = "0b10111100010110000010110101010011";
        ram[97] = "0b10111100101111011101101110011000";
        ram[98] = "0b00111110000011111100000010010000";
        ram[99] = "0b10111011001111010010110011000111";
        ram[100] = "0b00111101001011011111111001110110";
        ram[101] = "0b10111101110011000001000110101110";
        ram[102] = "0b10111110000111100010100011101101";
        ram[103] = "0b10111110000100000000101010111111";
        ram[104] = "0b00111101011001000110111011100000";
        ram[105] = "0b10111101100010101000101111101101";
        ram[106] = "0b00111110001110100000101101011111";
        ram[107] = "0b10111101100001110010000100100111";
        ram[108] = "0b00111110001110011101010011011000";
        ram[109] = "0b10111011001111101010010000010101";
        ram[110] = "0b00111010111111110111001110010011";
        ram[111] = "0b00111101101110110111100001100001";
        ram[112] = "0b10111100111000011010100111010100";
        ram[113] = "0b10111100001010001010110011000111";
        ram[114] = "0b10111101100111000111001110101100";
        ram[115] = "0b10111101110101101010111001111101";
        ram[116] = "0b10111101110100100111010011100010";
        ram[117] = "0b10111101110110110000100010011010";
        ram[118] = "0b10111101000011101001101011101000";
        ram[119] = "0b00111101011101101010000001010101";


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


SC_MODULE(inference_conv2d_f3_2_0_4) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 120;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


inference_conv2d_f3_2_0_4_ram* meminst;


SC_CTOR(inference_conv2d_f3_2_0_4) {
meminst = new inference_conv2d_f3_2_0_4_ram("inference_conv2d_f3_2_0_4_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~inference_conv2d_f3_2_0_4() {
    delete meminst;
}


};//endmodule
#endif
