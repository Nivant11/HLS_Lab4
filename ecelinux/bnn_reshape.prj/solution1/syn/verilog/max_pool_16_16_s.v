// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2.1
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module max_pool_16_16_s (
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

parameter    ap_ST_fsm_state1 = 4'd1;
parameter    ap_ST_fsm_pp0_stage0 = 4'd2;
parameter    ap_ST_fsm_pp0_stage1 = 4'd4;
parameter    ap_ST_fsm_state5 = 4'd8;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
output  [7:0] input_r_address0;
output   input_r_ce0;
input  [15:0] input_r_q0;
output  [7:0] input_r_address1;
output   input_r_ce1;
input  [15:0] input_r_q1;
output  [5:0] output_r_address0;
output   output_r_ce0;
output   output_r_we0;
output  [15:0] output_r_d0;
input  [15:0] output_r_q0;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg[7:0] input_r_address0;
reg input_r_ce0;
reg[7:0] input_r_address1;
reg input_r_ce1;
reg[5:0] output_r_address0;
reg output_r_ce0;
reg output_r_we0;
reg[15:0] output_r_d0;

(* fsm_encoding = "none" *) reg   [3:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
reg   [10:0] indvar_flatten21_reg_126;
reg   [4:0] m_0_reg_137;
reg   [7:0] indvar_flatten_reg_149;
reg   [3:0] x_0_reg_160;
reg   [3:0] y_0_reg_171;
wire   [0:0] icmp_ln97_fu_194_p2;
reg   [0:0] icmp_ln97_reg_483;
wire    ap_CS_fsm_pp0_stage0;
wire    ap_block_state2_pp0_stage0_iter0;
wire    ap_block_state4_pp0_stage0_iter1;
wire    ap_block_pp0_stage0_11001;
wire   [10:0] add_ln97_fu_200_p2;
reg   [10:0] add_ln97_reg_487;
reg    ap_enable_reg_pp0_iter0;
wire   [4:0] m_fu_206_p2;
reg   [4:0] m_reg_492;
wire   [0:0] icmp_ln99_fu_212_p2;
reg   [0:0] icmp_ln99_reg_497;
wire   [3:0] select_ln110_fu_218_p3;
reg   [3:0] select_ln110_reg_503;
wire   [0:0] and_ln110_fu_238_p2;
reg   [0:0] and_ln110_reg_508;
wire   [3:0] x_fu_244_p2;
reg   [3:0] x_reg_513;
wire   [3:0] select_ln110_9_fu_256_p3;
reg   [3:0] select_ln110_9_reg_518;
wire   [2:0] trunc_ln110_fu_276_p1;
reg   [2:0] trunc_ln110_reg_524;
wire   [3:0] select_ln110_14_fu_323_p3;
reg   [3:0] select_ln110_14_reg_534;
wire   [3:0] or_ln110_fu_331_p2;
reg   [3:0] or_ln110_reg_540;
wire   [7:0] add_ln99_fu_348_p2;
reg   [7:0] add_ln99_reg_550;
wire   [4:0] select_ln110_8_fu_354_p3;
reg   [4:0] select_ln110_8_reg_555;
wire    ap_CS_fsm_pp0_stage1;
wire    ap_block_state3_pp0_stage1_iter0;
wire    ap_block_pp0_stage1_11001;
wire   [5:0] zext_ln110_fu_360_p1;
reg   [5:0] zext_ln110_reg_560;
wire   [3:0] select_ln110_10_fu_364_p3;
reg   [3:0] select_ln110_10_reg_567;
wire   [0:0] or_ln110_6_fu_409_p2;
reg   [0:0] or_ln110_6_reg_582;
reg   [5:0] output_addr_reg_587;
wire   [3:0] y_fu_437_p2;
reg   [3:0] y_reg_592;
wire   [7:0] select_ln99_fu_442_p3;
reg   [7:0] select_ln99_reg_597;
wire    ap_block_pp0_stage0_subdone;
reg    ap_condition_pp0_exit_iter0_state2;
reg    ap_enable_reg_pp0_iter1;
wire    ap_block_pp0_stage1_subdone;
reg   [10:0] ap_phi_mux_indvar_flatten21_phi_fu_130_p4;
wire    ap_block_pp0_stage0;
reg   [4:0] ap_phi_mux_m_0_phi_fu_141_p4;
reg   [7:0] ap_phi_mux_indvar_flatten_phi_fu_153_p4;
reg   [3:0] ap_phi_mux_x_0_phi_fu_164_p4;
reg   [3:0] ap_phi_mux_y_0_phi_fu_175_p4;
wire   [63:0] tmp_s_fu_302_p5;
wire   [63:0] tmp_10_fu_337_p4;
wire   [63:0] tmp_9_fu_373_p5;
wire    ap_block_pp0_stage1;
wire   [63:0] tmp_11_fu_392_p4;
wire   [63:0] zext_ln114_2_fu_432_p1;
wire   [3:0] shl_ln110_fu_182_p2;
wire   [0:0] icmp_ln101_fu_232_p2;
wire   [0:0] xor_ln110_fu_226_p2;
wire   [0:0] or_ln110_9_fu_250_p2;
wire   [3:0] shl_ln110_3_fu_264_p2;
wire   [3:0] select_ln110_11_fu_286_p3;
wire   [3:0] select_ln110_12_fu_294_p3;
wire   [3:0] or_ln110_5_fu_188_p2;
wire   [3:0] or_ln110_10_fu_270_p2;
wire   [3:0] select_ln110_13_fu_315_p3;
wire   [3:0] shl_ln110_4_fu_280_p2;
wire   [0:0] tmp_12_fu_401_p3;
wire   [0:0] tmp_fu_384_p3;
wire   [6:0] tmp_15_fu_415_p3;
wire   [7:0] zext_ln114_fu_422_p1;
wire   [7:0] zext_ln110_2_fu_369_p1;
wire   [7:0] add_ln114_fu_426_p2;
wire   [0:0] tmp_13_fu_448_p3;
wire   [0:0] tmp_14_fu_455_p3;
wire   [0:0] or_ln110_7_fu_462_p2;
wire   [0:0] or_ln110_8_fu_468_p2;
wire    ap_CS_fsm_state5;
reg   [3:0] ap_NS_fsm;
reg    ap_idle_pp0;
wire    ap_enable_pp0;

// power-on initialization
initial begin
#0 ap_CS_fsm = 4'd1;
#0 ap_enable_reg_pp0_iter0 = 1'b0;
#0 ap_enable_reg_pp0_iter1 = 1'b0;
end

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
        if (((1'b1 == ap_CS_fsm_pp0_stage0) & (1'b1 == ap_condition_pp0_exit_iter0_state2) & (1'b0 == ap_block_pp0_stage0_subdone))) begin
            ap_enable_reg_pp0_iter0 <= 1'b0;
        end else if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
            ap_enable_reg_pp0_iter0 <= 1'b1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter1 <= 1'b0;
    end else begin
        if ((((1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_subdone)) | ((1'b1 == ap_CS_fsm_pp0_stage1) & (1'b0 == ap_block_pp0_stage1_subdone)))) begin
            ap_enable_reg_pp0_iter1 <= ap_enable_reg_pp0_iter0;
        end else if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
            ap_enable_reg_pp0_iter1 <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (icmp_ln97_reg_483 == 1'd0) & (1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1))) begin
        indvar_flatten21_reg_126 <= add_ln97_reg_487;
    end else if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        indvar_flatten21_reg_126 <= 11'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (icmp_ln97_reg_483 == 1'd0) & (1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1))) begin
        indvar_flatten_reg_149 <= select_ln99_reg_597;
    end else if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        indvar_flatten_reg_149 <= 8'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (icmp_ln97_reg_483 == 1'd0) & (1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1))) begin
        m_0_reg_137 <= select_ln110_8_reg_555;
    end else if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        m_0_reg_137 <= 5'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (icmp_ln97_reg_483 == 1'd0) & (1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1))) begin
        x_0_reg_160 <= select_ln110_10_reg_567;
    end else if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        x_0_reg_160 <= 4'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (icmp_ln97_reg_483 == 1'd0) & (1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1))) begin
        y_0_reg_171 <= y_reg_592;
    end else if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        y_0_reg_171 <= 4'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        add_ln97_reg_487 <= add_ln97_fu_200_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (icmp_ln97_fu_194_p2 == 1'd0) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        add_ln99_reg_550 <= add_ln99_fu_348_p2;
        and_ln110_reg_508 <= and_ln110_fu_238_p2;
        icmp_ln99_reg_497 <= icmp_ln99_fu_212_p2;
        m_reg_492 <= m_fu_206_p2;
        or_ln110_reg_540[3 : 1] <= or_ln110_fu_331_p2[3 : 1];
        select_ln110_14_reg_534[3 : 1] <= select_ln110_14_fu_323_p3[3 : 1];
        select_ln110_9_reg_518 <= select_ln110_9_fu_256_p3;
        select_ln110_reg_503 <= select_ln110_fu_218_p3;
        trunc_ln110_reg_524 <= trunc_ln110_fu_276_p1;
        x_reg_513 <= x_fu_244_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        icmp_ln97_reg_483 <= icmp_ln97_fu_194_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln97_reg_483 == 1'd0) & (1'b1 == ap_CS_fsm_pp0_stage1) & (1'b0 == ap_block_pp0_stage1_11001))) begin
        or_ln110_6_reg_582 <= or_ln110_6_fu_409_p2;
        output_addr_reg_587 <= zext_ln114_2_fu_432_p1;
        zext_ln110_reg_560[4 : 0] <= zext_ln110_fu_360_p1[4 : 0];
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln97_reg_483 == 1'd0) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage1) & (1'b0 == ap_block_pp0_stage1_11001))) begin
        select_ln110_10_reg_567 <= select_ln110_10_fu_364_p3;
        select_ln110_8_reg_555 <= select_ln110_8_fu_354_p3;
        select_ln99_reg_597 <= select_ln99_fu_442_p3;
        y_reg_592 <= y_fu_437_p2;
    end
end

always @ (*) begin
    if ((icmp_ln97_fu_194_p2 == 1'd1)) begin
        ap_condition_pp0_exit_iter0_state2 = 1'b1;
    end else begin
        ap_condition_pp0_exit_iter0_state2 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state5) | ((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1)))) begin
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
    if (((ap_enable_reg_pp0_iter0 == 1'b0) & (ap_enable_reg_pp0_iter1 == 1'b0))) begin
        ap_idle_pp0 = 1'b1;
    end else begin
        ap_idle_pp0 = 1'b0;
    end
end

always @ (*) begin
    if (((icmp_ln97_reg_483 == 1'd0) & (1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b0 == ap_block_pp0_stage0))) begin
        ap_phi_mux_indvar_flatten21_phi_fu_130_p4 = add_ln97_reg_487;
    end else begin
        ap_phi_mux_indvar_flatten21_phi_fu_130_p4 = indvar_flatten21_reg_126;
    end
end

always @ (*) begin
    if (((icmp_ln97_reg_483 == 1'd0) & (1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b0 == ap_block_pp0_stage0))) begin
        ap_phi_mux_indvar_flatten_phi_fu_153_p4 = select_ln99_reg_597;
    end else begin
        ap_phi_mux_indvar_flatten_phi_fu_153_p4 = indvar_flatten_reg_149;
    end
end

always @ (*) begin
    if (((icmp_ln97_reg_483 == 1'd0) & (1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b0 == ap_block_pp0_stage0))) begin
        ap_phi_mux_m_0_phi_fu_141_p4 = select_ln110_8_reg_555;
    end else begin
        ap_phi_mux_m_0_phi_fu_141_p4 = m_0_reg_137;
    end
end

always @ (*) begin
    if (((icmp_ln97_reg_483 == 1'd0) & (1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b0 == ap_block_pp0_stage0))) begin
        ap_phi_mux_x_0_phi_fu_164_p4 = select_ln110_10_reg_567;
    end else begin
        ap_phi_mux_x_0_phi_fu_164_p4 = x_0_reg_160;
    end
end

always @ (*) begin
    if (((icmp_ln97_reg_483 == 1'd0) & (1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b0 == ap_block_pp0_stage0))) begin
        ap_phi_mux_y_0_phi_fu_175_p4 = y_reg_592;
    end else begin
        ap_phi_mux_y_0_phi_fu_175_p4 = y_0_reg_171;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state5)) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if ((ap_enable_reg_pp0_iter0 == 1'b1)) begin
        if (((1'b1 == ap_CS_fsm_pp0_stage1) & (1'b0 == ap_block_pp0_stage1))) begin
            input_r_address0 = tmp_9_fu_373_p5;
        end else if (((1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0))) begin
            input_r_address0 = tmp_s_fu_302_p5;
        end else begin
            input_r_address0 = 'bx;
        end
    end else begin
        input_r_address0 = 'bx;
    end
end

always @ (*) begin
    if ((ap_enable_reg_pp0_iter0 == 1'b1)) begin
        if (((1'b1 == ap_CS_fsm_pp0_stage1) & (1'b0 == ap_block_pp0_stage1))) begin
            input_r_address1 = tmp_11_fu_392_p4;
        end else if (((1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0))) begin
            input_r_address1 = tmp_10_fu_337_p4;
        end else begin
            input_r_address1 = 'bx;
        end
    end else begin
        input_r_address1 = 'bx;
    end
end

always @ (*) begin
    if ((((ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage1) & (1'b0 == ap_block_pp0_stage1_11001)) | ((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0)))) begin
        input_r_ce0 = 1'b1;
    end else begin
        input_r_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((((ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage1) & (1'b0 == ap_block_pp0_stage1_11001)) | ((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0)))) begin
        input_r_ce1 = 1'b1;
    end else begin
        input_r_ce1 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b0 == ap_block_pp0_stage0))) begin
        output_r_address0 = output_addr_reg_587;
    end else if (((ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage1) & (1'b0 == ap_block_pp0_stage1))) begin
        output_r_address0 = zext_ln114_2_fu_432_p1;
    end else begin
        output_r_address0 = 'bx;
    end
end

always @ (*) begin
    if ((((ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage1) & (1'b0 == ap_block_pp0_stage1_11001)) | ((1'b0 == ap_block_pp0_stage0_11001) & (1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1)))) begin
        output_r_ce0 = 1'b1;
    end else begin
        output_r_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (icmp_ln97_reg_483 == 1'd0) & (1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1))) begin
        output_r_we0 = 1'b1;
    end else begin
        output_r_we0 = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_pp0_stage0 : begin
            if ((~((icmp_ln97_fu_194_p2 == 1'd1) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b0 == ap_block_pp0_stage0_subdone)) & (1'b0 == ap_block_pp0_stage0_subdone))) begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage1;
            end else if (((icmp_ln97_fu_194_p2 == 1'd1) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b0 == ap_block_pp0_stage0_subdone))) begin
                ap_NS_fsm = ap_ST_fsm_state5;
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
        ap_ST_fsm_state5 : begin
            ap_NS_fsm = ap_ST_fsm_state1;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign add_ln114_fu_426_p2 = (zext_ln114_fu_422_p1 + zext_ln110_2_fu_369_p1);

assign add_ln97_fu_200_p2 = (11'd1 + ap_phi_mux_indvar_flatten21_phi_fu_130_p4);

assign add_ln99_fu_348_p2 = (8'd1 + ap_phi_mux_indvar_flatten_phi_fu_153_p4);

assign and_ln110_fu_238_p2 = (xor_ln110_fu_226_p2 & icmp_ln101_fu_232_p2);

assign ap_CS_fsm_pp0_stage0 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_pp0_stage1 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state5 = ap_CS_fsm[32'd3];

assign ap_block_pp0_stage0 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage0_11001 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage0_subdone = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage1 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage1_11001 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage1_subdone = ~(1'b1 == 1'b1);

assign ap_block_state2_pp0_stage0_iter0 = ~(1'b1 == 1'b1);

assign ap_block_state3_pp0_stage1_iter0 = ~(1'b1 == 1'b1);

assign ap_block_state4_pp0_stage0_iter1 = ~(1'b1 == 1'b1);

assign ap_enable_pp0 = (ap_idle_pp0 ^ 1'b1);

assign icmp_ln101_fu_232_p2 = ((ap_phi_mux_y_0_phi_fu_175_p4 == 4'd8) ? 1'b1 : 1'b0);

assign icmp_ln97_fu_194_p2 = ((ap_phi_mux_indvar_flatten21_phi_fu_130_p4 == 11'd1024) ? 1'b1 : 1'b0);

assign icmp_ln99_fu_212_p2 = ((ap_phi_mux_indvar_flatten_phi_fu_153_p4 == 8'd64) ? 1'b1 : 1'b0);

assign m_fu_206_p2 = (5'd1 + ap_phi_mux_m_0_phi_fu_141_p4);

assign or_ln110_10_fu_270_p2 = (shl_ln110_3_fu_264_p2 | 4'd1);

assign or_ln110_5_fu_188_p2 = (shl_ln110_fu_182_p2 | 4'd1);

assign or_ln110_6_fu_409_p2 = (tmp_fu_384_p3 | tmp_12_fu_401_p3);

assign or_ln110_7_fu_462_p2 = (tmp_14_fu_455_p3 | tmp_13_fu_448_p3);

assign or_ln110_8_fu_468_p2 = (or_ln110_7_fu_462_p2 | or_ln110_6_reg_582);

assign or_ln110_9_fu_250_p2 = (icmp_ln99_fu_212_p2 | and_ln110_fu_238_p2);

assign or_ln110_fu_331_p2 = (shl_ln110_4_fu_280_p2 | 4'd1);

always @ (*) begin
    output_r_d0 = output_r_q0;
    output_r_d0[zext_ln110_reg_560] = |(or_ln110_8_fu_468_p2);
end

assign select_ln110_10_fu_364_p3 = ((and_ln110_reg_508[0:0] === 1'b1) ? x_reg_513 : select_ln110_reg_503);

assign select_ln110_11_fu_286_p3 = ((icmp_ln99_fu_212_p2[0:0] === 1'b1) ? 4'd0 : shl_ln110_fu_182_p2);

assign select_ln110_12_fu_294_p3 = ((and_ln110_fu_238_p2[0:0] === 1'b1) ? shl_ln110_3_fu_264_p2 : select_ln110_11_fu_286_p3);

assign select_ln110_13_fu_315_p3 = ((icmp_ln99_fu_212_p2[0:0] === 1'b1) ? 4'd1 : or_ln110_5_fu_188_p2);

assign select_ln110_14_fu_323_p3 = ((and_ln110_fu_238_p2[0:0] === 1'b1) ? or_ln110_10_fu_270_p2 : select_ln110_13_fu_315_p3);

assign select_ln110_8_fu_354_p3 = ((icmp_ln99_reg_497[0:0] === 1'b1) ? m_reg_492 : m_0_reg_137);

assign select_ln110_9_fu_256_p3 = ((or_ln110_9_fu_250_p2[0:0] === 1'b1) ? 4'd0 : ap_phi_mux_y_0_phi_fu_175_p4);

assign select_ln110_fu_218_p3 = ((icmp_ln99_fu_212_p2[0:0] === 1'b1) ? 4'd0 : ap_phi_mux_x_0_phi_fu_164_p4);

assign select_ln99_fu_442_p3 = ((icmp_ln99_reg_497[0:0] === 1'b1) ? 8'd1 : add_ln99_reg_550);

assign shl_ln110_3_fu_264_p2 = x_fu_244_p2 << 4'd1;

assign shl_ln110_4_fu_280_p2 = select_ln110_9_fu_256_p3 << 4'd1;

assign shl_ln110_fu_182_p2 = ap_phi_mux_x_0_phi_fu_164_p4 << 4'd1;

assign tmp_10_fu_337_p4 = {{{{56'd0}, {or_ln110_fu_331_p2}}}, {select_ln110_12_fu_294_p3}};

assign tmp_11_fu_392_p4 = {{{{56'd0}, {or_ln110_reg_540}}}, {select_ln110_14_reg_534}};

assign tmp_12_fu_401_p3 = input_r_q1[zext_ln110_fu_360_p1];

assign tmp_13_fu_448_p3 = input_r_q0[zext_ln110_reg_560];

assign tmp_14_fu_455_p3 = input_r_q1[zext_ln110_reg_560];

assign tmp_15_fu_415_p3 = {{select_ln110_9_reg_518}, {3'd0}};

assign tmp_9_fu_373_p5 = {{{{{{56'd0}, {trunc_ln110_reg_524}}}, {1'd0}}}, {select_ln110_14_reg_534}};

assign tmp_fu_384_p3 = input_r_q0[zext_ln110_fu_360_p1];

assign tmp_s_fu_302_p5 = {{{{{{56'd0}, {trunc_ln110_fu_276_p1}}}, {1'd0}}}, {select_ln110_12_fu_294_p3}};

assign trunc_ln110_fu_276_p1 = select_ln110_9_fu_256_p3[2:0];

assign x_fu_244_p2 = (4'd1 + select_ln110_fu_218_p3);

assign xor_ln110_fu_226_p2 = (icmp_ln99_fu_212_p2 ^ 1'd1);

assign y_fu_437_p2 = (4'd1 + select_ln110_9_reg_518);

assign zext_ln110_2_fu_369_p1 = select_ln110_10_fu_364_p3;

assign zext_ln110_fu_360_p1 = select_ln110_8_fu_354_p3;

assign zext_ln114_2_fu_432_p1 = add_ln114_fu_426_p2;

assign zext_ln114_fu_422_p1 = tmp_15_fu_415_p3;

always @ (posedge ap_clk) begin
    select_ln110_14_reg_534[0] <= 1'b1;
    or_ln110_reg_540[0] <= 1'b1;
    zext_ln110_reg_560[5] <= 1'b0;
end

endmodule //max_pool_16_16_s
