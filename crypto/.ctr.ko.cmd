cmd_crypto/ctr.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o crypto/ctr.ko crypto/ctr.o crypto/ctr.mod.o
