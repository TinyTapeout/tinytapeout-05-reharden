set ::env(DESIGN_NAME) tt_um_carlosgs99_cro_udg
set ::env(VERILOG_FILES) "\
    $::env(DESIGN_DIR)/cro_udg.v"

# Project area: 1x1 tiles
set ::env(DIE_AREA) "0 0 168.36 111.52"
set ::env(FP_DEF_TEMPLATE) "$::env(DESIGN_DIR)/../tt/def/tt_block_1x1.def"
