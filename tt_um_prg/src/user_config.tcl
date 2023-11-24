set ::env(DESIGN_NAME) tt_um_prg
set ::env(VERILOG_FILES) "\
    $::env(DESIGN_DIR)/tt_um_prg.v \
    $::env(DESIGN_DIR)/prg.v \
    $::env(DESIGN_DIR)/SELECT_NOT_8.v \
    $::env(DESIGN_DIR)/MUX21I.v \
    $::env(DESIGN_DIR)/GF_INV_8_shared.v \
    $::env(DESIGN_DIR)/GF_MULS_4_shared.v \
    $::env(DESIGN_DIR)/GF_SQ_SCL_4.v \
    $::env(DESIGN_DIR)/GF_SQ_2.v \
    $::env(DESIGN_DIR)/GF_SCLW_2.v \
    $::env(DESIGN_DIR)/GF_INV_4_shared.v"

# Project area: 1x2 tiles
set ::env(DIE_AREA) "0 0 168.36 225.76"
set ::env(FP_DEF_TEMPLATE) "$::env(DESIGN_DIR)/../tt/def/tt_block_1x2.def"
