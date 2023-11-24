set ::env(DESIGN_NAME) tt_um_psychogenic_shaman
set ::env(VERILOG_FILES) "\
    $::env(DESIGN_DIR)/tt_um_psychogenic_shaman.v"

# Project area: 8x2 tiles
set ::env(DIE_AREA) "0 0 1359.76 225.76"
set ::env(FP_DEF_TEMPLATE) "$::env(DESIGN_DIR)/../tt/def/tt_block_8x2.def"
