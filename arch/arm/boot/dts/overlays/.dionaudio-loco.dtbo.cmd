cmd_arch/arm/boot/dts/overlays/dionaudio-loco.dtbo := arm-linux-gnueabihf-gcc -E -Wp,-MD,arch/arm/boot/dts/overlays/.dionaudio-loco.dtbo.d.pre.tmp -nostdinc -I./arch/arm/boot/dts -I./arch/arm/boot/dts/include -I./drivers/of/testcase-data -undef -D__DTS__ -x assembler-with-cpp -o arch/arm/boot/dts/overlays/.dionaudio-loco.dtbo.dts.tmp arch/arm/boot/dts/overlays/dionaudio-loco-overlay.dts ; ./scripts/dtc/dtc -@ -H epapr -O dtb -o arch/arm/boot/dts/overlays/dionaudio-loco.dtbo -b 0 -i arch/arm/boot/dts/overlays/  -d arch/arm/boot/dts/overlays/.dionaudio-loco.dtbo.d.dtc.tmp arch/arm/boot/dts/overlays/.dionaudio-loco.dtbo.dts.tmp ; cat arch/arm/boot/dts/overlays/.dionaudio-loco.dtbo.d.pre.tmp arch/arm/boot/dts/overlays/.dionaudio-loco.dtbo.d.dtc.tmp > arch/arm/boot/dts/overlays/.dionaudio-loco.dtbo.d

source_arch/arm/boot/dts/overlays/dionaudio-loco.dtbo := arch/arm/boot/dts/overlays/dionaudio-loco-overlay.dts

deps_arch/arm/boot/dts/overlays/dionaudio-loco.dtbo := \

arch/arm/boot/dts/overlays/dionaudio-loco.dtbo: $(deps_arch/arm/boot/dts/overlays/dionaudio-loco.dtbo)

$(deps_arch/arm/boot/dts/overlays/dionaudio-loco.dtbo):
