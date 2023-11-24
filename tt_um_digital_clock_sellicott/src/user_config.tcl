set ::env(DESIGN_NAME) tt_um_digital_clock_sellicott
set ::env(VERILOG_FILES) "\
    $::env(DESIGN_DIR)/tt_um_digital_clock_sellicott.v \
    $::env(DESIGN_DIR)/clock_wrapper.v \
    $::env(DESIGN_DIR)/clock_stb_gen.v \
    $::env(DESIGN_DIR)/reference_clk_stb.v \
    $::env(DESIGN_DIR)/sysclk_divider.v \
    $::env(DESIGN_DIR)/button_debounce.v \
    $::env(DESIGN_DIR)/basic_clock.v \
    $::env(DESIGN_DIR)/clock_to_7seg.v \
    $::env(DESIGN_DIR)/output_wrapper.v \
    $::env(DESIGN_DIR)/timeset_divider.v \
    $::env(DESIGN_DIR)/load_divider.v \
    $::env(DESIGN_DIR)/overflow_counter.v \
    $::env(DESIGN_DIR)/time_register.v \
    $::env(DESIGN_DIR)/bcd_to_7seg.v \
    $::env(DESIGN_DIR)/bin_to_bcd.v \
    $::env(DESIGN_DIR)/shift_register.v"

# Project area: 1x2 tiles
set ::env(DIE_AREA) "0 0 168.36 225.76"
set ::env(FP_DEF_TEMPLATE) "$::env(DESIGN_DIR)/../tt/def/tt_block_1x2.def"
