cmd_drivers/bluetooth/hci_vhci.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o drivers/bluetooth/hci_vhci.ko drivers/bluetooth/hci_vhci.o drivers/bluetooth/hci_vhci.mod.o
