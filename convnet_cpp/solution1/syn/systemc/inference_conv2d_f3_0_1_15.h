// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __inference_conv2d_f3_0_1_15_H__
#define __inference_conv2d_f3_0_1_15_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct inference_conv2d_f3_0_1_15_ram : public sc_core::sc_module {

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


   SC_CTOR(inference_conv2d_f3_0_1_15_ram) {
        ram[0] = "0b10111110000101010011010001111010";
        ram[1] = "0b00111110000000111110011100001000";
        ram[2] = "0b10111101100010011111101011001110";
        ram[3] = "0b10111101101111101100111011000010";
        ram[4] = "0b10111110000101100100101111101100";
        ram[5] = "0b00111101100100101001011000000101";
        ram[6] = "0b10111101110010110001101110110000";
        ram[7] = "0b00111101111011101101100110011101";
        ram[8] = "0b10111101101111111010010110001111";
        ram[9] = "0b00111110001111110110100110001000";
        ram[10] = "0b00111101001011100000100100001101";
        ram[11] = "0b10111101000110000000110111011110";
        ram[12] = "0b10111110000001111001001110011010";
        ram[13] = "0b10111110000000001011001110010010";
        ram[14] = "0b00111101100011100010000000010001";
        ram[15] = "0b10111101111100011000111010111001";
        ram[16] = "0b00111101110010011100000010110110";
        ram[17] = "0b00111110000001001010010100010110";
        ram[18] = "0b00111110000010100000000010011111";
        ram[19] = "0b00111101111000111111001011010100";
        ram[20] = "0b00111110000011111110111000101101";
        ram[21] = "0b10111101001011111101010001101111";
        ram[22] = "0b10111101111000011010010100000001";
        ram[23] = "0b10111101000100000110110110111100";
        ram[24] = "0b10111101111000000111010111110111";
        ram[25] = "0b10111101010011111110010001000100";
        ram[26] = "0b10110111001011110100100010001000";
        ram[27] = "0b10111101000000111000011011101110";
        ram[28] = "0b10111101100001101110000101100110";
        ram[29] = "0b10111101101010001101110010100110";
        ram[30] = "0b00111101101111100101111010011101";
        ram[31] = "0b10111110000000011000100100110111";
        ram[32] = "0b10111101000010010000010001010110";
        ram[33] = "0b00111101100001101111011011110010";
        ram[34] = "0b00111011110001000101100000011111";
        ram[35] = "0b00111101010110011101001101111011";
        ram[36] = "0b00111100100000101101011011011111";
        ram[37] = "0b10111101101110110101110110110010";
        ram[38] = "0b00111101100011101000000011001100";
        ram[39] = "0b00111101100001111011100111101110";
        ram[40] = "0b10111101101110100101011000111101";
        ram[41] = "0b00111101101000111000011110001111";
        ram[42] = "0b10111101100011011101000010010110";
        ram[43] = "0b00111101100011010001101011101011";
        ram[44] = "0b00111100111101010000010010001111";
        ram[45] = "0b10111110010001100000100101010111";
        ram[46] = "0b10111110000101100100010001010010";
        ram[47] = "0b00111101100101000110101111100011";
        ram[48] = "0b10111100110101011111111000111001";
        ram[49] = "0b00111011110001100110001001100101";
        ram[50] = "0b00111101110011100010000100010000";
        ram[51] = "0b00111101101000110010111111100110";
        ram[52] = "0b10111101001001100010111111000101";
        ram[53] = "0b00111110001000100000001001010100";
        ram[54] = "0b10111101110010110010100011011000";
        ram[55] = "0b00111101100011111100100001010010";
        ram[56] = "0b00111110000001111111001101001001";
        ram[57] = "0b10111101110000101111100100101001";
        ram[58] = "0b00111100110110011110000000010000";
        ram[59] = "0b10111101000000010010000001110111";
        ram[60] = "0b00111011100101111100100100110101";
        ram[61] = "0b00111101110011010001100011010010";
        ram[62] = "0b00111101011101111100010000100111";
        ram[63] = "0b00111101001111110011001011100110";
        ram[64] = "0b00111110000101100110110010110001";
        ram[65] = "0b10111101110101000010010101101100";
        ram[66] = "0b00111101111110110010010011101010";
        ram[67] = "0b00111101000011010011111111101111";
        ram[68] = "0b10111110000111110110010000000110";
        ram[69] = "0b10111101100001100001111011100011";
        ram[70] = "0b10111110000010101010111110111100";
        ram[71] = "0b00111101001111010011011000100001";
        ram[72] = "0b10111101111011010110101000010110";
        ram[73] = "0b10111101011010100010110010001111";
        ram[74] = "0b10111101111101010001101111010110";
        ram[75] = "0b10111101000110000101000101100101";
        ram[76] = "0b00111101000111011001001010011101";
        ram[77] = "0b10111101101010100000001001011010";
        ram[78] = "0b10111110000010101101001000010011";
        ram[79] = "0b10111101110110100010110011101101";
        ram[80] = "0b10111101001101010101101010100101";
        ram[81] = "0b00111100011110010001110110001110";
        ram[82] = "0b00111101100001010010001001100100";
        ram[83] = "0b10111101010011001111010110110010";
        ram[84] = "0b00111101100011110100110001100001";
        ram[85] = "0b10111110000110010100110100001110";
        ram[86] = "0b00111101101010010111110110001101";
        ram[87] = "0b10111010110000000011101010011000";
        ram[88] = "0b00111110000001011111010000011011";
        ram[89] = "0b10111110001001111010100101011101";
        ram[90] = "0b00111110001110011001111111100100";
        ram[91] = "0b10111100100000111101101000010101";
        ram[92] = "0b10111101111000000010011101010010";
        ram[93] = "0b00111101010011010110111110100101";
        ram[94] = "0b00111100100111101100001111011011";
        ram[95] = "0b00111100101000001110110011100000";
        ram[96] = "0b10111100000111000010010001001110";
        ram[97] = "0b00111100110100111010101000110111";
        ram[98] = "0b00111101000110100101110000000010";
        ram[99] = "0b00111101100011011011001101101111";
        ram[100] = "0b00111101010010100000001101011001";
        ram[101] = "0b10111101110111111011111011111101";
        ram[102] = "0b10111101101000001010111001010011";
        ram[103] = "0b00111100100000011110111101011001";
        ram[104] = "0b00111101010010011110110100011110";
        ram[105] = "0b00111100101010011100000101100101";
        ram[106] = "0b00111101100001000111010010110010";
        ram[107] = "0b10111110000010000101100001111001";
        ram[108] = "0b00111100100110000010110001000111";
        ram[109] = "0b00111110010100101011011001101011";
        ram[110] = "0b00111101101001111010110110110111";
        ram[111] = "0b00111101111111101011001000000111";
        ram[112] = "0b10111100001001001001111001000101";
        ram[113] = "0b00111101101000000101100011010000";
        ram[114] = "0b00111101100100000000010110101010";
        ram[115] = "0b00111100111100011000101010111101";
        ram[116] = "0b10111100110111010001101011111001";
        ram[117] = "0b00111101001010010101111111111011";
        ram[118] = "0b10111101010011101011000100001000";
        ram[119] = "0b00111101100010011001011110101001";


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


SC_MODULE(inference_conv2d_f3_0_1_15) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 120;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


inference_conv2d_f3_0_1_15_ram* meminst;


SC_CTOR(inference_conv2d_f3_0_1_15) {
meminst = new inference_conv2d_f3_0_1_15_ram("inference_conv2d_f3_0_1_15_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~inference_conv2d_f3_0_1_15() {
    delete meminst;
}


};//endmodule
#endif