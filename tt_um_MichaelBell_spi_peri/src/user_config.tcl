set ::env(DESIGN_NAME) tt_um_MichaelBell_spi_peri
set ::env(VERILOG_FILES) "\
    $::env(DESIGN_DIR)/top.v \
    $::env(DESIGN_DIR)/decoder.v \
    $::env(DESIGN_DIR)/spi_peri.v \
    $::env(DESIGN_DIR)/ring_oscillator.v"

# Project area: 1x1 tiles
set ::env(DIE_AREA) "0 0 168.36 111.52"
set ::env(FP_DEF_TEMPLATE) "$::env(DESIGN_DIR)/../tt/def/tt_block_1x1.def"
