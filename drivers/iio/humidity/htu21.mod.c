#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xf51a0302, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x457ad05d, __VMLINUX_SYMBOL_STR(iio_read_const_attr) },
	{ 0x10782160, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0x5d8f8ac3, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x474260dc, __VMLINUX_SYMBOL_STR(ms_sensors_show_battery_low) },
	{ 0x63fa2e98, __VMLINUX_SYMBOL_STR(ms_sensors_show_heater) },
	{ 0x6d9958da, __VMLINUX_SYMBOL_STR(ms_sensors_write_heater) },
	{ 0xb14962cf, __VMLINUX_SYMBOL_STR(ms_sensors_ht_read_temperature) },
	{ 0x1e35474d, __VMLINUX_SYMBOL_STR(ms_sensors_ht_read_humidity) },
	{ 0x85d23016, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xae660967, __VMLINUX_SYMBOL_STR(ms_sensors_write_resolution) },
	{ 0x3934a77b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xbd7da979, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x1ebf58a5, __VMLINUX_SYMBOL_STR(devm_iio_device_register) },
	{ 0x27683889, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x482c94e5, __VMLINUX_SYMBOL_STR(ms_sensors_read_serial) },
	{ 0xc77b421f, __VMLINUX_SYMBOL_STR(ms_sensors_reset) },
	{ 0x45f768a8, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x23a0340d, __VMLINUX_SYMBOL_STR(devm_iio_device_alloc) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=industrialio,ms_sensors_i2c";


MODULE_INFO(srcversion, "7CE26DAB272D7A3F00E627C");
