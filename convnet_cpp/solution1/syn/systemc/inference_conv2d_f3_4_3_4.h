// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __inference_conv2d_f3_4_3_4_H__
#define __inference_conv2d_f3_4_3_4_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct inference_conv2d_f3_4_3_4_ram : public sc_core::sc_module {

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


   SC_CTOR(inference_conv2d_f3_4_3_4_ram) {
        ram[0] = "0b00111100100001100000100100101110";
        ram[1] = "0b00111101110001101101010110100111";
        ram[2] = "0b10111110011110011001110000111001";
        ram[3] = "0b10111101101000011001011000011101";
        ram[4] = "0b10111110010001111111100110010100";
        ram[5] = "0b10111100001111000100110100100011";
        ram[6] = "0b00111101101001111010100101011101";
        ram[7] = "0b10111101101100100010000110100000";
        ram[8] = "0b00111101100110101100101111100100";
        ram[9] = "0b10111101000010010010000110110010";
        ram[10] = "0b10111101111000110011110001100000";
        ram[11] = "0b10111101110111101100100010010011";
        ram[12] = "0b00111101010101110101110111101011";
        ram[13] = "0b10111100100110110001111100001011";
        ram[14] = "0b10111100110110110011100011010110";
        ram[15] = "0b10111100110011011000011111011110";
        ram[16] = "0b00111101000111000001011010011100";
        ram[17] = "0b10111101100001011110000110001100";
        ram[18] = "0b10111110001100111011100010100010";
        ram[19] = "0b10111101100000010100001000101101";
        ram[20] = "0b10111101101010010111010011110100";
        ram[21] = "0b10111100110100100100011111001011";
        ram[22] = "0b10111100111010111111100110111001";
        ram[23] = "0b00111101010000101011000000010011";
        ram[24] = "0b10111101100110001011011111100101";
        ram[25] = "0b10111100100000100001011011000110";
        ram[26] = "0b10111110010110010001100001011101";
        ram[27] = "0b00111101000101010111010011011100";
        ram[28] = "0b10111100111000011001010000111010";
        ram[29] = "0b10111100001101100110110010100100";
        ram[30] = "0b10111100011000111010001011010010";
        ram[31] = "0b00111100100101001011011011011100";
        ram[32] = "0b10111110000010100111010110001010";
        ram[33] = "0b00111110001100111010100000011110";
        ram[34] = "0b10111110001010011000100001001100";
        ram[35] = "0b00111101100000000010110011100001";
        ram[36] = "0b10111101101101000110000111000100";
        ram[37] = "0b00111100111010011000101001110011";
        ram[38] = "0b10111101010101110000110101111110";
        ram[39] = "0b00111101101000100101011110100001";
        ram[40] = "0b00111101111101001011110001101010";
        ram[41] = "0b10111100101001111111100010100010";
        ram[42] = "0b00111101010110100101111000011010";
        ram[43] = "0b00111101011001001101110110000000";
        ram[44] = "0b10111101000110111010110110001011";
        ram[45] = "0b00111101101000001010111111001011";
        ram[46] = "0b10111100000001010000001111001011";
        ram[47] = "0b00111100100001111111000111010001";
        ram[48] = "0b10111110000111101010111110101011";
        ram[49] = "0b00111110001011000010101000000010";
        ram[50] = "0b00111110010110010000001000010101";
        ram[51] = "0b10111101100010111100011000100010";
        ram[52] = "0b10111100100111111100111011010010";
        ram[53] = "0b00111110001000010001110001101101";
        ram[54] = "0b00111101100111110111110001011010";
        ram[55] = "0b10111101100011000111001110000100";
        ram[56] = "0b10111110000010000111100001110101";
        ram[57] = "0b10111110001110101101011000000010";
        ram[58] = "0b10111011110000010000110010111011";
        ram[59] = "0b00111110001101111100001101010000";
        ram[60] = "0b10111101000011000101110010011010";
        ram[61] = "0b10111101000100100010111000000000";
        ram[62] = "0b10111100011000101111000011111100";
        ram[63] = "0b10111101101101010001010010001100";
        ram[64] = "0b10111011010010110001010010111100";
        ram[65] = "0b10111101000100111011110001000000";
        ram[66] = "0b00111110000110101011101001111100";
        ram[67] = "0b00111100111010111010100110011100";
        ram[68] = "0b10111101001100011111000001110011";
        ram[69] = "0b10111100000100001110011111001111";
        ram[70] = "0b10111101101010111100101000000011";
        ram[71] = "0b00111110000000101101111110010011";
        ram[72] = "0b00111101010111111001100001001100";
        ram[73] = "0b10111100100111100000000101110011";
        ram[74] = "0b00111011111110001110101110001111";
        ram[75] = "0b10111100010001001001101011001111";
        ram[76] = "0b00111100101111101101100111111011";
        ram[77] = "0b10111101100011011100110111011100";
        ram[78] = "0b00111101101000000000110010010101";
        ram[79] = "0b10111101101100100100011110110001";
        ram[80] = "0b10111101101101110100101011111101";
        ram[81] = "0b00111101000000101001001110001110";
        ram[82] = "0b10111101111100110001111101000111";
        ram[83] = "0b10111101111011001011001110100010";
        ram[84] = "0b00111100000111010110101001010100";
        ram[85] = "0b10111100100010100110010000000111";
        ram[86] = "0b00111101110101100000111000001111";
        ram[87] = "0b10111100110011111101110100100011";
        ram[88] = "0b10111101101010100110011001110000";
        ram[89] = "0b00111101110010010110101110010001";
        ram[90] = "0b00111101011010100011000011011011";
        ram[91] = "0b10111100100111000010001100010111";
        ram[92] = "0b00111101110111101010100010010111";
        ram[93] = "0b10111101110101010101010011111100";
        ram[94] = "0b10111110001010111011001010111100";
        ram[95] = "0b10111101100110000100111110101010";
        ram[96] = "0b00111101010110001010110011010101";
        ram[97] = "0b00111101111011101001010011101110";
        ram[98] = "0b10111101001101011111101110110101";
        ram[99] = "0b00111100001110110100100111101110";
        ram[100] = "0b10111100110001101000111110011100";
        ram[101] = "0b10111110010100100010110111011000";
        ram[102] = "0b10111101111111000001101111011010";
        ram[103] = "0b00111110010101110001110000010001";
        ram[104] = "0b00111101000101001111010110010000";
        ram[105] = "0b10111101001110010000001010110110";
        ram[106] = "0b10111100011111011101100110110101";
        ram[107] = "0b10111100101000101001111100110010";
        ram[108] = "0b10111101111010001101000010001001";
        ram[109] = "0b00111011110011110100001111110101";
        ram[110] = "0b10111011111111010011110010101100";
        ram[111] = "0b00111011100001000001010101001110";
        ram[112] = "0b00111110001010001111111101110110";
        ram[113] = "0b00111110001101010101001010100000";
        ram[114] = "0b10111101100000101001000110000010";
        ram[115] = "0b10111101000010110101011000100101";
        ram[116] = "0b10111101010111101100111101100100";
        ram[117] = "0b00111101010010001101010101011100";
        ram[118] = "0b00111101111111011110110001011111";
        ram[119] = "0b00111101101000110101100110000111";


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


SC_MODULE(inference_conv2d_f3_4_3_4) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 120;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


inference_conv2d_f3_4_3_4_ram* meminst;


SC_CTOR(inference_conv2d_f3_4_3_4) {
meminst = new inference_conv2d_f3_4_3_4_ram("inference_conv2d_f3_4_3_4_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~inference_conv2d_f3_4_3_4() {
    delete meminst;
}


};//endmodule
#endif