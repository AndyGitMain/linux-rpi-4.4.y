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
	{ 0x5fdad546, __VMLINUX_SYMBOL_STR(arizona_pm_ops) },
	{ 0x3dc526a9, __VMLINUX_SYMBOL_STR(arizona_of_match) },
	{ 0x10782160, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0x5d8f8ac3, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x9e932e6, __VMLINUX_SYMBOL_STR(wm5102_i2c_regmap) },
	{ 0x6d7a36a7, __VMLINUX_SYMBOL_STR(arizona_dev_init) },
	{ 0x58c6855b, __VMLINUX_SYMBOL_STR(__devm_regmap_init_i2c) },
	{ 0xe582a165, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xbd7da979, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xba9691eb, __VMLINUX_SYMBOL_STR(arizona_of_get_type) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x644b462a, __VMLINUX_SYMBOL_STR(arizona_dev_exit) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=regmap-i2c";

MODULE_ALIAS("i2c:wm5102");
MODULE_ALIAS("i2c:wm5110");
MODULE_ALIAS("i2c:wm8280");
MODULE_ALIAS("i2c:wm8997");
MODULE_ALIAS("i2c:wm8998");
MODULE_ALIAS("i2c:wm1814");

MODULE_INFO(srcversion, "0DFCDD9097B3AA12CFAE86E");
