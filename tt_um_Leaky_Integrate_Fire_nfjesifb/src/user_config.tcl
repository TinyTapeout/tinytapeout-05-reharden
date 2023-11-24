set ::env(DESIGN_NAME) tt_um_Leaky_Integrate_Fire_nfjesifb
set ::env(VERILOG_FILES) "\
    $::env(DESIGN_DIR)/tt_um_Leaky_Integrate_Fire_nfjesifb.v \
    $::env(DESIGN_DIR)/accumulator.v \
    $::env(DESIGN_DIR)/weigher.v \
    $::env(DESIGN_DIR)/comparator.v \
    $::env(DESIGN_DIR)/decay.v \
    $::env(DESIGN_DIR)/LIF.v \
    $::env(DESIGN_DIR)/set_vars.v \
    $::env(DESIGN_DIR)/top.v"

# Project area: 1x1 tiles
set ::env(DIE_AREA) "0 0 168.36 111.52"
set ::env(FP_DEF_TEMPLATE) "$::env(DESIGN_DIR)/../tt/def/tt_block_1x1.def"
