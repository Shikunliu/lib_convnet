// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module inference_Loop_6_proc (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_continue,
        ap_idle,
        ap_ready,
        Filter3_TDATA,
        Filter3_TVALID,
        Filter3_TREADY,
        f3_0_address0,
        f3_0_ce0,
        f3_0_we0,
        f3_0_d0,
        f3_1_address0,
        f3_1_ce0,
        f3_1_we0,
        f3_1_d0,
        f3_2_address0,
        f3_2_ce0,
        f3_2_we0,
        f3_2_d0,
        f3_3_address0,
        f3_3_ce0,
        f3_3_we0,
        f3_3_d0,
        f3_4_address0,
        f3_4_ce0,
        f3_4_we0,
        f3_4_d0
);

parameter    ap_const_logic_1 = 1'b1;
parameter    ap_const_logic_0 = 1'b0;
parameter    ap_ST_st1_fsm_0 = 3'b1;
parameter    ap_ST_pp0_stg0_fsm_1 = 3'b10;
parameter    ap_ST_st4_fsm_2 = 3'b100;
parameter    ap_const_lv32_0 = 32'b00000000000000000000000000000000;
parameter    ap_const_lv1_1 = 1'b1;
parameter    ap_const_lv32_1 = 32'b1;
parameter    ap_const_lv1_0 = 1'b0;
parameter    ap_const_lv16_0 = 16'b0000000000000000;
parameter    ap_const_lv3_0 = 3'b000;
parameter    ap_const_lv14_0 = 14'b00000000000000;
parameter    ap_const_lv12_0 = 12'b000000000000;
parameter    ap_const_lv5_0 = 5'b00000;
parameter    ap_const_lv7_0 = 7'b0000000;
parameter    ap_const_lv3_3 = 3'b11;
parameter    ap_const_lv3_2 = 3'b10;
parameter    ap_const_lv3_1 = 3'b1;
parameter    ap_const_lv16_BB80 = 16'b1011101110000000;
parameter    ap_const_lv16_1 = 16'b1;
parameter    ap_const_lv14_2580 = 14'b10010110000000;
parameter    ap_const_lv7_78 = 7'b1111000;
parameter    ap_const_lv12_780 = 12'b11110000000;
parameter    ap_const_lv5_1 = 5'b1;
parameter    ap_const_lv7_1 = 7'b1;
parameter    ap_const_lv12_1 = 12'b1;
parameter    ap_const_lv14_1 = 14'b1;
parameter    ap_const_lv4_0 = 4'b0000;
parameter    ap_const_lv32_2 = 32'b10;
parameter    ap_true = 1'b1;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
input   ap_continue;
output   ap_idle;
output   ap_ready;
input  [31:0] Filter3_TDATA;
input   Filter3_TVALID;
output   Filter3_TREADY;
output  [13:0] f3_0_address0;
output   f3_0_ce0;
output   f3_0_we0;
output  [31:0] f3_0_d0;
output  [13:0] f3_1_address0;
output   f3_1_ce0;
output   f3_1_we0;
output  [31:0] f3_1_d0;
output  [13:0] f3_2_address0;
output   f3_2_ce0;
output   f3_2_we0;
output  [31:0] f3_2_d0;
output  [13:0] f3_3_address0;
output   f3_3_ce0;
output   f3_3_we0;
output  [31:0] f3_3_d0;
output  [13:0] f3_4_address0;
output   f3_4_ce0;
output   f3_4_we0;
output  [31:0] f3_4_d0;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg Filter3_TREADY;
reg f3_0_ce0;
reg f3_0_we0;
reg f3_1_ce0;
reg f3_1_we0;
reg f3_2_ce0;
reg f3_2_we0;
reg f3_3_ce0;
reg f3_3_we0;
reg f3_4_ce0;
reg f3_4_we0;
reg    ap_done_reg = 1'b0;
(* fsm_encoding = "none" *) reg   [2:0] ap_CS_fsm = 3'b1;
reg    ap_sig_cseq_ST_st1_fsm_0;
reg    ap_sig_bdd_22;
reg   [15:0] indvar_flatten3_reg_156;
reg   [2:0] i7_reg_167;
reg   [13:0] indvar_flatten4_reg_178;
reg   [2:0] j7_reg_189;
reg   [11:0] indvar_flatten_reg_200;
reg   [4:0] k8_reg_211;
reg   [6:0] l3_reg_222;
wire   [0:0] exitcond_flatten4_fu_233_p2;
reg   [0:0] exitcond_flatten4_reg_481;
reg    ap_sig_cseq_ST_pp0_stg0_fsm_1;
reg    ap_sig_bdd_88;
reg    ap_sig_bdd_94;
reg    ap_reg_ppiten_pp0_it0 = 1'b0;
reg    ap_reg_ppiten_pp0_it1 = 1'b0;
wire   [15:0] indvar_flatten_next4_fu_239_p2;
wire   [2:0] i7_mid2_fu_295_p3;
reg   [2:0] i7_mid2_reg_490;
wire   [2:0] j7_mid2_fu_341_p3;
reg   [2:0] j7_mid2_reg_496;
wire   [6:0] l3_mid2_fu_367_p3;
reg   [6:0] l3_mid2_reg_501;
wire   [4:0] k8_mid2_fu_375_p3;
reg   [4:0] k8_mid2_reg_506;
reg   [31:0] Filter3_read_reg_512;
wire   [6:0] l_fu_383_p2;
wire   [11:0] indvar_flatten_next_fu_395_p3;
wire   [13:0] indvar_flatten_next3_fu_409_p3;
reg    ap_sig_bdd_127;
reg   [2:0] i7_phi_fu_171_p4;
reg   [2:0] j7_phi_fu_193_p4;
reg   [4:0] k8_phi_fu_215_p4;
wire   [63:0] tmp_735_cast_fu_472_p1;
wire   [0:0] exitcond_flatten_fu_251_p2;
wire   [0:0] exitcond_fu_271_p2;
wire   [0:0] not_exitcond_flatten_fu_265_p2;
wire   [0:0] exitcond_flatten1_fu_283_p2;
wire   [2:0] i_fu_245_p2;
wire   [2:0] j7_mid_fu_257_p3;
wire   [0:0] exitcond_flatten_mid_fu_289_p2;
wire   [0:0] tmp_706_fu_309_p2;
wire   [0:0] exitcond_flatten_not_fu_323_p2;
wire   [0:0] exitcond5_mid_fu_277_p2;
wire   [0:0] not_exitcond_flatten_mid_fu_329_p2;
wire   [2:0] j_6_fu_303_p2;
wire   [4:0] k8_mid_fu_315_p3;
wire   [0:0] exitcond5_mid1_fu_335_p2;
wire   [0:0] tmp_707_fu_355_p2;
wire   [0:0] tmp_754_fu_361_p2;
wire   [4:0] k_fu_349_p2;
wire   [11:0] indvar_flatten_op_fu_389_p2;
wire   [13:0] indvar_flatten11_op_fu_403_p2;
wire   [6:0] tmp_fu_417_p3;
wire   [7:0] tmp_728_cast_fu_424_p1;
wire   [7:0] tmp_16_cast_fu_428_p1;
wire   [7:0] tmp_708_fu_431_p2;
wire   [10:0] tmp_755_fu_445_p3;
wire   [14:0] p_shl_cast_fu_437_p3;
wire   [14:0] p_shl2_cast_fu_453_p1;
wire   [14:0] tmp_709_fu_457_p2;
wire   [14:0] tmp_22_cast_fu_463_p1;
wire   [14:0] tmp_710_fu_466_p2;
reg    ap_sig_cseq_ST_st4_fsm_2;
reg    ap_sig_bdd_345;
reg   [2:0] ap_NS_fsm;




always @ (posedge ap_clk) begin : ap_ret_ap_CS_fsm
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_st1_fsm_0;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin : ap_ret_ap_done_reg
    if (ap_rst == 1'b1) begin
        ap_done_reg <= ap_const_logic_0;
    end else begin
        if ((ap_const_logic_1 == ap_continue)) begin
            ap_done_reg <= ap_const_logic_0;
        end else if ((ap_const_logic_1 == ap_sig_cseq_ST_st4_fsm_2)) begin
            ap_done_reg <= ap_const_logic_1;
        end
    end
end

always @ (posedge ap_clk) begin : ap_ret_ap_reg_ppiten_pp0_it0
    if (ap_rst == 1'b1) begin
        ap_reg_ppiten_pp0_it0 <= ap_const_logic_0;
    end else begin
        if (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & ~(ap_sig_bdd_94 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it0)) & ~(exitcond_flatten4_fu_233_p2 == ap_const_lv1_0))) begin
            ap_reg_ppiten_pp0_it0 <= ap_const_logic_0;
        end else if (((ap_const_logic_1 == ap_sig_cseq_ST_st1_fsm_0) & ~ap_sig_bdd_127)) begin
            ap_reg_ppiten_pp0_it0 <= ap_const_logic_1;
        end
    end
end

always @ (posedge ap_clk) begin : ap_ret_ap_reg_ppiten_pp0_it1
    if (ap_rst == 1'b1) begin
        ap_reg_ppiten_pp0_it1 <= ap_const_logic_0;
    end else begin
        if (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & (exitcond_flatten4_fu_233_p2 == ap_const_lv1_0) & ~(ap_sig_bdd_94 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it0)))) begin
            ap_reg_ppiten_pp0_it1 <= ap_const_logic_1;
        end else if ((((ap_const_logic_1 == ap_sig_cseq_ST_st1_fsm_0) & ~ap_sig_bdd_127) | ((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & ~(ap_sig_bdd_94 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it0)) & ~(exitcond_flatten4_fu_233_p2 == ap_const_lv1_0)))) begin
            ap_reg_ppiten_pp0_it1 <= ap_const_logic_0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & (ap_const_logic_1 == ap_reg_ppiten_pp0_it1) & ~(ap_sig_bdd_94 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it0)) & (exitcond_flatten4_reg_481 == ap_const_lv1_0))) begin
        i7_reg_167 <= i7_mid2_reg_490;
    end else if (((ap_const_logic_1 == ap_sig_cseq_ST_st1_fsm_0) & ~ap_sig_bdd_127)) begin
        i7_reg_167 <= ap_const_lv3_0;
    end
end

always @ (posedge ap_clk) begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & (exitcond_flatten4_fu_233_p2 == ap_const_lv1_0) & (ap_const_logic_1 == ap_reg_ppiten_pp0_it0) & ~(ap_sig_bdd_94 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it0)))) begin
        indvar_flatten3_reg_156 <= indvar_flatten_next4_fu_239_p2;
    end else if (((ap_const_logic_1 == ap_sig_cseq_ST_st1_fsm_0) & ~ap_sig_bdd_127)) begin
        indvar_flatten3_reg_156 <= ap_const_lv16_0;
    end
end

always @ (posedge ap_clk) begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & (exitcond_flatten4_fu_233_p2 == ap_const_lv1_0) & (ap_const_logic_1 == ap_reg_ppiten_pp0_it0) & ~(ap_sig_bdd_94 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it0)))) begin
        indvar_flatten4_reg_178 <= indvar_flatten_next3_fu_409_p3;
    end else if (((ap_const_logic_1 == ap_sig_cseq_ST_st1_fsm_0) & ~ap_sig_bdd_127)) begin
        indvar_flatten4_reg_178 <= ap_const_lv14_0;
    end
end

always @ (posedge ap_clk) begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & (exitcond_flatten4_fu_233_p2 == ap_const_lv1_0) & (ap_const_logic_1 == ap_reg_ppiten_pp0_it0) & ~(ap_sig_bdd_94 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it0)))) begin
        indvar_flatten_reg_200 <= indvar_flatten_next_fu_395_p3;
    end else if (((ap_const_logic_1 == ap_sig_cseq_ST_st1_fsm_0) & ~ap_sig_bdd_127)) begin
        indvar_flatten_reg_200 <= ap_const_lv12_0;
    end
end

always @ (posedge ap_clk) begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & (ap_const_logic_1 == ap_reg_ppiten_pp0_it1) & ~(ap_sig_bdd_94 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it0)) & (exitcond_flatten4_reg_481 == ap_const_lv1_0))) begin
        j7_reg_189 <= j7_mid2_reg_496;
    end else if (((ap_const_logic_1 == ap_sig_cseq_ST_st1_fsm_0) & ~ap_sig_bdd_127)) begin
        j7_reg_189 <= ap_const_lv3_0;
    end
end

always @ (posedge ap_clk) begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & (ap_const_logic_1 == ap_reg_ppiten_pp0_it1) & ~(ap_sig_bdd_94 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it0)) & (exitcond_flatten4_reg_481 == ap_const_lv1_0))) begin
        k8_reg_211 <= k8_mid2_reg_506;
    end else if (((ap_const_logic_1 == ap_sig_cseq_ST_st1_fsm_0) & ~ap_sig_bdd_127)) begin
        k8_reg_211 <= ap_const_lv5_0;
    end
end

always @ (posedge ap_clk) begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & (exitcond_flatten4_fu_233_p2 == ap_const_lv1_0) & (ap_const_logic_1 == ap_reg_ppiten_pp0_it0) & ~(ap_sig_bdd_94 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it0)))) begin
        l3_reg_222 <= l_fu_383_p2;
    end else if (((ap_const_logic_1 == ap_sig_cseq_ST_st1_fsm_0) & ~ap_sig_bdd_127)) begin
        l3_reg_222 <= ap_const_lv7_0;
    end
end

always @ (posedge ap_clk) begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & (exitcond_flatten4_fu_233_p2 == ap_const_lv1_0) & ~(ap_sig_bdd_94 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it0)))) begin
        Filter3_read_reg_512 <= Filter3_TDATA;
        l3_mid2_reg_501 <= l3_mid2_fu_367_p3;
    end
end

always @ (posedge ap_clk) begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & ~(ap_sig_bdd_94 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it0)))) begin
        exitcond_flatten4_reg_481 <= exitcond_flatten4_fu_233_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & (exitcond_flatten4_fu_233_p2 == ap_const_lv1_0) & (ap_const_logic_1 == ap_reg_ppiten_pp0_it0) & ~(ap_sig_bdd_94 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it0)))) begin
        i7_mid2_reg_490 <= i7_mid2_fu_295_p3;
        j7_mid2_reg_496 <= j7_mid2_fu_341_p3;
        k8_mid2_reg_506 <= k8_mid2_fu_375_p3;
    end
end

always @ (exitcond_flatten4_fu_233_p2 or ap_sig_cseq_ST_pp0_stg0_fsm_1 or ap_sig_bdd_94 or ap_reg_ppiten_pp0_it0) begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & (exitcond_flatten4_fu_233_p2 == ap_const_lv1_0) & (ap_const_logic_1 == ap_reg_ppiten_pp0_it0) & ~(ap_sig_bdd_94 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it0)))) begin
        Filter3_TREADY = ap_const_logic_1;
    end else begin
        Filter3_TREADY = ap_const_logic_0;
    end
end

always @ (ap_done_reg or ap_sig_cseq_ST_st4_fsm_2) begin
    if (((ap_const_logic_1 == ap_done_reg) | (ap_const_logic_1 == ap_sig_cseq_ST_st4_fsm_2))) begin
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

always @ (ap_sig_cseq_ST_st4_fsm_2) begin
    if ((ap_const_logic_1 == ap_sig_cseq_ST_st4_fsm_2)) begin
        ap_ready = ap_const_logic_1;
    end else begin
        ap_ready = ap_const_logic_0;
    end
end

always @ (ap_sig_bdd_88) begin
    if (ap_sig_bdd_88) begin
        ap_sig_cseq_ST_pp0_stg0_fsm_1 = ap_const_logic_1;
    end else begin
        ap_sig_cseq_ST_pp0_stg0_fsm_1 = ap_const_logic_0;
    end
end

always @ (ap_sig_bdd_22) begin
    if (ap_sig_bdd_22) begin
        ap_sig_cseq_ST_st1_fsm_0 = ap_const_logic_1;
    end else begin
        ap_sig_cseq_ST_st1_fsm_0 = ap_const_logic_0;
    end
end

always @ (ap_sig_bdd_345) begin
    if (ap_sig_bdd_345) begin
        ap_sig_cseq_ST_st4_fsm_2 = ap_const_logic_1;
    end else begin
        ap_sig_cseq_ST_st4_fsm_2 = ap_const_logic_0;
    end
end

always @ (ap_sig_cseq_ST_pp0_stg0_fsm_1 or ap_sig_bdd_94 or ap_reg_ppiten_pp0_it0 or ap_reg_ppiten_pp0_it1) begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & (ap_const_logic_1 == ap_reg_ppiten_pp0_it1) & ~(ap_sig_bdd_94 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it0)))) begin
        f3_0_ce0 = ap_const_logic_1;
    end else begin
        f3_0_ce0 = ap_const_logic_0;
    end
end

always @ (ap_sig_cseq_ST_pp0_stg0_fsm_1 or ap_sig_bdd_94 or ap_reg_ppiten_pp0_it0 or ap_reg_ppiten_pp0_it1 or j7_mid2_reg_496) begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & (ap_const_logic_1 == ap_reg_ppiten_pp0_it1) & ~(ap_sig_bdd_94 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it0)) & (j7_mid2_reg_496 == ap_const_lv3_0))) begin
        f3_0_we0 = ap_const_logic_1;
    end else begin
        f3_0_we0 = ap_const_logic_0;
    end
end

always @ (ap_sig_cseq_ST_pp0_stg0_fsm_1 or ap_sig_bdd_94 or ap_reg_ppiten_pp0_it0 or ap_reg_ppiten_pp0_it1) begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & (ap_const_logic_1 == ap_reg_ppiten_pp0_it1) & ~(ap_sig_bdd_94 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it0)))) begin
        f3_1_ce0 = ap_const_logic_1;
    end else begin
        f3_1_ce0 = ap_const_logic_0;
    end
end

always @ (ap_sig_cseq_ST_pp0_stg0_fsm_1 or ap_sig_bdd_94 or ap_reg_ppiten_pp0_it0 or ap_reg_ppiten_pp0_it1 or j7_mid2_reg_496) begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & (ap_const_logic_1 == ap_reg_ppiten_pp0_it1) & ~(ap_sig_bdd_94 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it0)) & (j7_mid2_reg_496 == ap_const_lv3_1))) begin
        f3_1_we0 = ap_const_logic_1;
    end else begin
        f3_1_we0 = ap_const_logic_0;
    end
end

always @ (ap_sig_cseq_ST_pp0_stg0_fsm_1 or ap_sig_bdd_94 or ap_reg_ppiten_pp0_it0 or ap_reg_ppiten_pp0_it1) begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & (ap_const_logic_1 == ap_reg_ppiten_pp0_it1) & ~(ap_sig_bdd_94 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it0)))) begin
        f3_2_ce0 = ap_const_logic_1;
    end else begin
        f3_2_ce0 = ap_const_logic_0;
    end
end

always @ (ap_sig_cseq_ST_pp0_stg0_fsm_1 or ap_sig_bdd_94 or ap_reg_ppiten_pp0_it0 or ap_reg_ppiten_pp0_it1 or j7_mid2_reg_496) begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & (ap_const_logic_1 == ap_reg_ppiten_pp0_it1) & ~(ap_sig_bdd_94 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it0)) & (j7_mid2_reg_496 == ap_const_lv3_2))) begin
        f3_2_we0 = ap_const_logic_1;
    end else begin
        f3_2_we0 = ap_const_logic_0;
    end
end

always @ (ap_sig_cseq_ST_pp0_stg0_fsm_1 or ap_sig_bdd_94 or ap_reg_ppiten_pp0_it0 or ap_reg_ppiten_pp0_it1) begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & (ap_const_logic_1 == ap_reg_ppiten_pp0_it1) & ~(ap_sig_bdd_94 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it0)))) begin
        f3_3_ce0 = ap_const_logic_1;
    end else begin
        f3_3_ce0 = ap_const_logic_0;
    end
end

always @ (ap_sig_cseq_ST_pp0_stg0_fsm_1 or ap_sig_bdd_94 or ap_reg_ppiten_pp0_it0 or ap_reg_ppiten_pp0_it1 or j7_mid2_reg_496) begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & (ap_const_logic_1 == ap_reg_ppiten_pp0_it1) & ~(ap_sig_bdd_94 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it0)) & (j7_mid2_reg_496 == ap_const_lv3_3))) begin
        f3_3_we0 = ap_const_logic_1;
    end else begin
        f3_3_we0 = ap_const_logic_0;
    end
end

always @ (ap_sig_cseq_ST_pp0_stg0_fsm_1 or ap_sig_bdd_94 or ap_reg_ppiten_pp0_it0 or ap_reg_ppiten_pp0_it1) begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & (ap_const_logic_1 == ap_reg_ppiten_pp0_it1) & ~(ap_sig_bdd_94 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it0)))) begin
        f3_4_ce0 = ap_const_logic_1;
    end else begin
        f3_4_ce0 = ap_const_logic_0;
    end
end

always @ (ap_sig_cseq_ST_pp0_stg0_fsm_1 or ap_sig_bdd_94 or ap_reg_ppiten_pp0_it0 or ap_reg_ppiten_pp0_it1 or j7_mid2_reg_496) begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & (ap_const_logic_1 == ap_reg_ppiten_pp0_it1) & ~(ap_sig_bdd_94 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it0)) & ~(j7_mid2_reg_496 == ap_const_lv3_3) & ~(j7_mid2_reg_496 == ap_const_lv3_2) & ~(j7_mid2_reg_496 == ap_const_lv3_1) & ~(j7_mid2_reg_496 == ap_const_lv3_0))) begin
        f3_4_we0 = ap_const_logic_1;
    end else begin
        f3_4_we0 = ap_const_logic_0;
    end
end

always @ (i7_reg_167 or exitcond_flatten4_reg_481 or ap_sig_cseq_ST_pp0_stg0_fsm_1 or ap_reg_ppiten_pp0_it1 or i7_mid2_reg_490) begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & (ap_const_logic_1 == ap_reg_ppiten_pp0_it1) & (exitcond_flatten4_reg_481 == ap_const_lv1_0))) begin
        i7_phi_fu_171_p4 = i7_mid2_reg_490;
    end else begin
        i7_phi_fu_171_p4 = i7_reg_167;
    end
end

always @ (j7_reg_189 or exitcond_flatten4_reg_481 or ap_sig_cseq_ST_pp0_stg0_fsm_1 or ap_reg_ppiten_pp0_it1 or j7_mid2_reg_496) begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & (ap_const_logic_1 == ap_reg_ppiten_pp0_it1) & (exitcond_flatten4_reg_481 == ap_const_lv1_0))) begin
        j7_phi_fu_193_p4 = j7_mid2_reg_496;
    end else begin
        j7_phi_fu_193_p4 = j7_reg_189;
    end
end

always @ (k8_reg_211 or exitcond_flatten4_reg_481 or ap_sig_cseq_ST_pp0_stg0_fsm_1 or ap_reg_ppiten_pp0_it1 or k8_mid2_reg_506) begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & (ap_const_logic_1 == ap_reg_ppiten_pp0_it1) & (exitcond_flatten4_reg_481 == ap_const_lv1_0))) begin
        k8_phi_fu_215_p4 = k8_mid2_reg_506;
    end else begin
        k8_phi_fu_215_p4 = k8_reg_211;
    end
end
always @ (ap_CS_fsm or exitcond_flatten4_fu_233_p2 or ap_sig_bdd_94 or ap_reg_ppiten_pp0_it0 or ap_sig_bdd_127) begin
    case (ap_CS_fsm)
        ap_ST_st1_fsm_0 : 
        begin
            if (~ap_sig_bdd_127) begin
                ap_NS_fsm = ap_ST_pp0_stg0_fsm_1;
            end else begin
                ap_NS_fsm = ap_ST_st1_fsm_0;
            end
        end
        ap_ST_pp0_stg0_fsm_1 : 
        begin
            if (~((ap_const_logic_1 == ap_reg_ppiten_pp0_it0) & ~(ap_sig_bdd_94 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it0)) & ~(exitcond_flatten4_fu_233_p2 == ap_const_lv1_0))) begin
                ap_NS_fsm = ap_ST_pp0_stg0_fsm_1;
            end else if (((ap_const_logic_1 == ap_reg_ppiten_pp0_it0) & ~(ap_sig_bdd_94 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it0)) & ~(exitcond_flatten4_fu_233_p2 == ap_const_lv1_0))) begin
                ap_NS_fsm = ap_ST_st4_fsm_2;
            end else begin
                ap_NS_fsm = ap_ST_pp0_stg0_fsm_1;
            end
        end
        ap_ST_st4_fsm_2 : 
        begin
            ap_NS_fsm = ap_ST_st1_fsm_0;
        end
        default : 
        begin
            ap_NS_fsm = 'bx;
        end
    endcase
end



always @ (ap_start or ap_done_reg) begin
    ap_sig_bdd_127 = ((ap_start == ap_const_logic_0) | (ap_done_reg == ap_const_logic_1));
end


always @ (ap_CS_fsm) begin
    ap_sig_bdd_22 = (ap_CS_fsm[ap_const_lv32_0] == ap_const_lv1_1);
end


always @ (ap_CS_fsm) begin
    ap_sig_bdd_345 = (ap_const_lv1_1 == ap_CS_fsm[ap_const_lv32_2]);
end


always @ (ap_CS_fsm) begin
    ap_sig_bdd_88 = (ap_const_lv1_1 == ap_CS_fsm[ap_const_lv32_1]);
end


always @ (Filter3_TVALID or exitcond_flatten4_fu_233_p2) begin
    ap_sig_bdd_94 = ((Filter3_TVALID == ap_const_logic_0) & (exitcond_flatten4_fu_233_p2 == ap_const_lv1_0));
end

assign exitcond5_mid1_fu_335_p2 = (exitcond5_mid_fu_277_p2 & not_exitcond_flatten_mid_fu_329_p2);

assign exitcond5_mid_fu_277_p2 = (exitcond_fu_271_p2 & not_exitcond_flatten_fu_265_p2);

assign exitcond_flatten1_fu_283_p2 = (indvar_flatten_reg_200 == ap_const_lv12_780? 1'b1: 1'b0);

assign exitcond_flatten4_fu_233_p2 = (indvar_flatten3_reg_156 == ap_const_lv16_BB80? 1'b1: 1'b0);

assign exitcond_flatten_fu_251_p2 = (indvar_flatten4_reg_178 == ap_const_lv14_2580? 1'b1: 1'b0);

assign exitcond_flatten_mid_fu_289_p2 = (exitcond_flatten1_fu_283_p2 & not_exitcond_flatten_fu_265_p2);

assign exitcond_flatten_not_fu_323_p2 = (exitcond_flatten1_fu_283_p2 ^ ap_const_lv1_1);

assign exitcond_fu_271_p2 = (l3_reg_222 == ap_const_lv7_78? 1'b1: 1'b0);

assign f3_0_address0 = tmp_735_cast_fu_472_p1;

assign f3_0_d0 = Filter3_read_reg_512;

assign f3_1_address0 = tmp_735_cast_fu_472_p1;

assign f3_1_d0 = Filter3_read_reg_512;

assign f3_2_address0 = tmp_735_cast_fu_472_p1;

assign f3_2_d0 = Filter3_read_reg_512;

assign f3_3_address0 = tmp_735_cast_fu_472_p1;

assign f3_3_d0 = Filter3_read_reg_512;

assign f3_4_address0 = tmp_735_cast_fu_472_p1;

assign f3_4_d0 = Filter3_read_reg_512;

assign i7_mid2_fu_295_p3 = ((exitcond_flatten_fu_251_p2[0:0] === 1'b1) ? i_fu_245_p2 : i7_phi_fu_171_p4);

assign i_fu_245_p2 = (i7_phi_fu_171_p4 + ap_const_lv3_1);

assign indvar_flatten11_op_fu_403_p2 = (indvar_flatten4_reg_178 + ap_const_lv14_1);

assign indvar_flatten_next3_fu_409_p3 = ((exitcond_flatten_fu_251_p2[0:0] === 1'b1) ? ap_const_lv14_1 : indvar_flatten11_op_fu_403_p2);

assign indvar_flatten_next4_fu_239_p2 = (indvar_flatten3_reg_156 + ap_const_lv16_1);

assign indvar_flatten_next_fu_395_p3 = ((tmp_706_fu_309_p2[0:0] === 1'b1) ? ap_const_lv12_1 : indvar_flatten_op_fu_389_p2);

assign indvar_flatten_op_fu_389_p2 = (indvar_flatten_reg_200 + ap_const_lv12_1);

assign j7_mid2_fu_341_p3 = ((exitcond_flatten_mid_fu_289_p2[0:0] === 1'b1) ? j_6_fu_303_p2 : j7_mid_fu_257_p3);

assign j7_mid_fu_257_p3 = ((exitcond_flatten_fu_251_p2[0:0] === 1'b1) ? ap_const_lv3_0 : j7_phi_fu_193_p4);

assign j_6_fu_303_p2 = (j7_mid_fu_257_p3 + ap_const_lv3_1);

assign k8_mid2_fu_375_p3 = ((exitcond5_mid1_fu_335_p2[0:0] === 1'b1) ? k_fu_349_p2 : k8_mid_fu_315_p3);

assign k8_mid_fu_315_p3 = ((tmp_706_fu_309_p2[0:0] === 1'b1) ? ap_const_lv5_0 : k8_phi_fu_215_p4);

assign k_fu_349_p2 = (k8_mid_fu_315_p3 + ap_const_lv5_1);

assign l3_mid2_fu_367_p3 = ((tmp_754_fu_361_p2[0:0] === 1'b1) ? ap_const_lv7_0 : l3_reg_222);

assign l_fu_383_p2 = (l3_mid2_fu_367_p3 + ap_const_lv7_1);

assign not_exitcond_flatten_fu_265_p2 = (exitcond_flatten_fu_251_p2 ^ ap_const_lv1_1);

assign not_exitcond_flatten_mid_fu_329_p2 = (exitcond_flatten_fu_251_p2 | exitcond_flatten_not_fu_323_p2);

assign p_shl2_cast_fu_453_p1 = tmp_755_fu_445_p3;

assign p_shl_cast_fu_437_p3 = {{tmp_708_fu_431_p2}, {ap_const_lv7_0}};

assign tmp_16_cast_fu_428_p1 = k8_mid2_reg_506;

assign tmp_22_cast_fu_463_p1 = l3_mid2_reg_501;

assign tmp_706_fu_309_p2 = (exitcond_flatten_mid_fu_289_p2 | exitcond_flatten_fu_251_p2);

assign tmp_707_fu_355_p2 = (exitcond5_mid1_fu_335_p2 | exitcond_flatten_mid_fu_289_p2);

assign tmp_708_fu_431_p2 = (tmp_728_cast_fu_424_p1 + tmp_16_cast_fu_428_p1);

assign tmp_709_fu_457_p2 = (p_shl_cast_fu_437_p3 - p_shl2_cast_fu_453_p1);

assign tmp_710_fu_466_p2 = (tmp_709_fu_457_p2 + tmp_22_cast_fu_463_p1);

assign tmp_728_cast_fu_424_p1 = tmp_fu_417_p3;

assign tmp_735_cast_fu_472_p1 = tmp_710_fu_466_p2;

assign tmp_754_fu_361_p2 = (tmp_707_fu_355_p2 | exitcond_flatten_fu_251_p2);

assign tmp_755_fu_445_p3 = {{tmp_708_fu_431_p2}, {ap_const_lv3_0}};

assign tmp_fu_417_p3 = {{i7_mid2_reg_490}, {ap_const_lv4_0}};


endmodule //inference_Loop_6_proc

