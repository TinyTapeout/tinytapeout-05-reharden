set ::env(DESIGN_NAME) tt_um_morningjava_top
set ::env(VERILOG_FILES) "\
    $::env(DESIGN_DIR)/audio_pwm.v \
    $::env(DESIGN_DIR)/euro.v \
    $::env(DESIGN_DIR)/frame.v \
    $::env(DESIGN_DIR)/noise.v \
    $::env(DESIGN_DIR)/registers.v \
    $::env(DESIGN_DIR)/square.v \
    $::env(DESIGN_DIR)/system.v \
    $::env(DESIGN_DIR)/triangle.v \
    $::env(DESIGN_DIR)/uart.v \
    $::env(DESIGN_DIR)/apu.v \
    $::env(DESIGN_DIR)/tt_um_morningjava_top.v"

# Project area: 1x2 tiles
set ::env(DIE_AREA) "0 0 168.36 225.76"
set ::env(FP_DEF_TEMPLATE) "$::env(DESIGN_DIR)/../tt/def/tt_block_1x2.def"
