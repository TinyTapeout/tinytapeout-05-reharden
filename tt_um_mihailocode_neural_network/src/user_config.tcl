set ::env(DESIGN_NAME) tt_um_mihailocode_neural_network
set ::env(VERILOG_FILES) "\
    $::env(DESIGN_DIR)/perceptron.v \
    $::env(DESIGN_DIR)/activation.v \
    $::env(DESIGN_DIR)/tt_um_mihailocode_neural_network.v"

# Project area: 1x1 tiles
set ::env(DIE_AREA) "0 0 168.36 111.52"
set ::env(FP_DEF_TEMPLATE) "$::env(DESIGN_DIR)/../tt/def/tt_block_1x1.def"
