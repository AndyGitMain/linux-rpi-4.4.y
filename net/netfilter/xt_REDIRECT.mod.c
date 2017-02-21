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
	{ 0x95195c60, __VMLINUX_SYMBOL_STR(xt_register_targets) },
	{ 0xbdd6f744, __VMLINUX_SYMBOL_STR(nf_nat_redirect_ipv6) },
	{ 0x37be4df6, __VMLINUX_SYMBOL_STR(nf_nat_redirect_ipv4) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=x_tables,nf_nat_redirect";


MODULE_INFO(srcversion, "A885255E788CF54A8CC55F5");
