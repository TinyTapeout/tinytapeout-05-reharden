set ::env(DESIGN_NAME) tt_um_dlmiles_tt05_i2c_bert
set ::env(VERILOG_FILES) "\
    $::env(DESIGN_DIR)/tt_um.vh \
    $::env(DESIGN_DIR)/config.vh \
    $::env(DESIGN_DIR)/top_tt_um_dlmiles_tt05_i2c_bert.v \
    $::env(DESIGN_DIR)/sky130_toolbox/dffqn_negedge.v \
    $::env(DESIGN_DIR)/sky130_toolbox/dff.v \
    $::env(DESIGN_DIR)/sky130_toolbox/glitch_free_clock_mux.v \
    $::env(DESIGN_DIR)/sky130_toolbox/dffqn_negedge_async_reset.v \
    $::env(DESIGN_DIR)/sky130_toolbox/dff_async_reset.v \
    $::env(DESIGN_DIR)/sky130_toolbox/glitch_free_clock_mux_async_reset.v \
    $::env(DESIGN_DIR)/sky130_toolbox/sky130_behavioral_udp_dlatch_pr.v \
    $::env(DESIGN_DIR)/pdk_sky130/sky130_fd_sc_hd__dlrtp.v \
    $::env(DESIGN_DIR)/pdk_sky130/sky130_fd_sc_hd__maj3.v \
    $::env(DESIGN_DIR)/TT05I2CBertTop.v"

# Project area: 1x1 tiles
set ::env(DIE_AREA) "0 0 168.36 111.52"
set ::env(FP_DEF_TEMPLATE) "$::env(DESIGN_DIR)/../tt/def/tt_block_1x1.def"
