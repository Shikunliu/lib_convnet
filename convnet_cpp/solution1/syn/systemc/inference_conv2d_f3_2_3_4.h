// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __inference_conv2d_f3_2_3_4_H__
#define __inference_conv2d_f3_2_3_4_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct inference_conv2d_f3_2_3_4_ram : public sc_core::sc_module {

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


   SC_CTOR(inference_conv2d_f3_2_3_4_ram) {
        ram[0] = "0b00111101001011001011110111101001";
        ram[1] = "0b00111011010001110111111000101110";
        ram[2] = "0b10111110001110100010001101111101";
        ram[3] = "0b10111011011101000110101010100001";
        ram[4] = "0b10111100110000100010001100100110";
        ram[5] = "0b00111100110001001001111100000001";
        ram[6] = "0b10111101001111011010011010111111";
        ram[7] = "0b00111101001011000011100001010010";
        ram[8] = "0b10111101101101001010110011100110";
        ram[9] = "0b10111100101011010100010111101001";
        ram[10] = "0b00111100101001111111110110101011";
        ram[11] = "0b00111101111011011100000100011110";
        ram[12] = "0b10111101001111100101010010110101";
        ram[13] = "0b00111101001101111100001000001110";
        ram[14] = "0b10111101001110011011000011111100";
        ram[15] = "0b00111101000001000011001100011011";
        ram[16] = "0b00111101110001000000101010111100";
        ram[17] = "0b10111101001110111101100011110100";
        ram[18] = "0b10111101000010111000110011100001";
        ram[19] = "0b00111101110010000011110001101101";
        ram[20] = "0b10111101101000010001011111010000";
        ram[21] = "0b10111110001111001111100100011010";
        ram[22] = "0b00111101100001100110000110111100";
        ram[23] = "0b10111110001110011000011010111010";
        ram[24] = "0b10111110001000101011000101110000";
        ram[25] = "0b00111110001110000001101100100010";
        ram[26] = "0b00111110000110001101110100011110";
        ram[27] = "0b10111110001001001101011000011011";
        ram[28] = "0b10111100111000111000101010110100";
        ram[29] = "0b10111101100100111110011110110110";
        ram[30] = "0b10111100101110001101100011111010";
        ram[31] = "0b10111101100001110100110110000010";
        ram[32] = "0b10111100000101100111101001100000";
        ram[33] = "0b00111101101101101010110000101111";
        ram[34] = "0b10111110001010101001001001100000";
        ram[35] = "0b00111101101001111011010010110000";
        ram[36] = "0b00111100101000110010000100111000";
        ram[37] = "0b10111100011001000011101111101010";
        ram[38] = "0b10111101000100001011001010100000";
        ram[39] = "0b00111101101011100100110111111111";
        ram[40] = "0b10111101010101111101110001100000";
        ram[41] = "0b00111101100000001111110001100100";
        ram[42] = "0b10111100100110000011001100110010";
        ram[43] = "0b00111101111010011011000111111011";
        ram[44] = "0b00111110001011011110010110001110";
        ram[45] = "0b10111101101111111001010101001111";
        ram[46] = "0b10111101110100100110101011101100";
        ram[47] = "0b10111101110000100100110010000011";
        ram[48] = "0b10111101111110111011101011011100";
        ram[49] = "0b10111101000111010110100111010011";
        ram[50] = "0b00111011000110100001001000001111";
        ram[51] = "0b10111101100010010011000100110111";
        ram[52] = "0b10111100111100000011110010101001";
        ram[53] = "0b10111101100010111110001011000010";
        ram[54] = "0b10111100111100010101101101010111";
        ram[55] = "0b10111101100100010110101011110111";
        ram[56] = "0b10111101100001011011011000001000";
        ram[57] = "0b10111101110001010011111111001101";
        ram[58] = "0b00111100000001000110000001100010";
        ram[59] = "0b10111101010000010010010110110101";
        ram[60] = "0b00111101100111010100000001101000";
        ram[61] = "0b10111101010110001000011111010001";
        ram[62] = "0b00111100011001000101110111100011";
        ram[63] = "0b10111100100101111100011101100111";
        ram[64] = "0b10111101000110000110000011101010";
        ram[65] = "0b10111101100000001011011010011100";
        ram[66] = "0b00111101001101111111011100011101";
        ram[67] = "0b10111110010001010100100001100111";
        ram[68] = "0b10111100101000001000101010111010";
        ram[69] = "0b00111101100100001010110001001000";
        ram[70] = "0b10111101000100000111001110011011";
        ram[71] = "0b10111101001011111101011001101101";
        ram[72] = "0b00111100101111101101100011101110";
        ram[73] = "0b10111101001111010000010101000100";
        ram[74] = "0b10111100111111011000000100110101";
        ram[75] = "0b10111011101100111000100011101110";
        ram[76] = "0b10111101000110100010100100001100";
        ram[77] = "0b00111100011010100010110001011001";
        ram[78] = "0b00111101000101110011011110001010";
        ram[79] = "0b00111100100001001010010000111111";
        ram[80] = "0b10111101011101100011010100010001";
        ram[81] = "0b10111100100000010100010111100110";
        ram[82] = "0b10111101100101100001110011001010";
        ram[83] = "0b00111110001100101110101110100010";
        ram[84] = "0b10111101000101011110101000010111";
        ram[85] = "0b00111101111001011001110000000110";
        ram[86] = "0b00111101011011110001011011110100";
        ram[87] = "0b10111101100010100010110001110100";
        ram[88] = "0b00111100100001100011011100011100";
        ram[89] = "0b00111100100100111011100100011010";
        ram[90] = "0b10111101100000000010111100000111";
        ram[91] = "0b00111101100110100100101001100100";
        ram[92] = "0b00111100110011010100010010001100";
        ram[93] = "0b00111101110000110011010010011110";
        ram[94] = "0b00111110000100011111000110001101";
        ram[95] = "0b10111110000000010001111011001001";
        ram[96] = "0b00111110000111000011011101100001";
        ram[97] = "0b00111101100110001001110001010001";
        ram[98] = "0b10111101101011000100100001010000";
        ram[99] = "0b00111101111110010101111101100111";
        ram[100] = "0b10111101101001111010001000000101";
        ram[101] = "0b00111110000110100011110001100100";
        ram[102] = "0b00111100101000100110110010100111";
        ram[103] = "0b10111110010000100111001101010000";
        ram[104] = "0b00111101011010001011110110101001";
        ram[105] = "0b00111100100010101001111100101011";
        ram[106] = "0b10111101011010001101110101101111";
        ram[107] = "0b10111101000100100110010101000010";
        ram[108] = "0b00111100110001011111011010111010";
        ram[109] = "0b00111101000011010111110000000100";
        ram[110] = "0b00111100101110111111011111111110";
        ram[111] = "0b10111101111001101001011100101001";
        ram[112] = "0b10111010000110010010101110010011";
        ram[113] = "0b10111110001110100100100001110011";
        ram[114] = "0b00111110001101000010110110001100";
        ram[115] = "0b10111010100010101010101010010011";
        ram[116] = "0b00111110001110111000001100000110";
        ram[117] = "0b00111101011010111001111111011100";
        ram[118] = "0b00111110001010011001110111001011";
        ram[119] = "0b00111101100010010111110100111100";


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


SC_MODULE(inference_conv2d_f3_2_3_4) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 120;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


inference_conv2d_f3_2_3_4_ram* meminst;


SC_CTOR(inference_conv2d_f3_2_3_4) {
meminst = new inference_conv2d_f3_2_3_4_ram("inference_conv2d_f3_2_3_4_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~inference_conv2d_f3_2_3_4() {
    delete meminst;
}


};//endmodule
#endif