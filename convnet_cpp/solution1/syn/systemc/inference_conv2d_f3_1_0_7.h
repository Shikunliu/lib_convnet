// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __inference_conv2d_f3_1_0_7_H__
#define __inference_conv2d_f3_1_0_7_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct inference_conv2d_f3_1_0_7_ram : public sc_core::sc_module {

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


   SC_CTOR(inference_conv2d_f3_1_0_7_ram) {
        ram[0] = "0b10111101110101100010110001110111";
        ram[1] = "0b10111101001010011000011001011100";
        ram[2] = "0b10111101101000110010110011101001";
        ram[3] = "0b00111101111111010001010111110000";
        ram[4] = "0b10111101010001000010111100011111";
        ram[5] = "0b10111101011100110001010110100001";
        ram[6] = "0b00111101111110100101001100110011";
        ram[7] = "0b10111101111011011100101000001000";
        ram[8] = "0b00111101000100111011001001100100";
        ram[9] = "0b00111101101111110000011100111010";
        ram[10] = "0b10111101000100101011010111001010";
        ram[11] = "0b00111101010011010010101001110000";
        ram[12] = "0b00111101010101101111000100010011";
        ram[13] = "0b00111100010110010011011110101010";
        ram[14] = "0b10111100010101101011110111100111";
        ram[15] = "0b00111110001111010011010011011111";
        ram[16] = "0b00111101111101101111001000011111";
        ram[17] = "0b00111101001000110001001111001100";
        ram[18] = "0b10111101100101011011110001111010";
        ram[19] = "0b00111101100110111111110111101010";
        ram[20] = "0b00111101101011111000100110111000";
        ram[21] = "0b00111100110100011110010100111011";
        ram[22] = "0b00111101110100001001101101110100";
        ram[23] = "0b10111101011000101101010110111000";
        ram[24] = "0b10111110000011111111111001101101";
        ram[25] = "0b10111101100011011101010001101001";
        ram[26] = "0b10111101101001011011111101101010";
        ram[27] = "0b00111101100101111011101100010101";
        ram[28] = "0b10111101111101111011110110001100";
        ram[29] = "0b00111101001111110010011001010001";
        ram[30] = "0b00111100110001110010010111111010";
        ram[31] = "0b10111011000101010010110010100010";
        ram[32] = "0b10111101110011100011010011111100";
        ram[33] = "0b10111110001100000011101011111011";
        ram[34] = "0b10111101011110100100100000010101";
        ram[35] = "0b00111101101100101110101110001000";
        ram[36] = "0b00111101111010110011001001001000";
        ram[37] = "0b10111101001111111100001011000011";
        ram[38] = "0b00111101111000010110101001001000";
        ram[39] = "0b10111101100000111110110101010010";
        ram[40] = "0b00111101110000110011100100111011";
        ram[41] = "0b00111100110101001011001100010101";
        ram[42] = "0b10111101100100101000110010000111";
        ram[43] = "0b00111101000111101111101111011001";
        ram[44] = "0b10111101011111000111010001110101";
        ram[45] = "0b10111101010101010101111100101000";
        ram[46] = "0b00111100111011001010001111001101";
        ram[47] = "0b00111110000110011010111101011100";
        ram[48] = "0b00111110001000101110111110010001";
        ram[49] = "0b10111100011101001110100110110111";
        ram[50] = "0b00111101001110101000110001110011";
        ram[51] = "0b10111101100010111110010000010010";
        ram[52] = "0b10111101001001110111101100111001";
        ram[53] = "0b10111100101000101010000110110110";
        ram[54] = "0b10111011111111100100100110110010";
        ram[55] = "0b00111101011100101011110010000000";
        ram[56] = "0b00111101110111110111001011110111";
        ram[57] = "0b10111100100010101010101010110100";
        ram[58] = "0b10111101001001011111111001100010";
        ram[59] = "0b00111101100110111011100000111101";
        ram[60] = "0b00111100010010101010011101011001";
        ram[61] = "0b10111100100101010110000101011011";
        ram[62] = "0b00111101010101100101010101000001";
        ram[63] = "0b10111101001010010100001101000000";
        ram[64] = "0b00111101001100100000101000100011";
        ram[65] = "0b00111101110100000000011000001000";
        ram[66] = "0b00111101101000000111001111000011";
        ram[67] = "0b00111101100111000000110110110010";
        ram[68] = "0b10111110001001011000100101101010";
        ram[69] = "0b00111100100011011000000010111100";
        ram[70] = "0b10111101101011000101010100101000";
        ram[71] = "0b10111101110111010000001000000100";
        ram[72] = "0b10111101000010110010001011000011";
        ram[73] = "0b10111101000001111111010101111101";
        ram[74] = "0b10111110001001111100101001100100";
        ram[75] = "0b00111100000000010110101000001101";
        ram[76] = "0b00111100001001111011110001110010";
        ram[77] = "0b10111101010000111010101100011011";
        ram[78] = "0b00111110001100100100011110001000";
        ram[79] = "0b10111100111010100110111111100000";
        ram[80] = "0b10111101011101011111110100101101";
        ram[81] = "0b00111101001010010110110111010010";
        ram[82] = "0b10111110010111111001110100101100";
        ram[83] = "0b00111101001000011111101100110010";
        ram[84] = "0b00111100111011010000010101010001";
        ram[85] = "0b10111110000101001111011010011101";
        ram[86] = "0b10111101001100000111111101011001";
        ram[87] = "0b00111010011110000011000111001101";
        ram[88] = "0b10111101110001010101011110011011";
        ram[89] = "0b00111101101110000110010101101100";
        ram[90] = "0b00111100010010111100100001010101";
        ram[91] = "0b10111110001011101011111111101100";
        ram[92] = "0b00111110000011000100000110011010";
        ram[93] = "0b00111110010100101010001000111100";
        ram[94] = "0b10111011101111001101101010111100";
        ram[95] = "0b10111101110110001000110010100100";
        ram[96] = "0b00111101111000111010110110011111";
        ram[97] = "0b00111101111000110100110000011011";
        ram[98] = "0b00111110001001111111100010000111";
        ram[99] = "0b00111100010001101100001001011100";
        ram[100] = "0b00111101010110100000111010111010";
        ram[101] = "0b10111100110111001101110000001111";
        ram[102] = "0b10111100010000101010100111001001";
        ram[103] = "0b00111011101000011010100000011011";
        ram[104] = "0b00111110000000000001100010100100";
        ram[105] = "0b00111100111111001101010101110011";
        ram[106] = "0b10111110000010000110010100001110";
        ram[107] = "0b00111100101100111110110110100011";
        ram[108] = "0b10111101101010100110110011001001";
        ram[109] = "0b00111101110111110001101101101001";
        ram[110] = "0b10111110000100111111111001011101";
        ram[111] = "0b10111101010111011001100100011101";
        ram[112] = "0b00111101100001001100000100111101";
        ram[113] = "0b10111101111001000110011100111000";
        ram[114] = "0b00111101000011010111011010101011";
        ram[115] = "0b00111101010110010010001100000010";
        ram[116] = "0b10111101010001010011101001100111";
        ram[117] = "0b10111110000000011001010000111010";
        ram[118] = "0b00111100111100011011100110110110";
        ram[119] = "0b00111100011011001110111100010111";


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


SC_MODULE(inference_conv2d_f3_1_0_7) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 120;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


inference_conv2d_f3_1_0_7_ram* meminst;


SC_CTOR(inference_conv2d_f3_1_0_7) {
meminst = new inference_conv2d_f3_1_0_7_ram("inference_conv2d_f3_1_0_7_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~inference_conv2d_f3_1_0_7() {
    delete meminst;
}


};//endmodule
#endif
