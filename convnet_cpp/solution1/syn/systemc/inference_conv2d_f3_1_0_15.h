// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __inference_conv2d_f3_1_0_15_H__
#define __inference_conv2d_f3_1_0_15_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct inference_conv2d_f3_1_0_15_ram : public sc_core::sc_module {

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


   SC_CTOR(inference_conv2d_f3_1_0_15_ram) {
        ram[0] = "0b10111100110000111101001110010100";
        ram[1] = "0b00111101111010000101000000010110";
        ram[2] = "0b10111101010001110110000111011001";
        ram[3] = "0b10111101101100110001000011110111";
        ram[4] = "0b10111101001110101001111100111000";
        ram[5] = "0b10111101101101010011010110010100";
        ram[6] = "0b00111100101100001000100101101010";
        ram[7] = "0b00111101110001100100000111000001";
        ram[8] = "0b10111110000101100100111101010101";
        ram[9] = "0b00111100101010101111111001111100";
        ram[10] = "0b00111011011101111000001111011011";
        ram[11] = "0b00111110000101001011101011011000";
        ram[12] = "0b00111101100010001100100101001101";
        ram[13] = "0b00111011000010011111110011101110";
        ram[14] = "0b10111110001100010010110101110111";
        ram[15] = "0b10111101011111001110111110001111";
        ram[16] = "0b10111100101010110001101010010110";
        ram[17] = "0b00111101110110111101110111111101";
        ram[18] = "0b00111101010000001011000010010101";
        ram[19] = "0b00111100001110101001100101011001";
        ram[20] = "0b10111100011011100110100011111111";
        ram[21] = "0b00111101100000001000101000011001";
        ram[22] = "0b10111101110111011110111001111000";
        ram[23] = "0b00111100000110101111000100010010";
        ram[24] = "0b00111110000110000110110100101111";
        ram[25] = "0b10111101011011001100001100100111";
        ram[26] = "0b00111100110100111010010000100010";
        ram[27] = "0b10111101000110011100011001000101";
        ram[28] = "0b00111100100000001011110101011111";
        ram[29] = "0b10111101000100100111111100101001";
        ram[30] = "0b10111110000000000100010011110010";
        ram[31] = "0b10111101100001010101000111110001";
        ram[32] = "0b00111101001100001111001100011101";
        ram[33] = "0b00111101110011011111000111100001";
        ram[34] = "0b00111100001011110000110100110100";
        ram[35] = "0b10111101001110100111100001010001";
        ram[36] = "0b00111100010001100000111011011000";
        ram[37] = "0b00111110010000001000011100000001";
        ram[38] = "0b10111110001101110010100011101001";
        ram[39] = "0b00111110000001010000011001010111";
        ram[40] = "0b00111011100110001111001111010111";
        ram[41] = "0b10111100100011111011011101100011";
        ram[42] = "0b00111101100001110001110011110101";
        ram[43] = "0b00111100010111110111011111001010";
        ram[44] = "0b10111101001101010011101101001011";
        ram[45] = "0b00111110000111111011110010100001";
        ram[46] = "0b00111101100101110011001000111110";
        ram[47] = "0b10111101111000111110010100110010";
        ram[48] = "0b00111101110111110111011100101001";
        ram[49] = "0b00111100101001110011011011011011";
        ram[50] = "0b00111101111111111000000100011111";
        ram[51] = "0b00111110010100001101100101010001";
        ram[52] = "0b10111110000111100001011100011010";
        ram[53] = "0b00111100001110010100100101100010";
        ram[54] = "0b00111101000101010110100101010100";
        ram[55] = "0b10111101111010011100010111100111";
        ram[56] = "0b00111101111000111000000010001000";
        ram[57] = "0b00111101000100010100000100111011";
        ram[58] = "0b00111100110000010100101111000101";
        ram[59] = "0b00111101110001010111110101110101";
        ram[60] = "0b00111101100010111010100111111010";
        ram[61] = "0b00111101001000010101010011111111";
        ram[62] = "0b10111101001010101101001011000010";
        ram[63] = "0b10111101111001110001101111001110";
        ram[64] = "0b10111101111101111000110101010000";
        ram[65] = "0b00111101100111010110110110110100";
        ram[66] = "0b10111101111100011011100100110000";
        ram[67] = "0b10111101110000101010100011110010";
        ram[68] = "0b00111100001000010011000111001001";
        ram[69] = "0b00111101110100101000011100111100";
        ram[70] = "0b10111100111101100101100010110111";
        ram[71] = "0b10111101100100100011011101001000";
        ram[72] = "0b10111101100011100010011011101111";
        ram[73] = "0b00111101001100001001101000110001";
        ram[74] = "0b10111101010001110000110001111111";
        ram[75] = "0b10111101011101111010010001000111";
        ram[76] = "0b00111100110001101100010000111111";
        ram[77] = "0b00111101010010101101101110101100";
        ram[78] = "0b10111101100010001110011010001110";
        ram[79] = "0b10111100101111011110000000000000";
        ram[80] = "0b00111101010101000110111101110011";
        ram[81] = "0b10111110001110110000001101011100";
        ram[82] = "0b10111101000010101111111000101011";
        ram[83] = "0b10111101011010100000101000101010";
        ram[84] = "0b00111110001110110011100100011001";
        ram[85] = "0b00111101110110111011101101100010";
        ram[86] = "0b00111101101000011001001101100011";
        ram[87] = "0b00111101110010100101001110011110";
        ram[88] = "0b10111101101001011110011011111111";
        ram[89] = "0b10111100101111111001111001111100";
        ram[90] = "0b00111101000010011011111000001010";
        ram[91] = "0b10111101110110010010100001011011";
        ram[92] = "0b10111101100100001000011100101001";
        ram[93] = "0b10111101100100100001111110001000";
        ram[94] = "0b10111101010010001010110110000011";
        ram[95] = "0b00111110001110010100001001001110";
        ram[96] = "0b10111101001010111101100111110011";
        ram[97] = "0b10111101101011111110110010001101";
        ram[98] = "0b00111101111001101010000110100101";
        ram[99] = "0b00111101000101110010001110000011";
        ram[100] = "0b10111100110110111100101100000010";
        ram[101] = "0b00111110000000001001001000000100";
        ram[102] = "0b10111101100011000100001010100110";
        ram[103] = "0b10111100001001101001100010000110";
        ram[104] = "0b00111101100100101000000011110001";
        ram[105] = "0b00111100110011001011111001010100";
        ram[106] = "0b00111110000011110101000101101001";
        ram[107] = "0b00111101110111010101110000110001";
        ram[108] = "0b10111100111010111001111001111111";
        ram[109] = "0b00111011101101010001100101010010";
        ram[110] = "0b00111100000001110000001111101011";
        ram[111] = "0b10111110010010110011111100100001";
        ram[112] = "0b00111101100110100110110000100111";
        ram[113] = "0b00111101101111101001010010111001";
        ram[114] = "0b10111110000101111110100000000100";
        ram[115] = "0b00111101000100011100010101011010";
        ram[116] = "0b00111100100110101011011001100101";
        ram[117] = "0b00111110001110100111001000100010";
        ram[118] = "0b10111100110010001101011001101000";
        ram[119] = "0b10111100111101010100000011110101";


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


SC_MODULE(inference_conv2d_f3_1_0_15) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 120;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


inference_conv2d_f3_1_0_15_ram* meminst;


SC_CTOR(inference_conv2d_f3_1_0_15) {
meminst = new inference_conv2d_f3_1_0_15_ram("inference_conv2d_f3_1_0_15_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~inference_conv2d_f3_1_0_15() {
    delete meminst;
}


};//endmodule
#endif
