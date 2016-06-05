// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __inference_mult_1_120_120_84_s_W4_55_H__
#define __inference_mult_1_120_120_84_s_W4_55_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct inference_mult_1_120_120_84_s_W4_55_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 32;
  static const unsigned AddressRange = 84;
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


   SC_CTOR(inference_mult_1_120_120_84_s_W4_55_ram) {
        ram[0] = "0b00111100010111011010000100110000";
        ram[1] = "0b00111101101000011011111110110001";
        ram[2] = "0b00111100011100111000100111010000";
        ram[3] = "0b00111101110111011010000001011010";
        ram[4] = "0b10111101110110100101000100011010";
        ram[5] = "0b10111101010110010011001010000110";
        ram[6] = "0b00111100110110010000000111111010";
        ram[7] = "0b10111110000001110010000010000110";
        ram[8] = "0b10111110100000001011001111010101";
        ram[9] = "0b10111101101100011101101001000101";
        ram[10] = "0b00111101000100011110001110001101";
        ram[11] = "0b00111110001100100001011111010011";
        ram[12] = "0b10111110001001101010011001011101";
        ram[13] = "0b10111101001000010100110101110010";
        ram[14] = "0b00111100010101110010111100100110";
        ram[15] = "0b10111100011100101001011011110110";
        ram[16] = "0b10111110000111101111111011010110";
        ram[17] = "0b00111110000110000110010110010101";
        ram[18] = "0b00111101000100011001010010011000";
        ram[19] = "0b10111101010101000000101100110101";
        ram[20] = "0b10111110001111000010101100001111";
        ram[21] = "0b10111110000010010000110101011010";
        ram[22] = "0b10111101100000001010000010110010";
        ram[23] = "0b10111100111110101110111001001000";
        ram[24] = "0b00111110000001000011010001011101";
        ram[25] = "0b00111100000101101111010111000110";
        ram[26] = "0b00111100011101011000010011100111";
        ram[27] = "0b00111110000000000101100010011011";
        ram[28] = "0b10111110001111000110101101001000";
        ram[29] = "0b10111101010100001111101000111110";
        ram[30] = "0b00111100101101011001101100100010";
        ram[31] = "0b00111100001110010001010011110101";
        ram[32] = "0b10111100111111111101101110111000";
        ram[33] = "0b00111101110001000001100101000010";
        ram[34] = "0b00111101001100101101000011011000";
        ram[35] = "0b10111101000010010010011010000101";
        ram[36] = "0b10111101110101001100111111010001";
        ram[37] = "0b10111100111000101101011100110000";
        ram[38] = "0b10111110001001110101110111011101";
        ram[39] = "0b10111101011101100001011111101010";
        ram[40] = "0b00111101010010011011110111010100";
        ram[41] = "0b10111101100101011110010000101011";
        ram[42] = "0b10111101110101011111011110000011";
        ram[43] = "0b00111100101001100010011110110010";
        ram[44] = "0b10111101101011011101011111111010";
        ram[45] = "0b10111101010111100010110101111101";
        ram[46] = "0b00111101000001001110000101111100";
        ram[47] = "0b00111101010001101111001011001110";
        ram[48] = "0b00111100011100111001010110001110";
        ram[49] = "0b10111100100001011000010001101111";
        ram[50] = "0b10111100000011110011011100010101";
        ram[51] = "0b10111101111010010101111000011000";
        ram[52] = "0b10111101011101101000100010100011";
        ram[53] = "0b00111100110110111101001011000100";
        ram[54] = "0b10111101100011110000110010000101";
        ram[55] = "0b00111101011100011001001011001111";
        ram[56] = "0b00111101010111011011100011100011";
        ram[57] = "0b10111110001010000011111110010010";
        ram[58] = "0b00111101110000110010000111001011";
        ram[59] = "0b00111101000101100101010101011100";
        ram[60] = "0b10111101100110010001101000100101";
        ram[61] = "0b00111110000111010111101011011101";
        ram[62] = "0b10111100110000001000111100111100";
        ram[63] = "0b00111010000010011111001100101011";
        ram[64] = "0b10111100111101111101001000110100";
        ram[65] = "0b10111101001100001000100110111011";
        ram[66] = "0b10111110000010000011000100100111";
        ram[67] = "0b00111101111000100010101000101100";
        ram[68] = "0b00111101110101110101010100110111";
        ram[69] = "0b00111110010100001110100101001111";
        ram[70] = "0b00111100110100101110110001101100";
        ram[71] = "0b10111110001110001100000100010010";
        ram[72] = "0b00111100101101101010001001010011";
        ram[73] = "0b10111110000001110001011111011111";
        ram[74] = "0b10111101110000001111010101010000";
        ram[75] = "0b10111101010110101111100100110000";
        ram[76] = "0b00111101011101001010111111110000";
        ram[77] = "0b10111101110111010111101110100110";
        ram[78] = "0b00111110000100100010111000011011";
        ram[79] = "0b10111101101110000010110010001010";
        ram[80] = "0b00111101010110100111101100100110";
        ram[81] = "0b10111100001100101110001111101101";
        ram[82] = "0b00111100001110101010001000101000";
        ram[83] = "0b00111101101101011100011101111101";


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


SC_MODULE(inference_mult_1_120_120_84_s_W4_55) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 84;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


inference_mult_1_120_120_84_s_W4_55_ram* meminst;


SC_CTOR(inference_mult_1_120_120_84_s_W4_55) {
meminst = new inference_mult_1_120_120_84_s_W4_55_ram("inference_mult_1_120_120_84_s_W4_55_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~inference_mult_1_120_120_84_s_W4_55() {
    delete meminst;
}


};//endmodule
#endif
