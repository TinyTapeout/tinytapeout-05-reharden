set ::env(DESIGN_NAME) tt_um_algofoogle_vga_spi_rom
set ::env(VERILOG_FILES) "\
    $::env(DESIGN_DIR)/tt05_top.v \
    $::env(DESIGN_DIR)/vga_sync.v \
    $::env(DESIGN_DIR)/vga_spi_rom.v"

# Project area: 1x1 tiles
set ::env(DIE_AREA) "0 0 168.36 111.52"
set ::env(FP_DEF_TEMPLATE) "$::env(DESIGN_DIR)/../tt/def/tt_block_1x1.def"
