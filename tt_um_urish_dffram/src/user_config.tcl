set ::env(DESIGN_NAME) tt_um_urish_dffram
set ::env(VERILOG_FILES) "\
    $::env(DESIGN_DIR)/dffram.v \
    $::env(DESIGN_DIR)/RAM32.v"

# Project area: 4x2 tiles
set ::env(DIE_AREA) "0 0 678.96 225.76"
set ::env(FP_DEF_TEMPLATE) "$::env(DESIGN_DIR)/../tt/def/tt_block_4x2.def"
