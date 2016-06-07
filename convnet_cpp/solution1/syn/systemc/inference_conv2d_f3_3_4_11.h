// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __inference_conv2d_f3_3_4_11_H__
#define __inference_conv2d_f3_3_4_11_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct inference_conv2d_f3_3_4_11_ram : public sc_core::sc_module {

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


   SC_CTOR(inference_conv2d_f3_3_4_11_ram) {
        ram[0] = "0b00111101110011101111111101011100";
        ram[1] = "0b00111110010000010100000010011010";
        ram[2] = "0b00111110001000101001101010100010";
        ram[3] = "0b10111100111011101110010011110000";
        ram[4] = "0b10111101110100110000110011101101";
        ram[5] = "0b10111101101100010010000100100101";
        ram[6] = "0b10111110001000101010101101101001";
        ram[7] = "0b10111011110100110100111001110001";
        ram[8] = "0b10111100100101100100011010010011";
        ram[9] = "0b00111101100001101010101011111010";
        ram[10] = "0b00111100001001110000000011110110";
        ram[11] = "0b00111101010101111011011101011100";
        ram[12] = "0b10111101111110010110101011110000";
        ram[13] = "0b10111101101101101011101111000001";
        ram[14] = "0b10111101010011100111111100000100";
        ram[15] = "0b10111101111101100000000101111001";
        ram[16] = "0b10111101111100111111011111001111";
        ram[17] = "0b10111101110101001101110011101100";
        ram[18] = "0b00111101000000101000001111101110";
        ram[19] = "0b00111101111000011111101011111101";
        ram[20] = "0b10111101010000010011001011101011";
        ram[21] = "0b00111100000010101100111001011010";
        ram[22] = "0b00111101111111111110110110100110";
        ram[23] = "0b00111110000111011001001110000001";
        ram[24] = "0b00111100101010010010100011101110";
        ram[25] = "0b00111101100011101011111100111110";
        ram[26] = "0b00111101010010000011100100000100";
        ram[27] = "0b10111110000100011011111101111011";
        ram[28] = "0b00111101101101001010000011111111";
        ram[29] = "0b10111101100111010011100010100101";
        ram[30] = "0b00111110000011110111010001000111";
        ram[31] = "0b00111101001111101000100100100010";
        ram[32] = "0b10111101011101101010010011011000";
        ram[33] = "0b00111101100010111010001110111101";
        ram[34] = "0b00111101100100111100000100101101";
        ram[35] = "0b10111101110111010011011011111000";
        ram[36] = "0b10111100011111010101101101110101";
        ram[37] = "0b10111101000111000110101101010110";
        ram[38] = "0b10111101101110011100001110001011";
        ram[39] = "0b00111100011011111111100110001101";
        ram[40] = "0b00111100100010000110000011000010";
        ram[41] = "0b10111101101100111011101110010001";
        ram[42] = "0b00111110001101100110101001010101";
        ram[43] = "0b10111101001100011000000010010001";
        ram[44] = "0b00111101001000001011000000101001";
        ram[45] = "0b10111100101000011000100001111011";
        ram[46] = "0b00111101001011100101110101110110";
        ram[47] = "0b10111100010111000101010101101011";
        ram[48] = "0b00111101110101111101110100000001";
        ram[49] = "0b00111101010101011000011001111010";
        ram[50] = "0b10111101110111000010000100011000";
        ram[51] = "0b10111101101100110101000101001011";
        ram[52] = "0b00111101001000011011011011101111";
        ram[53] = "0b10111110000101001100010100010001";
        ram[54] = "0b10111101010001011110100111010100";
        ram[55] = "0b00111110001001111011010110101111";
        ram[56] = "0b10111101110100001101101001011110";
        ram[57] = "0b10111101101100000010110111100000";
        ram[58] = "0b00111011011100001011011001100001";
        ram[59] = "0b00111101101011010000000100000101";
        ram[60] = "0b10111010111000000001110101100010";
        ram[61] = "0b00111101101111011001000100110011";
        ram[62] = "0b10111101001001101110011101000101";
        ram[63] = "0b00111101111000111001011110011010";
        ram[64] = "0b10111100110111010010011001001100";
        ram[65] = "0b10111100110011110110111100001001";
        ram[66] = "0b10111101110001110001011011000101";
        ram[67] = "0b10111100100101001011101101000011";
        ram[68] = "0b10111100100001001111111101000011";
        ram[69] = "0b00111100100101100011110100100011";
        ram[70] = "0b00111110000100011110001010011011";
        ram[71] = "0b10111101111000011110000111010010";
        ram[72] = "0b10111101100101001000100111101101";
        ram[73] = "0b00111110000000111011101001110111";
        ram[74] = "0b00111101001010101001000100111001";
        ram[75] = "0b00111101101011011101101011110111";
        ram[76] = "0b00111100100100010101001110110000";
        ram[77] = "0b10111101011001010000010100111101";
        ram[78] = "0b00111110000111010110000011101001";
        ram[79] = "0b10111010101010101010111101000001";
        ram[80] = "0b00111101101011110010100101000000";
        ram[81] = "0b00111101110110111001010000010000";
        ram[82] = "0b10111101011111111011010111111000";
        ram[83] = "0b10111100111100011101110001010001";
        ram[84] = "0b10111101100100111100111010001100";
        ram[85] = "0b10111110000001010001100011110100";
        ram[86] = "0b10111101011100010100011110000110";
        ram[87] = "0b00111101101100111100101011101110";
        ram[88] = "0b10111101101101101010001000010000";
        ram[89] = "0b00111110000100101010100110010011";
        ram[90] = "0b10111110000000111110001111100011";
        ram[91] = "0b00111101100011011101110101010011";
        ram[92] = "0b00111101100001101011111000010000";
        ram[93] = "0b00111101100011100001010100001111";
        ram[94] = "0b10111100111010100110001000111111";
        ram[95] = "0b00111110011000101001010000010100";
        ram[96] = "0b00111101010011001100100010000000";
        ram[97] = "0b10111110001011100100010000110001";
        ram[98] = "0b10111101101100000110010011101101";
        ram[99] = "0b10111110001100010000001111001001";
        ram[100] = "0b10111101111001101010001100111000";
        ram[101] = "0b00111101001101111001101111001000";
        ram[102] = "0b10111101111101111111011110111110";
        ram[103] = "0b10111101000110000001101000111110";
        ram[104] = "0b00111101001001100010111011010011";
        ram[105] = "0b00111110000001010110100110110001";
        ram[106] = "0b10111101000010000001110101110000";
        ram[107] = "0b00111101100111100100100101101111";
        ram[108] = "0b00111101100111101101111101000110";
        ram[109] = "0b00111100001001110011000100110010";
        ram[110] = "0b10111100110111111100100111001010";
        ram[111] = "0b10111101011011001011101111010000";
        ram[112] = "0b10111100011101111010100001000011";
        ram[113] = "0b10111100111101110101111010100110";
        ram[114] = "0b10111101001101111110100011110101";
        ram[115] = "0b10111110001000111111101010110001";
        ram[116] = "0b10111101000111111010100101100011";
        ram[117] = "0b00111110001001010001101010000111";
        ram[118] = "0b10111010011111010001111110100110";
        ram[119] = "0b10111100001000111111100010011000";


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


SC_MODULE(inference_conv2d_f3_3_4_11) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 120;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


inference_conv2d_f3_3_4_11_ram* meminst;


SC_CTOR(inference_conv2d_f3_3_4_11) {
meminst = new inference_conv2d_f3_3_4_11_ram("inference_conv2d_f3_3_4_11_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~inference_conv2d_f3_3_4_11() {
    delete meminst;
}


};//endmodule
#endif