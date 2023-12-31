// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2.1
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module conv_1_16_18_s (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        input_r_address0,
        input_r_ce0,
        input_r_q0,
        input_r_address1,
        input_r_ce1,
        input_r_q1,
        output_r_address0,
        output_r_ce0,
        output_r_we0,
        output_r_d0,
        output_r_q0
);

parameter    ap_ST_fsm_state1 = 6'd1;
parameter    ap_ST_fsm_state2 = 6'd2;
parameter    ap_ST_fsm_pp0_stage0 = 6'd4;
parameter    ap_ST_fsm_pp0_stage1 = 6'd8;
parameter    ap_ST_fsm_state6 = 6'd16;
parameter    ap_ST_fsm_state7 = 6'd32;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
output  [8:0] input_r_address0;
output   input_r_ce0;
input  [0:0] input_r_q0;
output  [8:0] input_r_address1;
output   input_r_ce1;
input  [0:0] input_r_q1;
output  [7:0] output_r_address0;
output   output_r_ce0;
output   output_r_we0;
output  [15:0] output_r_d0;
input  [15:0] output_r_q0;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg[8:0] input_r_address0;
reg input_r_ce0;
reg input_r_ce1;
reg output_r_ce0;
reg output_r_we0;
reg[15:0] output_r_d0;

(* fsm_encoding = "none" *) reg   [5:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
wire   [5:0] w_conv1_0_address0;
reg    w_conv1_0_ce0;
wire   [0:0] w_conv1_0_q0;
wire   [5:0] w_conv1_1_address0;
reg    w_conv1_1_ce0;
wire   [0:0] w_conv1_1_q0;
wire   [5:0] w_conv1_2_address0;
reg    w_conv1_2_ce0;
wire   [0:0] w_conv1_2_q0;
reg   [3:0] p_014_0_reg_232;
reg   [1:0] c_0_reg_244;
wire   [0:0] icmp_ln66_fu_255_p2;
wire    ap_CS_fsm_state2;
wire   [12:0] add_ln66_fu_261_p2;
reg   [12:0] add_ln66_reg_773;
wire   [0:0] icmp_ln67_fu_273_p2;
reg   [0:0] icmp_ln67_reg_778;
wire   [4:0] select_ln76_2_fu_287_p3;
reg   [4:0] select_ln76_2_reg_783;
wire   [6:0] sub_ln76_fu_307_p2;
reg   [6:0] sub_ln76_reg_788;
wire   [5:0] zext_ln76_60_fu_313_p1;
reg   [5:0] zext_ln76_60_reg_793;
wire   [6:0] p_cast7_mid2_v_fu_321_p3;
reg   [6:0] p_cast7_mid2_v_reg_798;
wire   [6:0] or_ln76_fu_329_p2;
reg   [6:0] or_ln76_reg_804;
wire   [4:0] select_ln81_2_fu_373_p3;
reg   [4:0] select_ln81_2_reg_810;
wire   [9:0] add_ln76_10_fu_409_p2;
reg   [9:0] add_ln76_10_reg_816;
reg   [7:0] output_addr_reg_821;
wire   [4:0] y_fu_426_p2;
reg   [4:0] y_reg_826;
wire   [9:0] add_ln76_12_fu_456_p2;
reg   [9:0] add_ln76_12_reg_831;
wire   [9:0] add_ln76_13_fu_492_p2;
reg   [9:0] add_ln76_13_reg_836;
wire   [0:0] icmp_ln70_fu_498_p2;
reg   [0:0] icmp_ln70_reg_841;
wire    ap_CS_fsm_pp0_stage0;
wire    ap_block_state3_pp0_stage0_iter0;
wire    ap_block_state5_pp0_stage0_iter1;
wire    ap_block_pp0_stage0_11001;
wire   [1:0] c_fu_504_p2;
reg   [1:0] c_reg_845;
reg    ap_enable_reg_pp0_iter0;
wire   [9:0] add_ln76_16_fu_543_p2;
reg   [9:0] add_ln76_16_reg_860;
wire    ap_CS_fsm_pp0_stage1;
wire    ap_block_state4_pp0_stage1_iter0;
wire    ap_block_pp0_stage1_11001;
wire   [0:0] xor_ln76_96_fu_574_p2;
reg   [0:0] xor_ln76_96_reg_885;
wire   [0:0] xor_ln76_97_fu_586_p2;
reg   [0:0] xor_ln76_97_reg_890;
reg   [0:0] w_conv1_2_load_reg_895;
wire   [3:0] add_ln700_2_fu_629_p2;
reg    ap_enable_reg_pp0_iter1;
wire   [0:0] icmp_ln895_fu_741_p2;
reg   [0:0] icmp_ln895_reg_905;
wire    ap_CS_fsm_state6;
wire   [9:0] select_ln67_fu_753_p3;
reg   [9:0] select_ln67_reg_910;
wire    ap_block_pp0_stage0_subdone;
reg    ap_condition_pp0_exit_iter0_state3;
wire    ap_block_pp0_stage1_subdone;
reg   [12:0] indvar_flatten16_reg_176;
wire    ap_CS_fsm_state7;
reg   [4:0] n_0_reg_187;
reg   [9:0] indvar_flatten_reg_198;
reg   [4:0] x_0_reg_210;
reg   [4:0] y_0_reg_221;
wire    ap_block_pp0_stage0;
reg   [1:0] ap_phi_mux_c_0_phi_fu_248_p4;
wire   [63:0] zext_ln81_2_fu_421_p1;
wire   [63:0] zext_ln76_68_fu_528_p1;
wire   [63:0] zext_ln76_69_fu_538_p1;
wire  signed [63:0] sext_ln76_fu_557_p1;
wire   [63:0] zext_ln76_70_fu_564_p1;
wire    ap_block_pp0_stage1;
wire   [4:0] n_fu_267_p2;
wire   [6:0] tmp_s_fu_299_p3;
wire   [6:0] zext_ln76_fu_295_p1;
wire   [3:0] trunc_ln76_fu_317_p1;
wire   [0:0] icmp_ln68_fu_341_p2;
wire   [0:0] xor_ln76_101_fu_335_p2;
wire   [4:0] select_ln76_fu_279_p3;
wire   [0:0] and_ln76_fu_347_p2;
wire   [0:0] or_ln81_fu_359_p2;
wire   [4:0] x_fu_353_p2;
wire   [4:0] select_ln81_fu_365_p3;
wire   [8:0] tmp_26_fu_385_p3;
wire   [5:0] tmp_27_fu_397_p3;
wire   [9:0] zext_ln76_61_fu_393_p1;
wire   [9:0] zext_ln76_62_fu_405_p1;
wire   [9:0] zext_ln81_fu_381_p1;
wire   [9:0] add_ln81_fu_415_p2;
wire   [8:0] tmp_28_fu_432_p3;
wire   [5:0] tmp_29_fu_444_p3;
wire   [9:0] zext_ln76_63_fu_440_p1;
wire   [9:0] zext_ln76_64_fu_452_p1;
wire   [4:0] add_ln76_4_fu_462_p2;
wire   [8:0] tmp_30_fu_468_p3;
wire   [5:0] tmp_31_fu_480_p3;
wire   [9:0] zext_ln76_65_fu_476_p1;
wire   [9:0] zext_ln76_66_fu_488_p1;
wire   [4:0] zext_ln70_fu_510_p1;
wire   [4:0] add_ln76_fu_514_p2;
wire   [9:0] zext_ln76_67_fu_519_p1;
wire   [9:0] add_ln76_14_fu_523_p2;
wire   [9:0] add_ln76_15_fu_533_p2;
wire   [6:0] zext_ln76_71_fu_548_p1;
wire   [6:0] add_ln76_17_fu_552_p2;
wire   [0:0] xor_ln76_fu_568_p2;
wire   [0:0] xor_ln76_99_fu_580_p2;
wire   [0:0] xor_ln76_100_fu_598_p2;
wire   [0:0] xor_ln76_98_fu_603_p2;
wire   [1:0] zext_ln700_fu_609_p1;
wire   [1:0] zext_ln76_54_fu_595_p1;
wire   [1:0] zext_ln76_53_fu_592_p1;
wire   [1:0] add_ln700_fu_613_p2;
wire   [1:0] add_ln700_48_fu_619_p2;
wire   [3:0] zext_ln700_32_fu_625_p1;
wire   [4:0] shl_ln_fu_635_p3;
wire   [4:0] accum_V_fu_643_p2;
wire   [7:0] zext_ln895_fu_657_p1;
wire   [7:0] zext_ln895_4_fu_660_p1;
wire   [0:0] icmp_ln895_257_fu_653_p2;
wire   [7:0] sub_ln895_fu_663_p2;
wire   [7:0] sub_ln895_3_fu_675_p2;
wire   [7:0] xor_ln895_fu_669_p2;
wire   [7:0] select_ln895_fu_681_p3;
wire   [7:0] select_ln895_4_fu_697_p3;
wire   [7:0] sub_ln895_4_fu_705_p2;
wire   [127:0] select_ln895_3_fu_689_p3;
wire   [127:0] zext_ln895_5_fu_711_p1;
wire   [127:0] zext_ln895_6_fu_715_p1;
wire   [127:0] lshr_ln895_fu_719_p2;
wire   [127:0] lshr_ln895_2_fu_725_p2;
wire   [127:0] and_ln895_fu_731_p2;
wire  signed [7:0] sext_ln895_fu_649_p1;
wire   [7:0] trunc_ln895_fu_737_p1;
wire   [9:0] add_ln67_2_fu_747_p2;
reg   [5:0] ap_NS_fsm;
reg    ap_idle_pp0;
wire    ap_enable_pp0;

// power-on initialization
initial begin
#0 ap_CS_fsm = 6'd1;
#0 ap_enable_reg_pp0_iter0 = 1'b0;
#0 ap_enable_reg_pp0_iter1 = 1'b0;
end

conv_1_16_18_s_w_conv1_0 #(
    .DataWidth( 1 ),
    .AddressRange( 48 ),
    .AddressWidth( 6 ))
w_conv1_0_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(w_conv1_0_address0),
    .ce0(w_conv1_0_ce0),
    .q0(w_conv1_0_q0)
);

conv_1_16_18_s_w_conv1_1 #(
    .DataWidth( 1 ),
    .AddressRange( 48 ),
    .AddressWidth( 6 ))
w_conv1_1_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(w_conv1_1_address0),
    .ce0(w_conv1_1_ce0),
    .q0(w_conv1_1_q0)
);

conv_1_16_18_s_w_conv1_2 #(
    .DataWidth( 1 ),
    .AddressRange( 48 ),
    .AddressWidth( 6 ))
w_conv1_2_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(w_conv1_2_address0),
    .ce0(w_conv1_2_ce0),
    .q0(w_conv1_2_q0)
);

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter0 <= 1'b0;
    end else begin
        if (((1'b1 == ap_condition_pp0_exit_iter0_state3) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_subdone))) begin
            ap_enable_reg_pp0_iter0 <= 1'b0;
        end else if (((icmp_ln66_fu_255_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
            ap_enable_reg_pp0_iter0 <= 1'b1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter1 <= 1'b0;
    end else begin
        if ((((1'b1 == ap_CS_fsm_pp0_stage1) & (1'b0 == ap_block_pp0_stage1_subdone)) | ((1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_subdone)))) begin
            ap_enable_reg_pp0_iter1 <= ap_enable_reg_pp0_iter0;
        end else if (((icmp_ln66_fu_255_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
            ap_enable_reg_pp0_iter1 <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln66_fu_255_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        c_0_reg_244 <= 2'd0;
    end else if (((icmp_ln70_reg_841 == 1'd0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        c_0_reg_244 <= c_reg_845;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state7)) begin
        indvar_flatten16_reg_176 <= add_ln66_reg_773;
    end else if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        indvar_flatten16_reg_176 <= 13'd0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state7)) begin
        indvar_flatten_reg_198 <= select_ln67_reg_910;
    end else if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        indvar_flatten_reg_198 <= 10'd0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state7)) begin
        n_0_reg_187 <= select_ln76_2_reg_783;
    end else if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        n_0_reg_187 <= 5'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln66_fu_255_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        p_014_0_reg_232 <= 4'd0;
    end else if (((icmp_ln70_reg_841 == 1'd0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        p_014_0_reg_232 <= add_ln700_2_fu_629_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state7)) begin
        x_0_reg_210 <= select_ln81_2_reg_810;
    end else if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        x_0_reg_210 <= 5'd0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state7)) begin
        y_0_reg_221 <= y_reg_826;
    end else if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        y_0_reg_221 <= 5'd0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        add_ln66_reg_773 <= add_ln66_fu_261_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln66_fu_255_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        add_ln76_10_reg_816[9 : 1] <= add_ln76_10_fu_409_p2[9 : 1];
        add_ln76_12_reg_831[9 : 1] <= add_ln76_12_fu_456_p2[9 : 1];
        add_ln76_13_reg_836[9 : 1] <= add_ln76_13_fu_492_p2[9 : 1];
        icmp_ln67_reg_778 <= icmp_ln67_fu_273_p2;
        or_ln76_reg_804[6 : 3] <= or_ln76_fu_329_p2[6 : 3];
        output_addr_reg_821 <= zext_ln81_2_fu_421_p1;
        p_cast7_mid2_v_reg_798[6 : 3] <= p_cast7_mid2_v_fu_321_p3[6 : 3];
        select_ln76_2_reg_783 <= select_ln76_2_fu_287_p3;
        select_ln81_2_reg_810 <= select_ln81_2_fu_373_p3;
        sub_ln76_reg_788 <= sub_ln76_fu_307_p2;
        y_reg_826 <= y_fu_426_p2;
        zext_ln76_60_reg_793[4 : 0] <= zext_ln76_60_fu_313_p1[4 : 0];
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln70_fu_498_p2 == 1'd0) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        add_ln76_16_reg_860 <= add_ln76_16_fu_543_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        c_reg_845 <= c_fu_504_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        icmp_ln70_reg_841 <= icmp_ln70_fu_498_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        icmp_ln895_reg_905 <= icmp_ln895_fu_741_p2;
        select_ln67_reg_910 <= select_ln67_fu_753_p3;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln70_reg_841 == 1'd0) & (1'b1 == ap_CS_fsm_pp0_stage1) & (1'b0 == ap_block_pp0_stage1_11001))) begin
        w_conv1_2_load_reg_895 <= w_conv1_2_q0;
        xor_ln76_96_reg_885 <= xor_ln76_96_fu_574_p2;
        xor_ln76_97_reg_890 <= xor_ln76_97_fu_586_p2;
    end
end

always @ (*) begin
    if ((icmp_ln70_fu_498_p2 == 1'd1)) begin
        ap_condition_pp0_exit_iter0_state3 = 1'b1;
    end else begin
        ap_condition_pp0_exit_iter0_state3 = 1'b0;
    end
end

always @ (*) begin
    if ((((icmp_ln66_fu_255_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2)) | ((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1)))) begin
        ap_done = 1'b1;
    end else begin
        ap_done = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1))) begin
        ap_idle = 1'b1;
    end else begin
        ap_idle = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter1 == 1'b0) & (ap_enable_reg_pp0_iter0 == 1'b0))) begin
        ap_idle_pp0 = 1'b1;
    end else begin
        ap_idle_pp0 = 1'b0;
    end
end

always @ (*) begin
    if (((icmp_ln70_reg_841 == 1'd0) & (1'b0 == ap_block_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        ap_phi_mux_c_0_phi_fu_248_p4 = c_reg_845;
    end else begin
        ap_phi_mux_c_0_phi_fu_248_p4 = c_0_reg_244;
    end
end

always @ (*) begin
    if (((icmp_ln66_fu_255_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if ((ap_enable_reg_pp0_iter0 == 1'b1)) begin
        if (((1'b0 == ap_block_pp0_stage1) & (1'b1 == ap_CS_fsm_pp0_stage1))) begin
            input_r_address0 = zext_ln76_70_fu_564_p1;
        end else if (((1'b0 == ap_block_pp0_stage0) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
            input_r_address0 = zext_ln76_68_fu_528_p1;
        end else begin
            input_r_address0 = 'bx;
        end
    end else begin
        input_r_address0 = 'bx;
    end
end

always @ (*) begin
    if ((((1'b1 == ap_CS_fsm_pp0_stage1) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b0 == ap_block_pp0_stage1_11001)) | ((ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001)))) begin
        input_r_ce0 = 1'b1;
    end else begin
        input_r_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        input_r_ce1 = 1'b1;
    end else begin
        input_r_ce1 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state7) | (1'b1 == ap_CS_fsm_state6))) begin
        output_r_ce0 = 1'b1;
    end else begin
        output_r_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state7)) begin
        output_r_we0 = 1'b1;
    end else begin
        output_r_we0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        w_conv1_0_ce0 = 1'b1;
    end else begin
        w_conv1_0_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        w_conv1_1_ce0 = 1'b1;
    end else begin
        w_conv1_1_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        w_conv1_2_ce0 = 1'b1;
    end else begin
        w_conv1_2_ce0 = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_state2 : begin
            if (((icmp_ln66_fu_255_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end else begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end
        end
        ap_ST_fsm_pp0_stage0 : begin
            if ((~((ap_enable_reg_pp0_iter0 == 1'b1) & (1'b0 == ap_block_pp0_stage0_subdone) & (icmp_ln70_fu_498_p2 == 1'd1)) & (1'b0 == ap_block_pp0_stage0_subdone))) begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage1;
            end else if (((ap_enable_reg_pp0_iter0 == 1'b1) & (1'b0 == ap_block_pp0_stage0_subdone) & (icmp_ln70_fu_498_p2 == 1'd1))) begin
                ap_NS_fsm = ap_ST_fsm_state6;
            end else begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end
        end
        ap_ST_fsm_pp0_stage1 : begin
            if ((1'b0 == ap_block_pp0_stage1_subdone)) begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end else begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage1;
            end
        end
        ap_ST_fsm_state6 : begin
            ap_NS_fsm = ap_ST_fsm_state7;
        end
        ap_ST_fsm_state7 : begin
            ap_NS_fsm = ap_ST_fsm_state2;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign accum_V_fu_643_p2 = ($signed(5'd23) + $signed(shl_ln_fu_635_p3));

assign add_ln66_fu_261_p2 = (indvar_flatten16_reg_176 + 13'd1);

assign add_ln67_2_fu_747_p2 = (10'd1 + indvar_flatten_reg_198);

assign add_ln700_2_fu_629_p2 = (zext_ln700_32_fu_625_p1 + p_014_0_reg_232);

assign add_ln700_48_fu_619_p2 = (zext_ln76_53_fu_592_p1 + add_ln700_fu_613_p2);

assign add_ln700_fu_613_p2 = (zext_ln700_fu_609_p1 + zext_ln76_54_fu_595_p1);

assign add_ln76_10_fu_409_p2 = (zext_ln76_61_fu_393_p1 + zext_ln76_62_fu_405_p1);

assign add_ln76_12_fu_456_p2 = (zext_ln76_63_fu_440_p1 + zext_ln76_64_fu_452_p1);

assign add_ln76_13_fu_492_p2 = (zext_ln76_65_fu_476_p1 + zext_ln76_66_fu_488_p1);

assign add_ln76_14_fu_523_p2 = (add_ln76_10_reg_816 + zext_ln76_67_fu_519_p1);

assign add_ln76_15_fu_533_p2 = (add_ln76_12_reg_831 + zext_ln76_67_fu_519_p1);

assign add_ln76_16_fu_543_p2 = (add_ln76_13_reg_836 + zext_ln76_67_fu_519_p1);

assign add_ln76_17_fu_552_p2 = (sub_ln76_reg_788 + zext_ln76_71_fu_548_p1);

assign add_ln76_4_fu_462_p2 = (5'd2 + select_ln81_fu_365_p3);

assign add_ln76_fu_514_p2 = (select_ln81_2_reg_810 + zext_ln70_fu_510_p1);

assign add_ln81_fu_415_p2 = (zext_ln81_fu_381_p1 + zext_ln76_61_fu_393_p1);

assign and_ln76_fu_347_p2 = (xor_ln76_101_fu_335_p2 & icmp_ln68_fu_341_p2);

assign and_ln895_fu_731_p2 = (lshr_ln895_fu_719_p2 & lshr_ln895_2_fu_725_p2);

assign ap_CS_fsm_pp0_stage0 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_pp0_stage1 = ap_CS_fsm[32'd3];

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state6 = ap_CS_fsm[32'd4];

assign ap_CS_fsm_state7 = ap_CS_fsm[32'd5];

assign ap_block_pp0_stage0 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage0_11001 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage0_subdone = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage1 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage1_11001 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage1_subdone = ~(1'b1 == 1'b1);

assign ap_block_state3_pp0_stage0_iter0 = ~(1'b1 == 1'b1);

assign ap_block_state4_pp0_stage1_iter0 = ~(1'b1 == 1'b1);

assign ap_block_state5_pp0_stage0_iter1 = ~(1'b1 == 1'b1);

assign ap_enable_pp0 = (ap_idle_pp0 ^ 1'b1);

assign c_fu_504_p2 = (ap_phi_mux_c_0_phi_fu_248_p4 + 2'd1);

assign icmp_ln66_fu_255_p2 = ((indvar_flatten16_reg_176 == 13'd4096) ? 1'b1 : 1'b0);

assign icmp_ln67_fu_273_p2 = ((indvar_flatten_reg_198 == 10'd256) ? 1'b1 : 1'b0);

assign icmp_ln68_fu_341_p2 = ((y_0_reg_221 == 5'd16) ? 1'b1 : 1'b0);

assign icmp_ln70_fu_498_p2 = ((ap_phi_mux_c_0_phi_fu_248_p4 == 2'd3) ? 1'b1 : 1'b0);

assign icmp_ln895_257_fu_653_p2 = ((p_cast7_mid2_v_reg_798 > or_ln76_reg_804) ? 1'b1 : 1'b0);

assign icmp_ln895_fu_741_p2 = (($signed(sext_ln895_fu_649_p1) > $signed(trunc_ln895_fu_737_p1)) ? 1'b1 : 1'b0);

assign input_r_address1 = zext_ln76_69_fu_538_p1;

assign lshr_ln895_2_fu_725_p2 = 128'd340282366920938463463374607431768211455 >> zext_ln895_6_fu_715_p1;

assign lshr_ln895_fu_719_p2 = select_ln895_3_fu_689_p3 >> zext_ln895_5_fu_711_p1;

assign n_fu_267_p2 = (5'd1 + n_0_reg_187);

assign or_ln76_fu_329_p2 = (p_cast7_mid2_v_fu_321_p3 | 7'd7);

assign or_ln81_fu_359_p2 = (icmp_ln67_fu_273_p2 | and_ln76_fu_347_p2);

assign output_r_address0 = output_addr_reg_821;

always @ (*) begin
    output_r_d0 = output_r_q0;
    output_r_d0[zext_ln76_60_reg_793] = |(icmp_ln895_reg_905);
end

assign p_cast7_mid2_v_fu_321_p3 = {{trunc_ln76_fu_317_p1}, {3'd0}};

assign select_ln67_fu_753_p3 = ((icmp_ln67_reg_778[0:0] === 1'b1) ? 10'd1 : add_ln67_2_fu_747_p2);

assign select_ln76_2_fu_287_p3 = ((icmp_ln67_fu_273_p2[0:0] === 1'b1) ? n_fu_267_p2 : n_0_reg_187);

assign select_ln76_fu_279_p3 = ((icmp_ln67_fu_273_p2[0:0] === 1'b1) ? 5'd0 : x_0_reg_210);

assign select_ln81_2_fu_373_p3 = ((and_ln76_fu_347_p2[0:0] === 1'b1) ? x_fu_353_p2 : select_ln76_fu_279_p3);

assign select_ln81_fu_365_p3 = ((or_ln81_fu_359_p2[0:0] === 1'b1) ? 5'd0 : y_0_reg_221);

assign select_ln895_3_fu_689_p3 = ((icmp_ln895_257_fu_653_p2[0:0] === 1'b1) ? 128'd85070604466161134390280484529417256959 : 128'd340271982723676541259494089925335187458);

assign select_ln895_4_fu_697_p3 = ((icmp_ln895_257_fu_653_p2[0:0] === 1'b1) ? xor_ln895_fu_669_p2 : zext_ln895_fu_657_p1);

assign select_ln895_fu_681_p3 = ((icmp_ln895_257_fu_653_p2[0:0] === 1'b1) ? sub_ln895_fu_663_p2 : sub_ln895_3_fu_675_p2);

assign sext_ln76_fu_557_p1 = $signed(add_ln76_17_fu_552_p2);

assign sext_ln895_fu_649_p1 = $signed(accum_V_fu_643_p2);

assign shl_ln_fu_635_p3 = {{p_014_0_reg_232}, {1'd0}};

assign sub_ln76_fu_307_p2 = (tmp_s_fu_299_p3 - zext_ln76_fu_295_p1);

assign sub_ln895_3_fu_675_p2 = (zext_ln895_4_fu_660_p1 - zext_ln895_fu_657_p1);

assign sub_ln895_4_fu_705_p2 = (8'd127 - select_ln895_fu_681_p3);

assign sub_ln895_fu_663_p2 = (zext_ln895_fu_657_p1 - zext_ln895_4_fu_660_p1);

assign tmp_26_fu_385_p3 = {{select_ln81_fu_365_p3}, {4'd0}};

assign tmp_27_fu_397_p3 = {{select_ln81_fu_365_p3}, {1'd0}};

assign tmp_28_fu_432_p3 = {{y_fu_426_p2}, {4'd0}};

assign tmp_29_fu_444_p3 = {{y_fu_426_p2}, {1'd0}};

assign tmp_30_fu_468_p3 = {{add_ln76_4_fu_462_p2}, {4'd0}};

assign tmp_31_fu_480_p3 = {{add_ln76_4_fu_462_p2}, {1'd0}};

assign tmp_s_fu_299_p3 = {{select_ln76_2_fu_287_p3}, {2'd0}};

assign trunc_ln76_fu_317_p1 = select_ln76_2_fu_287_p3[3:0];

assign trunc_ln895_fu_737_p1 = and_ln895_fu_731_p2[7:0];

assign w_conv1_0_address0 = sext_ln76_fu_557_p1;

assign w_conv1_1_address0 = sext_ln76_fu_557_p1;

assign w_conv1_2_address0 = sext_ln76_fu_557_p1;

assign x_fu_353_p2 = (5'd1 + select_ln76_fu_279_p3);

assign xor_ln76_100_fu_598_p2 = (w_conv1_2_load_reg_895 ^ 1'd1);

assign xor_ln76_101_fu_335_p2 = (icmp_ln67_fu_273_p2 ^ 1'd1);

assign xor_ln76_96_fu_574_p2 = (xor_ln76_fu_568_p2 ^ input_r_q0);

assign xor_ln76_97_fu_586_p2 = (xor_ln76_99_fu_580_p2 ^ input_r_q1);

assign xor_ln76_98_fu_603_p2 = (xor_ln76_100_fu_598_p2 ^ input_r_q0);

assign xor_ln76_99_fu_580_p2 = (w_conv1_1_q0 ^ 1'd1);

assign xor_ln76_fu_568_p2 = (w_conv1_0_q0 ^ 1'd1);

assign xor_ln895_fu_669_p2 = (zext_ln895_fu_657_p1 ^ 8'd127);

assign y_fu_426_p2 = (5'd1 + select_ln81_fu_365_p3);

assign zext_ln700_32_fu_625_p1 = add_ln700_48_fu_619_p2;

assign zext_ln700_fu_609_p1 = xor_ln76_98_fu_603_p2;

assign zext_ln70_fu_510_p1 = ap_phi_mux_c_0_phi_fu_248_p4;

assign zext_ln76_53_fu_592_p1 = xor_ln76_96_reg_885;

assign zext_ln76_54_fu_595_p1 = xor_ln76_97_reg_890;

assign zext_ln76_60_fu_313_p1 = select_ln76_2_fu_287_p3;

assign zext_ln76_61_fu_393_p1 = tmp_26_fu_385_p3;

assign zext_ln76_62_fu_405_p1 = tmp_27_fu_397_p3;

assign zext_ln76_63_fu_440_p1 = tmp_28_fu_432_p3;

assign zext_ln76_64_fu_452_p1 = tmp_29_fu_444_p3;

assign zext_ln76_65_fu_476_p1 = tmp_30_fu_468_p3;

assign zext_ln76_66_fu_488_p1 = tmp_31_fu_480_p3;

assign zext_ln76_67_fu_519_p1 = add_ln76_fu_514_p2;

assign zext_ln76_68_fu_528_p1 = add_ln76_14_fu_523_p2;

assign zext_ln76_69_fu_538_p1 = add_ln76_15_fu_533_p2;

assign zext_ln76_70_fu_564_p1 = add_ln76_16_reg_860;

assign zext_ln76_71_fu_548_p1 = ap_phi_mux_c_0_phi_fu_248_p4;

assign zext_ln76_fu_295_p1 = select_ln76_2_fu_287_p3;

assign zext_ln81_2_fu_421_p1 = add_ln81_fu_415_p2;

assign zext_ln81_fu_381_p1 = select_ln81_2_fu_373_p3;

assign zext_ln895_4_fu_660_p1 = or_ln76_reg_804;

assign zext_ln895_5_fu_711_p1 = select_ln895_4_fu_697_p3;

assign zext_ln895_6_fu_715_p1 = sub_ln895_4_fu_705_p2;

assign zext_ln895_fu_657_p1 = p_cast7_mid2_v_reg_798;

always @ (posedge ap_clk) begin
    zext_ln76_60_reg_793[5] <= 1'b0;
    p_cast7_mid2_v_reg_798[2:0] <= 3'b000;
    or_ln76_reg_804[2:0] <= 3'b111;
    add_ln76_10_reg_816[0] <= 1'b0;
    add_ln76_12_reg_831[0] <= 1'b0;
    add_ln76_13_reg_836[0] <= 1'b0;
end

endmodule //conv_1_16_18_s
