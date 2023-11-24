set ::env(DESIGN_NAME) tt_um_urish_silife
set ::env(VERILOG_FILES) "\
    $::env(DESIGN_DIR)/cell.v \
    $::env(DESIGN_DIR)/grid_8x8.v \
    $::env(DESIGN_DIR)/silife.v"

# Project area: 1x2 tiles
set ::env(DIE_AREA) "0 0 168.36 225.76"
set ::env(FP_DEF_TEMPLATE) "$::env(DESIGN_DIR)/../tt/def/tt_block_1x2.def"
