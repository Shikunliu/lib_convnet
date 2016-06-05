// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __inference_conv2d_f3_2_0_15_H__
#define __inference_conv2d_f3_2_0_15_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct inference_conv2d_f3_2_0_15_ram : public sc_core::sc_module {

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


   SC_CTOR(inference_conv2d_f3_2_0_15_ram) {
        ram[0] = "0b10111100000101011010001111101100";
        ram[1] = "0b00111100110101100100110111101010";
        ram[2] = "0b10111101111101010001101011001010";
        ram[3] = "0b00111101010111010001001001111010";
        ram[4] = "0b00111101101001001011001001100111";
        ram[5] = "0b00111101010111100101110000100110";
        ram[6] = "0b10111101010101000111001001001000";
        ram[7] = "0b00111101000011001001110100010111";
        ram[8] = "0b00111100001011011001101001101101";
        ram[9] = "0b00111101010011000101010000011100";
        ram[10] = "0b10111101100110010011110100111000";
        ram[11] = "0b10111101101111110000000101001101";
        ram[12] = "0b00111101110111001011011110010001";
        ram[13] = "0b10111110001101001011000000011000";
        ram[14] = "0b00111101111001010100001101101100";
        ram[15] = "0b00111101101000010111001110011110";
        ram[16] = "0b10111101001011110101110001011111";
        ram[17] = "0b10111101101111100101110111100001";
        ram[18] = "0b00111110001000101110010101011000";
        ram[19] = "0b00111100101100101011000111001110";
        ram[20] = "0b10111101110101101010101111011110";
        ram[21] = "0b10111100001011101000010001111000";
        ram[22] = "0b10111101000011101100101110101011";
        ram[23] = "0b10111100011100000100100100111110";
        ram[24] = "0b00111101011110111100000110101101";
        ram[25] = "0b10111110001111011000111000000000";
        ram[26] = "0b10111011101101001111111011010000";
        ram[27] = "0b10111101110100010100110110110110";
        ram[28] = "0b00111100001011101001101010110011";
        ram[29] = "0b00111100100111011001101001111010";
        ram[30] = "0b00111101001011011011100101011100";
        ram[31] = "0b10111101000000000110101110110000";
        ram[32] = "0b10111101111100011100101100000100";
        ram[33] = "0b00111101101101101101100101100000";
        ram[34] = "0b00111101111110110110110111001010";
        ram[35] = "0b10111101110001110001111011110011";
        ram[36] = "0b00111101100010000101010000111010";
        ram[37] = "0b10111101001000011110010010100111";
        ram[38] = "0b00111101101001111101100000101110";
        ram[39] = "0b10111100100011001111110011010011";
        ram[40] = "0b10111100111000111000111111110010";
        ram[41] = "0b10111101011110101011110110100001";
        ram[42] = "0b00111101010101000100011110000000";
        ram[43] = "0b10111101001011100001110001011000";
        ram[44] = "0b10111101001101000111100111010101";
        ram[45] = "0b10111101110000100001001010111101";
        ram[46] = "0b10111100111000101011100011111101";
        ram[47] = "0b10111110000111111011101111011000";
        ram[48] = "0b10111101100000111111101000011101";
        ram[49] = "0b00111101111000000111010011101011";
        ram[50] = "0b10111011101011110000000011110100";
        ram[51] = "0b10111101111100110011110010100011";
        ram[52] = "0b00111101111011100000001100101110";
        ram[53] = "0b00111101010000001101011000011111";
        ram[54] = "0b00111110001100111110011100001000";
        ram[55] = "0b00111100011101001110000110111111";
        ram[56] = "0b00111100100001100000000000101010";
        ram[57] = "0b00111101001010011110001010100010";
        ram[58] = "0b10111011101100100101010110111110";
        ram[59] = "0b00111011100111010101111001001010";
        ram[60] = "0b00111101001000111010011110001010";
        ram[61] = "0b00111100111000110101101000001101";
        ram[62] = "0b00111101101001101111111100111011";
        ram[63] = "0b10111101100011101110100101001010";
        ram[64] = "0b10111110011100101100101010011011";
        ram[65] = "0b00111101011111111011001100111111";
        ram[66] = "0b00111101101001111011110000111100";
        ram[67] = "0b10111101100011000000111000011110";
        ram[68] = "0b00111101101000111001110000011100";
        ram[69] = "0b10111101010001111001001111111000";
        ram[70] = "0b00111100100001101001111001001010";
        ram[71] = "0b10111101000001100111000011100011";
        ram[72] = "0b00111101000000101011001010011000";
        ram[73] = "0b00111100101101011111001001100000";
        ram[74] = "0b10111100010111011010000011000101";
        ram[75] = "0b00111101101000101101000001000100";
        ram[76] = "0b10111101110101110100110101011001";
        ram[77] = "0b00111101111010101100101001111001";
        ram[78] = "0b10111100100010111001001101000111";
        ram[79] = "0b00111101000111110111001010100111";
        ram[80] = "0b00111101110010000000101111010011";
        ram[81] = "0b10111011011010011101111110000010";
        ram[82] = "0b10111101001011111011001100010110";
        ram[83] = "0b00111110001010101110000110001011";
        ram[84] = "0b10111101000001110000100011010011";
        ram[85] = "0b10111101011101011111110100101101";
        ram[86] = "0b00111110000011100000011101011111";
        ram[87] = "0b00111110001100011111110010001111";
        ram[88] = "0b10111101001001101101110001111000";
        ram[89] = "0b10111101001100110110101010010001";
        ram[90] = "0b10111101000001010100110001110000";
        ram[91] = "0b00111110000000101001001000111110";
        ram[92] = "0b00111101100101011101110111000101";
        ram[93] = "0b00111101101001110011010000111100";
        ram[94] = "0b00111110001001110010011001001010";
        ram[95] = "0b00111101100100000100011010010010";
        ram[96] = "0b00111010010110011010101001001101";
        ram[97] = "0b00111100111110100100111001000101";
        ram[98] = "0b10111101011001100000100100010100";
        ram[99] = "0b10111101100011000110110010011000";
        ram[100] = "0b00111110000001011101101110111010";
        ram[101] = "0b10111101100101000111011111110010";
        ram[102] = "0b10111101110110101110001011011010";
        ram[103] = "0b10111110010001101000000011100000";
        ram[104] = "0b00111101000100110100010010011011";
        ram[105] = "0b10111101100111000011000001001101";
        ram[106] = "0b00111101000110111010100110101010";
        ram[107] = "0b10111101101100001111100010000011";
        ram[108] = "0b00111110001111100011011100010101";
        ram[109] = "0b00111100000001111000110010110001";
        ram[110] = "0b00111100001101100011101010111010";
        ram[111] = "0b00111101001110100111110110101010";
        ram[112] = "0b00111101001101110001101000010011";
        ram[113] = "0b00111101101101101110010111011011";
        ram[114] = "0b10111100111111100101001101011000";
        ram[115] = "0b10111101100011111010101100011110";
        ram[116] = "0b00111101000000110010001001011111";
        ram[117] = "0b10111101100001111110100101010011";
        ram[118] = "0b00111110000000101011011101111000";
        ram[119] = "0b00111101010110100111011001010011";


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


SC_MODULE(inference_conv2d_f3_2_0_15) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 120;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


inference_conv2d_f3_2_0_15_ram* meminst;


SC_CTOR(inference_conv2d_f3_2_0_15) {
meminst = new inference_conv2d_f3_2_0_15_ram("inference_conv2d_f3_2_0_15_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~inference_conv2d_f3_2_0_15() {
    delete meminst;
}


};//endmodule
#endif
