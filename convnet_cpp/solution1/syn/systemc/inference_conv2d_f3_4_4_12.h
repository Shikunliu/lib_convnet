// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __inference_conv2d_f3_4_4_12_H__
#define __inference_conv2d_f3_4_4_12_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct inference_conv2d_f3_4_4_12_ram : public sc_core::sc_module {

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


   SC_CTOR(inference_conv2d_f3_4_4_12_ram) {
        ram[0] = "0b10111101110010000100110101011100";
        ram[1] = "0b10111110010100001110000010101000";
        ram[2] = "0b00111110000000101111010101010110";
        ram[3] = "0b00111101100010110010110110101011";
        ram[4] = "0b00111100001111111110001000000011";
        ram[5] = "0b10111101010000101011100011100010";
        ram[6] = "0b00111101111000111011110101011010";
        ram[7] = "0b10111101000110101011101100000010";
        ram[8] = "0b10111101011001010110111111111100";
        ram[9] = "0b10111100000101010001110011010010";
        ram[10] = "0b10111100111001110101010110101111";
        ram[11] = "0b10111110000011011010011110110001";
        ram[12] = "0b00111101101111100001100011010101";
        ram[13] = "0b00111101000111010010111010010100";
        ram[14] = "0b10111100001101001111010101000000";
        ram[15] = "0b10111110010000000111101001101100";
        ram[16] = "0b00111110000101001000110100111011";
        ram[17] = "0b10111101101110001100110100000110";
        ram[18] = "0b00111110010110001110101000111010";
        ram[19] = "0b10111110001110110001000000110100";
        ram[20] = "0b00111100100111001001101111100010";
        ram[21] = "0b00111001010010100010001000001001";
        ram[22] = "0b00111101010011111101001101000111";
        ram[23] = "0b10111101101001001111011000010110";
        ram[24] = "0b00111101000110010110011000111000";
        ram[25] = "0b10111100000011000011101101010111";
        ram[26] = "0b10111110000111100001111111000001";
        ram[27] = "0b00111101100011111111111100011100";
        ram[28] = "0b00111101000001000010101010000010";
        ram[29] = "0b10111101111010110110111010010011";
        ram[30] = "0b00111101100001011111001101111010";
        ram[31] = "0b00111101011010011000011001011100";
        ram[32] = "0b10111101111100001101101101101010";
        ram[33] = "0b00111110000101010101101110001010";
        ram[34] = "0b00111100101011100101100010100011";
        ram[35] = "0b00111110000001001011000001011011";
        ram[36] = "0b10111011010011001101110111101010";
        ram[37] = "0b10111101010100011101101100101010";
        ram[38] = "0b10111101110011101011000111000100";
        ram[39] = "0b10111101010001101100011010001110";
        ram[40] = "0b00111110001110000010011000100100";
        ram[41] = "0b00111101001000010100000101111110";
        ram[42] = "0b10111110001100110001111110001010";
        ram[43] = "0b00111101100001010001000110111000";
        ram[44] = "0b00111110000101110011100010100100";
        ram[45] = "0b10111101011101101001111000100010";
        ram[46] = "0b10111101101100111011000110001110";
        ram[47] = "0b00111011110101101100100011001111";
        ram[48] = "0b10111100001101001000001001010011";
        ram[49] = "0b00111101001001110101101111000100";
        ram[50] = "0b00111110000001111100101010100111";
        ram[51] = "0b00111110000011010111101101100011";
        ram[52] = "0b10111101011011011110000111010101";
        ram[53] = "0b00111101000010100001011100101011";
        ram[54] = "0b10111011001101011111101001001101";
        ram[55] = "0b00111101001100101101111100011011";
        ram[56] = "0b00111011101110111011110111000110";
        ram[57] = "0b10111101101111000100110100001000";
        ram[58] = "0b00111101010011110111011111110010";
        ram[59] = "0b00111101010011101110100010011011";
        ram[60] = "0b00111101110111011101010011000111";
        ram[61] = "0b00111110000010101000001011101000";
        ram[62] = "0b00111101101011010100101110111011";
        ram[63] = "0b00111011110111110101010101010000";
        ram[64] = "0b10111101100111000101011010101110";
        ram[65] = "0b10111101011101010101110101011111";
        ram[66] = "0b10111101010110110011111110001100";
        ram[67] = "0b10111100001010011111100011111000";
        ram[68] = "0b00111101101001000110111110000001";
        ram[69] = "0b10111101110001111001100111100101";
        ram[70] = "0b10111100110000110010001001011111";
        ram[71] = "0b00111101010000010011100101101011";
        ram[72] = "0b10111101000110111010010100001101";
        ram[73] = "0b10111101010100100001110111110101";
        ram[74] = "0b00111101001101110110000010111111";
        ram[75] = "0b00111101110001010010110101100110";
        ram[76] = "0b00111101010000011100000010110000";
        ram[77] = "0b10111101001010111111000011101010";
        ram[78] = "0b10111101010010110111001011100000";
        ram[79] = "0b00111110000001010110111011110000";
        ram[80] = "0b00111100111101100001111101000001";
        ram[81] = "0b00111100111010110011101101001101";
        ram[82] = "0b10111101010001110010001111111100";
        ram[83] = "0b00111100001110011011001010101001";
        ram[84] = "0b10111101100100111000101101010101";
        ram[85] = "0b00111101101111010010110001000110";
        ram[86] = "0b00111101101010111000011011100111";
        ram[87] = "0b00111110000001101111011010010100";
        ram[88] = "0b00111101111101001000000010100110";
        ram[89] = "0b00111110000110011100010000010001";
        ram[90] = "0b00111101110000111111110100101000";
        ram[91] = "0b00111100111011010101111100010100";
        ram[92] = "0b00111100101110010110010101000111";
        ram[93] = "0b00111101100011110011010111100011";
        ram[94] = "0b10111110010100000100000100000011";
        ram[95] = "0b10111101010001011101001010101000";
        ram[96] = "0b00111100111111100010101110110101";
        ram[97] = "0b10111101010001111011101011011111";
        ram[98] = "0b00111101001000001000101101000000";
        ram[99] = "0b00111101101000000000010110000001";
        ram[100] = "0b10111100101010101110100001000001";
        ram[101] = "0b00111101101011101101110001110010";
        ram[102] = "0b00111101001010100111101011100011";
        ram[103] = "0b10111110001000110001011100100111";
        ram[104] = "0b10111101011011010010010000001011";
        ram[105] = "0b10111101110000001100010011011111";
        ram[106] = "0b00111110000100100110011101000001";
        ram[107] = "0b10111101101000000000001110010001";
        ram[108] = "0b10111101100111000110000101100000";
        ram[109] = "0b00111110000011100000101011001000";
        ram[110] = "0b10111101001101100101001000000001";
        ram[111] = "0b00111101110100101011111101010101";
        ram[112] = "0b10111100000000010011101001010010";
        ram[113] = "0b00111100010010010010101101011000";
        ram[114] = "0b10111101100100101010101101101001";
        ram[115] = "0b00111100001010100000010110001101";
        ram[116] = "0b10111100101000010111011101001001";
        ram[117] = "0b00111110000011001000111100110010";
        ram[118] = "0b00111100111010100110001110000001";
        ram[119] = "0b00111101101011110001000001110100";


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


SC_MODULE(inference_conv2d_f3_4_4_12) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 120;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


inference_conv2d_f3_4_4_12_ram* meminst;


SC_CTOR(inference_conv2d_f3_4_4_12) {
meminst = new inference_conv2d_f3_4_4_12_ram("inference_conv2d_f3_4_4_12_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~inference_conv2d_f3_4_4_12() {
    delete meminst;
}


};//endmodule
#endif