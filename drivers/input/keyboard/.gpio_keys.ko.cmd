cmd_drivers/input/keyboard/gpio_keys.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o drivers/input/keyboard/gpio_keys.ko drivers/input/keyboard/gpio_keys.o drivers/input/keyboard/gpio_keys.mod.o