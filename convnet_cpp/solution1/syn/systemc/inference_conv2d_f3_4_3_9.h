// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __inference_conv2d_f3_4_3_9_H__
#define __inference_conv2d_f3_4_3_9_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct inference_conv2d_f3_4_3_9_ram : public sc_core::sc_module {

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


   SC_CTOR(inference_conv2d_f3_4_3_9_ram) {
        ram[0] = "0b00111100111110000001110011011101";
        ram[1] = "0b10111101100011010011110001111001";
        ram[2] = "0b00111101001001110000000101000110";
        ram[3] = "0b00111011000110110101010010000101";
        ram[4] = "0b10111101010001111010011001101101";
        ram[5] = "0b10111101100001101111001100101100";
        ram[6] = "0b10111110010011010001001011001011";
        ram[7] = "0b00111101010101011100011100010010";
        ram[8] = "0b00111101110000000011010010111110";
        ram[9] = "0b00111101010011101010101010001000";
        ram[10] = "0b10111101111001100111110101111000";
        ram[11] = "0b10111101110111110000000010101100";
        ram[12] = "0b10111101110101100111110010101111";
        ram[13] = "0b00111101011010010110100110111100";
        ram[14] = "0b00111101100101001111111110101111";
        ram[15] = "0b00111100000101001111101010011001";
        ram[16] = "0b10111101000110010010010110100001";
        ram[17] = "0b10111101101010111101110011100011";
        ram[18] = "0b00111100001100011101010111010001";
        ram[19] = "0b00111101101010001001000010101101";
        ram[20] = "0b00111101100111011111111101100111";
        ram[21] = "0b10111011111111100111110000110010";
        ram[22] = "0b00111101111101010111100110101111";
        ram[23] = "0b00111110000001100010001110001110";
        ram[24] = "0b10111110001000011110011010001010";
        ram[25] = "0b00111110000011110111010001000111";
        ram[26] = "0b10111100110000011001010101100001";
        ram[27] = "0b00111101000010010010100101110100";
        ram[28] = "0b10111101111110110010101000101000";
        ram[29] = "0b10111101110010011101011011001001";
        ram[30] = "0b00111101101110101111111101111011";
        ram[31] = "0b10111101001110010101110010101110";
        ram[32] = "0b10111101000011100111101100100011";
        ram[33] = "0b00111101111100011010111100111010";
        ram[34] = "0b00111101001010011000101011000011";
        ram[35] = "0b00111101111011001100100010011011";
        ram[36] = "0b00111110010010110000101110111111";
        ram[37] = "0b00111110001001110001110000010001";
        ram[38] = "0b00111010010101100000110010001001";
        ram[39] = "0b10111100101010001101110001100010";
        ram[40] = "0b10111110000101000110010110100101";
        ram[41] = "0b00111110000001001011001111000100";
        ram[42] = "0b10111101100011110001001100100000";
        ram[43] = "0b00111011101101101110100100001011";
        ram[44] = "0b00111100011101110011011100000100";
        ram[45] = "0b10111101001011111001001110111100";
        ram[46] = "0b10111101010001111100110011101000";
        ram[47] = "0b10111101000111101000011001101000";
        ram[48] = "0b00111110001001101111000111011100";
        ram[49] = "0b10111110001010111110100111001001";
        ram[50] = "0b00111101001110100011111011000000";
        ram[51] = "0b00111101100011101011011100111000";
        ram[52] = "0b00111100010110001111110111001000";
        ram[53] = "0b10111101001011010001011010111001";
        ram[54] = "0b00111101100010011011111101100111";
        ram[55] = "0b10111011000101110101101111111101";
        ram[56] = "0b10111110001111010011110110000110";
        ram[57] = "0b00111110000101110111101001110000";
        ram[58] = "0b10111110000110001010101101010000";
        ram[59] = "0b10111100011110011101101111111010";
        ram[60] = "0b10111100100011101111111011010110";
        ram[61] = "0b10111100001001000101000111101111";
        ram[62] = "0b00111110000100111111010011101101";
        ram[63] = "0b10111110001101100001010000010110";
        ram[64] = "0b10111110010101100001101001100001";
        ram[65] = "0b10111101011101111110100000000100";
        ram[66] = "0b10111101101111100101100011001011";
        ram[67] = "0b00111101111001101000010111011011";
        ram[68] = "0b00111110000100011101101000111000";
        ram[69] = "0b10111101100101010100100101001011";
        ram[70] = "0b10111101100100100111111011011000";
        ram[71] = "0b00111101101010110101110101010100";
        ram[72] = "0b00111101110000010000000101111010";
        ram[73] = "0b10111110000100110000110101110100";
        ram[74] = "0b10111011001100100111111111000101";
        ram[75] = "0b00111101101000000111001111010001";
        ram[76] = "0b00111110010001111000110000000000";
        ram[77] = "0b10111101111000000110101101111011";
        ram[78] = "0b10111110000110101001001110101111";
        ram[79] = "0b10111101001101110111100101111110";
        ram[80] = "0b00111100111000111000011111000101";
        ram[81] = "0b10111101101001001110111000000011";
        ram[82] = "0b10111110000010110110010000010111";
        ram[83] = "0b00111101111010110110111110100000";
        ram[84] = "0b10111101011110001100010000000001";
        ram[85] = "0b10111101110100100110010100101000";
        ram[86] = "0b00111101000100001010000110111110";
        ram[87] = "0b00111110000101000011010010100000";
        ram[88] = "0b00111110001100100001010101110111";
        ram[89] = "0b10111101100001110010001011000111";
        ram[90] = "0b10111110010000111111001000001010";
        ram[91] = "0b10111101100100101001100001111100";
        ram[92] = "0b10111101110101100001100010001011";
        ram[93] = "0b00111101111000000000110010010101";
        ram[94] = "0b00111101010100010010001011010011";
        ram[95] = "0b10111100101101010000001010101100";
        ram[96] = "0b00111101101001000110111110101001";
        ram[97] = "0b10111100010011101111110100101001";
        ram[98] = "0b00111101111110101111001000001111";
        ram[99] = "0b00111101000110111011000100011100";
        ram[100] = "0b10111101001010010001011110000110";
        ram[101] = "0b00111110001001001011110101110111";
        ram[102] = "0b10111011011111001100110111000110";
        ram[103] = "0b10111101101011111100100000011100";
        ram[104] = "0b00111100000111101000101100110000";
        ram[105] = "0b00111110001010011000000000101100";
        ram[106] = "0b10111101001000001010111101010010";
        ram[107] = "0b10111101100110000010110000101100";
        ram[108] = "0b00111110001110111100110001101100";
        ram[109] = "0b10111101000011111110111010001011";
        ram[110] = "0b10111110000100001010010100100111";
        ram[111] = "0b00111101101011101011111110110110";
        ram[112] = "0b10111110001000000110000001111000";
        ram[113] = "0b10111101100111101011111110001110";
        ram[114] = "0b10111100010111010000000010001100";
        ram[115] = "0b00111110010001011100111111101110";
        ram[116] = "0b10111100110001111101010000001010";
        ram[117] = "0b00111101000010100101011101010111";
        ram[118] = "0b10111100010111100101000000010111";
        ram[119] = "0b00111100101010011001111100110110";


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


SC_MODULE(inference_conv2d_f3_4_3_9) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 120;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


inference_conv2d_f3_4_3_9_ram* meminst;


SC_CTOR(inference_conv2d_f3_4_3_9) {
meminst = new inference_conv2d_f3_4_3_9_ram("inference_conv2d_f3_4_3_9_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~inference_conv2d_f3_4_3_9() {
    delete meminst;
}


};//endmodule
#endif
