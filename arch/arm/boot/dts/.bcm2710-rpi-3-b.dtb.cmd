cmd_arch/arm/boot/dts/bcm2710-rpi-3-b.dtb := mkdir -p arch/arm/boot/dts/ ; arm-linux-gnueabihf-gcc -E -Wp,-MD,arch/arm/boot/dts/.bcm2710-rpi-3-b.dtb.d.pre.tmp -nostdinc -I./arch/arm/boot/dts -I./arch/arm/boot/dts/include -I./drivers/of/testcase-data -undef -D__DTS__ -x assembler-with-cpp -o arch/arm/boot/dts/.bcm2710-rpi-3-b.dtb.dts.tmp arch/arm/boot/dts/bcm2710-rpi-3-b.dts ; ./scripts/dtc/dtc -O dtb -o arch/arm/boot/dts/bcm2710-rpi-3-b.dtb -b 0 -i arch/arm/boot/dts/ -@ -H epapr -d arch/arm/boot/dts/.bcm2710-rpi-3-b.dtb.d.dtc.tmp arch/arm/boot/dts/.bcm2710-rpi-3-b.dtb.dts.tmp ; cat arch/arm/boot/dts/.bcm2710-rpi-3-b.dtb.d.pre.tmp arch/arm/boot/dts/.bcm2710-rpi-3-b.dtb.d.dtc.tmp > arch/arm/boot/dts/.bcm2710-rpi-3-b.dtb.d

source_arch/arm/boot/dts/bcm2710-rpi-3-b.dtb := arch/arm/boot/dts/bcm2710-rpi-3-b.dts

deps_arch/arm/boot/dts/bcm2710-rpi-3-b.dtb := \
  arch/arm/boot/dts/bcm2710.dtsi \
  arch/arm/boot/dts/bcm2708_common.dtsi \
  arch/arm/boot/dts/include/dt-bindings/clock/bcm2835.h \
  arch/arm/boot/dts/include/dt-bindings/clock/bcm2835-aux.h \
  arch/arm/boot/dts/include/dt-bindings/power/raspberrypi-power.h \
  arch/arm/boot/dts/include/dt-bindings/gpio/gpio.h \
  arch/arm/boot/dts/include/dt-bindings/pinctrl/bcm2835.h \
  arch/arm/boot/dts/skeleton.dtsi \

arch/arm/boot/dts/bcm2710-rpi-3-b.dtb: $(deps_arch/arm/boot/dts/bcm2710-rpi-3-b.dtb)

$(deps_arch/arm/boot/dts/bcm2710-rpi-3-b.dtb):
