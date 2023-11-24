set ::env(DESIGN_NAME) tt_um_hadirkhan10_lif_neuron
set ::env(VERILOG_FILES) "\
    $::env(DESIGN_DIR)/tt_um_hadirkhan10_lif_neuron.v \
    $::env(DESIGN_DIR)/lif_neuron.v \
    $::env(DESIGN_DIR)/fsm.v"

# Project area: 1x1 tiles
set ::env(DIE_AREA) "0 0 168.36 111.52"
set ::env(FP_DEF_TEMPLATE) "$::env(DESIGN_DIR)/../tt/def/tt_block_1x1.def"
