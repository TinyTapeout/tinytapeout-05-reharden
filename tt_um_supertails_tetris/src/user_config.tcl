set ::env(DESIGN_NAME) tt_um_supertails_tetris
set ::env(VERILOG_FILES) "\
    $::env(DESIGN_DIR)/main.sv \
    $::env(DESIGN_DIR)/collision.sv \
    $::env(DESIGN_DIR)/buttons.sv \
    $::env(DESIGN_DIR)/puyo.sv \
    $::env(DESIGN_DIR)/defs.svh"

# Project area: 1x1 tiles
set ::env(DIE_AREA) "0 0 168.36 111.52"
set ::env(FP_DEF_TEMPLATE) "$::env(DESIGN_DIR)/../tt/def/tt_block_1x1.def"
