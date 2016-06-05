// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __inference_conv2d_f3_0_2_1_H__
#define __inference_conv2d_f3_0_2_1_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct inference_conv2d_f3_0_2_1_ram : public sc_core::sc_module {

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


   SC_CTOR(inference_conv2d_f3_0_2_1_ram) {
        ram[0] = "0b00111100110000010001101000010001";
        ram[1] = "0b00111101110011000010110010010100";
        ram[2] = "0b10111110000001000100000001101100";
        ram[3] = "0b00111101010101101010001000111001";
        ram[4] = "0b10111101001100011101100100010001";
        ram[5] = "0b10111101101111111010000101000011";
        ram[6] = "0b10111110010001000001011101000100";
        ram[7] = "0b00111100011110011101011111001000";
        ram[8] = "0b10111101101110010000000010000010";
        ram[9] = "0b10111100101010001111100011101000";
        ram[10] = "0b00111101101011011001101110010100";
        ram[11] = "0b00111101011110100010010100010000";
        ram[12] = "0b00111100101110001110000100101000";
        ram[13] = "0b00111100111101000010011100011001";
        ram[14] = "0b00111110000010000000101111101101";
        ram[15] = "0b00111101111101101111100001101010";
        ram[16] = "0b00111101100100010100011100000000";
        ram[17] = "0b10111101100000111001101001101111";
        ram[18] = "0b00111110001010111111110010101000";
        ram[19] = "0b10111101000010010000000110000001";
        ram[20] = "0b00111101011100011001110110011100";
        ram[21] = "0b00111101000100110101001100101110";
        ram[22] = "0b00111101101000101101011001011001";
        ram[23] = "0b10111100100011011000000011110010";
        ram[24] = "0b10111100001111010110010001111010";
        ram[25] = "0b00111101110010100011101000110000";
        ram[26] = "0b00111101010110000100111001011011";
        ram[27] = "0b00111100101000000110001110111000";
        ram[28] = "0b00111110000111000010101011001100";
        ram[29] = "0b00111101110101000111011100110110";
        ram[30] = "0b00111101000001110110000001111100";
        ram[31] = "0b00111100101010110110011011101100";
        ram[32] = "0b10111110000101001111010110010000";
        ram[33] = "0b10111101010000000000110000001111";
        ram[34] = "0b00111100001101100001001000001011";
        ram[35] = "0b00111100100101111101101101010011";
        ram[36] = "0b10111110010110101100110111100010";
        ram[37] = "0b00111101111011010000110111010000";
        ram[38] = "0b00111110010010100010011010100010";
        ram[39] = "0b10111011110010101000010110100000";
        ram[40] = "0b10111101100010001001110100001101";
        ram[41] = "0b00111101100110011111111101000010";
        ram[42] = "0b00111101101001111000100001000111";
        ram[43] = "0b00111101001010011000100110110111";
        ram[44] = "0b00111101111101110010111011110001";
        ram[45] = "0b00111101111111001001110101011010";
        ram[46] = "0b00111101101011011010100000001111";
        ram[47] = "0b00111101100000000011000011000010";
        ram[48] = "0b10111100110100011001101101101001";
        ram[49] = "0b10111101000001011011010000100100";
        ram[50] = "0b10111100100010011000100100010110";
        ram[51] = "0b10111110000010001001100001110000";
        ram[52] = "0b00111101010111111000010111110010";
        ram[53] = "0b10111101101001111101100101010101";
        ram[54] = "0b00111011001110111111101010011000";
        ram[55] = "0b10111101011000111010000110101011";
        ram[56] = "0b00111110000010111001000010101000";
        ram[57] = "0b00111101001100110010110010011000";
        ram[58] = "0b10111101101010000101100001000100";
        ram[59] = "0b10111101011010111110000100010101";
        ram[60] = "0b10111101111101000000010011101010";
        ram[61] = "0b10111100110010010111101101110100";
        ram[62] = "0b00111101100000111111001110101011";
        ram[63] = "0b00111101110010001110111001000011";
        ram[64] = "0b00111101101101101000101000011011";
        ram[65] = "0b10111101110110111011000111110010";
        ram[66] = "0b10111101000011110001110101110101";
        ram[67] = "0b00111101011001111111100010000111";
        ram[68] = "0b10111101110010011101000100000100";
        ram[69] = "0b10111110000100101011111001001001";
        ram[70] = "0b00111110001001010001101110010011";
        ram[71] = "0b10111101100010010001000101111111";
        ram[72] = "0b00111110000011100001101000111111";
        ram[73] = "0b00111110001100001100001111010010";
        ram[74] = "0b10111101001111001100100110011010";
        ram[75] = "0b10111101001011111010010111000101";
        ram[76] = "0b00111100001000100110101111111011";
        ram[77] = "0b10111110001101000100111000001110";
        ram[78] = "0b10111100110010000011000111111110";
        ram[79] = "0b00111101100101100010010101010110";
        ram[80] = "0b10111100111010000100011000000101";
        ram[81] = "0b10111110001000010101100010111000";
        ram[82] = "0b00111101101001111101010000010111";
        ram[83] = "0b10111101101011111100110110101011";
        ram[84] = "0b00111101100101010101110000011101";
        ram[85] = "0b10111101111101110111010110111000";
        ram[86] = "0b00111110001000100011110100001100";
        ram[87] = "0b00111101110010110101001111001001";
        ram[88] = "0b00111110000010010111101101110100";
        ram[89] = "0b00111101100110000000111001110010";
        ram[90] = "0b10111101101110000100000011111100";
        ram[91] = "0b10111101011110000001010110000110";
        ram[92] = "0b00111101100011011111011001110000";
        ram[93] = "0b10111110001010100011110010100111";
        ram[94] = "0b10111101110011100111010101111001";
        ram[95] = "0b10111101100011010110000100011111";
        ram[96] = "0b10111101111100000010001011011101";
        ram[97] = "0b10111101000011010011001101011010";
        ram[98] = "0b10111100001000010101011000011100";
        ram[99] = "0b10111101010010110000101000000100";
        ram[100] = "0b10111101100100011100011100111101";
        ram[101] = "0b00111101000110111100011010000000";
        ram[102] = "0b10111101100111010101010100000011";
        ram[103] = "0b00111101000011110011000110110001";
        ram[104] = "0b10111110001000011111111100101110";
        ram[105] = "0b10111101111110011001010001011011";
        ram[106] = "0b10111101100101101111101101001100";
        ram[107] = "0b10111101000111101001111111100011";
        ram[108] = "0b10111110000000100011110101001111";
        ram[109] = "0b10111101100100111100100010101101";
        ram[110] = "0b10111101101000111101000001101111";
        ram[111] = "0b10111101111001001110100100111110";
        ram[112] = "0b00111101010101110111111111001001";
        ram[113] = "0b00111110000000100001110001000111";
        ram[114] = "0b10111101010111011000101000000100";
        ram[115] = "0b00111101000110001101001110100001";
        ram[116] = "0b00111100110100010011101010000101";
        ram[117] = "0b10111101010000001110101010101100";
        ram[118] = "0b00111100111100001111110001010111";
        ram[119] = "0b10111101100101010011010110111100";


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


SC_MODULE(inference_conv2d_f3_0_2_1) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 120;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


inference_conv2d_f3_0_2_1_ram* meminst;


SC_CTOR(inference_conv2d_f3_0_2_1) {
meminst = new inference_conv2d_f3_0_2_1_ram("inference_conv2d_f3_0_2_1_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~inference_conv2d_f3_0_2_1() {
    delete meminst;
}


};//endmodule
#endif
