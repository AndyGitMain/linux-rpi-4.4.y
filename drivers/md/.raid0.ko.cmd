cmd_drivers/md/raid0.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o drivers/md/raid0.ko drivers/md/raid0.o drivers/md/raid0.mod.o
