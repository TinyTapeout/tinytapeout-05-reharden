set ::env(DESIGN_NAME) tt_um_ja1tye_sound_generator
set ::env(VERILOG_FILES) "\
    $::env(DESIGN_DIR)/top.v \
    $::env(DESIGN_DIR)/i2s_out.v \
    $::env(DESIGN_DIR)/master_counter.v \
    $::env(DESIGN_DIR)/sample_counter.v \
    $::env(DESIGN_DIR)/spi_decoder.v \
    $::env(DESIGN_DIR)/spi_slave.v \
    $::env(DESIGN_DIR)/tone_engine.v \
    $::env(DESIGN_DIR)/wave_lut.v"

# Project area: 1x2 tiles
set ::env(DIE_AREA) "0 0 168.36 225.76"
set ::env(FP_DEF_TEMPLATE) "$::env(DESIGN_DIR)/../tt/def/tt_block_1x2.def"
