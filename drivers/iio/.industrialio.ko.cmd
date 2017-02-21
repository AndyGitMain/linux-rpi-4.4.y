cmd_drivers/iio/industrialio.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o drivers/iio/industrialio.ko drivers/iio/industrialio.o drivers/iio/industrialio.mod.o
