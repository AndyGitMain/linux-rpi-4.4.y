cmd_crypto/ablk_helper.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o crypto/ablk_helper.ko crypto/ablk_helper.o crypto/ablk_helper.mod.o
