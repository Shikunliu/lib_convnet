// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __inference_conv2d_f3_0_2_11_H__
#define __inference_conv2d_f3_0_2_11_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct inference_conv2d_f3_0_2_11_ram : public sc_core::sc_module {

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


   SC_CTOR(inference_conv2d_f3_0_2_11_ram) {
        ram[0] = "0b00111101011111111101001010011001";
        ram[1] = "0b10111101100100000101001111110000";
        ram[2] = "0b00111101111101001111000111100101";
        ram[3] = "0b00111101011000011000010000010100";
        ram[4] = "0b00111110000101001010100110001011";
        ram[5] = "0b00111101111000000011000011000010";
        ram[6] = "0b00111101001110010011011100100100";
        ram[7] = "0b10111101110111111000111000111011";
        ram[8] = "0b10111101100110000000101110101010";
        ram[9] = "0b10111101000001101000000000010111";
        ram[10] = "0b00111101010010011101000010110100";
        ram[11] = "0b10111101000100001100010011011111";
        ram[12] = "0b00111110000010001110110100011100";
        ram[13] = "0b00111110001110100111000101011000";
        ram[14] = "0b00111010111110100001100100110110";
        ram[15] = "0b10111101101101010001001001001011";
        ram[16] = "0b00111101111100101110000001011101";
        ram[17] = "0b00111100100010010011101000111011";
        ram[18] = "0b10111101101110001100100100111111";
        ram[19] = "0b00111101101000101011010100101001";
        ram[20] = "0b00111101111010001011100011110001";
        ram[21] = "0b10111101111100000010100010100010";
        ram[22] = "0b00111101100100101100001111110010";
        ram[23] = "0b00111100001110011001111101011110";
        ram[24] = "0b00111100101011111011011100010010";
        ram[25] = "0b10111100111001000011010011001000";
        ram[26] = "0b00111101011000100111100010110110";
        ram[27] = "0b00111101110100101110101001010011";
        ram[28] = "0b10111011111110101000111101010011";
        ram[29] = "0b00111101101111110001001000010100";
        ram[30] = "0b10111100011011110100010011000111";
        ram[31] = "0b10111101000010111001110100100010";
        ram[32] = "0b00111101010001011111111100011110";
        ram[33] = "0b00111100111000010010011011110111";
        ram[34] = "0b10111110000011110010000110110100";
        ram[35] = "0b10111101011110101000111101100011";
        ram[36] = "0b10111101101110000001000100010001";
        ram[37] = "0b10111101100010100110010110110101";
        ram[38] = "0b10111011111100100000001000010000";
        ram[39] = "0b10111101011100111010001100010101";
        ram[40] = "0b10111100111111100110101000110011";
        ram[41] = "0b00111101111011010011111000001100";
        ram[42] = "0b10111101001101110011111110111000";
        ram[43] = "0b10111101010110011001100101111111";
        ram[44] = "0b00111110000100001000100001010001";
        ram[45] = "0b00111110001101110101000100000101";
        ram[46] = "0b00111100101110010111111101111110";
        ram[47] = "0b10111101111011011000011011101100";
        ram[48] = "0b10111110000100010111011011011110";
        ram[49] = "0b10111011101110111101010111101111";
        ram[50] = "0b10111101101001001011000111000110";
        ram[51] = "0b00111110010001100010010010011010";
        ram[52] = "0b10111110000001001001000001100000";
        ram[53] = "0b00111110001000001110100010000110";
        ram[54] = "0b00111101111010011011010100100000";
        ram[55] = "0b10111101110110010001101111000101";
        ram[56] = "0b00111101011110000001011100011000";
        ram[57] = "0b00111101000000101011010100011100";
        ram[58] = "0b10111101100000101100100000100100";
        ram[59] = "0b10111101001011000000010101110111";
        ram[60] = "0b10111101111111101010111011100010";
        ram[61] = "0b10111101011010001001011110011001";
        ram[62] = "0b00111101110010000100100101111011";
        ram[63] = "0b10111101101011000000111111001011";
        ram[64] = "0b00111101100110000010001011100100";
        ram[65] = "0b00111110000000101001100010001001";
        ram[66] = "0b10111101110110010110011101000101";
        ram[67] = "0b00111110001110010000001011011110";
        ram[68] = "0b10111101101111111100011010111111";
        ram[69] = "0b10111101110011011101000001010011";
        ram[70] = "0b10111010100100010100111011000111";
        ram[71] = "0b10111101111111101100001011001110";
        ram[72] = "0b10111101011000100100111000111110";
        ram[73] = "0b10111101010110001111010000111101";
        ram[74] = "0b10111101001000110010100011011111";
        ram[75] = "0b00111101100000100100000111101100";
        ram[76] = "0b10111101011111010001111010111111";
        ram[77] = "0b10111100111001111111110001101001";
        ram[78] = "0b00111100010000011100100000100001";
        ram[79] = "0b10111101010111010111111111011000";
        ram[80] = "0b10111101111001100010010011011101";
        ram[81] = "0b10111100100000100111101110100110";
        ram[82] = "0b00111101001100001111000111011011";
        ram[83] = "0b00111101111000001111000000100000";
        ram[84] = "0b00111110010000000110001010010001";
        ram[85] = "0b10111101011101110001100100000110";
        ram[86] = "0b00111101010110101000000111011100";
        ram[87] = "0b10111010010110011110010100101000";
        ram[88] = "0b10111110010000011001101110010001";
        ram[89] = "0b00111101101100011010111010011001";
        ram[90] = "0b00111100001100011111010110110001";
        ram[91] = "0b10111100110010011101011000001101";
        ram[92] = "0b10111101011110101000100011100011";
        ram[93] = "0b00111101001010000010101000111011";
        ram[94] = "0b00111110000101111010000000110000";
        ram[95] = "0b10111110000000011010000011001111";
        ram[96] = "0b00111101001110000010110001100010";
        ram[97] = "0b00111101000011000001100100010011";
        ram[98] = "0b00111110000000101001011010110011";
        ram[99] = "0b00111110001010010101111001011011";
        ram[100] = "0b10111110000001010011110000010101";
        ram[101] = "0b00111101100100000001111011100001";
        ram[102] = "0b10111101110000010110100000110000";
        ram[103] = "0b10111101101101100111100010001010";
        ram[104] = "0b10111101101101101011100001110011";
        ram[105] = "0b10111110000100011100110011011001";
        ram[106] = "0b00111101101101001010001011010101";
        ram[107] = "0b10111110000110110010110011000111";
        ram[108] = "0b00111100010111101110011010101011";
        ram[109] = "0b00111110000001010110011110011001";
        ram[110] = "0b10111101010101001111111101101100";
        ram[111] = "0b10111110011001100000000001101101";
        ram[112] = "0b10111101010100001001001000000100";
        ram[113] = "0b10111100101110001100101110001110";
        ram[114] = "0b00111100101001011110111010100111";
        ram[115] = "0b00111101010100011001000100100010";
        ram[116] = "0b00111101111010110001101010110001";
        ram[117] = "0b10111100000001001101110000011101";
        ram[118] = "0b10111101110101100100011010101110";
        ram[119] = "0b10111110001101010100000101010011";


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


SC_MODULE(inference_conv2d_f3_0_2_11) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 120;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


inference_conv2d_f3_0_2_11_ram* meminst;


SC_CTOR(inference_conv2d_f3_0_2_11) {
meminst = new inference_conv2d_f3_0_2_11_ram("inference_conv2d_f3_0_2_11_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~inference_conv2d_f3_0_2_11() {
    delete meminst;
}


};//endmodule
#endif
