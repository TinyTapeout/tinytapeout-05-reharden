set ::env(DESIGN_NAME) tt_um_uwuifier
set ::env(VERILOG_FILES) "\
    $::env(DESIGN_DIR)/uart_rx.sv \
    $::env(DESIGN_DIR)/uart_tx.sv \
    $::env(DESIGN_DIR)/uart_fifo.sv \
    $::env(DESIGN_DIR)/uwuifier.sv \
    $::env(DESIGN_DIR)/tt_um_uwuifier.sv"

# Project area: 1x1 tiles
set ::env(DIE_AREA) "0 0 168.36 111.52"
set ::env(FP_DEF_TEMPLATE) "$::env(DESIGN_DIR)/../tt/def/tt_block_1x1.def"
