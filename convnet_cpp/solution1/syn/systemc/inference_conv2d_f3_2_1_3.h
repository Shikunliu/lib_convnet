// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __inference_conv2d_f3_2_1_3_H__
#define __inference_conv2d_f3_2_1_3_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct inference_conv2d_f3_2_1_3_ram : public sc_core::sc_module {

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


   SC_CTOR(inference_conv2d_f3_2_1_3_ram) {
        ram[0] = "0b00111101100110111101001001100110";
        ram[1] = "0b10111101110100100011101110111100";
        ram[2] = "0b00111101100000001010100111111001";
        ram[3] = "0b00111101110100100110100001001101";
        ram[4] = "0b10111101101001110001011010010000";
        ram[5] = "0b10111100001101010101100100010011";
        ram[6] = "0b10111101000001110101000110011000";
        ram[7] = "0b10111101111010110100001110010110";
        ram[8] = "0b00111101001001010011101110001110";
        ram[9] = "0b10111100011111000100111100000110";
        ram[10] = "0b00111100110101101110111100110000";
        ram[11] = "0b00111011100110001011101000110110";
        ram[12] = "0b10111110001001001010110010110000";
        ram[13] = "0b00111110000011101111011000110000";
        ram[14] = "0b10111101010010011000101000111101";
        ram[15] = "0b10111110000001111000110110010011";
        ram[16] = "0b10111100000010000110110010010110";
        ram[17] = "0b00111101001101111110111001101001";
        ram[18] = "0b10111100100111110101101011011001";
        ram[19] = "0b00111100111010101010000110010100";
        ram[20] = "0b00111101000100010011010001110000";
        ram[21] = "0b00111100110111000111000011100100";
        ram[22] = "0b00111001101010000010110011000001";
        ram[23] = "0b00111101111101010101001001011101";
        ram[24] = "0b00111101101000101010000111101011";
        ram[25] = "0b00111100110101100011010001010101";
        ram[26] = "0b00111100111001001111010010101100";
        ram[27] = "0b00111101001100000011101001110101";
        ram[28] = "0b00111101100100010101100010101011";
        ram[29] = "0b00111101101110111000000110001110";
        ram[30] = "0b10111101101001010011111111110110";
        ram[31] = "0b10111101100111111010011010011100";
        ram[32] = "0b00111101101010010001111111001111";
        ram[33] = "0b00111101111011110011110100111010";
        ram[34] = "0b00111101011110100001110101101000";
        ram[35] = "0b10111110000101101110110111101110";
        ram[36] = "0b10111101100101111010111101010111";
        ram[37] = "0b10111100100011101111010011000101";
        ram[38] = "0b10111101011111100000001000010100";
        ram[39] = "0b00111101100111000110111101101101";
        ram[40] = "0b00111101111010100011100000110010";
        ram[41] = "0b10111110000010100001000010011101";
        ram[42] = "0b00111100101110111100111010101101";
        ram[43] = "0b00111101000010100110111111111011";
        ram[44] = "0b00111100110011111010010110001111";
        ram[45] = "0b10111101011111111001110111011010";
        ram[46] = "0b00111100011111111011111101101000";
        ram[47] = "0b00111110010011000101100000100101";
        ram[48] = "0b00111101100010100001001010011011";
        ram[49] = "0b10111101001001110001000000001111";
        ram[50] = "0b10111110000000011010011011010111";
        ram[51] = "0b00111101100110100001110111100001";
        ram[52] = "0b00111101000000111010000111100001";
        ram[53] = "0b00111010111101010110110010101001";
        ram[54] = "0b00111110001001010011001101101110";
        ram[55] = "0b00111101100010001010100110000111";
        ram[56] = "0b00111101101111110101000001011101";
        ram[57] = "0b00111101111111001101011100000110";
        ram[58] = "0b00111101110011101100001000000101";
        ram[59] = "0b00111110000011111000111110001010";
        ram[60] = "0b10111110001010011110100010000001";
        ram[61] = "0b00111100000100101110001001110000";
        ram[62] = "0b00111101010001100111011110011001";
        ram[63] = "0b10111101110110000111001011110011";
        ram[64] = "0b10111101101010000001010111100100";
        ram[65] = "0b10111101010010011010010000100011";
        ram[66] = "0b00111101000011100111000000000101";
        ram[67] = "0b10111101111010111010001001111011";
        ram[68] = "0b10111100111000110111110101001000";
        ram[69] = "0b00111110001100100010101011110101";
        ram[70] = "0b10111101111001110110110000000101";
        ram[71] = "0b00111100100000111001110010100010";
        ram[72] = "0b00111110000010101011110011011000";
        ram[73] = "0b00111100011111100110110011101101";
        ram[74] = "0b00111101110010000100000010101100";
        ram[75] = "0b10111101111100110101110010011110";
        ram[76] = "0b00111110001111111100111000110001";
        ram[77] = "0b00111101011111011100011100001011";
        ram[78] = "0b00111101000010010000011100010000";
        ram[79] = "0b00111101110101101110101101001111";
        ram[80] = "0b10111001000011110001101111001101";
        ram[81] = "0b00111001010011100101001010110100";
        ram[82] = "0b10111100100110111011111110101111";
        ram[83] = "0b10111101110000011101110001101100";
        ram[84] = "0b00111101100100001010011110101011";
        ram[85] = "0b10111101110011100000000100010101";
        ram[86] = "0b00111110000011110001100001000100";
        ram[87] = "0b10111101010011001101010010101010";
        ram[88] = "0b10111100111111100111010000001111";
        ram[89] = "0b10111110000011000101000101010101";
        ram[90] = "0b00111101011111010110110101100100";
        ram[91] = "0b00111101100001111010010110010110";
        ram[92] = "0b00111110001110101110110010001101";
        ram[93] = "0b10111100010101010000000001111000";
        ram[94] = "0b10111101111010001001011011011101";
        ram[95] = "0b10111101011111011100111001111101";
        ram[96] = "0b00111101111100100100000011111011";
        ram[97] = "0b10111101101001110101100011110000";
        ram[98] = "0b10111100100110010100011011000011";
        ram[99] = "0b00111101001000001100011100000101";
        ram[100] = "0b00111101101111110111000111000011";
        ram[101] = "0b10111110000001100111010111011110";
        ram[102] = "0b10111110001110000101101111100010";
        ram[103] = "0b10111110000100011101111010101101";
        ram[104] = "0b00111101001000101000001001011100";
        ram[105] = "0b00111110010100101010101110101100";
        ram[106] = "0b10111101111111101011110110010000";
        ram[107] = "0b10111101110110101001111000101100";
        ram[108] = "0b00111101101000001000011001101101";
        ram[109] = "0b00111101100001001111010001000001";
        ram[110] = "0b00111101110101111110101100101001";
        ram[111] = "0b00111101100101110001010010111010";
        ram[112] = "0b00111101010010010111111000010011";
        ram[113] = "0b00111101010101100000110001111100";
        ram[114] = "0b00111101011011101101010100011010";
        ram[115] = "0b00111101101111111110010010000111";
        ram[116] = "0b00111101000000001111110111000001";
        ram[117] = "0b00111110010100100100000001110100";
        ram[118] = "0b10111101110000010111100001010101";
        ram[119] = "0b10111110001011011100010100001101";


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


SC_MODULE(inference_conv2d_f3_2_1_3) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 120;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


inference_conv2d_f3_2_1_3_ram* meminst;


SC_CTOR(inference_conv2d_f3_2_1_3) {
meminst = new inference_conv2d_f3_2_1_3_ram("inference_conv2d_f3_2_1_3_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~inference_conv2d_f3_2_1_3() {
    delete meminst;
}


};//endmodule
#endif
