cmd_arch/arm/lib/xor-neon.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o arch/arm/lib/xor-neon.ko arch/arm/lib/xor-neon.o arch/arm/lib/xor-neon.mod.o
