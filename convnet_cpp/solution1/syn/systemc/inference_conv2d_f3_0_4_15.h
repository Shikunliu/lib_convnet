// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __inference_conv2d_f3_0_4_15_H__
#define __inference_conv2d_f3_0_4_15_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct inference_conv2d_f3_0_4_15_ram : public sc_core::sc_module {

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


   SC_CTOR(inference_conv2d_f3_0_4_15_ram) {
        ram[0] = "0b10111101010111101100101000100101";
        ram[1] = "0b00111101011010011101101011000101";
        ram[2] = "0b10111100111010111011101110100101";
        ram[3] = "0b10111110001011101011100011011000";
        ram[4] = "0b00111101101100101000111110010010";
        ram[5] = "0b10111100001010100100100010101001";
        ram[6] = "0b00111100011101000011010000011010";
        ram[7] = "0b00111110010010101001001101101100";
        ram[8] = "0b10111101110111110100001010111011";
        ram[9] = "0b00111101010101111100001101101011";
        ram[10] = "0b10111101111101101100111110000101";
        ram[11] = "0b10111100101011010011001001101000";
        ram[12] = "0b10111110000010101010110001010100";
        ram[13] = "0b00111101110011010011011111000001";
        ram[14] = "0b00111100101001001101111100010010";
        ram[15] = "0b00111100101001011110010100000001";
        ram[16] = "0b10111100100101001000001100001111";
        ram[17] = "0b10111110000011100010001110101111";
        ram[18] = "0b10111100000100101010000010110111";
        ram[19] = "0b00111110001001100010000100110010";
        ram[20] = "0b00111110000010110010100101011111";
        ram[21] = "0b00111110010011101001100110100110";
        ram[22] = "0b00111101000011010111101001110010";
        ram[23] = "0b10111100011000101111000111010010";
        ram[24] = "0b00111101011000111101111100000010";
        ram[25] = "0b00111101000010111101001111000011";
        ram[26] = "0b00111110001100010001111001000011";
        ram[27] = "0b10111101111011111100101101001111";
        ram[28] = "0b00111100010101010000111110010001";
        ram[29] = "0b00111101001010110111111011101111";
        ram[30] = "0b10111101100011011000010000010111";
        ram[31] = "0b10111101000100000110111010101101";
        ram[32] = "0b00111101011010110110101101101110";
        ram[33] = "0b10111101000111010010101001100011";
        ram[34] = "0b00111101101010001010101110111011";
        ram[35] = "0b00111110000111101000100011011111";
        ram[36] = "0b00111011001111011111101101001110";
        ram[37] = "0b10111100110001110111011110001110";
        ram[38] = "0b10111101011101101101010100010100";
        ram[39] = "0b00111110001001001000000101101111";
        ram[40] = "0b10111110000010000011110110111100";
        ram[41] = "0b10111100100110101010001010101110";
        ram[42] = "0b10111101111010100111011100011101";
        ram[43] = "0b10111100111110101100011000111010";
        ram[44] = "0b00111110001001100101000010100100";
        ram[45] = "0b00111101001001000011111111100110";
        ram[46] = "0b10111110011000000111111110101010";
        ram[47] = "0b00111101100011010000111110001011";
        ram[48] = "0b10111010100000100111001110000101";
        ram[49] = "0b10111101000000110101111000001001";
        ram[50] = "0b10111101101110101100011101000110";
        ram[51] = "0b00111100010111010011001001110110";
        ram[52] = "0b10111101101000101000011110001100";
        ram[53] = "0b00111101111111101011001100010100";
        ram[54] = "0b00111101110001110011100101000101";
        ram[55] = "0b10111101110000000000000100100111";
        ram[56] = "0b10111101001010101101011010111110";
        ram[57] = "0b00111100100000001011010110011101";
        ram[58] = "0b10111101111001000011110000111010";
        ram[59] = "0b00111110011000101011010010010110";
        ram[60] = "0b00111101110000010101000110110010";
        ram[61] = "0b00111101000111110010000011011101";
        ram[62] = "0b00111101101010100111001100101110";
        ram[63] = "0b00111101000001110011111001001101";
        ram[64] = "0b10111011010110011100100100110101";
        ram[65] = "0b00111010001011111000100001001100";
        ram[66] = "0b10111101100100011101110001111001";
        ram[67] = "0b00111110000101110000100001101000";
        ram[68] = "0b10111100110000100011001101001100";
        ram[69] = "0b10111001100010100001110000101100";
        ram[70] = "0b10111100100110101100111010000011";
        ram[71] = "0b10111100010010010010111001000111";
        ram[72] = "0b00111101010000100101001111101000";
        ram[73] = "0b00111110000001010111000101001100";
        ram[74] = "0b10111101111001101000101010010011";
        ram[75] = "0b10111101100100011000110100100110";
        ram[76] = "0b10111110000110001000001000101000";
        ram[77] = "0b00111101110100101111010111011100";
        ram[78] = "0b10111011111001100001101000100110";
        ram[79] = "0b00111100111111011010010011011100";
        ram[80] = "0b10111101101101010010000001100110";
        ram[81] = "0b00111101001001010011110010011011";
        ram[82] = "0b10111110000110011100111111011101";
        ram[83] = "0b00111110010001011101110110010000";
        ram[84] = "0b10111110010001110001010111000110";
        ram[85] = "0b10111100000100000010011101001010";
        ram[86] = "0b10111101010010100000110011001001";
        ram[87] = "0b00111101011110101011101110001000";
        ram[88] = "0b10111100101101100011100100001101";
        ram[89] = "0b10111101100101111110110101000010";
        ram[90] = "0b00111101111110010111101110110111";
        ram[91] = "0b10111100110100001110111101110001";
        ram[92] = "0b10111101000011110111100010010100";
        ram[93] = "0b00111101101011001111100001011110";
        ram[94] = "0b00111101011010011101110100010011";
        ram[95] = "0b00111110001100110010000011011010";
        ram[96] = "0b10111110000001001100101000001100";
        ram[97] = "0b00111101000111011100001101000101";
        ram[98] = "0b00111100100011111010111100110101";
        ram[99] = "0b00111010100001000000111100011001";
        ram[100] = "0b10111101100000100100110001101001";
        ram[101] = "0b10111101101011001010000101010110";
        ram[102] = "0b00111110001101101110111010110111";
        ram[103] = "0b00111100110001001110001011110011";
        ram[104] = "0b00111101010111011110001010000100";
        ram[105] = "0b10111001000010101111010101010110";
        ram[106] = "0b00111100110100111010010011000011";
        ram[107] = "0b00111101101101000000000110111000";
        ram[108] = "0b00111100110110000000110101110011";
        ram[109] = "0b00111011100111110111101111000110";
        ram[110] = "0b10111110001001111010010000011110";
        ram[111] = "0b00111101001111001100011001011010";
        ram[112] = "0b10111110001111110001001000111100";
        ram[113] = "0b00111100111110011001010110111000";
        ram[114] = "0b00111100100111111001110100011111";
        ram[115] = "0b10111101100111111010100001111111";
        ram[116] = "0b10111110010001100001011011111000";
        ram[117] = "0b10111101101100101111011101000110";
        ram[118] = "0b10111101001011100100110100011010";
        ram[119] = "0b10111101100100011011100111111010";


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


SC_MODULE(inference_conv2d_f3_0_4_15) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 120;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


inference_conv2d_f3_0_4_15_ram* meminst;


SC_CTOR(inference_conv2d_f3_0_4_15) {
meminst = new inference_conv2d_f3_0_4_15_ram("inference_conv2d_f3_0_4_15_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~inference_conv2d_f3_0_4_15() {
    delete meminst;
}


};//endmodule
#endif
