// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

`timescale 1 ns / 1 ps
module inference_conv2d_2_f3_2_2_11_rom (
addr0, ce0, q0, clk);

parameter DWIDTH = 32;
parameter AWIDTH = 7;
parameter MEM_SIZE = 120;

input[AWIDTH-1:0] addr0;
input ce0;
output reg[DWIDTH-1:0] q0;
input clk;

reg [DWIDTH-1:0] ram[MEM_SIZE-1:0];

initial begin
    $readmemh("./inference_conv2d_2_f3_2_2_11_rom.dat", ram);
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
module inference_conv2d_2_f3_2_2_11(
    reset,
    clk,
    address0,
    ce0,
    q0);

parameter DataWidth = 32'd32;
parameter AddressRange = 32'd120;
parameter AddressWidth = 32'd7;
input reset;
input clk;
input[AddressWidth - 1:0] address0;
input ce0;
output[DataWidth - 1:0] q0;



inference_conv2d_2_f3_2_2_11_rom inference_conv2d_2_f3_2_2_11_rom_U(
    .clk( clk ),
    .addr0( address0 ),
    .ce0( ce0 ),
    .q0( q0 ));

endmodule

