set ::env(DESIGN_NAME) tt_um_mingkaic1_stack_machine
set ::env(VERILOG_FILES) "\
    $::env(DESIGN_DIR)/tt_um_mingkaic1_stack_machine.sv \
    $::env(DESIGN_DIR)/Top.sv \
    $::env(DESIGN_DIR)/RegFile.sv \
    $::env(DESIGN_DIR)/Stack.sv \
    $::env(DESIGN_DIR)/ALU.sv"

# Project area: 1x2 tiles
set ::env(DIE_AREA) "0 0 168.36 225.76"
set ::env(FP_DEF_TEMPLATE) "$::env(DESIGN_DIR)/../tt/def/tt_block_1x2.def"
