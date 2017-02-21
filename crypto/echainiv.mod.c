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
	{ 0x63002e1e, __VMLINUX_SYMBOL_STR(crypto_unregister_template) },
	{ 0xa60e977a, __VMLINUX_SYMBOL_STR(crypto_register_template) },
	{ 0x58032bd, __VMLINUX_SYMBOL_STR(aead_exit_geniv) },
	{ 0xf1c520d9, __VMLINUX_SYMBOL_STR(aead_init_geniv) },
	{ 0x489fca21, __VMLINUX_SYMBOL_STR(aead_register_instance) },
	{ 0x5bee2563, __VMLINUX_SYMBOL_STR(aead_geniv_alloc) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x91dda801, __VMLINUX_SYMBOL_STR(scatterwalk_map_and_copy) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x6c76f1e6, __VMLINUX_SYMBOL_STR(aead_geniv_free) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "675A5FE8494DF5D052FBAFD");
