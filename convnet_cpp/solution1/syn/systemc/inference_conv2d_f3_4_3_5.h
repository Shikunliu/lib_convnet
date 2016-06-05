// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __inference_conv2d_f3_4_3_5_H__
#define __inference_conv2d_f3_4_3_5_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct inference_conv2d_f3_4_3_5_ram : public sc_core::sc_module {

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


   SC_CTOR(inference_conv2d_f3_4_3_5_ram) {
        ram[0] = "0b00111101001111101110000001100000";
        ram[1] = "0b10111101110100000111010010100111";
        ram[2] = "0b10111101011100011110010011001111";
        ram[3] = "0b00111110000100101000011111000010";
        ram[4] = "0b00111110001000010110001110111011";
        ram[5] = "0b00111110010111100001001001100010";
        ram[6] = "0b00111101110010101111001000110111";
        ram[7] = "0b00111110000100011000110000011001";
        ram[8] = "0b10111101110111011100110001100100";
        ram[9] = "0b00111101100100100110011110000100";
        ram[10] = "0b00111100101101000101011000010011";
        ram[11] = "0b00111110000100100110010000011011";
        ram[12] = "0b10111101100010100011110010011010";
        ram[13] = "0b00111101100101101010001111001011";
        ram[14] = "0b10111100111110001110110001000101";
        ram[15] = "0b00111110000101101010110011101011";
        ram[16] = "0b00111110000111110111000101100101";
        ram[17] = "0b10111101100111100100001111111011";
        ram[18] = "0b00111100000010001001100101010111";
        ram[19] = "0b10111101111011000111110100011100";
        ram[20] = "0b10111101010011001010001100010001";
        ram[21] = "0b10111101100111010111100011101100";
        ram[22] = "0b00111101010011001111110011010011";
        ram[23] = "0b10111101011010110100100101011010";
        ram[24] = "0b10111101111001101011001001101100";
        ram[25] = "0b10111100111000010101001100110111";
        ram[26] = "0b00111101011001001100111000010110";
        ram[27] = "0b00111101110010101110010101101100";
        ram[28] = "0b00111110000000111100111010100111";
        ram[29] = "0b10111101101100010110001011010111";
        ram[30] = "0b00111011101100111111111111110111";
        ram[31] = "0b00111101100000010110100100101111";
        ram[32] = "0b00111101011000100000001101111011";
        ram[33] = "0b00111101101110000011111011001001";
        ram[34] = "0b10111101111011011110101010001001";
        ram[35] = "0b00111101100100011110110100001010";
        ram[36] = "0b00111100111101100111011011101010";
        ram[37] = "0b10111101101100111000100001011000";
        ram[38] = "0b00111101001011110100111111001001";
        ram[39] = "0b00111100110100010110110000000011";
        ram[40] = "0b00111101100111010000110110011010";
        ram[41] = "0b10111101111000110111001101101101";
        ram[42] = "0b00111100001000100100111000010011";
        ram[43] = "0b10111110001111101011101111111101";
        ram[44] = "0b00111101111100000111011000111010";
        ram[45] = "0b00111110000101110110101010110110";
        ram[46] = "0b00111101111000001101000110110111";
        ram[47] = "0b10111101100010000110010010111110";
        ram[48] = "0b10111101100101110100011010001000";
        ram[49] = "0b10111110001111011010001010110110";
        ram[50] = "0b00111101110111110101110001101100";
        ram[51] = "0b00111101101101110100001110110100";
        ram[52] = "0b10111101000011001010000101001001";
        ram[53] = "0b10111110000101101011000110100011";
        ram[54] = "0b00111101100000001110011000101010";
        ram[55] = "0b00111101000010100110101001101101";
        ram[56] = "0b10111101000011100000001011111000";
        ram[57] = "0b00111100110011111000010111100101";
        ram[58] = "0b10111110001011111010100000101111";
        ram[59] = "0b00111101100101010010100001101011";
        ram[60] = "0b10111101010110100011010110000110";
        ram[61] = "0b00111110010110000000110110000000";
        ram[62] = "0b10111110011110010011010000100110";
        ram[63] = "0b00111110000100101011011011110010";
        ram[64] = "0b10111100110001000100111110111011";
        ram[65] = "0b10111101110110101101011111011000";
        ram[66] = "0b10111100000100111011010101011111";
        ram[67] = "0b00111101111001111000110000000000";
        ram[68] = "0b00111100000001111101110000010111";
        ram[69] = "0b00111110011100100011101101111001";
        ram[70] = "0b10111011101100000100011111000110";
        ram[71] = "0b00111010011010010000101000001001";
        ram[72] = "0b00111100110001111011011110000100";
        ram[73] = "0b10111110000100000000111110111011";
        ram[74] = "0b10111101011000101010111001100110";
        ram[75] = "0b10111101100000110110011101010000";
        ram[76] = "0b10111101001111000010101111100101";
        ram[77] = "0b00111110000010000011100110001010";
        ram[78] = "0b10111101001001011000000101100100";
        ram[79] = "0b00111011100000011100100111000100";
        ram[80] = "0b00111100110110110010101000101000";
        ram[81] = "0b10111101001011100110110110110111";
        ram[82] = "0b00111100110100011001111110011010";
        ram[83] = "0b10111100111100011110001011010001";
        ram[84] = "0b10111110000000001001001010001010";
        ram[85] = "0b00111100110010100100000100110111";
        ram[86] = "0b10111100100110100000110110010011";
        ram[87] = "0b00111100001110010000100001011111";
        ram[88] = "0b00111110000010011111010100010111";
        ram[89] = "0b10111101100011011111111100001001";
        ram[90] = "0b00111101000011110110011110110010";
        ram[91] = "0b10111110000110000001010010010100";
        ram[92] = "0b10111011100100111100100111110111";
        ram[93] = "0b10111100011100110001110011000011";
        ram[94] = "0b10111110001011011000000010100001";
        ram[95] = "0b00111101110000100001100101110011";
        ram[96] = "0b00111011100100111110000000011100";
        ram[97] = "0b00111101110000111101000011001101";
        ram[98] = "0b00111110010001100101010010010011";
        ram[99] = "0b10111101000110000001110111101001";
        ram[100] = "0b00111101100000101000100000010011";
        ram[101] = "0b10111110001000011000010100000110";
        ram[102] = "0b00111101010100110100001000010111";
        ram[103] = "0b10111101100100100001011111100000";
        ram[104] = "0b10111101011110010010111001101111";
        ram[105] = "0b10111101010110111100010001001100";
        ram[106] = "0b00111110001111001001010011110111";
        ram[107] = "0b10111101101011011011110101011000";
        ram[108] = "0b10111110001000110010010100001011";
        ram[109] = "0b00111101110101110010100000100000";
        ram[110] = "0b00111100100111110101000000100111";
        ram[111] = "0b10111101010001101110110111111011";
        ram[112] = "0b10111100111001101001001001110001";
        ram[113] = "0b00111101100101101000000111111010";
        ram[114] = "0b00111110001101111010100101011101";
        ram[115] = "0b10111101100011100100100010110011";
        ram[116] = "0b10111011111001110001101100101101";
        ram[117] = "0b00111100110010100100110100101011";
        ram[118] = "0b10111110001001010010011110100010";
        ram[119] = "0b10111110000010011011001101001010";


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


SC_MODULE(inference_conv2d_f3_4_3_5) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 120;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


inference_conv2d_f3_4_3_5_ram* meminst;


SC_CTOR(inference_conv2d_f3_4_3_5) {
meminst = new inference_conv2d_f3_4_3_5_ram("inference_conv2d_f3_4_3_5_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~inference_conv2d_f3_4_3_5() {
    delete meminst;
}


};//endmodule
#endif
