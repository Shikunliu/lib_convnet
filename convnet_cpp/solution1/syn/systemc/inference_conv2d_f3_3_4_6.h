// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __inference_conv2d_f3_3_4_6_H__
#define __inference_conv2d_f3_3_4_6_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct inference_conv2d_f3_3_4_6_ram : public sc_core::sc_module {

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


   SC_CTOR(inference_conv2d_f3_3_4_6_ram) {
        ram[0] = "0b00111101100101110011000101110101";
        ram[1] = "0b10111101111011011111001001100111";
        ram[2] = "0b10111101110100111111110100001101";
        ram[3] = "0b00111011100000110011011000010101";
        ram[4] = "0b10111101100000101111110011000111";
        ram[5] = "0b10111110010000001011010011100001";
        ram[6] = "0b00111101111100101001110000110100";
        ram[7] = "0b10111100111000001000111110001101";
        ram[8] = "0b10111101110001010010100011111111";
        ram[9] = "0b00111101101111011010100010111101";
        ram[10] = "0b10111100011110110001111000011001";
        ram[11] = "0b00111101101000111011110101001100";
        ram[12] = "0b10111101101011111111101110011001";
        ram[13] = "0b10111101000110110011001011110111";
        ram[14] = "0b10111101100111111001000010100100";
        ram[15] = "0b10111100111000011000100000010000";
        ram[16] = "0b00111101101000011010001111011010";
        ram[17] = "0b00111110000100000100010111111110";
        ram[18] = "0b00111100110010010110100000101001";
        ram[19] = "0b00111101000111101111000101000010";
        ram[20] = "0b00111101000011110111000100100010";
        ram[21] = "0b10111101110010000111001101111001";
        ram[22] = "0b10111101100011011001000101000000";
        ram[23] = "0b00111100111111100100110101111000";
        ram[24] = "0b00111101100000010111111101101001";
        ram[25] = "0b10111100100100001110000011000011";
        ram[26] = "0b10111101000011010000001110001001";
        ram[27] = "0b00111101100110010101110110111010";
        ram[28] = "0b10111100000111101010010100110010";
        ram[29] = "0b10111110001011000001010100001001";
        ram[30] = "0b10111101100011010001101110001100";
        ram[31] = "0b00111100100010000000011010010100";
        ram[32] = "0b10111101100110010100111010010011";
        ram[33] = "0b10111101011100001001110001100101";
        ram[34] = "0b00111101011001100011111100101111";
        ram[35] = "0b10111101101111111100111000111111";
        ram[36] = "0b10111001000000100011011010010101";
        ram[37] = "0b00111101000111010000010010100011";
        ram[38] = "0b00111110000011000011100110111101";
        ram[39] = "0b10111100101011110000101011100101";
        ram[40] = "0b00111101011011001001111110110110";
        ram[41] = "0b00111100111111000000101000000111";
        ram[42] = "0b10111011011101111000011010110101";
        ram[43] = "0b00111101110111100110110011010011";
        ram[44] = "0b10111100100000001010000001101111";
        ram[45] = "0b10111101110001010001010111011100";
        ram[46] = "0b10111011100001101100100100000111";
        ram[47] = "0b00111101111110011011011001110000";
        ram[48] = "0b00111101111011000010010010000001";
        ram[49] = "0b10111101011111110010111001111111";
        ram[50] = "0b10111100110011100000000111101100";
        ram[51] = "0b00111101100100011100000010111101";
        ram[52] = "0b00111100101111000111100100101101";
        ram[53] = "0b10111100100011001000011000100000";
        ram[54] = "0b10111101001001100111111111000111";
        ram[55] = "0b00111101110010011010110100011010";
        ram[56] = "0b10111110001001000101010111101011";
        ram[57] = "0b00111101101011101100011100101000";
        ram[58] = "0b10111101110001001000101000001000";
        ram[59] = "0b00111110001011010111001010111101";
        ram[60] = "0b10111101010000111011011111100110";
        ram[61] = "0b00111101110010000110011000011011";
        ram[62] = "0b10111101000001110001010100011000";
        ram[63] = "0b00111101100100111011111010000001";
        ram[64] = "0b10111101101011010100010011111000";
        ram[65] = "0b10111011000110011010010111011001";
        ram[66] = "0b00111101000011100000010100010001";
        ram[67] = "0b00111100100111000010110001010001";
        ram[68] = "0b00111101010011011110001000001011";
        ram[69] = "0b00111101100101100110010111111011";
        ram[70] = "0b10111100000001010010001110001011";
        ram[71] = "0b10111110000000010001010000001010";
        ram[72] = "0b10111101101001110100111101001010";
        ram[73] = "0b00111101000010100001111100001000";
        ram[74] = "0b00111101101100011111110111101100";
        ram[75] = "0b00111101110011001011000000111010";
        ram[76] = "0b00111101001011111010001000110100";
        ram[77] = "0b00111100110011111011110110101101";
        ram[78] = "0b10111100010111010111000011110100";
        ram[79] = "0b10111110000001101011100110000000";
        ram[80] = "0b10111101100111101100111110011001";
        ram[81] = "0b00111110000100101101010111100000";
        ram[82] = "0b00111101000011010100011000000100";
        ram[83] = "0b10111110001101001111111001111010";
        ram[84] = "0b10111101010111101001000100110101";
        ram[85] = "0b10111010011001101100001111011110";
        ram[86] = "0b00111110000000001001111010011001";
        ram[87] = "0b00111101100100011010110111010000";
        ram[88] = "0b00111100111100111010111010111001";
        ram[89] = "0b00111110000100010011110000100101";
        ram[90] = "0b10111101110111000001110011100111";
        ram[91] = "0b10111101111010011001101101101111";
        ram[92] = "0b00111110000010010110110101001100";
        ram[93] = "0b00111101100111010100000110101010";
        ram[94] = "0b10111101101011011110101110010110";
        ram[95] = "0b10111000001001010100001111001010";
        ram[96] = "0b00111010111010101010011011010010";
        ram[97] = "0b00111101010001111011101001110100";
        ram[98] = "0b00111101100001010100101000100010";
        ram[99] = "0b00111101010011011001110001010000";
        ram[100] = "0b10111100101000111001001101001101";
        ram[101] = "0b10111101100111011111011011101001";
        ram[102] = "0b00111101100011011001110101011101";
        ram[103] = "0b00111110000110110101101100101101";
        ram[104] = "0b10111110010001000101101001100000";
        ram[105] = "0b00111100100110100001011101101110";
        ram[106] = "0b10111100010111000111110101000100";
        ram[107] = "0b00111100011001111111011010001001";
        ram[108] = "0b10111101101101110000110111110110";
        ram[109] = "0b10111100011011010011101101101101";
        ram[110] = "0b10111101101011000001001110010010";
        ram[111] = "0b00111101100101100001010010110111";
        ram[112] = "0b00111010100000110100101111001111";
        ram[113] = "0b00111110000001101011100001110011";
        ram[114] = "0b00111101111100010010011001100011";
        ram[115] = "0b10111101110001100101000111011001";
        ram[116] = "0b10111101101011101110101100111010";
        ram[117] = "0b00111101111010010000011010001010";
        ram[118] = "0b00111110001001000011001101010001";
        ram[119] = "0b00111101110110111010010101011101";


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


SC_MODULE(inference_conv2d_f3_3_4_6) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 120;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


inference_conv2d_f3_3_4_6_ram* meminst;


SC_CTOR(inference_conv2d_f3_3_4_6) {
meminst = new inference_conv2d_f3_3_4_6_ram("inference_conv2d_f3_3_4_6_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~inference_conv2d_f3_3_4_6() {
    delete meminst;
}


};//endmodule
#endif
