cmd_drivers/input/touchscreen/egalax_ts.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o drivers/input/touchscreen/egalax_ts.ko drivers/input/touchscreen/egalax_ts.o drivers/input/touchscreen/egalax_ts.mod.o