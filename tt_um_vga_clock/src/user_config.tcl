set ::env(DESIGN_NAME) tt_um_vga_clock
set ::env(VERILOG_FILES) "\
    $::env(DESIGN_DIR)/button_pulse.v \
    $::env(DESIGN_DIR)/cells.v \
    $::env(DESIGN_DIR)/digit.v \
    $::env(DESIGN_DIR)/fontROM.v \
    $::env(DESIGN_DIR)/tt_vga_clock.v \
    $::env(DESIGN_DIR)/vga_clock.v \
    $::env(DESIGN_DIR)/VgaSyncGen.v"

# Project area: 1x1 tiles
set ::env(DIE_AREA) "0 0 168.36 111.52"
set ::env(FP_DEF_TEMPLATE) "$::env(DESIGN_DIR)/../tt/def/tt_block_1x1.def"
