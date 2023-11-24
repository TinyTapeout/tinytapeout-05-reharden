set ::env(DESIGN_NAME) tt_um_jaylennee_wta_pwm
set ::env(VERILOG_FILES) "\
    $::env(DESIGN_DIR)/spi.v \
    $::env(DESIGN_DIR)/counter.v \
    $::env(DESIGN_DIR)/pwm_gen.v \
    $::env(DESIGN_DIR)/pwm_sync.v \
    $::env(DESIGN_DIR)/k_nn.v \
    $::env(DESIGN_DIR)/tt_um_jaylennee_wta_pwm.v"

# Project area: 1x2 tiles
set ::env(DIE_AREA) "0 0 168.36 225.76"
set ::env(FP_DEF_TEMPLATE) "$::env(DESIGN_DIR)/../tt/def/tt_block_1x2.def"
