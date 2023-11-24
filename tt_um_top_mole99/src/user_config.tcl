set ::env(DESIGN_NAME) tt_um_top_mole99
set ::env(VERILOG_FILES) "\
    $::env(DESIGN_DIR)/tt_um_top_mole99.sv \
    $::env(DESIGN_DIR)/top.sv \
    $::env(DESIGN_DIR)/sprite_access.sv \
    $::env(DESIGN_DIR)/sprite_data.sv \
    $::env(DESIGN_DIR)/sprite_movement.sv \
    $::env(DESIGN_DIR)/background.sv \
    $::env(DESIGN_DIR)/timing.sv \
    $::env(DESIGN_DIR)/synchronizer.sv \
    $::env(DESIGN_DIR)/spi_receiver.sv"

# Project area: 1x1 tiles
set ::env(DIE_AREA) "0 0 168.36 111.52"
set ::env(FP_DEF_TEMPLATE) "$::env(DESIGN_DIR)/../tt/def/tt_block_1x1.def"
