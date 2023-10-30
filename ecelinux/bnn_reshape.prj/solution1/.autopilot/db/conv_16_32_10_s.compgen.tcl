# This script segment is generated automatically by AutoPilot

# Memory (RAM/ROM)  definition:
set ID 11
set hasByteEnable 0
set MemName conv_16_32_10_s_w_conv2_0
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 16
set AddrRange 96
set AddrWd 7
set TrueReset 0
set IsROM 1
set ROMData { "0001111011111011" "0110000111110110" "0101110111110011" "1001111000101010" "1101100100100000" "0100101010110100" "0011111000001011" "1100000111100110" "0010001110010110" "1100111000101011" "0000000011101011" "1111110111101011" "1110100010001001" "0001001100011100" "0011111001101101" "1101100111110101" "1001111000011110" "0111111001111110" "1100010011110011" "1010000111000010" "1101110101111111" "1101100101000100" "0110011010001100" "0101010011111101" "1101110001001101" "1101111100101110" "1101110101101101" "1010111001011011" "1101111100100010" "1101110101100001" "1011100000100000" "0101011011101101" "1101111101101111" "1110110001010011" "0110100111010101" "0010110111111100" "1000110000001001" "0001011010101000" "0101110011110111" "1100111100101101" "0101110100011010" "0101110001111111" "0100101000011101" "0001111101011100" "0011101100001100" "1100111100101110" "0011011000001000" "1111111101101001" "1010000110100101" "0011001001000101" "0111100001110000" "0010111100100000" "0011011110110101" "0101111101011101" "0111110000111011" "1000111100100100" "1011011100001101" "0110011001101001" "0111111111111100" "0101110010111110" "0101111000101100" "1100110001110111" "1110001110000101" "0001111011101101" "0101110011101101" "0111010111110101" "0110101110010010" "0110000111110101" "1100110000101101" "0101001100001010" "1111001100100101" "1111011001001101" "0010001110011000" "1010001101001000" "0101111011110001" "0011011001111001" "1011110011000110" "0110011110000101" "0101111001110101" "0001101101111110" "0001111001001100" "0100111000011010" "1010001110100000" "1101110011110101" "1110100011010111" "1110001110001000" "0111111100001000" "1001110100100111" "1100110110011111" "1100110100010111" "0101010011110010" "0010001111010101" "1110101011110010" "0110000111010100" "0000011101000101" "1110110011110011" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 3.254
set ClkPeriod 10
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName ROM_nP
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ROM] == "::AESL_LIB_VIRTEX::xil_gen_ROM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ROM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ROM, check your platform lib"
  }
}


# Memory (RAM/ROM)  definition:
set ID 12
set hasByteEnable 0
set MemName conv_16_32_10_s_w_conv2_1
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 16
set AddrRange 96
set AddrWd 7
set TrueReset 0
set IsROM 1
set ROMData { "1010001100001000" "1000001100001000" "1010001100011000" "0011000001011101" "1101110010000110" "1110001010010010" "1011111010011001" "1000000000010101" "1001010100001011" "1110001111110100" "1010001110110010" "1010001110110010" "1000110111110101" "1100110111110101" "0010000110000101" "0011000010001000" "0101010111101111" "1000100010110111" "1001001100001000" "0011011010101001" "1100110111100010" "0101000100101100" "0001110011001011" "0101000010010100" "1100110111110110" "0010110100101011" "0111100110110000" "1010001111110000" "1010001100110010" "1010001111110010" "1011110001001111" "0011110110111111" "1010100111110011" "0011001110001000" "1010001101001011" "1101011110111010" "1110001101000100" "0010111010011000" "1011001010001000" "1000110110101001" "0111111100001010" "1010101110011010" "1001110000110101" "0001110001101000" "0001011101011000" "1110000010011100" "0111111011011110" "0011110010101000" "0001110101101101" "1101110111100101" "1010001110001110" "0110111100101101" "1110011110010010" "1110100111110010" "0011110011010001" "1110000111110111" "1110111101100111" "0100110110001110" "1010011111000011" "1111001001001001" "0100110000110111" "0100001110000110" "0101110111101101" "0100111101000100" "1010101100110000" "1010101111010000" "1001101110111101" "1010101110010110" "0100001011110010" "0010011111110111" "0110110111000111" "0110000111110111" "0111111000101011" "0101111000101101" "1011100110010110" "1001010110010110" "1100001110110110" "1010101111110110" "0001100111000110" "0101000001001000" "0001110011101101" "0101000000111101" "0011111010011011" "1110110111110010" "0011110010101010" "0101110001101101" "0001000000011100" "1010101111100010" "1110001110011001" "1101100011110111" "0001001101001000" "0001011000001000" "1010011100001000" "0011111001001100" "1001110110100011" "1010001110010110" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 3.254
set ClkPeriod 10
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName ROM_nP
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ROM] == "::AESL_LIB_VIRTEX::xil_gen_ROM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ROM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ROM, check your platform lib"
  }
}


# Memory (RAM/ROM)  definition:
set ID 13
set hasByteEnable 0
set MemName conv_16_32_10_s_w_conv2_2
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 16
set AddrRange 96
set AddrWd 7
set TrueReset 0
set IsROM 1
set ROMData { "0100111001001110" "0011111000101000" "1101111000001111" "0101111011111101" "0010001101000000" "0111011101001001" "1011111011101010" "0110000010100000" "1101110001111011" "1001010000100001" "1101110000101001" "1101110000101101" "0111001010001010" "1111110111110111" "1111110101111111" "0001000001001111" "0101100111100110" "1110001110011100" "1101110001101111" "1101110101100101" "1000111000010110" "1100000100101100" "0001110111011000" "1111000111110111" "1010000100000110" "1111100011111001" "1101000111110110" "0111011100001101" "0011111000001001" "0101111000101101" "1101100011001111" "1011001011100100" "1011001001111000" "1001111000001111" "0101111000001100" "1101010000111111" "1100000001110110" "1100110100111111" "1101110000101111" "1100100101010110" "1100110101111101" "1001111101001100" "1110100011000010" "1101110100110111" "1101110001110111" "0100000111100111" "1100110011110111" "1100100000101110" "0011101010100111" "1100000011110110" "1101110111111101" "1010101001001100" "1011111100001000" "1011111100101001" "0101111101111111" "1110100111110111" "0111110101111101" "1001010100101010" "0001010000101011" "0101110111110001" "1100000010110110" "0111111010001001" "0111110011110110" "1000111000000011" "0001111000001100" "0011111000101011" "1101010001101111" "0001010000001111" "0010101100011011" "0111111101111000" "1111100100010101" "1110001110011010" "1101010101111101" "1111110110101111" "0111111110001100" "0101100000010111" "0001111100001101" "1001110000101111" "1010100000010110" "1100100010100010" "1100100001110010" "1001010110110100" "1111011011001101" "0101101010001001" "1111101000001010" "1101100000011010" "0101001011110101" "1001110100101101" "1001110000101110" "1101110111110111" "1100101100011100" "0101111100011111" "1001111100101111" "1101110100111011" "1010110100110110" "0001111101101101" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 3.254
set ClkPeriod 10
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName ROM_nP
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ROM] == "::AESL_LIB_VIRTEX::xil_gen_ROM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ROM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ROM, check your platform lib"
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
    id 14 \
    name input_r \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename input_r \
    op interface \
    ports { input_r_address0 { O 7 vector } input_r_ce0 { O 1 bit } input_r_q0 { I 16 vector } input_r_address1 { O 7 vector } input_r_ce1 { O 1 bit } input_r_q1 { I 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'input_r'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 15 \
    name output_r \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename output_r \
    op interface \
    ports { output_r_address0 { O 6 vector } output_r_ce0 { O 1 bit } output_r_we0 { O 1 bit } output_r_d0 { O 32 vector } output_r_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_r'"
}
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


