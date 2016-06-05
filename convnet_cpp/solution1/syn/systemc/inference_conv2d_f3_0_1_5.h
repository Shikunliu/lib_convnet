// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __inference_conv2d_f3_0_1_5_H__
#define __inference_conv2d_f3_0_1_5_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct inference_conv2d_f3_0_1_5_ram : public sc_core::sc_module {

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


   SC_CTOR(inference_conv2d_f3_0_1_5_ram) {
        ram[0] = "0b00111100000001011001011000010111";
        ram[1] = "0b10111100111001011000101000110011";
        ram[2] = "0b10111101011011010100011110010111";
        ram[3] = "0b00111101000011110111100101101010";
        ram[4] = "0b00111101100000101101000111111111";
        ram[5] = "0b00111110000110100011110010100111";
        ram[6] = "0b10111110000101000010111100011111";
        ram[7] = "0b10111101110011101011111101100110";
        ram[8] = "0b00111101110111110000110111000111";
        ram[9] = "0b10111110001001010100001010100010";
        ram[10] = "0b10111101100010001011010110100100";
        ram[11] = "0b00111101000001101001100001010000";
        ram[12] = "0b00111011101010110001111100101000";
        ram[13] = "0b10111101101000101010101011110000";
        ram[14] = "0b10111110000111100100111001101010";
        ram[15] = "0b00111110001011001000101010111101";
        ram[16] = "0b10111101101100000011011101010000";
        ram[17] = "0b10111110000111111111111101111010";
        ram[18] = "0b00111110001100010100010110010101";
        ram[19] = "0b00111110001010101110100010011111";
        ram[20] = "0b00111110000100100111110010111111";
        ram[21] = "0b10111110000110111011011100110001";
        ram[22] = "0b00111011111111111101000111110010";
        ram[23] = "0b10111101001110000001100011100001";
        ram[24] = "0b00111101101110001010101001010001";
        ram[25] = "0b00111101011100100011010000010101";
        ram[26] = "0b00111101000001010010010000101100";
        ram[27] = "0b10111101101100001100011000000110";
        ram[28] = "0b10111101000001000101011001110001";
        ram[29] = "0b00111010101111011001111111011110";
        ram[30] = "0b10111110001101000011001101010001";
        ram[31] = "0b00111100101011100001011100110101";
        ram[32] = "0b00111101110011110100000101101100";
        ram[33] = "0b10111101100000001000101000110100";
        ram[34] = "0b00111100000000100110001011011100";
        ram[35] = "0b00111101110110100000100101000110";
        ram[36] = "0b10111101000110111101000010010001";
        ram[37] = "0b00111101100111110100110101111011";
        ram[38] = "0b10111101011100011011010001011101";
        ram[39] = "0b10111110001000111010101111001001";
        ram[40] = "0b10111100001000111111001111111011";
        ram[41] = "0b10111101010101001000000000111010";
        ram[42] = "0b10111101100001100011111111101011";
        ram[43] = "0b00111101011111101100000111011101";
        ram[44] = "0b00111101110111010101110111000100";
        ram[45] = "0b00111101110000001011101001100010";
        ram[46] = "0b10111110001001111011101010101010";
        ram[47] = "0b10111100101000001100000101110110";
        ram[48] = "0b10111101100111100010100011111011";
        ram[49] = "0b10111100100001111111111100001000";
        ram[50] = "0b00111101010010110110001011010101";
        ram[51] = "0b10111101010110001010000001000000";
        ram[52] = "0b10111101110001010011111000101101";
        ram[53] = "0b00111101110001101111110110011011";
        ram[54] = "0b00111101100010001001001100100100";
        ram[55] = "0b10111101000101110000001100011100";
        ram[56] = "0b00111110000010010111011010111100";
        ram[57] = "0b00111101101100010000001110111011";
        ram[58] = "0b00111110010000011000101010000111";
        ram[59] = "0b10111101000100100110011000011001";
        ram[60] = "0b00111100101111001110000100110010";
        ram[61] = "0b10111101101110011000001001000101";
        ram[62] = "0b10111110000000001101100011001011";
        ram[63] = "0b00111101001011101111111001101011";
        ram[64] = "0b00111101110010110001100010011000";
        ram[65] = "0b10111110001001000011001010000111";
        ram[66] = "0b00111101110001111001000100110001";
        ram[67] = "0b00111110000101100100001101000110";
        ram[68] = "0b00111100100111111110101111000011";
        ram[69] = "0b00111101100010001010101010000110";
        ram[70] = "0b10111110010101110001000011001011";
        ram[71] = "0b00111110000101001100011101101101";
        ram[72] = "0b00111101110100011010111000101110";
        ram[73] = "0b10111101101011110000001011111011";
        ram[74] = "0b10111101010101001010110110111100";
        ram[75] = "0b00111110000110100000001001110101";
        ram[76] = "0b10111100011101110101000010011001";
        ram[77] = "0b10111101001100110010001111111111";
        ram[78] = "0b00111101011111101001011000001000";
        ram[79] = "0b10111101111010001000110111110011";
        ram[80] = "0b10111100110000101100101001001010";
        ram[81] = "0b00111101001000111011100001010001";
        ram[82] = "0b00111101010101000100110101011111";
        ram[83] = "0b00111101010110011111111000101001";
        ram[84] = "0b10111101011010100111001001111111";
        ram[85] = "0b00111101000010110011000111000010";
        ram[86] = "0b10111110001000100000111101101111";
        ram[87] = "0b00111101010010011100100111001000";
        ram[88] = "0b10111101100001001011011000101101";
        ram[89] = "0b00111101110101000100110111001011";
        ram[90] = "0b00111101010101000010010100110110";
        ram[91] = "0b00111101100000011000111111100000";
        ram[92] = "0b00111101111000111100000110001011";
        ram[93] = "0b00111101001111111001011110101011";
        ram[94] = "0b10111110001001011000110010001111";
        ram[95] = "0b10111100101001010110000010101101";
        ram[96] = "0b10111100101100100101000001111111";
        ram[97] = "0b00111101001011001001011111011001";
        ram[98] = "0b00111101100001101110100101111001";
        ram[99] = "0b10111100001010011011001111000011";
        ram[100] = "0b00111110000100110011010110001111";
        ram[101] = "0b00111110000101011011101010110010";
        ram[102] = "0b10111101110011011100011101101001";
        ram[103] = "0b10111011101101101100010101111001";
        ram[104] = "0b00111101101100000001100100000010";
        ram[105] = "0b00111110001101111101001101001110";
        ram[106] = "0b10111101000000001100010111000011";
        ram[107] = "0b10111101010001101110001101100100";
        ram[108] = "0b10111101110111001000110110100000";
        ram[109] = "0b10111101100110000101101000100111";
        ram[110] = "0b00111101010101001100111011011111";
        ram[111] = "0b10111100111010011101001100000010";
        ram[112] = "0b00111101011011010111001110100001";
        ram[113] = "0b10111100111101010100010000011010";
        ram[114] = "0b10111110000010011100001111001110";
        ram[115] = "0b10111100010110010000000111111010";
        ram[116] = "0b00111110000100000101001000001101";
        ram[117] = "0b00111100011010101011001000100110";
        ram[118] = "0b10111101111011111000000001010110";
        ram[119] = "0b10111101100000010000101010100111";


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


SC_MODULE(inference_conv2d_f3_0_1_5) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 120;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


inference_conv2d_f3_0_1_5_ram* meminst;


SC_CTOR(inference_conv2d_f3_0_1_5) {
meminst = new inference_conv2d_f3_0_1_5_ram("inference_conv2d_f3_0_1_5_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~inference_conv2d_f3_0_1_5() {
    delete meminst;
}


};//endmodule
#endif
