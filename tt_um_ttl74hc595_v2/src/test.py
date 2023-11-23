import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, FallingEdge, Timer, ClockCycles


@cocotb.test()
async def tt_um_ttl74hc595_v2(dut):
    dut._log.info("start")
    clock = Clock(dut.clk, 10, units="us")
    cocotb.start_soon(clock.start())

    # sclrn <=> uo_in[0]
    # ser   <=> uo_in[1]
    # rck   <=> uo_in[2]
    # srck  <=> uo_in[3]
    # G     <=> uo_in[4]

    dut.ui_in.value = 0b1111_1111

    # reset
    dut._log.info("reset")
    dut.ui_in.value = 0b1111_1110 # ~sclrn
    await ClockCycles(dut.clk, 10)
    dut.ui_in.value = 0b1111_1111 # sclrn
    await ClockCycles(dut.clk, 10)
    dut._log.info("store")
    dut.ui_in.value = 0b1111_1011 # ~rck
    await ClockCycles(dut.clk, 10)
    dut.ui_in.value = 0b1111_1111 # rck
    await ClockCycles(dut.clk, 10)
    dut._log.info("output enable")
    dut.ui_in.value = 0b1110_1111 # ~G
    await ClockCycles(dut.clk, 10)

    assert dut.uio_out == 0


    dut._log.info("shift << 1 set")
    dut.ui_in.value = 0b1110_0111 # ~srck
    await ClockCycles(dut.clk, 10)
    dut.ui_in.value = 0b1110_1111 # srck

    dut._log.info("store")
    dut.ui_in.value = 0b1110_1011 # ~rck
    await ClockCycles(dut.clk, 10)
    dut.ui_in.value = 0b1110_1111 # rck

    assert dut.uio_out == 1

    dut._log.info("shift << 7 set")
    for i in range(7):
        dut.ui_in.value = 0b1110_0101 # ~srck
        await ClockCycles(dut.clk, 10)
        dut.ui_in.value = 0b1110_1101 # srck
        await ClockCycles(dut.clk, 10)

    dut._log.info("store")
    dut.ui_in.value = 0b1110_1011 # ~rck
    await ClockCycles(dut.clk, 10)
    dut.ui_in.value = 0b1110_1111 # rck

    assert dut.uio_out == 0b1000_0000

    dut._log.info("shift << 8 set")
    for i in range(8):
        dut.ui_in.value = 0b1110_0111 # ~srck
        await ClockCycles(dut.clk, 10)
        dut.ui_in.value = 0b1110_1101 # srck
        await ClockCycles(dut.clk, 10)

    dut._log.info("store")
    dut.ui_in.value = 0b1110_1011 # ~rck
    await ClockCycles(dut.clk, 10)
    dut.ui_in.value = 0b1110_1111 # rck

    assert dut.uio_out == 0b1111_1111

    dut._log.info("shift << 8 clr")
    for i in range(8):
        dut.ui_in.value = 0b1110_0101 # ~srck
        await ClockCycles(dut.clk, 10)
        dut.ui_in.value = 0b1110_1101 # srck
        await ClockCycles(dut.clk, 10)

    dut._log.info("store")
    dut.ui_in.value = 0b1110_1011 # ~rck
    await ClockCycles(dut.clk, 10)
    dut.ui_in.value = 0b1110_1111 # rck

    assert dut.uio_out == 0b0000_0000
