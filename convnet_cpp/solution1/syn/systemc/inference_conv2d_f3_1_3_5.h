// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __inference_conv2d_f3_1_3_5_H__
#define __inference_conv2d_f3_1_3_5_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct inference_conv2d_f3_1_3_5_ram : public sc_core::sc_module {

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


   SC_CTOR(inference_conv2d_f3_1_3_5_ram) {
        ram[0] = "0b00111101111010010001110110011011";
        ram[1] = "0b00111101101110101110100100011000";
        ram[2] = "0b10111101010111011100001100001111";
        ram[3] = "0b10111101110001001100111000110000";
        ram[4] = "0b10111101101111100000000100110000";
        ram[5] = "0b00111101110110000010001010111100";
        ram[6] = "0b00111110011001011111010010100001";
        ram[7] = "0b10111110001000010111101111011001";
        ram[8] = "0b00111101110100111101111000011110";
        ram[9] = "0b00111101110101011001001111100110";
        ram[10] = "0b10111100110001100000000100110110";
        ram[11] = "0b10111100011000010011111101001011";
        ram[12] = "0b00111110001101111110111001001110";
        ram[13] = "0b00111101001110100100010101110110";
        ram[14] = "0b00111100001101110110001000000001";
        ram[15] = "0b10111101101111011110011111101010";
        ram[16] = "0b00111101000000101000010010101010";
        ram[17] = "0b10111101101111100100010110101001";
        ram[18] = "0b00111100001101101001100111110000";
        ram[19] = "0b10111101010111110101010110011011";
        ram[20] = "0b00111011001100101101000000100001";
        ram[21] = "0b00111101101000101000001011010100";
        ram[22] = "0b10111100010010000101001011101011";
        ram[23] = "0b00111100111100010110111000000001";
        ram[24] = "0b10111110001011000111011000001000";
        ram[25] = "0b00111100111111010000100001101001";
        ram[26] = "0b00111101000101101000100110101111";
        ram[27] = "0b00111101010101001110100011100000";
        ram[28] = "0b00111101000001001110001111100101";
        ram[29] = "0b00111110001000001110001101000111";
        ram[30] = "0b10111101101100011001000000100011";
        ram[31] = "0b00111101001011101100110101110011";
        ram[32] = "0b10111101100111110110100101111010";
        ram[33] = "0b00111100111000000111011011001110";
        ram[34] = "0b00111101111100101011110010110110";
        ram[35] = "0b10111110001100011110100111110010";
        ram[36] = "0b00111011011011110110100000000010";
        ram[37] = "0b00111101001000111111100001111101";
        ram[38] = "0b00111110001001101100001100110011";
        ram[39] = "0b10111101100000000010010101010100";
        ram[40] = "0b00111101110011010110111011001110";
        ram[41] = "0b10111101011100101011111001111110";
        ram[42] = "0b00111101101011000001101000011111";
        ram[43] = "0b00111100011010010101010110011010";
        ram[44] = "0b10111101101001111111000100100011";
        ram[45] = "0b00111011011001100011011110101101";
        ram[46] = "0b00111100010101000000001001001011";
        ram[47] = "0b00111100100111000010001011100001";
        ram[48] = "0b00111101000000110110000100101110";
        ram[49] = "0b00111110010010101100010011111000";
        ram[50] = "0b00111101111110011111011111111001";
        ram[51] = "0b10111110000100011000001110110110";
        ram[52] = "0b00111101101010010110011010110001";
        ram[53] = "0b00111100111000101111010011000010";
        ram[54] = "0b10111101100010011011101000110110";
        ram[55] = "0b00111110000101101111101001000000";
        ram[56] = "0b00111101100101000001000010000001";
        ram[57] = "0b00111100001101010001010111110111";
        ram[58] = "0b10111100001110100011100000001010";
        ram[59] = "0b00111110001110000001100001000000";
        ram[60] = "0b00111101100010110111011001010110";
        ram[61] = "0b00111101100110000111100111010001";
        ram[62] = "0b10111100111101011100011101100010";
        ram[63] = "0b00111100101000101000100100101100";
        ram[64] = "0b10111100000101100000010111000110";
        ram[65] = "0b00111101011001010101101101010100";
        ram[66] = "0b00111101100111111011011100000101";
        ram[67] = "0b10111101111001011010000010111110";
        ram[68] = "0b00111101101100010001101110010110";
        ram[69] = "0b00111011011010010101110010100101";
        ram[70] = "0b00111100100111111010111000011011";
        ram[71] = "0b00111101110001000101101001000101";
        ram[72] = "0b00111101110101001010010001001100";
        ram[73] = "0b00111101000110010101110011100011";
        ram[74] = "0b10111100110000000101001111100011";
        ram[75] = "0b00111101011011111011011000000110";
        ram[76] = "0b10111101001110110001110001101011";
        ram[77] = "0b00111101111011010010111111100100";
        ram[78] = "0b10111101100100011101100001010101";
        ram[79] = "0b00111110001011001101101001101110";
        ram[80] = "0b10111101000110101110000010001100";
        ram[81] = "0b10111110000110101111011010000011";
        ram[82] = "0b00111101110010111001000101100011";
        ram[83] = "0b10111110000101110011000101001101";
        ram[84] = "0b10111101100001000101110011100100";
        ram[85] = "0b10111100010110111001100110000100";
        ram[86] = "0b00111101110001000111011101111001";
        ram[87] = "0b10111100110110000101101100001011";
        ram[88] = "0b00111100010111110011110111101001";
        ram[89] = "0b00111110000001000111100101001111";
        ram[90] = "0b10111110000000101100001010111101";
        ram[91] = "0b10111110000010110000010000100101";
        ram[92] = "0b10111100000011101110001001010001";
        ram[93] = "0b10111110001011100110011001000101";
        ram[94] = "0b10111101100100011111111101111111";
        ram[95] = "0b00111100011010110011111010101000";
        ram[96] = "0b10111101011100011011100111101100";
        ram[97] = "0b10111101000001000010010010111101";
        ram[98] = "0b10111101100000100100011000011110";
        ram[99] = "0b10111101001000111100011001011110";
        ram[100] = "0b10111101011000111010100111011001";
        ram[101] = "0b00111101100011010111010110011111";
        ram[102] = "0b10111101011111010000110001001011";
        ram[103] = "0b10111101010110000010011010111000";
        ram[104] = "0b00111110001110010001111100101110";
        ram[105] = "0b10111011100001110100111111101011";
        ram[106] = "0b10111101100100111010011100010001";
        ram[107] = "0b10111101110111010001000110111110";
        ram[108] = "0b00111010100110011101101010000111";
        ram[109] = "0b10111100110000110110100111100010";
        ram[110] = "0b00111101001110101010001111010101";
        ram[111] = "0b10111101100111100110010011000000";
        ram[112] = "0b10111101100101100000001100011010";
        ram[113] = "0b00111101000001101001011101000011";
        ram[114] = "0b10111101101000010101000110110010";
        ram[115] = "0b00111100101000001010110101010100";
        ram[116] = "0b00111100101000000011001011011011";
        ram[117] = "0b10111101101000111001111010100000";
        ram[118] = "0b00111101101101010110100111110101";
        ram[119] = "0b00111110010101110111001001010000";


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


SC_MODULE(inference_conv2d_f3_1_3_5) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 120;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


inference_conv2d_f3_1_3_5_ram* meminst;


SC_CTOR(inference_conv2d_f3_1_3_5) {
meminst = new inference_conv2d_f3_1_3_5_ram("inference_conv2d_f3_1_3_5_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~inference_conv2d_f3_1_3_5() {
    delete meminst;
}


};//endmodule
#endif
