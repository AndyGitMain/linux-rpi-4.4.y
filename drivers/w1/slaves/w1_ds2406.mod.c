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
	{ 0x731748b4, __VMLINUX_SYMBOL_STR(w1_unregister_family) },
	{ 0xce2419f8, __VMLINUX_SYMBOL_STR(w1_register_family) },
	{ 0x498303cc, __VMLINUX_SYMBOL_STR(sysfs_create_bin_file) },
	{ 0x30b5ecae, __VMLINUX_SYMBOL_STR(w1_write_8) },
	{ 0x2a6ce5a, __VMLINUX_SYMBOL_STR(crc16_table) },
	{ 0x85d23016, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xaf5a7c49, __VMLINUX_SYMBOL_STR(w1_read_block) },
	{ 0x265789cd, __VMLINUX_SYMBOL_STR(w1_write_block) },
	{ 0x9d0c19f0, __VMLINUX_SYMBOL_STR(w1_reset_select_slave) },
	{ 0x3934a77b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x6c6e417f, __VMLINUX_SYMBOL_STR(sysfs_remove_bin_file) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=wire";


MODULE_INFO(srcversion, "656131655AD37F750EDFC75");
