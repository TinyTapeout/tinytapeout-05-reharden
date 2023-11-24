set ::env(DESIGN_NAME) tt_um_tkmheart
set ::env(VERILOG_FILES) "\
    $::env(DESIGN_DIR)/clk_div2.v \
    $::env(DESIGN_DIR)/pk_dt.v \
    $::env(DESIGN_DIR)/th_flt.v \
    $::env(DESIGN_DIR)/tt_um_tkmheart.v"

# Project area: 1x1 tiles
set ::env(DIE_AREA) "0 0 168.36 111.52"
set ::env(FP_DEF_TEMPLATE) "$::env(DESIGN_DIR)/../tt/def/tt_block_1x1.def"
