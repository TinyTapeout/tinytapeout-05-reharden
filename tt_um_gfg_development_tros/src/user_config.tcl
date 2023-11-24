set ::env(DESIGN_NAME) tt_um_gfg_development_tros
set ::env(VERILOG_FILES) "\
    $::env(DESIGN_DIR)/ros_nand4.v \
    $::env(DESIGN_DIR)/ros_nand4_cap.v \
    $::env(DESIGN_DIR)/ros_einv_sub.v \
    $::env(DESIGN_DIR)/fmeasurment.v \
    $::env(DESIGN_DIR)/tt_um_gfg_development_tros.v"

# Project area: 1x1 tiles
set ::env(DIE_AREA) "0 0 168.36 111.52"
set ::env(FP_DEF_TEMPLATE) "$::env(DESIGN_DIR)/../tt/def/tt_block_1x1.def"
