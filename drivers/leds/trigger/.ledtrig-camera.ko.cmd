cmd_drivers/leds/trigger/ledtrig-camera.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o drivers/leds/trigger/ledtrig-camera.ko drivers/leds/trigger/ledtrig-camera.o drivers/leds/trigger/ledtrig-camera.mod.o