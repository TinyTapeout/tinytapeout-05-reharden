set ::env(DESIGN_NAME) tt_um_devinatkin_stopwatch
set ::env(VERILOG_FILES) "\
    $::env(DESIGN_DIR)/tt_um_devinatkin_stopwatch.v \
    $::env(DESIGN_DIR)/top_level.sv \
    $::env(DESIGN_DIR)/timer.sv \
    $::env(DESIGN_DIR)/time_counter.sv \
    $::env(DESIGN_DIR)/sevenseg4ddriver.sv \
    $::env(DESIGN_DIR)/segment_mux.sv \
    $::env(DESIGN_DIR)/pwm_module.sv \
    $::env(DESIGN_DIR)/double_dabble.sv \
    $::env(DESIGN_DIR)/display_driver.sv \
    $::env(DESIGN_DIR)/debounce.sv \
    $::env(DESIGN_DIR)/debounce_wrapper.sv \
    $::env(DESIGN_DIR)/clock_divider.sv \
    $::env(DESIGN_DIR)/blinking_display.sv \
    $::env(DESIGN_DIR)/bcd_binary.sv"

# Project area: 1x1 tiles
set ::env(DIE_AREA) "0 0 168.36 111.52"
set ::env(FP_DEF_TEMPLATE) "$::env(DESIGN_DIR)/../tt/def/tt_block_1x1.def"
