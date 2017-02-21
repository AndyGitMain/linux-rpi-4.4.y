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
	{ 0x3f5c468e, __VMLINUX_SYMBOL_STR(nf_nat_masquerade_ipv4_unregister_notifier) },
	{ 0x31923542, __VMLINUX_SYMBOL_STR(xt_unregister_target) },
	{ 0xfedbf252, __VMLINUX_SYMBOL_STR(nf_nat_masquerade_ipv4_register_notifier) },
	{ 0x6d2f1e63, __VMLINUX_SYMBOL_STR(xt_register_target) },
	{ 0x18ced8a9, __VMLINUX_SYMBOL_STR(nf_nat_masquerade_ipv4) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_nat_masquerade_ipv4,x_tables";


MODULE_INFO(srcversion, "764495F3227F0D58D0F994A");
