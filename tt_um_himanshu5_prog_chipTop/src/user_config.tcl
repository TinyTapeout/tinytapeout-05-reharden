set ::env(DESIGN_NAME) tt_um_himanshu5_prog_chipTop
set ::env(VERILOG_FILES) "\
    $::env(DESIGN_DIR)/computeUnit_0.v \
    $::env(DESIGN_DIR)/computeUnit_1.v \
    $::env(DESIGN_DIR)/tt_um_chiptop.v"

# Project area: 1x2 tiles
set ::env(DIE_AREA) "0 0 168.36 225.76"
set ::env(FP_DEF_TEMPLATE) "$::env(DESIGN_DIR)/../tt/def/tt_block_1x2.def"
