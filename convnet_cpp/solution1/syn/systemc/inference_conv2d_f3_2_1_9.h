// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __inference_conv2d_f3_2_1_9_H__
#define __inference_conv2d_f3_2_1_9_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct inference_conv2d_f3_2_1_9_ram : public sc_core::sc_module {

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


   SC_CTOR(inference_conv2d_f3_2_1_9_ram) {
        ram[0] = "0b00111101111010100001111110001110";
        ram[1] = "0b10111101010010011000101010101000";
        ram[2] = "0b10111100110000110000001000010011";
        ram[3] = "0b10111110001100011100100011101011";
        ram[4] = "0b00111110001000101111101000001101";
        ram[5] = "0b00111100101000001110011010010101";
        ram[6] = "0b00111101111011011001111100001010";
        ram[7] = "0b00111100111010111010100010010000";
        ram[8] = "0b00111101000011110101000110010010";
        ram[9] = "0b10111110001100111111000110000100";
        ram[10] = "0b00111100100101110000010110100000";
        ram[11] = "0b10111100110011011010101101001111";
        ram[12] = "0b10111101110000001100011110100110";
        ram[13] = "0b00111110000110010110100001010001";
        ram[14] = "0b00111101111101001101011100101000";
        ram[15] = "0b10111100100111010000010110010101";
        ram[16] = "0b00111101100100100010100001001001";
        ram[17] = "0b00111100110000101110000100100110";
        ram[18] = "0b00111101111110101110100100100101";
        ram[19] = "0b00111101100011010101011101101100";
        ram[20] = "0b10111100011111001100001110100000";
        ram[21] = "0b10111010111100101110011101101001";
        ram[22] = "0b00111101111111000011011100011110";
        ram[23] = "0b00111110000111010001000110111110";
        ram[24] = "0b00111100101011001000110100100111";
        ram[25] = "0b00111101010001111110111011111101";
        ram[26] = "0b10111101011000011100010010010001";
        ram[27] = "0b00111101110101110000110001010110";
        ram[28] = "0b00111101110101001000001101000101";
        ram[29] = "0b10111101100100001100000111111101";
        ram[30] = "0b10111110001001110010001001011011";
        ram[31] = "0b00111101011000000010100100000000";
        ram[32] = "0b10111101011011001111000110000000";
        ram[33] = "0b10111101110111110010100110010001";
        ram[34] = "0b00111101011001001111100000100010";
        ram[35] = "0b10111101000010001010100001111011";
        ram[36] = "0b00111011011111001111011100110111";
        ram[37] = "0b00111101010100111101101111010000";
        ram[38] = "0b00111110011010100110110110101101";
        ram[39] = "0b00111100111110100011101111010001";
        ram[40] = "0b10111101100101101111000000100001";
        ram[41] = "0b10111100010101100101110000101101";
        ram[42] = "0b10111101110100001100101100101001";
        ram[43] = "0b00111110000001111011001101010011";
        ram[44] = "0b00111101011000111110010101001101";
        ram[45] = "0b10111101000111001000010011101100";
        ram[46] = "0b10111100011100010000000010001001";
        ram[47] = "0b00111101100101111101110000001111";
        ram[48] = "0b00111110000100101001001000111110";
        ram[49] = "0b10111011101011101011110100101101";
        ram[50] = "0b00111110000111111001111100000010";
        ram[51] = "0b00111101111111010111100110001110";
        ram[52] = "0b10111101000010010111001001110000";
        ram[53] = "0b10111101110001011010011001101000";
        ram[54] = "0b10111100110100101110111111111100";
        ram[55] = "0b10111101001011101101101011000100";
        ram[56] = "0b10111100111011110001000011111010";
        ram[57] = "0b10111101110101111101100101010101";
        ram[58] = "0b00111101101100001010001101101100";
        ram[59] = "0b10111100011100011010000110011000";
        ram[60] = "0b10111101010100001010110000000101";
        ram[61] = "0b10111101110100111000101111001110";
        ram[62] = "0b10111110000011010010101100101100";
        ram[63] = "0b10111100011001001010001100011000";
        ram[64] = "0b10111101100001101000001100101111";
        ram[65] = "0b10111101011010011011011011101000";
        ram[66] = "0b10111101110011100011000001000100";
        ram[67] = "0b10111101110001000010111011000001";
        ram[68] = "0b00111101100100010010010000111101";
        ram[69] = "0b10111101100000101110011001110010";
        ram[70] = "0b00111100001101010001101101101011";
        ram[71] = "0b00111101011011100001000101010110";
        ram[72] = "0b00111101011000111110110111001011";
        ram[73] = "0b00111101110000001110110100010101";
        ram[74] = "0b00111110000011110101100011000001";
        ram[75] = "0b00111101100000101101111011110010";
        ram[76] = "0b10111110000000110110010100000010";
        ram[77] = "0b00111011111011111110000001001101";
        ram[78] = "0b00111100011010011001010101011010";
        ram[79] = "0b00111100111010100100001110100000";
        ram[80] = "0b00111110000010001111100110110001";
        ram[81] = "0b00111101011110111011011011111011";
        ram[82] = "0b10111100101110001001010101110011";
        ram[83] = "0b00111011110100110001111111001101";
        ram[84] = "0b00111101110100011100110110100011";
        ram[85] = "0b10111101000101100100100100110010";
        ram[86] = "0b00111101000111101110000100000001";
        ram[87] = "0b00111011100000101100010101010111";
        ram[88] = "0b00111100010010001101110000010010";
        ram[89] = "0b10111101011100100000110000111100";
        ram[90] = "0b00111101011100001001100101000000";
        ram[91] = "0b10111110000001100011000111111001";
        ram[92] = "0b10111101100001110011110110111010";
        ram[93] = "0b00111110000111111010000011010111";
        ram[94] = "0b00111101001001011010001101000011";
        ram[95] = "0b10111101111010011110000000011110";
        ram[96] = "0b10111100101110100111111111000011";
        ram[97] = "0b00111110000100111001100100101101";
        ram[98] = "0b10111101010101011110010111100110";
        ram[99] = "0b10111110000000101101101010011000";
        ram[100] = "0b10111100000100010011011110110110";
        ram[101] = "0b10111101000000110010000110001000";
        ram[102] = "0b00111101001111011000100101001000";
        ram[103] = "0b10111101001010111110010001110000";
        ram[104] = "0b00111100100001110110101000100010";
        ram[105] = "0b00111100011100000000100100010010";
        ram[106] = "0b00111101010010101011010111101100";
        ram[107] = "0b10111101011110011110001101010001";
        ram[108] = "0b00111101000001101110110010111001";
        ram[109] = "0b00111100100100000110110101101011";
        ram[110] = "0b10111101100101000010001100011101";
        ram[111] = "0b00111100111110000011011101111111";
        ram[112] = "0b00111101111110111110100110000101";
        ram[113] = "0b00111101101100011000101001000100";
        ram[114] = "0b00111101100010111100110100011011";
        ram[115] = "0b10111100111010111101001111000011";
        ram[116] = "0b10111101100111010100010110011001";
        ram[117] = "0b00111101111101000010111111101000";
        ram[118] = "0b00111101100011011111011101111101";
        ram[119] = "0b10111101000001011010111001111011";


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


SC_MODULE(inference_conv2d_f3_2_1_9) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 120;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


inference_conv2d_f3_2_1_9_ram* meminst;


SC_CTOR(inference_conv2d_f3_2_1_9) {
meminst = new inference_conv2d_f3_2_1_9_ram("inference_conv2d_f3_2_1_9_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~inference_conv2d_f3_2_1_9() {
    delete meminst;
}


};//endmodule
#endif
