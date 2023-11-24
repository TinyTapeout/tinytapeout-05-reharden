set ::env(DESIGN_NAME) tt_um_urish_silife_max
set ::env(VERILOG_FILES) "\
    $::env(DESIGN_DIR)/cell.v \
    $::env(DESIGN_DIR)/grid_8x32.v \
    $::env(DESIGN_DIR)/max7219.v \
    $::env(DESIGN_DIR)/spi_master.v \
    $::env(DESIGN_DIR)/demo.v \
    $::env(DESIGN_DIR)/silife.v"

# Project area: 3x2 tiles
set ::env(DIE_AREA) "0 0 508.76 225.76"
set ::env(FP_DEF_TEMPLATE) "$::env(DESIGN_DIR)/../tt/def/tt_block_3x2.def"
