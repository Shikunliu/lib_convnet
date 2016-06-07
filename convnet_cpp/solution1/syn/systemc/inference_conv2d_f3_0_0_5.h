// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __inference_conv2d_f3_0_0_5_H__
#define __inference_conv2d_f3_0_0_5_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct inference_conv2d_f3_0_0_5_ram : public sc_core::sc_module {

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


   SC_CTOR(inference_conv2d_f3_0_0_5_ram) {
        ram[0] = "0b10111110001111101111110101000100";
        ram[1] = "0b00111100100100000010110011010100";
        ram[2] = "0b10111101111001101100000100011010";
        ram[3] = "0b00111101001000010010100010111111";
        ram[4] = "0b00111110000111011010101100011001";
        ram[5] = "0b00111100110100011101000001110111";
        ram[6] = "0b10111011110001011101010001001011";
        ram[7] = "0b00111101110000110001110111001111";
        ram[8] = "0b00111101011011101101100000100101";
        ram[9] = "0b00111100111101111010100100011001";
        ram[10] = "0b00111101110100111001011101010111";
        ram[11] = "0b00111101111001000011111011011001";
        ram[12] = "0b00111101000100000101010001000001";
        ram[13] = "0b00111101101101010111111111101100";
        ram[14] = "0b10111101101011001011001000010000";
        ram[15] = "0b00111101011100011100000000110111";
        ram[16] = "0b00111101101100001100101100110111";
        ram[17] = "0b10111110010000111111100110100101";
        ram[18] = "0b00111110001010111111011100100111";
        ram[19] = "0b00111101111001000000000110000010";
        ram[20] = "0b10111100110010001111100100111000";
        ram[21] = "0b00111101100101000001000111111000";
        ram[22] = "0b00111010110011111011001001011010";
        ram[23] = "0b00111110000010111001001100000011";
        ram[24] = "0b10111100111110000010110100000011";
        ram[25] = "0b00111110001001011000110101011000";
        ram[26] = "0b10111101101011111000111100011111";
        ram[27] = "0b10111101111101010101000001000100";
        ram[28] = "0b10111101100111110101010001001100";
        ram[29] = "0b00111100111010100111111101100101";
        ram[30] = "0b10111101111011111101101100001010";
        ram[31] = "0b00111100011011110000001111000100";
        ram[32] = "0b00111110000010110111100111011001";
        ram[33] = "0b10111101011010111011111111110010";
        ram[34] = "0b10111011100000100010001111011100";
        ram[35] = "0b00111101011101101111101101011010";
        ram[36] = "0b00111011111111110110101000000011";
        ram[37] = "0b00111101101110010001110010110111";
        ram[38] = "0b10111110000010010011001101011101";
        ram[39] = "0b10111101101010000101011010110001";
        ram[40] = "0b10111101100111001001100000000001";
        ram[41] = "0b00111101100001011000011111111111";
        ram[42] = "0b10111101010111000000010001011101";
        ram[43] = "0b00111110000011111100011110100100";
        ram[44] = "0b00111101011101010110111000001011";
        ram[45] = "0b00111011101010101000101101011001";
        ram[46] = "0b10111110010101011100111010011110";
        ram[47] = "0b00111110000111001001011111011001";
        ram[48] = "0b10111100111110110100010010101111";
        ram[49] = "0b10111100110011110011100001001100";
        ram[50] = "0b00111101110001101010010001011111";
        ram[51] = "0b00111100010000111000010001001111";
        ram[52] = "0b10111101000110101010110101000101";
        ram[53] = "0b00111101100100110000101010111010";
        ram[54] = "0b00111011111000010000101100011101";
        ram[55] = "0b10111101010011010000100011100010";
        ram[56] = "0b00111110000101101111101011000110";
        ram[57] = "0b10111101001111111001010010000101";
        ram[58] = "0b00111101101000001011101100101100";
        ram[59] = "0b00111101101101110110100001001100";
        ram[60] = "0b00111101000100000101100000111101";
        ram[61] = "0b10111101100000101111001010001110";
        ram[62] = "0b10111101001110101001110001001001";
        ram[63] = "0b00111100101100001000101001000001";
        ram[64] = "0b00111101010000101011000101110000";
        ram[65] = "0b10111110000110110111100101010011";
        ram[66] = "0b00111110011010101011000110010010";
        ram[67] = "0b00111101110001111001010010110100";
        ram[68] = "0b00111101111110000101111010000001";
        ram[69] = "0b10111101100010110111101000001111";
        ram[70] = "0b10111110000011101110000001101110";
        ram[71] = "0b00111101111101011001100110101010";
        ram[72] = "0b00111101001111001000101001011111";
        ram[73] = "0b00111101100011001011110101110000";
        ram[74] = "0b10111101001000000100001000101010";
        ram[75] = "0b10111110010101110100001111101001";
        ram[76] = "0b10111101011110000100111011000110";
        ram[77] = "0b00111101100010110101100100111101";
        ram[78] = "0b10111110000110001000011011100000";
        ram[79] = "0b00111100001111100001000011011101";
        ram[80] = "0b00111100011111010011000100011001";
        ram[81] = "0b00111101100110111011011110000001";
        ram[82] = "0b00111011100100100101111010010010";
        ram[83] = "0b00111110000010001001011011011101";
        ram[84] = "0b00111101101001111101011101110010";
        ram[85] = "0b10111101111000010101100011111011";
        ram[86] = "0b00111110000111111101100011110001";
        ram[87] = "0b00111101001000111111001000011000";
        ram[88] = "0b10111101001001001110100100100011";
        ram[89] = "0b10111100101100000111111100100100";
        ram[90] = "0b00111101100101111111010111110110";
        ram[91] = "0b00111101111001101000000000010111";
        ram[92] = "0b00111101000000111111110001011111";
        ram[93] = "0b00111101100011110010011100110101";
        ram[94] = "0b10111101010101010110101010110000";
        ram[95] = "0b10111100100110100000001111101101";
        ram[96] = "0b10111101011011101011111000100100";
        ram[97] = "0b10111101100101110100101110000100";
        ram[98] = "0b00111101100110011111000010101111";
        ram[99] = "0b10111101011110010011100111011101";
        ram[100] = "0b00111101110011010000011110000101";
        ram[101] = "0b10111110001111000111101100000011";
        ram[102] = "0b10111101100101101010000111000000";
        ram[103] = "0b00111101101010111010111101111100";
        ram[104] = "0b00111110000001001010010011010011";
        ram[105] = "0b10111100101101101010001100101010";
        ram[106] = "0b00111101000110110111000101000000";
        ram[107] = "0b10111011111010110110001111111100";
        ram[108] = "0b00111101011010010010010010100010";
        ram[109] = "0b10111101000000010001001101011011";
        ram[110] = "0b00111011100111011110010101101110";
        ram[111] = "0b10111101010011001000000101001101";
        ram[112] = "0b00111101011110111010101000010101";
        ram[113] = "0b10111100101110110100011111010101";
        ram[114] = "0b10111100101011101000001011001010";
        ram[115] = "0b10111110010001000000010010100111";
        ram[116] = "0b00111101101001011111111110111111";
        ram[117] = "0b00111011100001000110001011010001";
        ram[118] = "0b00111101000111011011100101101001";
        ram[119] = "0b10111110000101000100100000000110";


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


SC_MODULE(inference_conv2d_f3_0_0_5) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 120;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


inference_conv2d_f3_0_0_5_ram* meminst;


SC_CTOR(inference_conv2d_f3_0_0_5) {
meminst = new inference_conv2d_f3_0_0_5_ram("inference_conv2d_f3_0_0_5_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~inference_conv2d_f3_0_0_5() {
    delete meminst;
}


};//endmodule
#endif