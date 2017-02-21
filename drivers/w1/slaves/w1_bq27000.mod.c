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
	{ 0x1494ad7b, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x731748b4, __VMLINUX_SYMBOL_STR(w1_unregister_family) },
	{ 0xce2419f8, __VMLINUX_SYMBOL_STR(w1_register_family) },
	{ 0x85d23016, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x4481a9b8, __VMLINUX_SYMBOL_STR(w1_read_8) },
	{ 0x30b5ecae, __VMLINUX_SYMBOL_STR(w1_write_8) },
	{ 0x3934a77b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x3ae86c6e, __VMLINUX_SYMBOL_STR(platform_device_put) },
	{ 0x3fa32095, __VMLINUX_SYMBOL_STR(platform_device_add) },
	{ 0x39fdf5c2, __VMLINUX_SYMBOL_STR(platform_device_add_data) },
	{ 0x9864f59d, __VMLINUX_SYMBOL_STR(platform_device_alloc) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x3a249a9e, __VMLINUX_SYMBOL_STR(platform_device_unregister) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=wire";


MODULE_INFO(srcversion, "165447E335360E4DCBC5D0B");
