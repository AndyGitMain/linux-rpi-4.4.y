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
	{ 0x4d0d5ab0, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x348e8271, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xee4faa30, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0xf7f35f7, __VMLINUX_SYMBOL_STR(gpiod_to_irq) },
	{ 0xbd7da979, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x27d60fd, __VMLINUX_SYMBOL_STR(gpiod_direction_input) },
	{ 0x5e3c68ff, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xcede96b1, __VMLINUX_SYMBOL_STR(input_allocate_device) },
	{ 0xca40a251, __VMLINUX_SYMBOL_STR(rpisense_get_dev) },
	{ 0xa5a3b82a, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0x9893ba9c, __VMLINUX_SYMBOL_STR(rpisense_reg_read) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xdb056ef6, __VMLINUX_SYMBOL_STR(input_free_device) },
	{ 0x1a52eeee, __VMLINUX_SYMBOL_STR(input_unregister_device) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rpisense-core";

MODULE_ALIAS("platform:rpi-sense-js");
MODULE_ALIAS("of:N*T*Crpi,rpi-sense-js*");

MODULE_INFO(srcversion, "3A1020FD8FE11A5D677800E");
