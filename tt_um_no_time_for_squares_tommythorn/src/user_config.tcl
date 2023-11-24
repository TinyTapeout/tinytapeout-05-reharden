set ::env(DESIGN_NAME) tt_um_no_time_for_squares_tommythorn
set ::env(VERILOG_FILES) "\
    $::env(DESIGN_DIR)/tt_um_no_time_for_squares_tommythorn.v \
    $::env(DESIGN_DIR)/clock.v \
    $::env(DESIGN_DIR)/vga.v \
    $::env(DESIGN_DIR)/tile.v"

# Project area: 3x2 tiles
set ::env(DIE_AREA) "0 0 508.76 225.76"
set ::env(FP_DEF_TEMPLATE) "$::env(DESIGN_DIR)/../tt/def/tt_block_3x2.def"
