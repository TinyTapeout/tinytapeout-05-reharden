set ::env(DESIGN_NAME) tt_um_hh
set ::env(VERILOG_FILES) "\
    $::env(DESIGN_DIR)/tt_um_hh.v \
    $::env(DESIGN_DIR)/hh.v \
    $::env(DESIGN_DIR)/hh_state.v"

# Project area: 4x2 tiles
set ::env(DIE_AREA) "0 0 678.96 225.76"
set ::env(FP_DEF_TEMPLATE) "$::env(DESIGN_DIR)/../tt/def/tt_block_4x2.def"
