set ::env(DESIGN_NAME) tt_um_rejunity_rule110
set ::env(VERILOG_FILES) "\
    $::env(DESIGN_DIR)/tt_um_rejunity_rule110.v"

# Project area: 1x2 tiles
set ::env(DIE_AREA) "0 0 168.36 225.76"
set ::env(FP_DEF_TEMPLATE) "$::env(DESIGN_DIR)/../tt/def/tt_block_1x2.def"
