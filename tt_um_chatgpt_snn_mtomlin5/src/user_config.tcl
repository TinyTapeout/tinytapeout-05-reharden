set ::env(DESIGN_NAME) tt_um_chatgpt_snn_mtomlin5
set ::env(VERILOG_FILES) "\
    $::env(DESIGN_DIR)/tt_um_chatgpt_snn_mtomlin5.v \
    $::env(DESIGN_DIR)/decoder.v \
    $::env(DESIGN_DIR)/chat_gpt_spi_slave_v2.v \
    $::env(DESIGN_DIR)/chatgpt_lif_neuron_v2.v \
    $::env(DESIGN_DIR)/chatgpt_neuron_network_v2.v \
    $::env(DESIGN_DIR)/chatgpt_top_v2.v"

# Project area: 2x2 tiles
set ::env(DIE_AREA) "0 0 338.56 225.76"
set ::env(FP_DEF_TEMPLATE) "$::env(DESIGN_DIR)/../tt/def/tt_block_2x2.def"
