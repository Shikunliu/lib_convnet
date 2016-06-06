// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module inference_Loop_inference_label2_proc (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_continue,
        ap_idle,
        ap_ready,
        bias1_address0,
        bias1_ce0,
        bias1_q0,
        ap_return_0,
        ap_return_1,
        ap_return_2,
        ap_return_3,
        ap_return_4,
        ap_return_5
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
parameter    ap_const_lv3_0 = 3'b000;
parameter    ap_const_lv3_4 = 3'b100;
parameter    ap_const_lv3_3 = 3'b11;
parameter    ap_const_lv3_2 = 3'b10;
parameter    ap_const_lv3_1 = 3'b1;
parameter    ap_const_lv32_2 = 32'b10;
parameter    ap_const_lv3_6 = 3'b110;
parameter    ap_true = 1'b1;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
input   ap_continue;
output   ap_idle;
output   ap_ready;
output  [2:0] bias1_address0;
output   bias1_ce0;
input  [31:0] bias1_q0;
output  [31:0] ap_return_0;
output  [31:0] ap_return_1;
output  [31:0] ap_return_2;
output  [31:0] ap_return_3;
output  [31:0] ap_return_4;
output  [31:0] ap_return_5;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg bias1_ce0;
reg    ap_done_reg = 1'b0;
(* fsm_encoding = "none" *) reg   [2:0] ap_CS_fsm = 3'b1;
reg    ap_sig_cseq_ST_st1_fsm_0;
reg    ap_sig_bdd_22;
reg   [2:0] k4_reg_74;
wire   [0:0] exitcond_fu_86_p2;
reg   [0:0] exitcond_reg_223;
reg    ap_sig_cseq_ST_pp0_stg0_fsm_1;
reg    ap_sig_bdd_51;
reg    ap_reg_ppiten_pp0_it0 = 1'b0;
reg    ap_reg_ppiten_pp0_it1 = 1'b0;
wire   [2:0] k_fu_92_p2;
reg   [2:0] k_reg_227;
reg    ap_sig_bdd_68;
reg   [2:0] k4_phi_fu_78_p4;
wire   [63:0] tmp_1_fu_98_p1;
reg   [31:0] b1_5_fu_38;
reg    ap_sig_cseq_ST_st4_fsm_2;
reg    ap_sig_bdd_108;
reg   [31:0] b1_5_1_fu_42;
reg   [31:0] b1_5_2_fu_46;
reg   [31:0] b1_5_3_fu_50;
reg   [31:0] b1_5_4_fu_54;
reg   [31:0] b1_5_5_fu_58;
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
        if (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & ~(exitcond_fu_86_p2 == ap_const_lv1_0))) begin
            ap_reg_ppiten_pp0_it0 <= ap_const_logic_0;
        end else if (((ap_const_logic_1 == ap_sig_cseq_ST_st1_fsm_0) & ~ap_sig_bdd_68)) begin
            ap_reg_ppiten_pp0_it0 <= ap_const_logic_1;
        end
    end
end

always @ (posedge ap_clk) begin : ap_ret_ap_reg_ppiten_pp0_it1
    if (ap_rst == 1'b1) begin
        ap_reg_ppiten_pp0_it1 <= ap_const_logic_0;
    end else begin
        if (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & (exitcond_fu_86_p2 == ap_const_lv1_0))) begin
            ap_reg_ppiten_pp0_it1 <= ap_const_logic_1;
        end else if ((((ap_const_logic_1 == ap_sig_cseq_ST_st1_fsm_0) & ~ap_sig_bdd_68) | ((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & ~(exitcond_fu_86_p2 == ap_const_lv1_0)))) begin
            ap_reg_ppiten_pp0_it1 <= ap_const_logic_0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & (ap_const_logic_1 == ap_reg_ppiten_pp0_it1) & (exitcond_reg_223 == ap_const_lv1_0))) begin
        k4_reg_74 <= k_reg_227;
    end else if (((ap_const_logic_1 == ap_sig_cseq_ST_st1_fsm_0) & ~ap_sig_bdd_68)) begin
        k4_reg_74 <= ap_const_lv3_0;
    end
end

always @ (posedge ap_clk) begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & (ap_const_logic_1 == ap_reg_ppiten_pp0_it1) & (k4_reg_74 == ap_const_lv3_4))) begin
        b1_5_1_fu_42 <= bias1_q0;
    end
end

always @ (posedge ap_clk) begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & (ap_const_logic_1 == ap_reg_ppiten_pp0_it1) & (k4_reg_74 == ap_const_lv3_0))) begin
        b1_5_2_fu_46 <= bias1_q0;
    end
end

always @ (posedge ap_clk) begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & (ap_const_logic_1 == ap_reg_ppiten_pp0_it1) & (k4_reg_74 == ap_const_lv3_3))) begin
        b1_5_3_fu_50 <= bias1_q0;
    end
end

always @ (posedge ap_clk) begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & (ap_const_logic_1 == ap_reg_ppiten_pp0_it1) & (k4_reg_74 == ap_const_lv3_2))) begin
        b1_5_4_fu_54 <= bias1_q0;
    end
end

always @ (posedge ap_clk) begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & (ap_const_logic_1 == ap_reg_ppiten_pp0_it1) & (k4_reg_74 == ap_const_lv3_1))) begin
        b1_5_5_fu_58 <= bias1_q0;
    end
end

always @ (posedge ap_clk) begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & (ap_const_logic_1 == ap_reg_ppiten_pp0_it1) & ~(k4_reg_74 == ap_const_lv3_4) & ~(k4_reg_74 == ap_const_lv3_3) & ~(k4_reg_74 == ap_const_lv3_2) & ~(k4_reg_74 == ap_const_lv3_1) & ~(k4_reg_74 == ap_const_lv3_0))) begin
        b1_5_fu_38 <= bias1_q0;
    end
end

always @ (posedge ap_clk) begin
    if ((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1)) begin
        exitcond_reg_223 <= exitcond_fu_86_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & (ap_const_logic_1 == ap_reg_ppiten_pp0_it0))) begin
        k_reg_227 <= k_fu_92_p2;
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

always @ (ap_sig_bdd_51) begin
    if (ap_sig_bdd_51) begin
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

always @ (ap_sig_bdd_108) begin
    if (ap_sig_bdd_108) begin
        ap_sig_cseq_ST_st4_fsm_2 = ap_const_logic_1;
    end else begin
        ap_sig_cseq_ST_st4_fsm_2 = ap_const_logic_0;
    end
end

always @ (ap_sig_cseq_ST_pp0_stg0_fsm_1 or ap_reg_ppiten_pp0_it0) begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & (ap_const_logic_1 == ap_reg_ppiten_pp0_it0))) begin
        bias1_ce0 = ap_const_logic_1;
    end else begin
        bias1_ce0 = ap_const_logic_0;
    end
end

always @ (k4_reg_74 or exitcond_reg_223 or ap_sig_cseq_ST_pp0_stg0_fsm_1 or ap_reg_ppiten_pp0_it1 or k_reg_227) begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & (ap_const_logic_1 == ap_reg_ppiten_pp0_it1) & (exitcond_reg_223 == ap_const_lv1_0))) begin
        k4_phi_fu_78_p4 = k_reg_227;
    end else begin
        k4_phi_fu_78_p4 = k4_reg_74;
    end
end
always @ (ap_CS_fsm or exitcond_fu_86_p2 or ap_reg_ppiten_pp0_it0 or ap_sig_bdd_68) begin
    case (ap_CS_fsm)
        ap_ST_st1_fsm_0 : 
        begin
            if (~ap_sig_bdd_68) begin
                ap_NS_fsm = ap_ST_pp0_stg0_fsm_1;
            end else begin
                ap_NS_fsm = ap_ST_st1_fsm_0;
            end
        end
        ap_ST_pp0_stg0_fsm_1 : 
        begin
            if (~((ap_const_logic_1 == ap_reg_ppiten_pp0_it0) & ~(exitcond_fu_86_p2 == ap_const_lv1_0))) begin
                ap_NS_fsm = ap_ST_pp0_stg0_fsm_1;
            end else begin
                ap_NS_fsm = ap_ST_st4_fsm_2;
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


assign ap_return_0 = b1_5_2_fu_46;

assign ap_return_1 = b1_5_5_fu_58;

assign ap_return_2 = b1_5_4_fu_54;

assign ap_return_3 = b1_5_3_fu_50;

assign ap_return_4 = b1_5_1_fu_42;

assign ap_return_5 = b1_5_fu_38;


always @ (ap_CS_fsm) begin
    ap_sig_bdd_108 = (ap_const_lv1_1 == ap_CS_fsm[ap_const_lv32_2]);
end


always @ (ap_CS_fsm) begin
    ap_sig_bdd_22 = (ap_CS_fsm[ap_const_lv32_0] == ap_const_lv1_1);
end


always @ (ap_CS_fsm) begin
    ap_sig_bdd_51 = (ap_const_lv1_1 == ap_CS_fsm[ap_const_lv32_1]);
end


always @ (ap_start or ap_done_reg) begin
    ap_sig_bdd_68 = ((ap_start == ap_const_logic_0) | (ap_done_reg == ap_const_logic_1));
end

assign bias1_address0 = tmp_1_fu_98_p1;

assign exitcond_fu_86_p2 = (k4_phi_fu_78_p4 == ap_const_lv3_6? 1'b1: 1'b0);

assign k_fu_92_p2 = (k4_phi_fu_78_p4 + ap_const_lv3_1);

assign tmp_1_fu_98_p1 = k4_phi_fu_78_p4;


endmodule //inference_Loop_inference_label2_proc

