cmd_arch/arm/crypto/aes-arm-bs.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o arch/arm/crypto/aes-arm-bs.ko arch/arm/crypto/aes-arm-bs.o arch/arm/crypto/aes-arm-bs.mod.o