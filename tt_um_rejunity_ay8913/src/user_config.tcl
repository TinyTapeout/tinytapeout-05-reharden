set ::env(DESIGN_NAME) tt_um_rejunity_ay8913
set ::env(VERILOG_FILES) "\
    $::env(DESIGN_DIR)/attenuation.v \
    $::env(DESIGN_DIR)/tone.v \
    $::env(DESIGN_DIR)/noise.v \
    $::env(DESIGN_DIR)/envelope.v \
    $::env(DESIGN_DIR)/signal_edge.v \
    $::env(DESIGN_DIR)/pwm.v \
    $::env(DESIGN_DIR)/tt_um_rejunity_ay8913.v"

# Project area: 1x1 tiles
set ::env(DIE_AREA) "0 0 168.36 111.52"
set ::env(FP_DEF_TEMPLATE) "$::env(DESIGN_DIR)/../tt/def/tt_block_1x1.def"
