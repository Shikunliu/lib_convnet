// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __inference_conv2d_f3_1_2_9_H__
#define __inference_conv2d_f3_1_2_9_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct inference_conv2d_f3_1_2_9_ram : public sc_core::sc_module {

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


   SC_CTOR(inference_conv2d_f3_1_2_9_ram) {
        ram[0] = "0b00111100000001110111000001001100";
        ram[1] = "0b00111101101000001100010011000100";
        ram[2] = "0b10111101101000001101000010010000";
        ram[3] = "0b10111100100001101001101001001110";
        ram[4] = "0b10111101011111101001111000000000";
        ram[5] = "0b10111101110001101101011000101110";
        ram[6] = "0b00111110000110111000001110001100";
        ram[7] = "0b10111101011100111110100110001100";
        ram[8] = "0b00111101011000111111001100001001";
        ram[9] = "0b10111110000011001111011000111000";
        ram[10] = "0b10111110000010100001001101111111";
        ram[11] = "0b00111101010000100010100000101110";
        ram[12] = "0b10111010110100110011111100000010";
        ram[13] = "0b10111101001110101110010010100011";
        ram[14] = "0b00111110000011100110101011111101";
        ram[15] = "0b10111101011001011110110000001000";
        ram[16] = "0b10111110000001001001101010011001";
        ram[17] = "0b00111101110100101011110111000010";
        ram[18] = "0b00111101000100010011110010111001";
        ram[19] = "0b00111100100101110101101110011100";
        ram[20] = "0b00111110001100100111100000000111";
        ram[21] = "0b10111101011000001101001111101011";
        ram[22] = "0b00111101000101001001110000011111";
        ram[23] = "0b10111100110000011010110000000111";
        ram[24] = "0b00111110001000000111011111001101";
        ram[25] = "0b10111100101101011101111111101100";
        ram[26] = "0b10111101011111110001001011101011";
        ram[27] = "0b10111110000111000000011011100010";
        ram[28] = "0b00111101101011011110011111000010";
        ram[29] = "0b00111100001010110101001111010110";
        ram[30] = "0b10111100000001011010100111011000";
        ram[31] = "0b00111101010111010101000001011000";
        ram[32] = "0b10111101110110101101001110100110";
        ram[33] = "0b10111101101011011101100110001101";
        ram[34] = "0b10111100101011100001011000101000";
        ram[35] = "0b00111101010000011001010010100101";
        ram[36] = "0b00111011111011000011101100100111";
        ram[37] = "0b00111110000101100111110101111000";
        ram[38] = "0b00111100100110000110010100011100";
        ram[39] = "0b10111101000000110001000011000001";
        ram[40] = "0b10111101110010101111110110001010";
        ram[41] = "0b10111100100101101111000101111110";
        ram[42] = "0b10111101110111110011111110010110";
        ram[43] = "0b10111101100100100000001111001011";
        ram[44] = "0b10111101001100000111100001010011";
        ram[45] = "0b10111110011100011100010111000101";
        ram[46] = "0b10111100101010011101110010101000";
        ram[47] = "0b00111101000101001101110010110110";
        ram[48] = "0b00111110010110110011111011011110";
        ram[49] = "0b10111101100011110011100001100111";
        ram[50] = "0b00111101011111000001001000011010";
        ram[51] = "0b10111101000000001001010001100000";
        ram[52] = "0b10111101101101110110001101000100";
        ram[53] = "0b10111101001100010101001100001111";
        ram[54] = "0b00111101110111001010010100110111";
        ram[55] = "0b10111101011001101100010110011100";
        ram[56] = "0b10111110000101011011111100100111";
        ram[57] = "0b00111011111001101000100101100001";
        ram[58] = "0b10111101011011000101000010001011";
        ram[59] = "0b00111110001111111101111011111000";
        ram[60] = "0b00111101100101010100110001100011";
        ram[61] = "0b10111110001001001111111101000011";
        ram[62] = "0b10111101110101011000001110100101";
        ram[63] = "0b00111101110011100110000010000000";
        ram[64] = "0b10111110000010011011111110011100";
        ram[65] = "0b00111101110111001101010001100111";
        ram[66] = "0b10111110000111010101000110110101";
        ram[67] = "0b10111101110101110110101111000010";
        ram[68] = "0b10111101101110100001001101001010";
        ram[69] = "0b10111101100100111001100111000000";
        ram[70] = "0b10111101010110011001111010111101";
        ram[71] = "0b00111100111110101101100101010000";
        ram[72] = "0b10111110000010101001010110000101";
        ram[73] = "0b00111101010011001100011111000100";
        ram[74] = "0b00111011111110011010100100100100";
        ram[75] = "0b10111100100111010111011111100000";
        ram[76] = "0b00111101001010100101000100100111";
        ram[77] = "0b10111101000000110110110011101101";
        ram[78] = "0b00111101101110100110000111100001";
        ram[79] = "0b00111101100011111011000100001011";
        ram[80] = "0b10111100110010110001100011001101";
        ram[81] = "0b00111101110110010110010110110010";
        ram[82] = "0b10111101100010000100001110001110";
        ram[83] = "0b00111101001011000100110110000001";
        ram[84] = "0b00111101110001101110001001001010";
        ram[85] = "0b00111011111101101000110101111011";
        ram[86] = "0b00111101000011100010101010011011";
        ram[87] = "0b00111100100000010101010000101000";
        ram[88] = "0b00111101011110111010110100100000";
        ram[89] = "0b10111100110010101110011000001101";
        ram[90] = "0b10111101101110010000100001101101";
        ram[91] = "0b10111101100111010011100000111010";
        ram[92] = "0b00111101000001001001100010000001";
        ram[93] = "0b00111110010011000111011111011110";
        ram[94] = "0b00111101100001111000111101110110";
        ram[95] = "0b10111101001111111101000010011011";
        ram[96] = "0b10111101100101111011110001111111";
        ram[97] = "0b00111100101100111110011100100011";
        ram[98] = "0b00111101110000111110101001001000";
        ram[99] = "0b10111100101110101001101111011101";
        ram[100] = "0b10111101100110110011001111101000";
        ram[101] = "0b10111101100100111110011111000100";
        ram[102] = "0b10111100110100111000111010001000";
        ram[103] = "0b00111110010100001101000111111010";
        ram[104] = "0b00111110000001101110001111111000";
        ram[105] = "0b00111101100100000110110111110001";
        ram[106] = "0b00111101110010100101010101100110";
        ram[107] = "0b10111101100001101110110110010000";
        ram[108] = "0b00111101101010110110111111111110";
        ram[109] = "0b10111110010001010011111010110100";
        ram[110] = "0b10111101001001001101011001011110";
        ram[111] = "0b10111101011001101101010100111100";
        ram[112] = "0b10111101111011010010010001011011";
        ram[113] = "0b00111011111100010001001111010100";
        ram[114] = "0b10111011100010111100111000010100";
        ram[115] = "0b00111100100001010011100111111100";
        ram[116] = "0b10111100100010100011110010011010";
        ram[117] = "0b00111110001110111111100101000000";
        ram[118] = "0b10111110001100111110101010110011";
        ram[119] = "0b00111011010001001010101111000001";


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


SC_MODULE(inference_conv2d_f3_1_2_9) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 120;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


inference_conv2d_f3_1_2_9_ram* meminst;


SC_CTOR(inference_conv2d_f3_1_2_9) {
meminst = new inference_conv2d_f3_1_2_9_ram("inference_conv2d_f3_1_2_9_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~inference_conv2d_f3_1_2_9() {
    delete meminst;
}


};//endmodule
#endif