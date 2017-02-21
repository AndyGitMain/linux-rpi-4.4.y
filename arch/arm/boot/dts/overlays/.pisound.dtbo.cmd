cmd_arch/arm/boot/dts/overlays/pisound.dtbo := arm-linux-gnueabihf-gcc -E -Wp,-MD,arch/arm/boot/dts/overlays/.pisound.dtbo.d.pre.tmp -nostdinc -I./arch/arm/boot/dts -I./arch/arm/boot/dts/include -I./drivers/of/testcase-data -undef -D__DTS__ -x assembler-with-cpp -o arch/arm/boot/dts/overlays/.pisound.dtbo.dts.tmp arch/arm/boot/dts/overlays/pisound-overlay.dts ; ./scripts/dtc/dtc -@ -H epapr -O dtb -o arch/arm/boot/dts/overlays/pisound.dtbo -b 0 -i arch/arm/boot/dts/overlays/  -d arch/arm/boot/dts/overlays/.pisound.dtbo.d.dtc.tmp arch/arm/boot/dts/overlays/.pisound.dtbo.dts.tmp ; cat arch/arm/boot/dts/overlays/.pisound.dtbo.d.pre.tmp arch/arm/boot/dts/overlays/.pisound.dtbo.d.dtc.tmp > arch/arm/boot/dts/overlays/.pisound.dtbo.d

source_arch/arm/boot/dts/overlays/pisound.dtbo := arch/arm/boot/dts/overlays/pisound-overlay.dts

deps_arch/arm/boot/dts/overlays/pisound.dtbo := \
  arch/arm/boot/dts/include/dt-bindings/gpio/gpio.h \

arch/arm/boot/dts/overlays/pisound.dtbo: $(deps_arch/arm/boot/dts/overlays/pisound.dtbo)

$(deps_arch/arm/boot/dts/overlays/pisound.dtbo):
