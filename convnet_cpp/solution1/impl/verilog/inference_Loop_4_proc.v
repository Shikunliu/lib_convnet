// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module inference_Loop_4_proc (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_continue,
        ap_idle,
        ap_ready,
        Filter2_TDATA,
        Filter2_TVALID,
        Filter2_TREADY,
        f2_0_address0,
        f2_0_ce0,
        f2_0_we0,
        f2_0_d0,
        f2_1_address0,
        f2_1_ce0,
        f2_1_we0,
        f2_1_d0,
        f2_2_address0,
        f2_2_ce0,
        f2_2_we0,
        f2_2_d0,
        f2_3_address0,
        f2_3_ce0,
        f2_3_we0,
        f2_3_d0,
        f2_4_address0,
        f2_4_ce0,
        f2_4_we0,
        f2_4_d0
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
parameter    ap_const_lv12_0 = 12'b000000000000;
parameter    ap_const_lv3_0 = 3'b000;
parameter    ap_const_lv10_0 = 10'b0000000000;
parameter    ap_const_lv8_0 = 8'b00000000;
parameter    ap_const_lv5_0 = 5'b00000;
parameter    ap_const_lv3_3 = 3'b11;
parameter    ap_const_lv3_2 = 3'b10;
parameter    ap_const_lv3_1 = 3'b1;
parameter    ap_const_lv12_960 = 12'b100101100000;
parameter    ap_const_lv12_1 = 12'b1;
parameter    ap_const_lv10_1E0 = 10'b111100000;
parameter    ap_const_lv5_10 = 5'b10000;
parameter    ap_const_lv8_60 = 8'b1100000;
parameter    ap_const_lv4_0 = 4'b0000;
parameter    ap_const_lv5_1 = 5'b1;
parameter    ap_const_lv8_1 = 8'b1;
parameter    ap_const_lv10_1 = 10'b1;
parameter    ap_const_lv32_2 = 32'b10;
parameter    ap_true = 1'b1;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
input   ap_continue;
output   ap_idle;
output   ap_ready;
input  [31:0] Filter2_TDATA;
input   Filter2_TVALID;
output   Filter2_TREADY;
output  [8:0] f2_0_address0;
output   f2_0_ce0;
output   f2_0_we0;
output  [31:0] f2_0_d0;
output  [8:0] f2_1_address0;
output   f2_1_ce0;
output   f2_1_we0;
output  [31:0] f2_1_d0;
output  [8:0] f2_2_address0;
output   f2_2_ce0;
output   f2_2_we0;
output  [31:0] f2_2_d0;
output  [8:0] f2_3_address0;
output   f2_3_ce0;
output   f2_3_we0;
output  [31:0] f2_3_d0;
output  [8:0] f2_4_address0;
output   f2_4_ce0;
output   f2_4_we0;
output  [31:0] f2_4_d0;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg Filter2_TREADY;
reg f2_0_ce0;
reg f2_0_we0;
reg f2_1_ce0;
reg f2_1_we0;
reg f2_2_ce0;
reg f2_2_we0;
reg f2_3_ce0;
reg f2_3_we0;
reg f2_4_ce0;
reg f2_4_we0;
reg    ap_done_reg = 1'b0;
(* fsm_encoding = "none" *) reg   [2:0] ap_CS_fsm = 3'b1;
reg    ap_sig_cseq_ST_st1_fsm_0;
reg    ap_sig_bdd_22;
reg   [11:0] indvar_flatten5_reg_154;
reg   [2:0] i5_reg_165;
reg   [9:0] indvar_flatten6_reg_176;
reg   [2:0] j6_reg_187;
reg   [7:0] indvar_flatten_reg_198;
reg   [2:0] k7_reg_209;
reg   [4:0] l8_reg_220;
wire   [0:0] exitcond_flatten6_fu_231_p2;
reg   [0:0] exitcond_flatten6_reg_477;
reg    ap_sig_cseq_ST_pp0_stg0_fsm_1;
reg    ap_sig_bdd_88;
reg    ap_sig_bdd_94;
reg    ap_reg_ppiten_pp0_it0 = 1'b0;
reg    ap_reg_ppiten_pp0_it1 = 1'b0;
wire   [11:0] indvar_flatten_next6_fu_237_p2;
wire   [2:0] i5_mid2_fu_293_p3;
reg   [2:0] i5_mid2_reg_486;
wire   [2:0] j6_mid2_fu_365_p3;
reg   [2:0] j6_mid2_reg_491;
wire   [2:0] k7_mid2_fu_399_p3;
reg   [2:0] k7_mid2_reg_496;
wire   [9:0] tmp_715_fu_429_p2;
reg   [9:0] tmp_715_reg_501;
reg   [31:0] Filter2_read_reg_506;
wire   [4:0] l_fu_435_p2;
wire   [7:0] indvar_flatten_next_fu_447_p3;
wire   [9:0] indvar_flatten_next5_fu_461_p3;
reg    ap_sig_bdd_127;
reg   [2:0] i5_phi_fu_169_p4;
reg   [2:0] j6_phi_fu_191_p4;
reg   [2:0] k7_phi_fu_213_p4;
wire   [63:0] tmp_744_cast_fu_469_p1;
wire   [0:0] exitcond_flatten_fu_249_p2;
wire   [0:0] exitcond_fu_269_p2;
wire   [0:0] not_exitcond_flatten_fu_263_p2;
wire   [0:0] exitcond_flatten2_fu_281_p2;
wire   [2:0] i_fu_243_p2;
wire   [3:0] tmp_s_fu_309_p3;
wire   [5:0] tmp_fu_301_p3;
wire   [5:0] p_shl2_cast_fu_317_p1;
wire   [2:0] j6_mid_fu_255_p3;
wire   [0:0] exitcond_flatten_mid_fu_287_p2;
wire   [0:0] tmp_712_fu_333_p2;
wire   [0:0] exitcond_flatten_not_fu_347_p2;
wire   [0:0] exitcond8_mid_fu_275_p2;
wire   [0:0] not_exitcond_flatten_mid_fu_353_p2;
wire   [2:0] j_5_fu_327_p2;
wire   [2:0] k7_mid_fu_339_p3;
wire   [0:0] exitcond8_mid1_fu_359_p2;
wire   [0:0] tmp_713_fu_379_p2;
wire   [0:0] tmp_756_fu_385_p2;
wire   [2:0] k_fu_373_p2;
wire   [5:0] tmp_711_fu_321_p2;
wire   [5:0] tmp_11_cast_fu_407_p1;
wire   [5:0] tmp_714_fu_411_p2;
wire   [4:0] l8_mid2_fu_391_p3;
wire   [9:0] tmp_743_cast_fu_417_p3;
wire   [9:0] tmp_cast_fu_425_p1;
wire   [7:0] indvar_flatten_op_fu_441_p2;
wire   [9:0] indvar_flatten11_op_fu_455_p2;
reg    ap_sig_cseq_ST_st4_fsm_2;
reg    ap_sig_bdd_340;
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
        if (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & ~(ap_sig_bdd_94 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it0)) & ~(exitcond_flatten6_fu_231_p2 == ap_const_lv1_0))) begin
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
        if (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & (exitcond_flatten6_fu_231_p2 == ap_const_lv1_0) & ~(ap_sig_bdd_94 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it0)))) begin
            ap_reg_ppiten_pp0_it1 <= ap_const_logic_1;
        end else if ((((ap_const_logic_1 == ap_sig_cseq_ST_st1_fsm_0) & ~ap_sig_bdd_127) | ((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & ~(ap_sig_bdd_94 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it0)) & ~(exitcond_flatten6_fu_231_p2 == ap_const_lv1_0)))) begin
            ap_reg_ppiten_pp0_it1 <= ap_const_logic_0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & (ap_const_logic_1 == ap_reg_ppiten_pp0_it1) & ~(ap_sig_bdd_94 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it0)) & (exitcond_flatten6_reg_477 == ap_const_lv1_0))) begin
        i5_reg_165 <= i5_mid2_reg_486;
    end else if (((ap_const_logic_1 == ap_sig_cseq_ST_st1_fsm_0) & ~ap_sig_bdd_127)) begin
        i5_reg_165 <= ap_const_lv3_0;
    end
end

always @ (posedge ap_clk) begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & (exitcond_flatten6_fu_231_p2 == ap_const_lv1_0) & (ap_const_logic_1 == ap_reg_ppiten_pp0_it0) & ~(ap_sig_bdd_94 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it0)))) begin
        indvar_flatten5_reg_154 <= indvar_flatten_next6_fu_237_p2;
    end else if (((ap_const_logic_1 == ap_sig_cseq_ST_st1_fsm_0) & ~ap_sig_bdd_127)) begin
        indvar_flatten5_reg_154 <= ap_const_lv12_0;
    end
end

always @ (posedge ap_clk) begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & (exitcond_flatten6_fu_231_p2 == ap_const_lv1_0) & (ap_const_logic_1 == ap_reg_ppiten_pp0_it0) & ~(ap_sig_bdd_94 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it0)))) begin
        indvar_flatten6_reg_176 <= indvar_flatten_next5_fu_461_p3;
    end else if (((ap_const_logic_1 == ap_sig_cseq_ST_st1_fsm_0) & ~ap_sig_bdd_127)) begin
        indvar_flatten6_reg_176 <= ap_const_lv10_0;
    end
end

always @ (posedge ap_clk) begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & (exitcond_flatten6_fu_231_p2 == ap_const_lv1_0) & (ap_const_logic_1 == ap_reg_ppiten_pp0_it0) & ~(ap_sig_bdd_94 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it0)))) begin
        indvar_flatten_reg_198 <= indvar_flatten_next_fu_447_p3;
    end else if (((ap_const_logic_1 == ap_sig_cseq_ST_st1_fsm_0) & ~ap_sig_bdd_127)) begin
        indvar_flatten_reg_198 <= ap_const_lv8_0;
    end
end

always @ (posedge ap_clk) begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & (ap_const_logic_1 == ap_reg_ppiten_pp0_it1) & ~(ap_sig_bdd_94 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it0)) & (exitcond_flatten6_reg_477 == ap_const_lv1_0))) begin
        j6_reg_187 <= j6_mid2_reg_491;
    end else if (((ap_const_logic_1 == ap_sig_cseq_ST_st1_fsm_0) & ~ap_sig_bdd_127)) begin
        j6_reg_187 <= ap_const_lv3_0;
    end
end

always @ (posedge ap_clk) begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & (ap_const_logic_1 == ap_reg_ppiten_pp0_it1) & ~(ap_sig_bdd_94 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it0)) & (exitcond_flatten6_reg_477 == ap_const_lv1_0))) begin
        k7_reg_209 <= k7_mid2_reg_496;
    end else if (((ap_const_logic_1 == ap_sig_cseq_ST_st1_fsm_0) & ~ap_sig_bdd_127)) begin
        k7_reg_209 <= ap_const_lv3_0;
    end
end

always @ (posedge ap_clk) begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & (exitcond_flatten6_fu_231_p2 == ap_const_lv1_0) & (ap_const_logic_1 == ap_reg_ppiten_pp0_it0) & ~(ap_sig_bdd_94 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it0)))) begin
        l8_reg_220 <= l_fu_435_p2;
    end else if (((ap_const_logic_1 == ap_sig_cseq_ST_st1_fsm_0) & ~ap_sig_bdd_127)) begin
        l8_reg_220 <= ap_const_lv5_0;
    end
end

always @ (posedge ap_clk) begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & (exitcond_flatten6_fu_231_p2 == ap_const_lv1_0) & ~(ap_sig_bdd_94 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it0)))) begin
        Filter2_read_reg_506 <= Filter2_TDATA;
        tmp_715_reg_501 <= tmp_715_fu_429_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & ~(ap_sig_bdd_94 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it0)))) begin
        exitcond_flatten6_reg_477 <= exitcond_flatten6_fu_231_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & (exitcond_flatten6_fu_231_p2 == ap_const_lv1_0) & (ap_const_logic_1 == ap_reg_ppiten_pp0_it0) & ~(ap_sig_bdd_94 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it0)))) begin
        i5_mid2_reg_486 <= i5_mid2_fu_293_p3;
        j6_mid2_reg_491 <= j6_mid2_fu_365_p3;
        k7_mid2_reg_496 <= k7_mid2_fu_399_p3;
    end
end

always @ (exitcond_flatten6_fu_231_p2 or ap_sig_cseq_ST_pp0_stg0_fsm_1 or ap_sig_bdd_94 or ap_reg_ppiten_pp0_it0) begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & (exitcond_flatten6_fu_231_p2 == ap_const_lv1_0) & (ap_const_logic_1 == ap_reg_ppiten_pp0_it0) & ~(ap_sig_bdd_94 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it0)))) begin
        Filter2_TREADY = ap_const_logic_1;
    end else begin
        Filter2_TREADY = ap_const_logic_0;
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

always @ (ap_sig_bdd_340) begin
    if (ap_sig_bdd_340) begin
        ap_sig_cseq_ST_st4_fsm_2 = ap_const_logic_1;
    end else begin
        ap_sig_cseq_ST_st4_fsm_2 = ap_const_logic_0;
    end
end

always @ (ap_sig_cseq_ST_pp0_stg0_fsm_1 or ap_sig_bdd_94 or ap_reg_ppiten_pp0_it0 or ap_reg_ppiten_pp0_it1) begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & (ap_const_logic_1 == ap_reg_ppiten_pp0_it1) & ~(ap_sig_bdd_94 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it0)))) begin
        f2_0_ce0 = ap_const_logic_1;
    end else begin
        f2_0_ce0 = ap_const_logic_0;
    end
end

always @ (ap_sig_cseq_ST_pp0_stg0_fsm_1 or ap_sig_bdd_94 or ap_reg_ppiten_pp0_it0 or ap_reg_ppiten_pp0_it1 or j6_mid2_reg_491) begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & (ap_const_logic_1 == ap_reg_ppiten_pp0_it1) & ~(ap_sig_bdd_94 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it0)) & (j6_mid2_reg_491 == ap_const_lv3_0))) begin
        f2_0_we0 = ap_const_logic_1;
    end else begin
        f2_0_we0 = ap_const_logic_0;
    end
end

always @ (ap_sig_cseq_ST_pp0_stg0_fsm_1 or ap_sig_bdd_94 or ap_reg_ppiten_pp0_it0 or ap_reg_ppiten_pp0_it1) begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & (ap_const_logic_1 == ap_reg_ppiten_pp0_it1) & ~(ap_sig_bdd_94 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it0)))) begin
        f2_1_ce0 = ap_const_logic_1;
    end else begin
        f2_1_ce0 = ap_const_logic_0;
    end
end

always @ (ap_sig_cseq_ST_pp0_stg0_fsm_1 or ap_sig_bdd_94 or ap_reg_ppiten_pp0_it0 or ap_reg_ppiten_pp0_it1 or j6_mid2_reg_491) begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & (ap_const_logic_1 == ap_reg_ppiten_pp0_it1) & ~(ap_sig_bdd_94 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it0)) & (j6_mid2_reg_491 == ap_const_lv3_1))) begin
        f2_1_we0 = ap_const_logic_1;
    end else begin
        f2_1_we0 = ap_const_logic_0;
    end
end

always @ (ap_sig_cseq_ST_pp0_stg0_fsm_1 or ap_sig_bdd_94 or ap_reg_ppiten_pp0_it0 or ap_reg_ppiten_pp0_it1) begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & (ap_const_logic_1 == ap_reg_ppiten_pp0_it1) & ~(ap_sig_bdd_94 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it0)))) begin
        f2_2_ce0 = ap_const_logic_1;
    end else begin
        f2_2_ce0 = ap_const_logic_0;
    end
end

always @ (ap_sig_cseq_ST_pp0_stg0_fsm_1 or ap_sig_bdd_94 or ap_reg_ppiten_pp0_it0 or ap_reg_ppiten_pp0_it1 or j6_mid2_reg_491) begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & (ap_const_logic_1 == ap_reg_ppiten_pp0_it1) & ~(ap_sig_bdd_94 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it0)) & (j6_mid2_reg_491 == ap_const_lv3_2))) begin
        f2_2_we0 = ap_const_logic_1;
    end else begin
        f2_2_we0 = ap_const_logic_0;
    end
end

always @ (ap_sig_cseq_ST_pp0_stg0_fsm_1 or ap_sig_bdd_94 or ap_reg_ppiten_pp0_it0 or ap_reg_ppiten_pp0_it1) begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & (ap_const_logic_1 == ap_reg_ppiten_pp0_it1) & ~(ap_sig_bdd_94 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it0)))) begin
        f2_3_ce0 = ap_const_logic_1;
    end else begin
        f2_3_ce0 = ap_const_logic_0;
    end
end

always @ (ap_sig_cseq_ST_pp0_stg0_fsm_1 or ap_sig_bdd_94 or ap_reg_ppiten_pp0_it0 or ap_reg_ppiten_pp0_it1 or j6_mid2_reg_491) begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & (ap_const_logic_1 == ap_reg_ppiten_pp0_it1) & ~(ap_sig_bdd_94 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it0)) & (j6_mid2_reg_491 == ap_const_lv3_3))) begin
        f2_3_we0 = ap_const_logic_1;
    end else begin
        f2_3_we0 = ap_const_logic_0;
    end
end

always @ (ap_sig_cseq_ST_pp0_stg0_fsm_1 or ap_sig_bdd_94 or ap_reg_ppiten_pp0_it0 or ap_reg_ppiten_pp0_it1) begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & (ap_const_logic_1 == ap_reg_ppiten_pp0_it1) & ~(ap_sig_bdd_94 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it0)))) begin
        f2_4_ce0 = ap_const_logic_1;
    end else begin
        f2_4_ce0 = ap_const_logic_0;
    end
end

always @ (ap_sig_cseq_ST_pp0_stg0_fsm_1 or ap_sig_bdd_94 or ap_reg_ppiten_pp0_it0 or ap_reg_ppiten_pp0_it1 or j6_mid2_reg_491) begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & (ap_const_logic_1 == ap_reg_ppiten_pp0_it1) & ~(ap_sig_bdd_94 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it0)) & ~(j6_mid2_reg_491 == ap_const_lv3_3) & ~(j6_mid2_reg_491 == ap_const_lv3_2) & ~(j6_mid2_reg_491 == ap_const_lv3_1) & ~(j6_mid2_reg_491 == ap_const_lv3_0))) begin
        f2_4_we0 = ap_const_logic_1;
    end else begin
        f2_4_we0 = ap_const_logic_0;
    end
end

always @ (i5_reg_165 or exitcond_flatten6_reg_477 or ap_sig_cseq_ST_pp0_stg0_fsm_1 or ap_reg_ppiten_pp0_it1 or i5_mid2_reg_486) begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & (ap_const_logic_1 == ap_reg_ppiten_pp0_it1) & (exitcond_flatten6_reg_477 == ap_const_lv1_0))) begin
        i5_phi_fu_169_p4 = i5_mid2_reg_486;
    end else begin
        i5_phi_fu_169_p4 = i5_reg_165;
    end
end

always @ (j6_reg_187 or exitcond_flatten6_reg_477 or ap_sig_cseq_ST_pp0_stg0_fsm_1 or ap_reg_ppiten_pp0_it1 or j6_mid2_reg_491) begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & (ap_const_logic_1 == ap_reg_ppiten_pp0_it1) & (exitcond_flatten6_reg_477 == ap_const_lv1_0))) begin
        j6_phi_fu_191_p4 = j6_mid2_reg_491;
    end else begin
        j6_phi_fu_191_p4 = j6_reg_187;
    end
end

always @ (k7_reg_209 or exitcond_flatten6_reg_477 or ap_sig_cseq_ST_pp0_stg0_fsm_1 or ap_reg_ppiten_pp0_it1 or k7_mid2_reg_496) begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & (ap_const_logic_1 == ap_reg_ppiten_pp0_it1) & (exitcond_flatten6_reg_477 == ap_const_lv1_0))) begin
        k7_phi_fu_213_p4 = k7_mid2_reg_496;
    end else begin
        k7_phi_fu_213_p4 = k7_reg_209;
    end
end
always @ (ap_CS_fsm or exitcond_flatten6_fu_231_p2 or ap_sig_bdd_94 or ap_reg_ppiten_pp0_it0 or ap_sig_bdd_127) begin
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
            if (~((ap_const_logic_1 == ap_reg_ppiten_pp0_it0) & ~(ap_sig_bdd_94 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it0)) & ~(exitcond_flatten6_fu_231_p2 == ap_const_lv1_0))) begin
                ap_NS_fsm = ap_ST_pp0_stg0_fsm_1;
            end else if (((ap_const_logic_1 == ap_reg_ppiten_pp0_it0) & ~(ap_sig_bdd_94 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it0)) & ~(exitcond_flatten6_fu_231_p2 == ap_const_lv1_0))) begin
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
    ap_sig_bdd_340 = (ap_const_lv1_1 == ap_CS_fsm[ap_const_lv32_2]);
end


always @ (ap_CS_fsm) begin
    ap_sig_bdd_88 = (ap_const_lv1_1 == ap_CS_fsm[ap_const_lv32_1]);
end


always @ (Filter2_TVALID or exitcond_flatten6_fu_231_p2) begin
    ap_sig_bdd_94 = ((Filter2_TVALID == ap_const_logic_0) & (exitcond_flatten6_fu_231_p2 == ap_const_lv1_0));
end

assign exitcond8_mid1_fu_359_p2 = (exitcond8_mid_fu_275_p2 & not_exitcond_flatten_mid_fu_353_p2);

assign exitcond8_mid_fu_275_p2 = (exitcond_fu_269_p2 & not_exitcond_flatten_fu_263_p2);

assign exitcond_flatten2_fu_281_p2 = (indvar_flatten_reg_198 == ap_const_lv8_60? 1'b1: 1'b0);

assign exitcond_flatten6_fu_231_p2 = (indvar_flatten5_reg_154 == ap_const_lv12_960? 1'b1: 1'b0);

assign exitcond_flatten_fu_249_p2 = (indvar_flatten6_reg_176 == ap_const_lv10_1E0? 1'b1: 1'b0);

assign exitcond_flatten_mid_fu_287_p2 = (exitcond_flatten2_fu_281_p2 & not_exitcond_flatten_fu_263_p2);

assign exitcond_flatten_not_fu_347_p2 = (exitcond_flatten2_fu_281_p2 ^ ap_const_lv1_1);

assign exitcond_fu_269_p2 = (l8_reg_220 == ap_const_lv5_10? 1'b1: 1'b0);

assign f2_0_address0 = tmp_744_cast_fu_469_p1;

assign f2_0_d0 = Filter2_read_reg_506;

assign f2_1_address0 = tmp_744_cast_fu_469_p1;

assign f2_1_d0 = Filter2_read_reg_506;

assign f2_2_address0 = tmp_744_cast_fu_469_p1;

assign f2_2_d0 = Filter2_read_reg_506;

assign f2_3_address0 = tmp_744_cast_fu_469_p1;

assign f2_3_d0 = Filter2_read_reg_506;

assign f2_4_address0 = tmp_744_cast_fu_469_p1;

assign f2_4_d0 = Filter2_read_reg_506;

assign i5_mid2_fu_293_p3 = ((exitcond_flatten_fu_249_p2[0:0] === 1'b1) ? i_fu_243_p2 : i5_phi_fu_169_p4);

assign i_fu_243_p2 = (i5_phi_fu_169_p4 + ap_const_lv3_1);

assign indvar_flatten11_op_fu_455_p2 = (indvar_flatten6_reg_176 + ap_const_lv10_1);

assign indvar_flatten_next5_fu_461_p3 = ((exitcond_flatten_fu_249_p2[0:0] === 1'b1) ? ap_const_lv10_1 : indvar_flatten11_op_fu_455_p2);

assign indvar_flatten_next6_fu_237_p2 = (indvar_flatten5_reg_154 + ap_const_lv12_1);

assign indvar_flatten_next_fu_447_p3 = ((tmp_712_fu_333_p2[0:0] === 1'b1) ? ap_const_lv8_1 : indvar_flatten_op_fu_441_p2);

assign indvar_flatten_op_fu_441_p2 = (indvar_flatten_reg_198 + ap_const_lv8_1);

assign j6_mid2_fu_365_p3 = ((exitcond_flatten_mid_fu_287_p2[0:0] === 1'b1) ? j_5_fu_327_p2 : j6_mid_fu_255_p3);

assign j6_mid_fu_255_p3 = ((exitcond_flatten_fu_249_p2[0:0] === 1'b1) ? ap_const_lv3_0 : j6_phi_fu_191_p4);

assign j_5_fu_327_p2 = (j6_mid_fu_255_p3 + ap_const_lv3_1);

assign k7_mid2_fu_399_p3 = ((exitcond8_mid1_fu_359_p2[0:0] === 1'b1) ? k_fu_373_p2 : k7_mid_fu_339_p3);

assign k7_mid_fu_339_p3 = ((tmp_712_fu_333_p2[0:0] === 1'b1) ? ap_const_lv3_0 : k7_phi_fu_213_p4);

assign k_fu_373_p2 = (k7_mid_fu_339_p3 + ap_const_lv3_1);

assign l8_mid2_fu_391_p3 = ((tmp_756_fu_385_p2[0:0] === 1'b1) ? ap_const_lv5_0 : l8_reg_220);

assign l_fu_435_p2 = (l8_mid2_fu_391_p3 + ap_const_lv5_1);

assign not_exitcond_flatten_fu_263_p2 = (exitcond_flatten_fu_249_p2 ^ ap_const_lv1_1);

assign not_exitcond_flatten_mid_fu_353_p2 = (exitcond_flatten_fu_249_p2 | exitcond_flatten_not_fu_347_p2);

assign p_shl2_cast_fu_317_p1 = tmp_s_fu_309_p3;

assign tmp_11_cast_fu_407_p1 = k7_mid2_fu_399_p3;

assign tmp_711_fu_321_p2 = (tmp_fu_301_p3 - p_shl2_cast_fu_317_p1);

assign tmp_712_fu_333_p2 = (exitcond_flatten_mid_fu_287_p2 | exitcond_flatten_fu_249_p2);

assign tmp_713_fu_379_p2 = (exitcond8_mid1_fu_359_p2 | exitcond_flatten_mid_fu_287_p2);

assign tmp_714_fu_411_p2 = (tmp_711_fu_321_p2 + tmp_11_cast_fu_407_p1);

assign tmp_715_fu_429_p2 = (tmp_743_cast_fu_417_p3 + tmp_cast_fu_425_p1);

assign tmp_743_cast_fu_417_p3 = {{tmp_714_fu_411_p2}, {ap_const_lv4_0}};

assign tmp_744_cast_fu_469_p1 = tmp_715_reg_501;

assign tmp_756_fu_385_p2 = (tmp_713_fu_379_p2 | exitcond_flatten_fu_249_p2);

assign tmp_cast_fu_425_p1 = l8_mid2_fu_391_p3;

assign tmp_fu_301_p3 = {{i5_mid2_fu_293_p3}, {ap_const_lv3_0}};

assign tmp_s_fu_309_p3 = {{i5_mid2_fu_293_p3}, {ap_const_lv1_0}};


endmodule //inference_Loop_4_proc
