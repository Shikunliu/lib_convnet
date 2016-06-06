// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================


`timescale 1 ns / 1 ps

`define TV_IN_fcWeight_TDATA "./c.inference.autotvin_fcWeight.dat"

`define AUTOTB_TRANSACTION_NUM 1

module AESL_axi_s_fcWeight (
	input clk,
	input reset,
	output [32 - 1:0] TRAN_fcWeight_TDATA,
	output TRAN_fcWeight_TVALID,
	input TRAN_fcWeight_TREADY,
	input ready,
	input done,
	output [31:0] transaction);
	
	wire fcWeight_TDATA_full;
	wire fcWeight_TDATA_empty;
	reg fcWeight_TDATA_write_en;
	reg [32 - 1:0] fcWeight_TDATA_write_data;
	reg fcWeight_TDATA_read_en;
	wire [32 - 1:0] fcWeight_TDATA_read_data;
	
	fifo #(10080, 32) fifo_fcWeight_TDATA (
		.reset(1'b0),
		.write_clock(clk),
		.write_en(fcWeight_TDATA_write_en),
		.write_data(fcWeight_TDATA_write_data),
		.read_clock(clk),
		.read_en(fcWeight_TDATA_read_en),
		.read_data(fcWeight_TDATA_read_data),
		.full(fcWeight_TDATA_full),
		.empty(fcWeight_TDATA_empty));
	
	always @ (*) begin
		fcWeight_TDATA_write_en <= 0;
		fcWeight_TDATA_read_en <= TRAN_fcWeight_TREADY;
	end
	
	assign TRAN_fcWeight_TDATA = fcWeight_TDATA_read_data;
	
	assign TRAN_fcWeight_TVALID = ~(fcWeight_TDATA_empty) || (transaction > `AUTOTB_TRANSACTION_NUM);
	
	function is_blank_char(input [7:0] char);
		if (char == " " || char == "\011" || char == "\012" || char == "\015") begin
			is_blank_char = 1;
		end else begin
			is_blank_char = 0;
		end
	endfunction
	
	function [159:0] read_token(input integer fp);
		reg [7:0] char;
		begin
			read_token = "";
			char = " ";
			while (is_blank_char(char) && char != 8'hff) begin
				char = $fgetc(fp);
			end
			while (~is_blank_char(char) && char != 8'hff) begin
				read_token = {read_token[159 - 8:0], char[7:0]};
				char = $fgetc(fp);
			end
		end
	endfunction
	
	function [159:0] rm_0x(input [159:0] token);
		reg [159:0] token_tmp;
		integer i;
		begin
			token_tmp = "";
			for (i = 0; token[15:0] != "0x"; token = token >> 8) begin
				token_tmp = (token[7:0] << (8 * i)) | token_tmp;
				i = i + 1;
			end
			rm_0x = token_tmp;
		end
	endfunction
	
	reg [31:0] transaction_load_fcWeight_TDATA;
	
	assign transaction = transaction_load_fcWeight_TDATA;
	
	initial begin : AXI_stream_driver_fcWeight_TDATA
		integer fp;
		reg [159:0] token;
		reg [32 - 1:0] data;
		reg [8 * 5:1] str;
		integer ret;
		
		transaction_load_fcWeight_TDATA = 0;
		fifo_fcWeight_TDATA.clear();
		wait (reset === 1);
		fp = $fopen(`TV_IN_fcWeight_TDATA, "r");
		if (fp == 0) begin
			$display("ERROR: Failed to open file \"%s\"!", `TV_IN_fcWeight_TDATA);
			$finish;
		end
		token = read_token(fp);
		if (token != "[[[runtime]]]") begin
			$display("ERROR: token %s != [[[runtime]]]", token);
			$finish;
		end
		token = read_token(fp); // read 1st "[[transaction]]"
		forever begin
			@ (negedge clk);
			if (ready == 1) begin
				if (token != "[[[/runtime]]]") begin
					if (token != "[[transaction]]") begin
						$display("ERROR: token %s != [[[transaction]]]", token);
						$finish;
					end
					token = read_token(fp); // skip transaction number
					fifo_fcWeight_TDATA.clear();
					token = read_token(fp);
					while (token != "[[/transaction]]") begin
						if (fifo_fcWeight_TDATA.full) begin
							$display("ERROR: FIFO is full");
							$finish;
						end
						ret = $sscanf(rm_0x(token), "%x", data);
						fifo_fcWeight_TDATA.push(data);
						token = read_token(fp);
					end
					token = read_token(fp);
				end else begin
					if (fp != 0) begin
					    $fclose(fp);
						fp = 0;
					end
				end
				transaction_load_fcWeight_TDATA = transaction_load_fcWeight_TDATA + 1;
			end
		end
	end

endmodule
