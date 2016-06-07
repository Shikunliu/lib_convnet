// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __inference_conv2d_f3_0_3_11_H__
#define __inference_conv2d_f3_0_3_11_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct inference_conv2d_f3_0_3_11_ram : public sc_core::sc_module {

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


   SC_CTOR(inference_conv2d_f3_0_3_11_ram) {
        ram[0] = "0b10111101111111101100000111000010";
        ram[1] = "0b00111110000110010110010110110010";
        ram[2] = "0b00111101111101101110101011001000";
        ram[3] = "0b00111110000001101010101001001100";
        ram[4] = "0b00111101100001011010111000101010";
        ram[5] = "0b00111101100101110110001010100011";
        ram[6] = "0b10111011100100000110100101101111";
        ram[7] = "0b10111101010001101000011100111000";
        ram[8] = "0b00111101101001010111010100011111";
        ram[9] = "0b00111101001001001100110110101010";
        ram[10] = "0b00111101111001101110010111001101";
        ram[11] = "0b00111011101100010001010011110110";
        ram[12] = "0b00111101111110111010100010000010";
        ram[13] = "0b00111101100100110011111000110110";
        ram[14] = "0b10111101011110110010000111000100";
        ram[15] = "0b10111101110101100000100111011101";
        ram[16] = "0b00111110001011100101001100100010";
        ram[17] = "0b00111110001111110110111110001111";
        ram[18] = "0b00111100001111000111101000000100";
        ram[19] = "0b10111110000111111010111010111100";
        ram[20] = "0b00111110010111100100011000000110";
        ram[21] = "0b10111100010001010111010011101010";
        ram[22] = "0b10111110001111001111111101100101";
        ram[23] = "0b00111101000000011000111100110001";
        ram[24] = "0b00111100110101100000110000010001";
        ram[25] = "0b10111100010010100101011110101000";
        ram[26] = "0b10111110000000111000000000000010";
        ram[27] = "0b00111101101110111001100111101111";
        ram[28] = "0b00111101011111101001010011000110";
        ram[29] = "0b00111101011000110100001000100100";
        ram[30] = "0b10111101100101111001010100010010";
        ram[31] = "0b00111100100000011101101011001100";
        ram[32] = "0b10111100100011011001011000100000";
        ram[33] = "0b10111100111110111110011111011000";
        ram[34] = "0b10111110000101111011000111000000";
        ram[35] = "0b10111100110100010011101010111011";
        ram[36] = "0b00111110000100100101100110011111";
        ram[37] = "0b00111101111100110001001110111110";
        ram[38] = "0b10111101100110011110011011111100";
        ram[39] = "0b10111101101010110011000111111000";
        ram[40] = "0b00111100110110100001011001100001";
        ram[41] = "0b10111101110100000011001000010010";
        ram[42] = "0b00111100101101000010111101111101";
        ram[43] = "0b00111100110110011100111011011110";
        ram[44] = "0b10111101000010111001100001001111";
        ram[45] = "0b00111101100100111011111010101001";
        ram[46] = "0b00111110000010101111011011000111";
        ram[47] = "0b10111101100100111111000100011001";
        ram[48] = "0b10111110000001111011110000111100";
        ram[49] = "0b00111100110101101000001111010000";
        ram[50] = "0b10111100110001100100100010000100";
        ram[51] = "0b00111110001111111100101000000000";
        ram[52] = "0b10111100000110010111001011011000";
        ram[53] = "0b00111101101010010010010111110001";
        ram[54] = "0b00111110000100100101100100011001";
        ram[55] = "0b00111011110111101101101111000011";
        ram[56] = "0b10111110010110011010110010111101";
        ram[57] = "0b10111101000110111111111010110100";
        ram[58] = "0b00111110000011000101010001111010";
        ram[59] = "0b00111101110100111100101100111110";
        ram[60] = "0b10111011110100100111000101010001";
        ram[61] = "0b00111100100010001011101011101111";
        ram[62] = "0b10111101110100000100110101010101";
        ram[63] = "0b00111100001011000110000100011100";
        ram[64] = "0b00111101010111110110000110001111";
        ram[65] = "0b00111101011111010010010100001010";
        ram[66] = "0b00111100111110100111101111111101";
        ram[67] = "0b10111100100110111011010011000111";
        ram[68] = "0b10111101111101010101001011100011";
        ram[69] = "0b00111101110110111111000111101001";
        ram[70] = "0b00111100100100110110110011111010";
        ram[71] = "0b10111101010111110100111000101001";
        ram[72] = "0b10111100011100011110000000010111";
        ram[73] = "0b00111101011011000110111010001000";
        ram[74] = "0b10111101111100000101100111101010";
        ram[75] = "0b10111101011001110001111111001010";
        ram[76] = "0b10111100101101101000010011110111";
        ram[77] = "0b00111101100111100010000011110101";
        ram[78] = "0b00111100111110111011000100011100";
        ram[79] = "0b10111101000000011001101001101010";
        ram[80] = "0b00111101101100101101100001100101";
        ram[81] = "0b00111101010000001001000100011111";
        ram[82] = "0b00111110010001110011110111100010";
        ram[83] = "0b00111101000001110010111011100011";
        ram[84] = "0b00111100110110110001110110010011";
        ram[85] = "0b00111101100000000100001100110111";
        ram[86] = "0b10111110010110000011010101011001";
        ram[87] = "0b10111100110110110110100101001000";
        ram[88] = "0b10111100100111001010000111000010";
        ram[89] = "0b00111101110110101001110110100110";
        ram[90] = "0b10111101010101001101011001101100";
        ram[91] = "0b10111100100000010000111111001010";
        ram[92] = "0b10111101110001001110001000001111";
        ram[93] = "0b10111110001010100011111001111101";
        ram[94] = "0b00111001101011011011101110011000";
        ram[95] = "0b10111110000110011101101110101001";
        ram[96] = "0b10111110000010001011011000001111";
        ram[97] = "0b00111101101111100101010010011010";
        ram[98] = "0b10111101111111111101111011111000";
        ram[99] = "0b00111101110001111110100110010110";
        ram[100] = "0b10111101100100000011001011101001";
        ram[101] = "0b10111101101011111110101010110111";
        ram[102] = "0b10111100100110111100110001000100";
        ram[103] = "0b00111100000000010110100101101100";
        ram[104] = "0b10111100100101100010100100000010";
        ram[105] = "0b00111011001101000011110100001001";
        ram[106] = "0b00111101100100101100000111110100";
        ram[107] = "0b10111101101010101101001101110000";
        ram[108] = "0b10111110010010100110011110100101";
        ram[109] = "0b10111101111101101011111010111110";
        ram[110] = "0b10111101110110010011000101000100";
        ram[111] = "0b00111101100000111011101000100111";
        ram[112] = "0b10111101101010111110001100101101";
        ram[113] = "0b10111100101110001110111110100000";
        ram[114] = "0b00111110000101010111000101001100";
        ram[115] = "0b10111110001110010111110000111101";
        ram[116] = "0b00111100101111111010100010001100";
        ram[117] = "0b00111110000011111011111010111010";
        ram[118] = "0b10111100001001101101100010110010";
        ram[119] = "0b00111101001110011111001010111011";


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


SC_MODULE(inference_conv2d_f3_0_3_11) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 120;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


inference_conv2d_f3_0_3_11_ram* meminst;


SC_CTOR(inference_conv2d_f3_0_3_11) {
meminst = new inference_conv2d_f3_0_3_11_ram("inference_conv2d_f3_0_3_11_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~inference_conv2d_f3_0_3_11() {
    delete meminst;
}


};//endmodule
#endif