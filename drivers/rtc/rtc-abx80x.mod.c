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
	{ 0x10782160, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0x5d8f8ac3, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0xffaa9a00, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x46dcd0c4, __VMLINUX_SYMBOL_STR(of_property_read_string) },
	{ 0x31072c69, __VMLINUX_SYMBOL_STR(devm_rtc_device_register) },
	{ 0xabfa05d3, __VMLINUX_SYMBOL_STR(i2c_smbus_write_byte_data) },
	{ 0x38c4d4fa, __VMLINUX_SYMBOL_STR(i2c_smbus_read_byte_data) },
	{ 0x27683889, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x5838f6c9, __VMLINUX_SYMBOL_STR(rtc_valid_tm) },
	{ 0xb6936ffe, __VMLINUX_SYMBOL_STR(_bcd2bin) },
	{ 0x5af04b3e, __VMLINUX_SYMBOL_STR(i2c_smbus_read_i2c_block_data) },
	{ 0xbd7da979, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x4f8e6a80, __VMLINUX_SYMBOL_STR(i2c_smbus_write_i2c_block_data) },
	{ 0x80ca5026, __VMLINUX_SYMBOL_STR(_bin2bcd) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("i2c:abx80x");
MODULE_ALIAS("i2c:ab0801");
MODULE_ALIAS("i2c:ab0803");
MODULE_ALIAS("i2c:ab0804");
MODULE_ALIAS("i2c:ab0805");
MODULE_ALIAS("i2c:ab1801");
MODULE_ALIAS("i2c:ab1803");
MODULE_ALIAS("i2c:ab1804");
MODULE_ALIAS("i2c:ab1805");

MODULE_INFO(srcversion, "C71FF5C0BCE694CF6F2C361");
