cmd_arch/arm64/boot/dts/rockchip/rk3399-firefly.dtb := mkdir -p arch/arm64/boot/dts/rockchip/ ; ./scripts/gcc-wrapper.py /home/topeet/Desktop/prebuilts/gcc/linux-x86/aarch64/aarch64-linux-android-4.9/bin/aarch64-linux-android-gcc -E -Wp,-MD,arch/arm64/boot/dts/rockchip/.rk3399-firefly.dtb.d.pre.tmp -nostdinc -I./arch/arm64/boot/dts -I./arch/arm64/boot/dts/include -I./drivers/of/testcase-data -undef -D__DTS__ -x assembler-with-cpp -o arch/arm64/boot/dts/rockchip/.rk3399-firefly.dtb.dts.tmp arch/arm64/boot/dts/rockchip/rk3399-firefly.dts ; ./scripts/dtc/dtc -O dtb -o arch/arm64/boot/dts/rockchip/rk3399-firefly.dtb -b 0 -i arch/arm64/boot/dts/rockchip/  -d arch/arm64/boot/dts/rockchip/.rk3399-firefly.dtb.d.dtc.tmp arch/arm64/boot/dts/rockchip/.rk3399-firefly.dtb.dts.tmp ; cat arch/arm64/boot/dts/rockchip/.rk3399-firefly.dtb.d.pre.tmp arch/arm64/boot/dts/rockchip/.rk3399-firefly.dtb.d.dtc.tmp > arch/arm64/boot/dts/rockchip/.rk3399-firefly.dtb.d

source_arch/arm64/boot/dts/rockchip/rk3399-firefly.dtb := arch/arm64/boot/dts/rockchip/rk3399-firefly.dts

deps_arch/arm64/boot/dts/rockchip/rk3399-firefly.dtb := \
  arch/arm64/boot/dts/rockchip/rk3399-firefly-port.dtsi \
  arch/arm64/boot/dts/include/dt-bindings/input/input.h \
  arch/arm64/boot/dts/include/dt-bindings/input/linux-event-codes.h \
  arch/arm64/boot/dts/rockchip/rk3399-firefly-core.dtsi \
  arch/arm64/boot/dts/include/dt-bindings/pwm/pwm.h \
  arch/arm64/boot/dts/rockchip/rk3399.dtsi \
  arch/arm64/boot/dts/include/dt-bindings/clock/rk3399-cru.h \
  arch/arm64/boot/dts/include/dt-bindings/gpio/gpio.h \
  arch/arm64/boot/dts/include/dt-bindings/interrupt-controller/arm-gic.h \
  arch/arm64/boot/dts/include/dt-bindings/interrupt-controller/irq.h \
  arch/arm64/boot/dts/include/dt-bindings/pinctrl/rockchip.h \
  arch/arm64/boot/dts/include/dt-bindings/power/rk3399-power.h \
  arch/arm64/boot/dts/include/dt-bindings/soc/rockchip,boot-mode.h \
  arch/arm64/boot/dts/include/dt-bindings/suspend/rockchip-rk3399.h \
  arch/arm64/boot/dts/include/dt-bindings/thermal/thermal.h \
  arch/arm64/boot/dts/rockchip/rk3399-dram-default-timing.dtsi \
  arch/arm64/boot/dts/include/dt-bindings/memory/rk3399-dram.h \
  arch/arm64/boot/dts/rockchip/rk3399-opp.dtsi \
  arch/arm64/boot/dts/rockchip/rk3399-sched-energy.dtsi \
  arch/arm64/boot/dts/rockchip/rk3399-android.dtsi \
  arch/arm64/boot/dts/include/dt-bindings/display/drm_mipi_dsi.h \
  arch/arm64/boot/dts/include/dt-bindings/display/media-bus-format.h \
  arch/arm64/boot/dts/rockchip/rk3399-vop-clk-set.dtsi \
  arch/arm64/boot/dts/rockchip/rk3399-firefly-demo.dtsi \

arch/arm64/boot/dts/rockchip/rk3399-firefly.dtb: $(deps_arch/arm64/boot/dts/rockchip/rk3399-firefly.dtb)

$(deps_arch/arm64/boot/dts/rockchip/rk3399-firefly.dtb):
