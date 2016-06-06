// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module inference_add_1_84_s (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        A_0_address0,
        A_0_ce0,
        A_0_q0,
        A_1_address0,
        A_1_ce0,
        A_1_q0,
        A_2_address0,
        A_2_ce0,
        A_2_q0,
        A_3_address0,
        A_3_ce0,
        A_3_q0,
        B_0_address0,
        B_0_ce0,
        B_0_q0,
        C_0_0_address0,
        C_0_0_ce0,
        C_0_0_we0,
        C_0_0_d0,
        C_1_0_address0,
        C_1_0_ce0,
        C_1_0_we0,
        C_1_0_d0,
        C_2_0_address0,
        C_2_0_ce0,
        C_2_0_we0,
        C_2_0_d0,
        C_3_0_address0,
        C_3_0_ce0,
        C_3_0_we0,
        C_3_0_d0
);

parameter    ap_const_logic_1 = 1'b1;
parameter    ap_const_logic_0 = 1'b0;
parameter    ap_ST_st1_fsm_0 = 3'b1;
parameter    ap_ST_pp0_stg0_fsm_1 = 3'b10;
parameter    ap_ST_st9_fsm_2 = 3'b100;
parameter    ap_true = 1'b1;
parameter    ap_const_lv32_0 = 32'b00000000000000000000000000000000;
parameter    ap_const_lv1_1 = 1'b1;
parameter    ap_const_lv32_1 = 32'b1;
parameter    ap_const_lv1_0 = 1'b0;
parameter    ap_const_lv7_0 = 7'b0000000;
parameter    ap_const_lv2_2 = 2'b10;
parameter    ap_const_lv2_1 = 2'b1;
parameter    ap_const_lv2_0 = 2'b00;
parameter    ap_const_lv7_54 = 7'b1010100;
parameter    ap_const_lv7_1 = 7'b1;
parameter    ap_const_lv32_2 = 32'b10;
parameter    ap_const_lv32_6 = 32'b110;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
output  [4:0] A_0_address0;
output   A_0_ce0;
input  [31:0] A_0_q0;
output  [4:0] A_1_address0;
output   A_1_ce0;
input  [31:0] A_1_q0;
output  [4:0] A_2_address0;
output   A_2_ce0;
input  [31:0] A_2_q0;
output  [4:0] A_3_address0;
output   A_3_ce0;
input  [31:0] A_3_q0;
output  [6:0] B_0_address0;
output   B_0_ce0;
input  [31:0] B_0_q0;
output  [4:0] C_0_0_address0;
output   C_0_0_ce0;
output   C_0_0_we0;
output  [31:0] C_0_0_d0;
output  [4:0] C_1_0_address0;
output   C_1_0_ce0;
output   C_1_0_we0;
output  [31:0] C_1_0_d0;
output  [4:0] C_2_0_address0;
output   C_2_0_ce0;
output   C_2_0_we0;
output  [31:0] C_2_0_d0;
output  [4:0] C_3_0_address0;
output   C_3_0_ce0;
output   C_3_0_we0;
output  [31:0] C_3_0_d0;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg A_0_ce0;
reg A_1_ce0;
reg A_2_ce0;
reg A_3_ce0;
reg B_0_ce0;
reg C_0_0_ce0;
reg C_0_0_we0;
reg C_1_0_ce0;
reg C_1_0_we0;
reg C_2_0_ce0;
reg C_2_0_we0;
reg C_3_0_ce0;
reg C_3_0_we0;
(* fsm_encoding = "none" *) reg   [2:0] ap_CS_fsm = 3'b1;
reg    ap_sig_cseq_ST_st1_fsm_0;
reg    ap_sig_bdd_21;
reg   [6:0] j_reg_166;
wire   [0:0] exitcond_fu_181_p2;
reg    ap_sig_cseq_ST_pp0_stg0_fsm_1;
reg    ap_sig_bdd_93;
reg    ap_reg_ppiten_pp0_it0 = 1'b0;
reg    ap_reg_ppiten_pp0_it1 = 1'b0;
reg    ap_reg_ppiten_pp0_it2 = 1'b0;
reg    ap_reg_ppiten_pp0_it3 = 1'b0;
reg    ap_reg_ppiten_pp0_it4 = 1'b0;
reg    ap_reg_ppiten_pp0_it5 = 1'b0;
reg    ap_reg_ppiten_pp0_it6 = 1'b0;
wire   [6:0] j_3_fu_187_p2;
wire   [1:0] tmp_750_fu_198_p1;
reg   [1:0] tmp_750_reg_246;
reg   [1:0] ap_reg_ppstg_tmp_750_reg_246_pp0_it1;
reg   [1:0] ap_reg_ppstg_tmp_750_reg_246_pp0_it2;
reg   [1:0] ap_reg_ppstg_tmp_750_reg_246_pp0_it3;
reg   [1:0] ap_reg_ppstg_tmp_750_reg_246_pp0_it4;
reg   [1:0] ap_reg_ppstg_tmp_750_reg_246_pp0_it5;
reg   [4:0] C_0_0_addr_reg_276;
reg   [4:0] ap_reg_ppstg_C_0_0_addr_reg_276_pp0_it1;
reg   [4:0] ap_reg_ppstg_C_0_0_addr_reg_276_pp0_it2;
reg   [4:0] ap_reg_ppstg_C_0_0_addr_reg_276_pp0_it3;
reg   [4:0] ap_reg_ppstg_C_0_0_addr_reg_276_pp0_it4;
reg   [4:0] ap_reg_ppstg_C_0_0_addr_reg_276_pp0_it5;
reg   [4:0] C_1_0_addr_reg_281;
reg   [4:0] ap_reg_ppstg_C_1_0_addr_reg_281_pp0_it1;
reg   [4:0] ap_reg_ppstg_C_1_0_addr_reg_281_pp0_it2;
reg   [4:0] ap_reg_ppstg_C_1_0_addr_reg_281_pp0_it3;
reg   [4:0] ap_reg_ppstg_C_1_0_addr_reg_281_pp0_it4;
reg   [4:0] ap_reg_ppstg_C_1_0_addr_reg_281_pp0_it5;
reg   [4:0] C_2_0_addr_reg_286;
reg   [4:0] ap_reg_ppstg_C_2_0_addr_reg_286_pp0_it1;
reg   [4:0] ap_reg_ppstg_C_2_0_addr_reg_286_pp0_it2;
reg   [4:0] ap_reg_ppstg_C_2_0_addr_reg_286_pp0_it3;
reg   [4:0] ap_reg_ppstg_C_2_0_addr_reg_286_pp0_it4;
reg   [4:0] ap_reg_ppstg_C_2_0_addr_reg_286_pp0_it5;
reg   [4:0] C_3_0_addr_reg_291;
reg   [4:0] ap_reg_ppstg_C_3_0_addr_reg_291_pp0_it1;
reg   [4:0] ap_reg_ppstg_C_3_0_addr_reg_291_pp0_it2;
reg   [4:0] ap_reg_ppstg_C_3_0_addr_reg_291_pp0_it3;
reg   [4:0] ap_reg_ppstg_C_3_0_addr_reg_291_pp0_it4;
reg   [4:0] ap_reg_ppstg_C_3_0_addr_reg_291_pp0_it5;
wire   [31:0] tmp_fu_224_p6;
reg   [31:0] tmp_reg_296;
reg   [31:0] B_0_load_reg_301;
wire   [31:0] grp_fu_177_p2;
reg   [31:0] tmp_18_reg_306;
wire   [63:0] newIndex7_fu_212_p1;
wire   [63:0] tmp_s_fu_193_p1;
wire   [4:0] newIndex_fu_202_p4;
wire    grp_fu_177_ce;
reg    ap_sig_cseq_ST_st9_fsm_2;
reg    ap_sig_bdd_252;
reg   [2:0] ap_NS_fsm;


inference_fadd_32ns_32ns_32_4_full_dsp #(
    .ID( 1 ),
    .NUM_STAGE( 4 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 32 ))
inference_fadd_32ns_32ns_32_4_full_dsp_U1652(
    .clk( ap_clk ),
    .reset( ap_rst ),
    .din0( tmp_reg_296 ),
    .din1( B_0_load_reg_301 ),
    .ce( grp_fu_177_ce ),
    .dout( grp_fu_177_p2 )
);

inference_mux_4to1_sel2_32_1 #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din1_WIDTH( 32 ),
    .din2_WIDTH( 32 ),
    .din3_WIDTH( 32 ),
    .din4_WIDTH( 32 ),
    .din5_WIDTH( 2 ),
    .dout_WIDTH( 32 ))
inference_mux_4to1_sel2_32_1_U1653(
    .din1( A_0_q0 ),
    .din2( A_1_q0 ),
    .din3( A_2_q0 ),
    .din4( A_3_q0 ),
    .din5( tmp_750_reg_246 ),
    .dout( tmp_fu_224_p6 )
);



always @ (posedge ap_clk) begin : ap_ret_ap_CS_fsm
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_st1_fsm_0;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin : ap_ret_ap_reg_ppiten_pp0_it0
    if (ap_rst == 1'b1) begin
        ap_reg_ppiten_pp0_it0 <= ap_const_logic_0;
    end else begin
        if (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & ~(exitcond_fu_181_p2 == ap_const_lv1_0))) begin
            ap_reg_ppiten_pp0_it0 <= ap_const_logic_0;
        end else if (((ap_const_logic_1 == ap_sig_cseq_ST_st1_fsm_0) & ~(ap_start == ap_const_logic_0))) begin
            ap_reg_ppiten_pp0_it0 <= ap_const_logic_1;
        end
    end
end

always @ (posedge ap_clk) begin : ap_ret_ap_reg_ppiten_pp0_it1
    if (ap_rst == 1'b1) begin
        ap_reg_ppiten_pp0_it1 <= ap_const_logic_0;
    end else begin
        if (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & (exitcond_fu_181_p2 == ap_const_lv1_0))) begin
            ap_reg_ppiten_pp0_it1 <= ap_const_logic_1;
        end else if ((((ap_const_logic_1 == ap_sig_cseq_ST_st1_fsm_0) & ~(ap_start == ap_const_logic_0)) | ((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & ~(exitcond_fu_181_p2 == ap_const_lv1_0)))) begin
            ap_reg_ppiten_pp0_it1 <= ap_const_logic_0;
        end
    end
end

always @ (posedge ap_clk) begin : ap_ret_ap_reg_ppiten_pp0_it2
    if (ap_rst == 1'b1) begin
        ap_reg_ppiten_pp0_it2 <= ap_const_logic_0;
    end else begin
        ap_reg_ppiten_pp0_it2 <= ap_reg_ppiten_pp0_it1;
    end
end

always @ (posedge ap_clk) begin : ap_ret_ap_reg_ppiten_pp0_it3
    if (ap_rst == 1'b1) begin
        ap_reg_ppiten_pp0_it3 <= ap_const_logic_0;
    end else begin
        ap_reg_ppiten_pp0_it3 <= ap_reg_ppiten_pp0_it2;
    end
end

always @ (posedge ap_clk) begin : ap_ret_ap_reg_ppiten_pp0_it4
    if (ap_rst == 1'b1) begin
        ap_reg_ppiten_pp0_it4 <= ap_const_logic_0;
    end else begin
        ap_reg_ppiten_pp0_it4 <= ap_reg_ppiten_pp0_it3;
    end
end

always @ (posedge ap_clk) begin : ap_ret_ap_reg_ppiten_pp0_it5
    if (ap_rst == 1'b1) begin
        ap_reg_ppiten_pp0_it5 <= ap_const_logic_0;
    end else begin
        ap_reg_ppiten_pp0_it5 <= ap_reg_ppiten_pp0_it4;
    end
end

always @ (posedge ap_clk) begin : ap_ret_ap_reg_ppiten_pp0_it6
    if (ap_rst == 1'b1) begin
        ap_reg_ppiten_pp0_it6 <= ap_const_logic_0;
    end else begin
        ap_reg_ppiten_pp0_it6 <= ap_reg_ppiten_pp0_it5;
    end
end

always @ (posedge ap_clk) begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_st1_fsm_0) & ~(ap_start == ap_const_logic_0))) begin
        j_reg_166 <= ap_const_lv7_0;
    end else if (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & (ap_const_logic_1 == ap_reg_ppiten_pp0_it0) & (exitcond_fu_181_p2 == ap_const_lv1_0))) begin
        j_reg_166 <= j_3_fu_187_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1)) begin
        B_0_load_reg_301 <= B_0_q0;
        ap_reg_ppstg_C_0_0_addr_reg_276_pp0_it1 <= C_0_0_addr_reg_276;
        ap_reg_ppstg_C_1_0_addr_reg_281_pp0_it1 <= C_1_0_addr_reg_281;
        ap_reg_ppstg_C_2_0_addr_reg_286_pp0_it1 <= C_2_0_addr_reg_286;
        ap_reg_ppstg_C_3_0_addr_reg_291_pp0_it1 <= C_3_0_addr_reg_291;
        ap_reg_ppstg_tmp_750_reg_246_pp0_it1 <= tmp_750_reg_246;
        tmp_reg_296 <= tmp_fu_224_p6;
    end
end

always @ (posedge ap_clk) begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & (exitcond_fu_181_p2 == ap_const_lv1_0))) begin
        C_0_0_addr_reg_276 <= newIndex7_fu_212_p1;
        C_1_0_addr_reg_281 <= newIndex7_fu_212_p1;
        C_2_0_addr_reg_286 <= newIndex7_fu_212_p1;
        C_3_0_addr_reg_291 <= newIndex7_fu_212_p1;
        tmp_750_reg_246 <= tmp_750_fu_198_p1;
    end
end

always @ (posedge ap_clk) begin
    if ((ap_true == ap_true)) begin
        ap_reg_ppstg_C_0_0_addr_reg_276_pp0_it2 <= ap_reg_ppstg_C_0_0_addr_reg_276_pp0_it1;
        ap_reg_ppstg_C_0_0_addr_reg_276_pp0_it3 <= ap_reg_ppstg_C_0_0_addr_reg_276_pp0_it2;
        ap_reg_ppstg_C_0_0_addr_reg_276_pp0_it4 <= ap_reg_ppstg_C_0_0_addr_reg_276_pp0_it3;
        ap_reg_ppstg_C_0_0_addr_reg_276_pp0_it5 <= ap_reg_ppstg_C_0_0_addr_reg_276_pp0_it4;
        ap_reg_ppstg_C_1_0_addr_reg_281_pp0_it2 <= ap_reg_ppstg_C_1_0_addr_reg_281_pp0_it1;
        ap_reg_ppstg_C_1_0_addr_reg_281_pp0_it3 <= ap_reg_ppstg_C_1_0_addr_reg_281_pp0_it2;
        ap_reg_ppstg_C_1_0_addr_reg_281_pp0_it4 <= ap_reg_ppstg_C_1_0_addr_reg_281_pp0_it3;
        ap_reg_ppstg_C_1_0_addr_reg_281_pp0_it5 <= ap_reg_ppstg_C_1_0_addr_reg_281_pp0_it4;
        ap_reg_ppstg_C_2_0_addr_reg_286_pp0_it2 <= ap_reg_ppstg_C_2_0_addr_reg_286_pp0_it1;
        ap_reg_ppstg_C_2_0_addr_reg_286_pp0_it3 <= ap_reg_ppstg_C_2_0_addr_reg_286_pp0_it2;
        ap_reg_ppstg_C_2_0_addr_reg_286_pp0_it4 <= ap_reg_ppstg_C_2_0_addr_reg_286_pp0_it3;
        ap_reg_ppstg_C_2_0_addr_reg_286_pp0_it5 <= ap_reg_ppstg_C_2_0_addr_reg_286_pp0_it4;
        ap_reg_ppstg_C_3_0_addr_reg_291_pp0_it2 <= ap_reg_ppstg_C_3_0_addr_reg_291_pp0_it1;
        ap_reg_ppstg_C_3_0_addr_reg_291_pp0_it3 <= ap_reg_ppstg_C_3_0_addr_reg_291_pp0_it2;
        ap_reg_ppstg_C_3_0_addr_reg_291_pp0_it4 <= ap_reg_ppstg_C_3_0_addr_reg_291_pp0_it3;
        ap_reg_ppstg_C_3_0_addr_reg_291_pp0_it5 <= ap_reg_ppstg_C_3_0_addr_reg_291_pp0_it4;
        ap_reg_ppstg_tmp_750_reg_246_pp0_it2 <= ap_reg_ppstg_tmp_750_reg_246_pp0_it1;
        ap_reg_ppstg_tmp_750_reg_246_pp0_it3 <= ap_reg_ppstg_tmp_750_reg_246_pp0_it2;
        ap_reg_ppstg_tmp_750_reg_246_pp0_it4 <= ap_reg_ppstg_tmp_750_reg_246_pp0_it3;
        ap_reg_ppstg_tmp_750_reg_246_pp0_it5 <= ap_reg_ppstg_tmp_750_reg_246_pp0_it4;
        tmp_18_reg_306 <= grp_fu_177_p2;
    end
end

always @ (ap_sig_cseq_ST_pp0_stg0_fsm_1 or ap_reg_ppiten_pp0_it0) begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & (ap_const_logic_1 == ap_reg_ppiten_pp0_it0))) begin
        A_0_ce0 = ap_const_logic_1;
    end else begin
        A_0_ce0 = ap_const_logic_0;
    end
end

always @ (ap_sig_cseq_ST_pp0_stg0_fsm_1 or ap_reg_ppiten_pp0_it0) begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & (ap_const_logic_1 == ap_reg_ppiten_pp0_it0))) begin
        A_1_ce0 = ap_const_logic_1;
    end else begin
        A_1_ce0 = ap_const_logic_0;
    end
end

always @ (ap_sig_cseq_ST_pp0_stg0_fsm_1 or ap_reg_ppiten_pp0_it0) begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & (ap_const_logic_1 == ap_reg_ppiten_pp0_it0))) begin
        A_2_ce0 = ap_const_logic_1;
    end else begin
        A_2_ce0 = ap_const_logic_0;
    end
end

always @ (ap_sig_cseq_ST_pp0_stg0_fsm_1 or ap_reg_ppiten_pp0_it0) begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & (ap_const_logic_1 == ap_reg_ppiten_pp0_it0))) begin
        A_3_ce0 = ap_const_logic_1;
    end else begin
        A_3_ce0 = ap_const_logic_0;
    end
end

always @ (ap_sig_cseq_ST_pp0_stg0_fsm_1 or ap_reg_ppiten_pp0_it0) begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & (ap_const_logic_1 == ap_reg_ppiten_pp0_it0))) begin
        B_0_ce0 = ap_const_logic_1;
    end else begin
        B_0_ce0 = ap_const_logic_0;
    end
end

always @ (ap_reg_ppiten_pp0_it6) begin
    if ((ap_const_logic_1 == ap_reg_ppiten_pp0_it6)) begin
        C_0_0_ce0 = ap_const_logic_1;
    end else begin
        C_0_0_ce0 = ap_const_logic_0;
    end
end

always @ (ap_reg_ppiten_pp0_it6 or ap_reg_ppstg_tmp_750_reg_246_pp0_it5) begin
    if (((ap_const_logic_1 == ap_reg_ppiten_pp0_it6) & (ap_reg_ppstg_tmp_750_reg_246_pp0_it5 == ap_const_lv2_0))) begin
        C_0_0_we0 = ap_const_logic_1;
    end else begin
        C_0_0_we0 = ap_const_logic_0;
    end
end

always @ (ap_reg_ppiten_pp0_it6) begin
    if ((ap_const_logic_1 == ap_reg_ppiten_pp0_it6)) begin
        C_1_0_ce0 = ap_const_logic_1;
    end else begin
        C_1_0_ce0 = ap_const_logic_0;
    end
end

always @ (ap_reg_ppiten_pp0_it6 or ap_reg_ppstg_tmp_750_reg_246_pp0_it5) begin
    if (((ap_const_logic_1 == ap_reg_ppiten_pp0_it6) & (ap_reg_ppstg_tmp_750_reg_246_pp0_it5 == ap_const_lv2_1))) begin
        C_1_0_we0 = ap_const_logic_1;
    end else begin
        C_1_0_we0 = ap_const_logic_0;
    end
end

always @ (ap_reg_ppiten_pp0_it6) begin
    if ((ap_const_logic_1 == ap_reg_ppiten_pp0_it6)) begin
        C_2_0_ce0 = ap_const_logic_1;
    end else begin
        C_2_0_ce0 = ap_const_logic_0;
    end
end

always @ (ap_reg_ppiten_pp0_it6 or ap_reg_ppstg_tmp_750_reg_246_pp0_it5) begin
    if (((ap_const_logic_1 == ap_reg_ppiten_pp0_it6) & (ap_reg_ppstg_tmp_750_reg_246_pp0_it5 == ap_const_lv2_2))) begin
        C_2_0_we0 = ap_const_logic_1;
    end else begin
        C_2_0_we0 = ap_const_logic_0;
    end
end

always @ (ap_reg_ppiten_pp0_it6) begin
    if ((ap_const_logic_1 == ap_reg_ppiten_pp0_it6)) begin
        C_3_0_ce0 = ap_const_logic_1;
    end else begin
        C_3_0_ce0 = ap_const_logic_0;
    end
end

always @ (ap_reg_ppiten_pp0_it6 or ap_reg_ppstg_tmp_750_reg_246_pp0_it5) begin
    if (((ap_const_logic_1 == ap_reg_ppiten_pp0_it6) & ~(ap_reg_ppstg_tmp_750_reg_246_pp0_it5 == ap_const_lv2_2) & ~(ap_reg_ppstg_tmp_750_reg_246_pp0_it5 == ap_const_lv2_1) & ~(ap_reg_ppstg_tmp_750_reg_246_pp0_it5 == ap_const_lv2_0))) begin
        C_3_0_we0 = ap_const_logic_1;
    end else begin
        C_3_0_we0 = ap_const_logic_0;
    end
end

always @ (ap_start or ap_sig_cseq_ST_st1_fsm_0 or ap_sig_cseq_ST_st9_fsm_2) begin
    if (((~(ap_const_logic_1 == ap_start) & (ap_const_logic_1 == ap_sig_cseq_ST_st1_fsm_0)) | (ap_const_logic_1 == ap_sig_cseq_ST_st9_fsm_2))) begin
        ap_done = ap_const_logic_1;
    end else begin
        ap_done = ap_const_logic_0;
    end
end

always @ (ap_start or ap_sig_cseq_ST_st1_fsm_0) begin
    if ((~(ap_const_logic_1 == ap_start) & (ap_const_logic_1 == ap_sig_cseq_ST_st1_fsm_0))) begin
        ap_idle = ap_const_logic_1;
    end else begin
        ap_idle = ap_const_logic_0;
    end
end

always @ (ap_sig_cseq_ST_st9_fsm_2) begin
    if ((ap_const_logic_1 == ap_sig_cseq_ST_st9_fsm_2)) begin
        ap_ready = ap_const_logic_1;
    end else begin
        ap_ready = ap_const_logic_0;
    end
end

always @ (ap_sig_bdd_93) begin
    if (ap_sig_bdd_93) begin
        ap_sig_cseq_ST_pp0_stg0_fsm_1 = ap_const_logic_1;
    end else begin
        ap_sig_cseq_ST_pp0_stg0_fsm_1 = ap_const_logic_0;
    end
end

always @ (ap_sig_bdd_21) begin
    if (ap_sig_bdd_21) begin
        ap_sig_cseq_ST_st1_fsm_0 = ap_const_logic_1;
    end else begin
        ap_sig_cseq_ST_st1_fsm_0 = ap_const_logic_0;
    end
end

always @ (ap_sig_bdd_252) begin
    if (ap_sig_bdd_252) begin
        ap_sig_cseq_ST_st9_fsm_2 = ap_const_logic_1;
    end else begin
        ap_sig_cseq_ST_st9_fsm_2 = ap_const_logic_0;
    end
end
always @ (ap_start or ap_CS_fsm or exitcond_fu_181_p2 or ap_reg_ppiten_pp0_it0 or ap_reg_ppiten_pp0_it1 or ap_reg_ppiten_pp0_it5 or ap_reg_ppiten_pp0_it6) begin
    case (ap_CS_fsm)
        ap_ST_st1_fsm_0 : 
        begin
            if (~(ap_start == ap_const_logic_0)) begin
                ap_NS_fsm = ap_ST_pp0_stg0_fsm_1;
            end else begin
                ap_NS_fsm = ap_ST_st1_fsm_0;
            end
        end
        ap_ST_pp0_stg0_fsm_1 : 
        begin
            if ((~((ap_const_logic_1 == ap_reg_ppiten_pp0_it6) & ~(ap_const_logic_1 == ap_reg_ppiten_pp0_it5)) & ~((ap_const_logic_1 == ap_reg_ppiten_pp0_it0) & ~(exitcond_fu_181_p2 == ap_const_lv1_0) & ~(ap_const_logic_1 == ap_reg_ppiten_pp0_it1)))) begin
                ap_NS_fsm = ap_ST_pp0_stg0_fsm_1;
            end else if (((ap_const_logic_1 == ap_reg_ppiten_pp0_it0) & ~(exitcond_fu_181_p2 == ap_const_lv1_0) & ~(ap_const_logic_1 == ap_reg_ppiten_pp0_it1))) begin
                ap_NS_fsm = ap_ST_st9_fsm_2;
            end else begin
                ap_NS_fsm = ap_ST_st9_fsm_2;
            end
        end
        ap_ST_st9_fsm_2 : 
        begin
            ap_NS_fsm = ap_ST_st1_fsm_0;
        end
        default : 
        begin
            ap_NS_fsm = 'bx;
        end
    endcase
end


assign A_0_address0 = newIndex7_fu_212_p1;

assign A_1_address0 = newIndex7_fu_212_p1;

assign A_2_address0 = newIndex7_fu_212_p1;

assign A_3_address0 = newIndex7_fu_212_p1;

assign B_0_address0 = tmp_s_fu_193_p1;

assign C_0_0_address0 = ap_reg_ppstg_C_0_0_addr_reg_276_pp0_it5;

assign C_0_0_d0 = tmp_18_reg_306;

assign C_1_0_address0 = ap_reg_ppstg_C_1_0_addr_reg_281_pp0_it5;

assign C_1_0_d0 = tmp_18_reg_306;

assign C_2_0_address0 = ap_reg_ppstg_C_2_0_addr_reg_286_pp0_it5;

assign C_2_0_d0 = tmp_18_reg_306;

assign C_3_0_address0 = ap_reg_ppstg_C_3_0_addr_reg_291_pp0_it5;

assign C_3_0_d0 = tmp_18_reg_306;


always @ (ap_CS_fsm) begin
    ap_sig_bdd_21 = (ap_CS_fsm[ap_const_lv32_0] == ap_const_lv1_1);
end


always @ (ap_CS_fsm) begin
    ap_sig_bdd_252 = (ap_const_lv1_1 == ap_CS_fsm[ap_const_lv32_2]);
end


always @ (ap_CS_fsm) begin
    ap_sig_bdd_93 = (ap_const_lv1_1 == ap_CS_fsm[ap_const_lv32_1]);
end

assign exitcond_fu_181_p2 = (j_reg_166 == ap_const_lv7_54? 1'b1: 1'b0);

assign grp_fu_177_ce = ap_const_logic_1;

assign j_3_fu_187_p2 = (j_reg_166 + ap_const_lv7_1);

assign newIndex7_fu_212_p1 = newIndex_fu_202_p4;

assign newIndex_fu_202_p4 = {{j_reg_166[ap_const_lv32_6 : ap_const_lv32_2]}};

assign tmp_750_fu_198_p1 = j_reg_166[1:0];

assign tmp_s_fu_193_p1 = j_reg_166;


endmodule //inference_add_1_84_s

