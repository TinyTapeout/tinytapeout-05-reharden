set ::env(DESIGN_NAME) tt_um_mabhari_seven_segment_seconds
set ::env(VERILOG_FILES) "\
    $::env(DESIGN_DIR)/tt_um_seven_segment_seconds.v \
    $::env(DESIGN_DIR)/decoder.v \
    $::env(DESIGN_DIR)/BCD_Counter.v \
    $::env(DESIGN_DIR)/Clock_Divider.v \
    $::env(DESIGN_DIR)/Seconds_Timer.v"

# Project area: 1x1 tiles
set ::env(DIE_AREA) "0 0 168.36 111.52"
set ::env(FP_DEF_TEMPLATE) "$::env(DESIGN_DIR)/../tt/def/tt_block_1x1.def"
