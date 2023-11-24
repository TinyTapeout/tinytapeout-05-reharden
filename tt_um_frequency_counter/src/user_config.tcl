set ::env(DESIGN_NAME) tt_um_frequency_counter
set ::env(VERILOG_FILES) "\
    $::env(DESIGN_DIR)/tt_um_frequency_counter.v \
    $::env(DESIGN_DIR)/frequency_counter/src/edge_detect.v \
    $::env(DESIGN_DIR)/frequency_counter/src/frequency_counter.v \
    $::env(DESIGN_DIR)/frequency_counter/src/seven_segment.v"

# Project area: 1x1 tiles
set ::env(DIE_AREA) "0 0 168.36 111.52"
set ::env(FP_DEF_TEMPLATE) "$::env(DESIGN_DIR)/../tt/def/tt_block_1x1.def"
