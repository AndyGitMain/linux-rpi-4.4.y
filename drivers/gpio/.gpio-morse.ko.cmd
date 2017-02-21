cmd_drivers/gpio/gpio-morse.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o drivers/gpio/gpio-morse.ko drivers/gpio/gpio-morse.o drivers/gpio/gpio-morse.mod.o
