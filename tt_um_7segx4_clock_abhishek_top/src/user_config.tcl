set ::env(DESIGN_NAME) tt_um_7segx4_clock_abhishek_top
set ::env(VERILOG_FILES) "\
    $::env(DESIGN_DIR)/decoder_4x7seg.v \
    $::env(DESIGN_DIR)/shift_register_595.v \
    $::env(DESIGN_DIR)/bcd_counter.v \
    $::env(DESIGN_DIR)/debouncer.v \
    $::env(DESIGN_DIR)/top.v"

# Project area: 1x1 tiles
set ::env(DIE_AREA) "0 0 168.36 111.52"
set ::env(FP_DEF_TEMPLATE) "$::env(DESIGN_DIR)/../tt/def/tt_block_1x1.def"
