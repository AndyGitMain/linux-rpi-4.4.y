cmd_arch/arm/boot/dts/overlays/spi1-3cs.dtbo := arm-linux-gnueabihf-gcc -E -Wp,-MD,arch/arm/boot/dts/overlays/.spi1-3cs.dtbo.d.pre.tmp -nostdinc -I./arch/arm/boot/dts -I./arch/arm/boot/dts/include -I./drivers/of/testcase-data -undef -D__DTS__ -x assembler-with-cpp -o arch/arm/boot/dts/overlays/.spi1-3cs.dtbo.dts.tmp arch/arm/boot/dts/overlays/spi1-3cs-overlay.dts ; ./scripts/dtc/dtc -@ -H epapr -O dtb -o arch/arm/boot/dts/overlays/spi1-3cs.dtbo -b 0 -i arch/arm/boot/dts/overlays/  -d arch/arm/boot/dts/overlays/.spi1-3cs.dtbo.d.dtc.tmp arch/arm/boot/dts/overlays/.spi1-3cs.dtbo.dts.tmp ; cat arch/arm/boot/dts/overlays/.spi1-3cs.dtbo.d.pre.tmp arch/arm/boot/dts/overlays/.spi1-3cs.dtbo.d.dtc.tmp > arch/arm/boot/dts/overlays/.spi1-3cs.dtbo.d

source_arch/arm/boot/dts/overlays/spi1-3cs.dtbo := arch/arm/boot/dts/overlays/spi1-3cs-overlay.dts

deps_arch/arm/boot/dts/overlays/spi1-3cs.dtbo := \

arch/arm/boot/dts/overlays/spi1-3cs.dtbo: $(deps_arch/arm/boot/dts/overlays/spi1-3cs.dtbo)

$(deps_arch/arm/boot/dts/overlays/spi1-3cs.dtbo):
