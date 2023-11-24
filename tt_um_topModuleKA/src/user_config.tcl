set ::env(DESIGN_NAME) tt_um_topModuleKA
set ::env(VERILOG_FILES) "\
    $::env(DESIGN_DIR)/tt_um_topModuleKA.v \
    $::env(DESIGN_DIR)/lif.v \
    $::env(DESIGN_DIR)/LSFR.v \
    $::env(DESIGN_DIR)/fdre.v \
    $::env(DESIGN_DIR)/fdre_reset1.v \
    $::env(DESIGN_DIR)/mux_8to1_8bit.v"

# Project area: 1x1 tiles
set ::env(DIE_AREA) "0 0 168.36 111.52"
set ::env(FP_DEF_TEMPLATE) "$::env(DESIGN_DIR)/../tt/def/tt_block_1x1.def"
