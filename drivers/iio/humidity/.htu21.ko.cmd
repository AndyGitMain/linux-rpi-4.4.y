cmd_drivers/iio/humidity/htu21.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o drivers/iio/humidity/htu21.ko drivers/iio/humidity/htu21.o drivers/iio/humidity/htu21.mod.o