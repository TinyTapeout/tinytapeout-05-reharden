set ::env(DESIGN_NAME) tt_um_tiny_game_of_life
set ::env(VERILOG_FILES) "\
    $::env(DESIGN_DIR)/project.sv"

# Project area: 1x2 tiles
set ::env(DIE_AREA) "0 0 168.36 225.76"
set ::env(FP_DEF_TEMPLATE) "$::env(DESIGN_DIR)/../tt/def/tt_block_1x2.def"
