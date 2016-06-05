// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

`timescale 1 ns / 1 ps
(* rom_style = "distributed" *) module inference_mult_1_84_84_10_s_W5_62_rom (
addr0, ce0, q0, clk);

parameter DWIDTH = 32;
parameter AWIDTH = 4;
parameter MEM_SIZE = 10;

input[AWIDTH-1:0] addr0;
input ce0;
output reg[DWIDTH-1:0] q0;
input clk;

(* ram_style = "distributed" *)reg [DWIDTH-1:0] ram[MEM_SIZE-1:0];

initial begin
    $readmemh("./inference_mult_1_84_84_10_s_W5_62_rom.dat", ram);
end



always @(posedge clk)  
begin 
    if (ce0) 
    begin
        q0 <= ram[addr0];
    end
end



endmodule


`timescale 1 ns / 1 ps
module inference_mult_1_84_84_10_s_W5_62(
    reset,
    clk,
    address0,
    ce0,
    q0);

parameter DataWidth = 32'd32;
parameter AddressRange = 32'd10;
parameter AddressWidth = 32'd4;
input reset;
input clk;
input[AddressWidth - 1:0] address0;
input ce0;
output[DataWidth - 1:0] q0;



inference_mult_1_84_84_10_s_W5_62_rom inference_mult_1_84_84_10_s_W5_62_rom_U(
    .clk( clk ),
    .addr0( address0 ),
    .ce0( ce0 ),
    .q0( q0 ));

endmodule

