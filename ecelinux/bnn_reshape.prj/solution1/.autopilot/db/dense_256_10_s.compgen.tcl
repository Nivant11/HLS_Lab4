# This script segment is generated automatically by AutoPilot

set id 789
set name dut_mux_164_256_1_1
set corename simcore_mux
set op mux
set stage_num 1
set max_latency -1
set registered_input 1
set din0_width 256
set din0_signed 0
set din1_width 256
set din1_signed 1
set din2_width 256
set din2_signed 1
set din3_width 256
set din3_signed 0
set din4_width 256
set din4_signed 0
set din5_width 256
set din5_signed 0
set din6_width 256
set din6_signed 0
set din7_width 256
set din7_signed 1
set din8_width 256
set din8_signed 1
set din9_width 256
set din9_signed 0
set din10_width 256
set din10_signed 0
set din11_width 256
set din11_signed 0
set din12_width 256
set din12_signed 0
set din13_width 256
set din13_signed 0
set din14_width 256
set din14_signed 0
set din15_width 256
set din15_signed 0
set din16_width 4
set din16_signed 0
set dout_width 256
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mux] == "ap_gen_simcore_mux"} {
eval "ap_gen_simcore_mux { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    din0_width ${din0_width} \
    din0_signed ${din0_signed} \
    din1_width ${din1_width} \
    din1_signed ${din1_signed} \
    din2_width ${din2_width} \
    din2_signed ${din2_signed} \
    din3_width ${din3_width} \
    din3_signed ${din3_signed} \
    din4_width ${din4_width} \
    din4_signed ${din4_signed} \
    din5_width ${din5_width} \
    din5_signed ${din5_signed} \
    din6_width ${din6_width} \
    din6_signed ${din6_signed} \
    din7_width ${din7_width} \
    din7_signed ${din7_signed} \
    din8_width ${din8_width} \
    din8_signed ${din8_signed} \
    din9_width ${din9_width} \
    din9_signed ${din9_signed} \
    din10_width ${din10_width} \
    din10_signed ${din10_signed} \
    din11_width ${din11_width} \
    din11_signed ${din11_signed} \
    din12_width ${din12_width} \
    din12_signed ${din12_signed} \
    din13_width ${din13_width} \
    din13_signed ${din13_signed} \
    din14_width ${din14_width} \
    din14_signed ${din14_signed} \
    din15_width ${din15_width} \
    din15_signed ${din15_signed} \
    din16_width ${din16_width} \
    din16_signed ${din16_signed} \
    dout_width ${dout_width} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_mux, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op mux
set corename MuxnS
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_pipemux] == "::AESL_LIB_VIRTEX::xil_gen_pipemux"} {
eval "::AESL_LIB_VIRTEX::xil_gen_pipemux { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    din0_width ${din0_width} \
    din0_signed ${din0_signed} \
    din1_width ${din1_width} \
    din1_signed ${din1_signed} \
    din2_width ${din2_width} \
    din2_signed ${din2_signed} \
    din3_width ${din3_width} \
    din3_signed ${din3_signed} \
    din4_width ${din4_width} \
    din4_signed ${din4_signed} \
    din5_width ${din5_width} \
    din5_signed ${din5_signed} \
    din6_width ${din6_width} \
    din6_signed ${din6_signed} \
    din7_width ${din7_width} \
    din7_signed ${din7_signed} \
    din8_width ${din8_width} \
    din8_signed ${din8_signed} \
    din9_width ${din9_width} \
    din9_signed ${din9_signed} \
    din10_width ${din10_width} \
    din10_signed ${din10_signed} \
    din11_width ${din11_width} \
    din11_signed ${din11_signed} \
    din12_width ${din12_width} \
    din12_signed ${din12_signed} \
    din13_width ${din13_width} \
    din13_signed ${din13_signed} \
    din14_width ${din14_width} \
    din14_signed ${din14_signed} \
    din15_width ${din15_width} \
    din15_signed ${din15_signed} \
    din16_width ${din16_width} \
    din16_signed ${din16_signed} \
    dout_width ${dout_width} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_pipemux, check your platform lib"
}
}


# clear list
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_begin
    cg_default_interface_gen_bundle_begin
    AESL_LIB_XILADAPTER::native_axis_begin
}

# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1047 \
    name output_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename output_V \
    op interface \
    ports { output_V_address0 { O 4 vector } output_V_ce0 { O 1 bit } output_V_we0 { O 1 bit } output_V_d0 { O 10 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_V'"
}
}


# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 791 \
    name input_0_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_0_read \
    op interface \
    ports { input_0_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 792 \
    name input_1_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_1_read \
    op interface \
    ports { input_1_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 793 \
    name input_2_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_2_read \
    op interface \
    ports { input_2_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 794 \
    name input_3_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_3_read \
    op interface \
    ports { input_3_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 795 \
    name input_4_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_4_read \
    op interface \
    ports { input_4_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 796 \
    name input_5_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_5_read \
    op interface \
    ports { input_5_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 797 \
    name input_6_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_6_read \
    op interface \
    ports { input_6_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 798 \
    name input_7_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_7_read \
    op interface \
    ports { input_7_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 799 \
    name input_8_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_8_read \
    op interface \
    ports { input_8_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 800 \
    name input_9_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_9_read \
    op interface \
    ports { input_9_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 801 \
    name input_10_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_10_read \
    op interface \
    ports { input_10_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 802 \
    name input_11_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_11_read \
    op interface \
    ports { input_11_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 803 \
    name input_12_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_12_read \
    op interface \
    ports { input_12_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 804 \
    name input_13_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_13_read \
    op interface \
    ports { input_13_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 805 \
    name input_14_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_14_read \
    op interface \
    ports { input_14_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 806 \
    name input_15_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_15_read \
    op interface \
    ports { input_15_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 807 \
    name input_16_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_16_read \
    op interface \
    ports { input_16_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 808 \
    name input_17_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_17_read \
    op interface \
    ports { input_17_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 809 \
    name input_18_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_18_read \
    op interface \
    ports { input_18_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 810 \
    name input_19_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_19_read \
    op interface \
    ports { input_19_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 811 \
    name input_20_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_20_read \
    op interface \
    ports { input_20_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 812 \
    name input_21_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_21_read \
    op interface \
    ports { input_21_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 813 \
    name input_22_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_22_read \
    op interface \
    ports { input_22_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 814 \
    name input_23_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_23_read \
    op interface \
    ports { input_23_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 815 \
    name input_24_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_24_read \
    op interface \
    ports { input_24_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 816 \
    name input_25_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_25_read \
    op interface \
    ports { input_25_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 817 \
    name input_26_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_26_read \
    op interface \
    ports { input_26_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 818 \
    name input_27_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_27_read \
    op interface \
    ports { input_27_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 819 \
    name input_28_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_28_read \
    op interface \
    ports { input_28_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 820 \
    name input_29_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_29_read \
    op interface \
    ports { input_29_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 821 \
    name input_30_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_30_read \
    op interface \
    ports { input_30_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 822 \
    name input_31_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_31_read \
    op interface \
    ports { input_31_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 823 \
    name input_32_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_32_read \
    op interface \
    ports { input_32_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 824 \
    name input_33_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_33_read \
    op interface \
    ports { input_33_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 825 \
    name input_34_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_34_read \
    op interface \
    ports { input_34_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 826 \
    name input_35_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_35_read \
    op interface \
    ports { input_35_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 827 \
    name input_36_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_36_read \
    op interface \
    ports { input_36_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 828 \
    name input_37_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_37_read \
    op interface \
    ports { input_37_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 829 \
    name input_38_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_38_read \
    op interface \
    ports { input_38_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 830 \
    name input_39_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_39_read \
    op interface \
    ports { input_39_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 831 \
    name input_40_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_40_read \
    op interface \
    ports { input_40_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 832 \
    name input_41_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_41_read \
    op interface \
    ports { input_41_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 833 \
    name input_42_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_42_read \
    op interface \
    ports { input_42_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 834 \
    name input_43_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_43_read \
    op interface \
    ports { input_43_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 835 \
    name input_44_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_44_read \
    op interface \
    ports { input_44_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 836 \
    name input_45_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_45_read \
    op interface \
    ports { input_45_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 837 \
    name input_46_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_46_read \
    op interface \
    ports { input_46_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 838 \
    name input_47_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_47_read \
    op interface \
    ports { input_47_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 839 \
    name input_48_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_48_read \
    op interface \
    ports { input_48_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 840 \
    name input_49_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_49_read \
    op interface \
    ports { input_49_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 841 \
    name input_50_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_50_read \
    op interface \
    ports { input_50_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 842 \
    name input_51_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_51_read \
    op interface \
    ports { input_51_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 843 \
    name input_52_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_52_read \
    op interface \
    ports { input_52_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 844 \
    name input_53_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_53_read \
    op interface \
    ports { input_53_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 845 \
    name input_54_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_54_read \
    op interface \
    ports { input_54_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 846 \
    name input_55_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_55_read \
    op interface \
    ports { input_55_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 847 \
    name input_56_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_56_read \
    op interface \
    ports { input_56_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 848 \
    name input_57_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_57_read \
    op interface \
    ports { input_57_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 849 \
    name input_58_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_58_read \
    op interface \
    ports { input_58_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 850 \
    name input_59_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_59_read \
    op interface \
    ports { input_59_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 851 \
    name input_60_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_60_read \
    op interface \
    ports { input_60_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 852 \
    name input_61_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_61_read \
    op interface \
    ports { input_61_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 853 \
    name input_62_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_62_read \
    op interface \
    ports { input_62_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 854 \
    name input_63_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_63_read \
    op interface \
    ports { input_63_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 855 \
    name input_64_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_64_read \
    op interface \
    ports { input_64_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 856 \
    name input_65_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_65_read \
    op interface \
    ports { input_65_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 857 \
    name input_66_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_66_read \
    op interface \
    ports { input_66_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 858 \
    name input_67_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_67_read \
    op interface \
    ports { input_67_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 859 \
    name input_68_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_68_read \
    op interface \
    ports { input_68_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 860 \
    name input_69_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_69_read \
    op interface \
    ports { input_69_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 861 \
    name input_70_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_70_read \
    op interface \
    ports { input_70_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 862 \
    name input_71_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_71_read \
    op interface \
    ports { input_71_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 863 \
    name input_72_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_72_read \
    op interface \
    ports { input_72_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 864 \
    name input_73_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_73_read \
    op interface \
    ports { input_73_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 865 \
    name input_74_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_74_read \
    op interface \
    ports { input_74_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 866 \
    name input_75_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_75_read \
    op interface \
    ports { input_75_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 867 \
    name input_76_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_76_read \
    op interface \
    ports { input_76_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 868 \
    name input_77_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_77_read \
    op interface \
    ports { input_77_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 869 \
    name input_78_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_78_read \
    op interface \
    ports { input_78_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 870 \
    name input_79_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_79_read \
    op interface \
    ports { input_79_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 871 \
    name input_80_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_80_read \
    op interface \
    ports { input_80_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 872 \
    name input_81_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_81_read \
    op interface \
    ports { input_81_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 873 \
    name input_82_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_82_read \
    op interface \
    ports { input_82_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 874 \
    name input_83_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_83_read \
    op interface \
    ports { input_83_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 875 \
    name input_84_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_84_read \
    op interface \
    ports { input_84_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 876 \
    name input_85_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_85_read \
    op interface \
    ports { input_85_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 877 \
    name input_86_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_86_read \
    op interface \
    ports { input_86_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 878 \
    name input_87_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_87_read \
    op interface \
    ports { input_87_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 879 \
    name input_88_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_88_read \
    op interface \
    ports { input_88_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 880 \
    name input_89_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_89_read \
    op interface \
    ports { input_89_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 881 \
    name input_90_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_90_read \
    op interface \
    ports { input_90_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 882 \
    name input_91_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_91_read \
    op interface \
    ports { input_91_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 883 \
    name input_92_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_92_read \
    op interface \
    ports { input_92_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 884 \
    name input_93_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_93_read \
    op interface \
    ports { input_93_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 885 \
    name input_94_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_94_read \
    op interface \
    ports { input_94_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 886 \
    name input_95_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_95_read \
    op interface \
    ports { input_95_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 887 \
    name input_96_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_96_read \
    op interface \
    ports { input_96_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 888 \
    name input_97_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_97_read \
    op interface \
    ports { input_97_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 889 \
    name input_98_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_98_read \
    op interface \
    ports { input_98_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 890 \
    name input_99_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_99_read \
    op interface \
    ports { input_99_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 891 \
    name input_100_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_100_read \
    op interface \
    ports { input_100_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 892 \
    name input_101_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_101_read \
    op interface \
    ports { input_101_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 893 \
    name input_102_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_102_read \
    op interface \
    ports { input_102_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 894 \
    name input_103_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_103_read \
    op interface \
    ports { input_103_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 895 \
    name input_104_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_104_read \
    op interface \
    ports { input_104_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 896 \
    name input_105_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_105_read \
    op interface \
    ports { input_105_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 897 \
    name input_106_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_106_read \
    op interface \
    ports { input_106_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 898 \
    name input_107_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_107_read \
    op interface \
    ports { input_107_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 899 \
    name input_108_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_108_read \
    op interface \
    ports { input_108_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 900 \
    name input_109_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_109_read \
    op interface \
    ports { input_109_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 901 \
    name input_110_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_110_read \
    op interface \
    ports { input_110_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 902 \
    name input_111_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_111_read \
    op interface \
    ports { input_111_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 903 \
    name input_112_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_112_read \
    op interface \
    ports { input_112_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 904 \
    name input_113_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_113_read \
    op interface \
    ports { input_113_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 905 \
    name input_114_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_114_read \
    op interface \
    ports { input_114_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 906 \
    name input_115_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_115_read \
    op interface \
    ports { input_115_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 907 \
    name input_116_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_116_read \
    op interface \
    ports { input_116_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 908 \
    name input_117_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_117_read \
    op interface \
    ports { input_117_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 909 \
    name input_118_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_118_read \
    op interface \
    ports { input_118_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 910 \
    name input_119_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_119_read \
    op interface \
    ports { input_119_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 911 \
    name input_120_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_120_read \
    op interface \
    ports { input_120_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 912 \
    name input_121_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_121_read \
    op interface \
    ports { input_121_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 913 \
    name input_122_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_122_read \
    op interface \
    ports { input_122_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 914 \
    name input_123_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_123_read \
    op interface \
    ports { input_123_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 915 \
    name input_124_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_124_read \
    op interface \
    ports { input_124_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 916 \
    name input_125_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_125_read \
    op interface \
    ports { input_125_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 917 \
    name input_126_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_126_read \
    op interface \
    ports { input_126_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 918 \
    name input_127_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_127_read \
    op interface \
    ports { input_127_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 919 \
    name input_128_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_128_read \
    op interface \
    ports { input_128_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 920 \
    name input_129_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_129_read \
    op interface \
    ports { input_129_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 921 \
    name input_130_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_130_read \
    op interface \
    ports { input_130_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 922 \
    name input_131_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_131_read \
    op interface \
    ports { input_131_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 923 \
    name input_132_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_132_read \
    op interface \
    ports { input_132_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 924 \
    name input_133_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_133_read \
    op interface \
    ports { input_133_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 925 \
    name input_134_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_134_read \
    op interface \
    ports { input_134_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 926 \
    name input_135_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_135_read \
    op interface \
    ports { input_135_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 927 \
    name input_136_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_136_read \
    op interface \
    ports { input_136_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 928 \
    name input_137_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_137_read \
    op interface \
    ports { input_137_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 929 \
    name input_138_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_138_read \
    op interface \
    ports { input_138_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 930 \
    name input_139_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_139_read \
    op interface \
    ports { input_139_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 931 \
    name input_140_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_140_read \
    op interface \
    ports { input_140_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 932 \
    name input_141_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_141_read \
    op interface \
    ports { input_141_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 933 \
    name input_142_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_142_read \
    op interface \
    ports { input_142_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 934 \
    name input_143_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_143_read \
    op interface \
    ports { input_143_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 935 \
    name input_144_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_144_read \
    op interface \
    ports { input_144_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 936 \
    name input_145_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_145_read \
    op interface \
    ports { input_145_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 937 \
    name input_146_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_146_read \
    op interface \
    ports { input_146_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 938 \
    name input_147_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_147_read \
    op interface \
    ports { input_147_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 939 \
    name input_148_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_148_read \
    op interface \
    ports { input_148_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 940 \
    name input_149_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_149_read \
    op interface \
    ports { input_149_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 941 \
    name input_150_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_150_read \
    op interface \
    ports { input_150_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 942 \
    name input_151_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_151_read \
    op interface \
    ports { input_151_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 943 \
    name input_152_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_152_read \
    op interface \
    ports { input_152_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 944 \
    name input_153_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_153_read \
    op interface \
    ports { input_153_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 945 \
    name input_154_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_154_read \
    op interface \
    ports { input_154_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 946 \
    name input_155_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_155_read \
    op interface \
    ports { input_155_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 947 \
    name input_156_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_156_read \
    op interface \
    ports { input_156_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 948 \
    name input_157_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_157_read \
    op interface \
    ports { input_157_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 949 \
    name input_158_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_158_read \
    op interface \
    ports { input_158_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 950 \
    name input_159_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_159_read \
    op interface \
    ports { input_159_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 951 \
    name input_160_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_160_read \
    op interface \
    ports { input_160_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 952 \
    name input_161_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_161_read \
    op interface \
    ports { input_161_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 953 \
    name input_162_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_162_read \
    op interface \
    ports { input_162_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 954 \
    name input_163_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_163_read \
    op interface \
    ports { input_163_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 955 \
    name input_164_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_164_read \
    op interface \
    ports { input_164_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 956 \
    name input_165_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_165_read \
    op interface \
    ports { input_165_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 957 \
    name input_166_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_166_read \
    op interface \
    ports { input_166_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 958 \
    name input_167_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_167_read \
    op interface \
    ports { input_167_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 959 \
    name input_168_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_168_read \
    op interface \
    ports { input_168_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 960 \
    name input_169_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_169_read \
    op interface \
    ports { input_169_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 961 \
    name input_170_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_170_read \
    op interface \
    ports { input_170_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 962 \
    name input_171_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_171_read \
    op interface \
    ports { input_171_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 963 \
    name input_172_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_172_read \
    op interface \
    ports { input_172_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 964 \
    name input_173_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_173_read \
    op interface \
    ports { input_173_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 965 \
    name input_174_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_174_read \
    op interface \
    ports { input_174_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 966 \
    name input_175_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_175_read \
    op interface \
    ports { input_175_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 967 \
    name input_176_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_176_read \
    op interface \
    ports { input_176_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 968 \
    name input_177_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_177_read \
    op interface \
    ports { input_177_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 969 \
    name input_178_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_178_read \
    op interface \
    ports { input_178_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 970 \
    name input_179_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_179_read \
    op interface \
    ports { input_179_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 971 \
    name input_180_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_180_read \
    op interface \
    ports { input_180_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 972 \
    name input_181_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_181_read \
    op interface \
    ports { input_181_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 973 \
    name input_182_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_182_read \
    op interface \
    ports { input_182_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 974 \
    name input_183_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_183_read \
    op interface \
    ports { input_183_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 975 \
    name input_184_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_184_read \
    op interface \
    ports { input_184_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 976 \
    name input_185_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_185_read \
    op interface \
    ports { input_185_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 977 \
    name input_186_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_186_read \
    op interface \
    ports { input_186_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 978 \
    name input_187_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_187_read \
    op interface \
    ports { input_187_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 979 \
    name input_188_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_188_read \
    op interface \
    ports { input_188_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 980 \
    name input_189_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_189_read \
    op interface \
    ports { input_189_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 981 \
    name input_190_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_190_read \
    op interface \
    ports { input_190_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 982 \
    name input_191_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_191_read \
    op interface \
    ports { input_191_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 983 \
    name input_192_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_192_read \
    op interface \
    ports { input_192_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 984 \
    name input_193_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_193_read \
    op interface \
    ports { input_193_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 985 \
    name input_194_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_194_read \
    op interface \
    ports { input_194_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 986 \
    name input_195_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_195_read \
    op interface \
    ports { input_195_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 987 \
    name input_196_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_196_read \
    op interface \
    ports { input_196_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 988 \
    name input_197_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_197_read \
    op interface \
    ports { input_197_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 989 \
    name input_198_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_198_read \
    op interface \
    ports { input_198_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 990 \
    name input_199_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_199_read \
    op interface \
    ports { input_199_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 991 \
    name input_200_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_200_read \
    op interface \
    ports { input_200_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 992 \
    name input_201_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_201_read \
    op interface \
    ports { input_201_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 993 \
    name input_202_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_202_read \
    op interface \
    ports { input_202_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 994 \
    name input_203_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_203_read \
    op interface \
    ports { input_203_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 995 \
    name input_204_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_204_read \
    op interface \
    ports { input_204_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 996 \
    name input_205_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_205_read \
    op interface \
    ports { input_205_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 997 \
    name input_206_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_206_read \
    op interface \
    ports { input_206_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 998 \
    name input_207_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_207_read \
    op interface \
    ports { input_207_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 999 \
    name input_208_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_208_read \
    op interface \
    ports { input_208_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1000 \
    name input_209_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_209_read \
    op interface \
    ports { input_209_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1001 \
    name input_210_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_210_read \
    op interface \
    ports { input_210_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1002 \
    name input_211_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_211_read \
    op interface \
    ports { input_211_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1003 \
    name input_212_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_212_read \
    op interface \
    ports { input_212_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1004 \
    name input_213_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_213_read \
    op interface \
    ports { input_213_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1005 \
    name input_214_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_214_read \
    op interface \
    ports { input_214_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1006 \
    name input_215_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_215_read \
    op interface \
    ports { input_215_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1007 \
    name input_216_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_216_read \
    op interface \
    ports { input_216_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1008 \
    name input_217_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_217_read \
    op interface \
    ports { input_217_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1009 \
    name input_218_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_218_read \
    op interface \
    ports { input_218_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1010 \
    name input_219_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_219_read \
    op interface \
    ports { input_219_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1011 \
    name input_220_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_220_read \
    op interface \
    ports { input_220_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1012 \
    name input_221_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_221_read \
    op interface \
    ports { input_221_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1013 \
    name input_222_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_222_read \
    op interface \
    ports { input_222_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1014 \
    name input_223_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_223_read \
    op interface \
    ports { input_223_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1015 \
    name input_224_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_224_read \
    op interface \
    ports { input_224_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1016 \
    name input_225_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_225_read \
    op interface \
    ports { input_225_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1017 \
    name input_226_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_226_read \
    op interface \
    ports { input_226_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1018 \
    name input_227_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_227_read \
    op interface \
    ports { input_227_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1019 \
    name input_228_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_228_read \
    op interface \
    ports { input_228_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1020 \
    name input_229_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_229_read \
    op interface \
    ports { input_229_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1021 \
    name input_230_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_230_read \
    op interface \
    ports { input_230_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1022 \
    name input_231_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_231_read \
    op interface \
    ports { input_231_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1023 \
    name input_232_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_232_read \
    op interface \
    ports { input_232_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1024 \
    name input_233_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_233_read \
    op interface \
    ports { input_233_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1025 \
    name input_234_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_234_read \
    op interface \
    ports { input_234_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1026 \
    name input_235_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_235_read \
    op interface \
    ports { input_235_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1027 \
    name input_236_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_236_read \
    op interface \
    ports { input_236_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1028 \
    name input_237_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_237_read \
    op interface \
    ports { input_237_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1029 \
    name input_238_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_238_read \
    op interface \
    ports { input_238_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1030 \
    name input_239_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_239_read \
    op interface \
    ports { input_239_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1031 \
    name input_240_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_240_read \
    op interface \
    ports { input_240_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1032 \
    name input_241_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_241_read \
    op interface \
    ports { input_241_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1033 \
    name input_242_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_242_read \
    op interface \
    ports { input_242_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1034 \
    name input_243_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_243_read \
    op interface \
    ports { input_243_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1035 \
    name input_244_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_244_read \
    op interface \
    ports { input_244_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1036 \
    name input_245_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_245_read \
    op interface \
    ports { input_245_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1037 \
    name input_246_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_246_read \
    op interface \
    ports { input_246_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1038 \
    name input_247_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_247_read \
    op interface \
    ports { input_247_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1039 \
    name input_248_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_248_read \
    op interface \
    ports { input_248_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1040 \
    name input_249_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_249_read \
    op interface \
    ports { input_249_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1041 \
    name input_250_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_250_read \
    op interface \
    ports { input_250_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1042 \
    name input_251_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_251_read \
    op interface \
    ports { input_251_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1043 \
    name input_252_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_252_read \
    op interface \
    ports { input_252_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1044 \
    name input_253_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_253_read \
    op interface \
    ports { input_253_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1045 \
    name input_254_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_254_read \
    op interface \
    ports { input_254_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1046 \
    name input_255_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_255_read \
    op interface \
    ports { input_255_read { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id -1 \
    name ap_ctrl \
    type ap_ctrl \
    reset_level 1 \
    sync_rst true \
    corename ap_ctrl \
    op interface \
    ports { ap_start { I 1 bit } ap_ready { O 1 bit } ap_done { O 1 bit } ap_idle { O 1 bit } } \
} "
}


# Adapter definition:
set PortName ap_clk
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_clock] == "cg_default_interface_gen_clock"} {
eval "cg_default_interface_gen_clock { \
    id -2 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_clk \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-113\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}


# Adapter definition:
set PortName ap_rst
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_reset] == "cg_default_interface_gen_reset"} {
eval "cg_default_interface_gen_reset { \
    id -3 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_rst \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-114\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}



# merge
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_end
    cg_default_interface_gen_bundle_end
    AESL_LIB_XILADAPTER::native_axis_end
}


