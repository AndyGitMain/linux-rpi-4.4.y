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
	{ 0x7b6b7ef8, __VMLINUX_SYMBOL_STR(hid_unregister_driver) },
	{ 0x5aab954d, __VMLINUX_SYMBOL_STR(__hid_register_driver) },
	{ 0xb8b5974, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xcce45ff3, __VMLINUX_SYMBOL_STR(hid_connect) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x65e07d0b, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0xfd1fdf8e, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xbd7da979, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x13d1d5ae, __VMLINUX_SYMBOL_STR(hid_open_report) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xe582a165, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("hid:b0003g*v00005543p00000042");
MODULE_ALIAS("hid:b0003g*v00005543p00000003");
MODULE_ALIAS("hid:b0003g*v00005543p00000004");
MODULE_ALIAS("hid:b0003g*v00005543p00000005");
MODULE_ALIAS("hid:b0003g*v00005543p00000064");
MODULE_ALIAS("hid:b0003g*v00005543p00000522");
MODULE_ALIAS("hid:b0003g*v00005543p00000781");
MODULE_ALIAS("hid:b0003g*v0000256Cp0000006E");
MODULE_ALIAS("hid:b0003g*v00005543p0000006E");

MODULE_INFO(srcversion, "E35550DAC21D0B6FA56BC23");
