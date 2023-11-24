set ::env(DESIGN_NAME) tt_um_rejunity_snn
set ::env(VERILOG_FILES) "\
    $::env(DESIGN_DIR)/adder_tree.v \
    $::env(DESIGN_DIR)/multiplier_accumulator.v \
    $::env(DESIGN_DIR)/signed_clamped_adder.v \
    $::env(DESIGN_DIR)/batch_normalization.v \
    $::env(DESIGN_DIR)/pwm.v \
    $::env(DESIGN_DIR)/membrane.v \
    $::env(DESIGN_DIR)/neuron_lif.v \
    $::env(DESIGN_DIR)/neuron_pwm.v \
    $::env(DESIGN_DIR)/signal_edge.v \
    $::env(DESIGN_DIR)/tt_um_rejunity_snn.v"

# Project area: 4x2 tiles
set ::env(DIE_AREA) "0 0 678.96 225.76"
set ::env(FP_DEF_TEMPLATE) "$::env(DESIGN_DIR)/../tt/def/tt_block_4x2.def"
