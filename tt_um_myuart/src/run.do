vlog tt_um_myuart.v
vlog sync_async_reset.v
vlog uart_tx.v

vsim -voptargs=+acc tt_um_myuart

add wave -group {TT_UM_MYUART}  sim:/tt_um_myuart/*
add wave -group {UART_TX}       sim:/tt_um_myuart/uart_tx/*

force -freeze sim:/tt_um_myuart/clk 1 0, 0 {50 ns} -r {100 ns}
force -freeze sim:/tt_um_myuart/rst_n 1'h0 0
force -freeze sim:/tt_um_myuart/ena 1'h0 0

run 100 ns
force -freeze sim:/tt_um_myuart/rst_n 1'h1 0
force -freeze sim:/tt_um_myuart/ena 1'h1 0
run 100 ns

run 200 us;