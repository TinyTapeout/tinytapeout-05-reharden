set ::env(DESIGN_NAME) tt_um_dinogame
set ::env(VERILOG_FILES) "\
    $::env(DESIGN_DIR)/dinogame.v \
    $::env(DESIGN_DIR)/dinosprite.v \
    $::env(DESIGN_DIR)/jumping.v \
    $::env(DESIGN_DIR)/rendering.v \
    $::env(DESIGN_DIR)/rng.v \
    $::env(DESIGN_DIR)/score.v \
    $::env(DESIGN_DIR)/scroll.v \
    $::env(DESIGN_DIR)/vga.v \
    $::env(DESIGN_DIR)/tt_um_dinogame.sv"

# Project area: 2x2 tiles
set ::env(DIE_AREA) "0 0 338.56 225.76"
set ::env(FP_DEF_TEMPLATE) "$::env(DESIGN_DIR)/../tt/def/tt_block_2x2.def"
