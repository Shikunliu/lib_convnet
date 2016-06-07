// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __inference_conv2d_f3_4_2_9_H__
#define __inference_conv2d_f3_4_2_9_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct inference_conv2d_f3_4_2_9_ram : public sc_core::sc_module {

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


   SC_CTOR(inference_conv2d_f3_4_2_9_ram) {
        ram[0] = "0b10111110000000101110110001101100";
        ram[1] = "0b10111100111111100001011111111110";
        ram[2] = "0b00111010011101011101101011101100";
        ram[3] = "0b00111100110111000011011100111000";
        ram[4] = "0b10111101111111111101001111110110";
        ram[5] = "0b00111101111111010000011000110110";
        ram[6] = "0b10111100110000100101100011010110";
        ram[7] = "0b00111110001001011001011110010010";
        ram[8] = "0b00111011111110010010110010010010";
        ram[9] = "0b00111110000010010011010110111001";
        ram[10] = "0b00111101101111010001111100010000";
        ram[11] = "0b10111101001001011101101101110111";
        ram[12] = "0b00111100101100011011010001111000";
        ram[13] = "0b10111110001011110100011101110011";
        ram[14] = "0b10111110000111001110010100101110";
        ram[15] = "0b10111101011100010100010111011000";
        ram[16] = "0b10111011111100001100110001000110";
        ram[17] = "0b00111011101100011000000111000011";
        ram[18] = "0b10111110010111110110100110001000";
        ram[19] = "0b10111101100001110100100110000110";
        ram[20] = "0b00111110000110101011111101110111";
        ram[21] = "0b00111101100010111000000000100100";
        ram[22] = "0b00111110000001011100010110110101";
        ram[23] = "0b00111110010101010000110001011111";
        ram[24] = "0b00111101001000010001100001100100";
        ram[25] = "0b10111100001111010101001011011100";
        ram[26] = "0b10111101011111111011001011010011";
        ram[27] = "0b10111100111010100010100011111110";
        ram[28] = "0b00111101100000110010000101010010";
        ram[29] = "0b00111101001111100010001011100110";
        ram[30] = "0b00111100100010101110011010101110";
        ram[31] = "0b10111101001110111100011011010000";
        ram[32] = "0b00111101110011110101000010100000";
        ram[33] = "0b10111100111101100010100110001000";
        ram[34] = "0b00111110010100101010010001010101";
        ram[35] = "0b00111101101010011100010110110001";
        ram[36] = "0b00111110011011111001001001101100";
        ram[37] = "0b10111100111111010111100110101000";
        ram[38] = "0b00111101000110000000011111001001";
        ram[39] = "0b00111011111101110000000110010100";
        ram[40] = "0b00111100100000100110100010010000";
        ram[41] = "0b00111100110101100101010111100011";
        ram[42] = "0b00111101001110001101100101100101";
        ram[43] = "0b00111110010100110110110110101000";
        ram[44] = "0b00111101010011011001011110011000";
        ram[45] = "0b10111010011011111111000001010111";
        ram[46] = "0b10111110000011111010000111100100";
        ram[47] = "0b10111101110000000011100111010100";
        ram[48] = "0b00111101100011110110010111000001";
        ram[49] = "0b10111101101001001001000100001111";
        ram[50] = "0b00111101101100011111111100101110";
        ram[51] = "0b00111101011111100101100100110111";
        ram[52] = "0b10111101001101011000000110100111";
        ram[53] = "0b10111110011001101011001110111100";
        ram[54] = "0b10111101111010111011010111100001";
        ram[55] = "0b10111100110100101101010100100101";
        ram[56] = "0b10111101110111100111001100011101";
        ram[57] = "0b00111101010110001101001101010000";
        ram[58] = "0b00111100101110100001111100010101";
        ram[59] = "0b10111101111110111001111110011001";
        ram[60] = "0b00111110000101111010011001111010";
        ram[61] = "0b10111101000000100110111010100101";
        ram[62] = "0b00111101100101000000011110110010";
        ram[63] = "0b10111010011001000100000100001000";
        ram[64] = "0b00111100110000100000000111001101";
        ram[65] = "0b00111101110011101110111110100010";
        ram[66] = "0b10111101011111010001100001011010";
        ram[67] = "0b10111101001100100001001001010001";
        ram[68] = "0b10111101101110001010111001001101";
        ram[69] = "0b10111100011011000010001001101000";
        ram[70] = "0b00111100111101100010100111110011";
        ram[71] = "0b00111110001111100011011001001100";
        ram[72] = "0b10111101100011101000011001000000";
        ram[73] = "0b00111101110101000011010110101101";
        ram[74] = "0b00111101110001011010111000001111";
        ram[75] = "0b10111101011101111101010111100000";
        ram[76] = "0b00111101111011001100000101000100";
        ram[77] = "0b10111101100011110010001010001010";
        ram[78] = "0b00111100110101001101101111111010";
        ram[79] = "0b00111101010011011011110000110001";
        ram[80] = "0b10111101001011100101111101110100";
        ram[81] = "0b00111101000111011010000001011010";
        ram[82] = "0b00111100100001001000101100010101";
        ram[83] = "0b10111110011000111011011100001111";
        ram[84] = "0b10111110001010111100011100101110";
        ram[85] = "0b10111101011110011101111010110011";
        ram[86] = "0b00111100010011010001111000101011";
        ram[87] = "0b10111101100101111101011000100011";
        ram[88] = "0b10111100111111111111111100101001";
        ram[89] = "0b00111101100011010001001011110011";
        ram[90] = "0b00111100010010010000010011000001";
        ram[91] = "0b10111100111000110111011010010010";
        ram[92] = "0b00111110001100110111110011011101";
        ram[93] = "0b10111100100100000010001010001101";
        ram[94] = "0b10111110001001110000101010000001";
        ram[95] = "0b00111101011110001111101011110011";
        ram[96] = "0b10111101011110100011011110111010";
        ram[97] = "0b00111110000011000010001011101110";
        ram[98] = "0b10111100000110111011100110011010";
        ram[99] = "0b00111110001110001000010011000111";
        ram[100] = "0b00111011100011000100010010110010";
        ram[101] = "0b10111100011111110111110010111000";
        ram[102] = "0b10111110000100001010111101100000";
        ram[103] = "0b10111101101000001101101011001001";
        ram[104] = "0b10111100010110001111110000011011";
        ram[105] = "0b10111110000101000011100011010010";
        ram[106] = "0b10111101100100101010000000010110";
        ram[107] = "0b10111101010000111010111011111100";
        ram[108] = "0b10111101111010100011110001100100";
        ram[109] = "0b00111100110100011110101001000011";
        ram[110] = "0b10111101100010100111001111000010";
        ram[111] = "0b10111101100110001111011011110111";
        ram[112] = "0b00111101100000001000010001010101";
        ram[113] = "0b00111101100110011011111111011111";
        ram[114] = "0b10111101010001011101101100100110";
        ram[115] = "0b00111100100100100000010001111010";
        ram[116] = "0b00111100110111100100100101100001";
        ram[117] = "0b00111100110111100001110100100001";
        ram[118] = "0b10111110001001000011000100111000";
        ram[119] = "0b00111101110010011011011000010010";


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


SC_MODULE(inference_conv2d_f3_4_2_9) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 120;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


inference_conv2d_f3_4_2_9_ram* meminst;


SC_CTOR(inference_conv2d_f3_4_2_9) {
meminst = new inference_conv2d_f3_4_2_9_ram("inference_conv2d_f3_4_2_9_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~inference_conv2d_f3_4_2_9() {
    delete meminst;
}


};//endmodule
#endif