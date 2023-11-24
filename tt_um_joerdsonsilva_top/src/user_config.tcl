set ::env(DESIGN_NAME) tt_um_joerdsonsilva_top
set ::env(VERILOG_FILES) "\
    $::env(DESIGN_DIR)/tt_um_joerdsonsilva_top.v \
    $::env(DESIGN_DIR)/modem.v \
    $::env(DESIGN_DIR)/bask.v \
    $::env(DESIGN_DIR)/mult1.v \
    $::env(DESIGN_DIR)/clk_rdg1.v \
    $::env(DESIGN_DIR)/rdg1.v \
    $::env(DESIGN_DIR)/ffd1.v \
    $::env(DESIGN_DIR)/wave11.v \
    $::env(DESIGN_DIR)/bfsk.v \
    $::env(DESIGN_DIR)/clk_rdg2.v \
    $::env(DESIGN_DIR)/clk_25MHz.v \
    $::env(DESIGN_DIR)/wave12.v \
    $::env(DESIGN_DIR)/wave22.v \
    $::env(DESIGN_DIR)/rdg2.v \
    $::env(DESIGN_DIR)/ffd2.v \
    $::env(DESIGN_DIR)/freq_select.v \
    $::env(DESIGN_DIR)/bpsk.v \
    $::env(DESIGN_DIR)/clk_rdg3.v \
    $::env(DESIGN_DIR)/rdg3.v \
    $::env(DESIGN_DIR)/ffd3.v \
    $::env(DESIGN_DIR)/wave13.v \
    $::env(DESIGN_DIR)/wave23.v \
    $::env(DESIGN_DIR)/control_0.v \
    $::env(DESIGN_DIR)/demod_bask.v \
    $::env(DESIGN_DIR)/demod_bfsk.v \
    $::env(DESIGN_DIR)/wave122.v \
    $::env(DESIGN_DIR)/mult2.v \
    $::env(DESIGN_DIR)/integrator2.v \
    $::env(DESIGN_DIR)/demod_bpsk.v \
    $::env(DESIGN_DIR)/wave133.v \
    $::env(DESIGN_DIR)/mult3.v \
    $::env(DESIGN_DIR)/integrator3.v \
    $::env(DESIGN_DIR)/control_1.v"

# Project area: 1x2 tiles
set ::env(DIE_AREA) "0 0 168.36 225.76"
set ::env(FP_DEF_TEMPLATE) "$::env(DESIGN_DIR)/../tt/def/tt_block_1x2.def"
