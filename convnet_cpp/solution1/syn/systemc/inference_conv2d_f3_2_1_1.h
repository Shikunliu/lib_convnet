// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __inference_conv2d_f3_2_1_1_H__
#define __inference_conv2d_f3_2_1_1_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct inference_conv2d_f3_2_1_1_ram : public sc_core::sc_module {

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


   SC_CTOR(inference_conv2d_f3_2_1_1_ram) {
        ram[0] = "0b00111100111011000101001010100100";
        ram[1] = "0b00111101101111110110010110001011";
        ram[2] = "0b10111101010010101100011101010100";
        ram[3] = "0b10111011111111011101011011000101";
        ram[4] = "0b10111101011111010100100100000001";
        ram[5] = "0b10111011100110111110010001111000";
        ram[6] = "0b00111100100010000011011100000110";
        ram[7] = "0b00111101101010110000110001111011";
        ram[8] = "0b10111110001101111110000101110110";
        ram[9] = "0b00111011001111001101110011101011";
        ram[10] = "0b00111101100010011111110110000111";
        ram[11] = "0b00111110000011101110100010001110";
        ram[12] = "0b00111101111110110100001101010010";
        ram[13] = "0b00111110010011101000010010101101";
        ram[14] = "0b10111100001011101000001100110110";
        ram[15] = "0b00111101101000111011001000111100";
        ram[16] = "0b10111101100110111011011101011001";
        ram[17] = "0b10111101111110101110011100001100";
        ram[18] = "0b10111110000101101111000001001010";
        ram[19] = "0b00111100110010000100011000100000";
        ram[20] = "0b10111101010000010111100101000111";
        ram[21] = "0b00111101000010111011001110010010";
        ram[22] = "0b00111101001000100100100100011011";
        ram[23] = "0b00111101100011111001110100000100";
        ram[24] = "0b10111101010000010110101011001111";
        ram[25] = "0b10111110001000100110011010111010";
        ram[26] = "0b00111100110100100001010110101100";
        ram[27] = "0b00111101111100111001100011101001";
        ram[28] = "0b10111101100000111000100110001101";
        ram[29] = "0b10111101000000000011111111110111";
        ram[30] = "0b00111101010111011001101100011011";
        ram[31] = "0b10111101101011110101011100101110";
        ram[32] = "0b10111100110100101001101010100010";
        ram[33] = "0b00111101110100010011011100101010";
        ram[34] = "0b10111100111110110110000100110101";
        ram[35] = "0b00111101101010000110111011110111";
        ram[36] = "0b00111101000010110110101101010011";
        ram[37] = "0b10111110001001110000010001111001";
        ram[38] = "0b00111101111001001001110100111001";
        ram[39] = "0b10111100100000010000101011111000";
        ram[40] = "0b00111101101111000110111101101101";
        ram[41] = "0b10111101011101000000001101110010";
        ram[42] = "0b00111110000101011010010001101010";
        ram[43] = "0b10111110011101010110110001010001";
        ram[44] = "0b00111110000010100001110000100110";
        ram[45] = "0b00111101101001110011100111011000";
        ram[46] = "0b00111101000001011000000001110011";
        ram[47] = "0b10111100011100010110100010001110";
        ram[48] = "0b00111100100001010011100001001110";
        ram[49] = "0b00111101101101111001100001101101";
        ram[50] = "0b00111101001101111000111011111101";
        ram[51] = "0b10111101101100101010101010111010";
        ram[52] = "0b10111101000000110101011100000010";
        ram[53] = "0b10111101100010110011111100000110";
        ram[54] = "0b10111101001101100110011111101100";
        ram[55] = "0b00111101110111000101011110011111";
        ram[56] = "0b00111101101000010000001010100010";
        ram[57] = "0b10111110001100111011011111011000";
        ram[58] = "0b00111110001010100100110010100101";
        ram[59] = "0b00111101000100100101000111110111";
        ram[60] = "0b10111011011011111010111000100011";
        ram[61] = "0b00111101110100100010111100100111";
        ram[62] = "0b00111110001011001010011111010110";
        ram[63] = "0b00111101110010010000101100011001";
        ram[64] = "0b00111100111000110000011100110110";
        ram[65] = "0b10111101111111010101100110010010";
        ram[66] = "0b00111101101111000000001111110010";
        ram[67] = "0b00111011111111011111000001000110";
        ram[68] = "0b10111101000010110000110100101010";
        ram[69] = "0b00111101011101111000101000101011";
        ram[70] = "0b00111101110000111001100110011000";
        ram[71] = "0b10111101001011010011001111100000";
        ram[72] = "0b00111110000100010111000000001101";
        ram[73] = "0b10111101100100011110001000100011";
        ram[74] = "0b00111100010101001010011100100001";
        ram[75] = "0b00111101010010010010011011110000";
        ram[76] = "0b10111010001011101100111101101001";
        ram[77] = "0b00111101010001110000000011011011";
        ram[78] = "0b00111101100001100001110000110111";
        ram[79] = "0b00111101100101101010000111110110";
        ram[80] = "0b00111101000110001101100011000100";
        ram[81] = "0b10111101101100110010011101011010";
        ram[82] = "0b10111110000000100011100111100111";
        ram[83] = "0b00111101100010010100111001111000";
        ram[84] = "0b10111101100011000011111110001111";
        ram[85] = "0b10111100011101111011100100001010";
        ram[86] = "0b10111101010100101000101110100011";
        ram[87] = "0b10111101000011110001101000011010";
        ram[88] = "0b10111101001101101000111111011111";
        ram[89] = "0b00111101010011010100001001011000";
        ram[90] = "0b10111101000000100001011110000010";
        ram[91] = "0b10111101110110111100001101000000";
        ram[92] = "0b10111101010010100011110110100110";
        ram[93] = "0b10111100010000001100010011101100";
        ram[94] = "0b00111110001101100100001110001001";
        ram[95] = "0b10111011001001001010000011011111";
        ram[96] = "0b10111110000100001100101110110000";
        ram[97] = "0b00111110000100011100000011001010";
        ram[98] = "0b00111101110000001110011101010001";
        ram[99] = "0b00111101111100010010110000101000";
        ram[100] = "0b10111110000100100110110110001011";
        ram[101] = "0b00111110001100111010001000010110";
        ram[102] = "0b00111100111110001011100110111011";
        ram[103] = "0b00111101110111111100010011000001";
        ram[104] = "0b10111101000001011100101010110000";
        ram[105] = "0b00111101111101101010111100000100";
        ram[106] = "0b00111110000100110101000110011100";
        ram[107] = "0b00111101100010010100110110111100";
        ram[108] = "0b00111101101000111000001110111011";
        ram[109] = "0b00111100111010011000010100110101";
        ram[110] = "0b10111100000000101000010111101100";
        ram[111] = "0b10111011100001000010011100101100";
        ram[112] = "0b10111110000010001010000101011010";
        ram[113] = "0b00111101110100111010000001000000";
        ram[114] = "0b10111110000010101010010111000110";
        ram[115] = "0b10111101100110001111011011110111";
        ram[116] = "0b00111110011010010001111000100001";
        ram[117] = "0b00111101110001010011011011001001";
        ram[118] = "0b00111101101110111111010111001010";
        ram[119] = "0b00111101010101000110001000100010";


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


SC_MODULE(inference_conv2d_f3_2_1_1) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 120;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


inference_conv2d_f3_2_1_1_ram* meminst;


SC_CTOR(inference_conv2d_f3_2_1_1) {
meminst = new inference_conv2d_f3_2_1_1_ram("inference_conv2d_f3_2_1_1_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~inference_conv2d_f3_2_1_1() {
    delete meminst;
}


};//endmodule
#endif
