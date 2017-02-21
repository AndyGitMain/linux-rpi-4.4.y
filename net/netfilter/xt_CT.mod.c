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
	{ 0x76107b6b, __VMLINUX_SYMBOL_STR(xt_unregister_targets) },
	{ 0x31923542, __VMLINUX_SYMBOL_STR(xt_unregister_target) },
	{ 0x95195c60, __VMLINUX_SYMBOL_STR(xt_register_targets) },
	{ 0x6d2f1e63, __VMLINUX_SYMBOL_STR(xt_register_target) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xc85e7638, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x2ee20042, __VMLINUX_SYMBOL_STR(nf_ct_helper_ext_add) },
	{ 0x23cf473d, __VMLINUX_SYMBOL_STR(nf_conntrack_helper_try_module_get) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xb602c57e, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_module_put) },
	{ 0x5044ff2e, __VMLINUX_SYMBOL_STR(nf_ct_tmpl_free) },
	{ 0x1b26b798, __VMLINUX_SYMBOL_STR(__nf_ct_ext_add_length) },
	{ 0xd18fbdbf, __VMLINUX_SYMBOL_STR(nf_ct_tmpl_alloc) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x78f9b710, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_try_module_get) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xcc854025, __VMLINUX_SYMBOL_STR(nf_conntrack_untracked) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=x_tables,nf_conntrack";


MODULE_INFO(srcversion, "5717ACE89818674F287EFE4");
