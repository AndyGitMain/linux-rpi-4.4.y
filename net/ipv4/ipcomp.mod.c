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
	{ 0xd4cf71cd, __VMLINUX_SYMBOL_STR(xfrm_input) },
	{ 0x9d11bb70, __VMLINUX_SYMBOL_STR(xfrm4_rcv) },
	{ 0x880e9f8e, __VMLINUX_SYMBOL_STR(ipcomp_output) },
	{ 0xb4c1c49b, __VMLINUX_SYMBOL_STR(ipcomp_input) },
	{ 0x356c0332, __VMLINUX_SYMBOL_STR(ipcomp_destroy) },
	{ 0xbb59c7e5, __VMLINUX_SYMBOL_STR(xfrm4_protocol_deregister) },
	{ 0x489c30a, __VMLINUX_SYMBOL_STR(xfrm_unregister_type) },
	{ 0xcb3fe7a3, __VMLINUX_SYMBOL_STR(xfrm4_protocol_register) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x696f4522, __VMLINUX_SYMBOL_STR(xfrm_register_type) },
	{ 0x5daa25ad, __VMLINUX_SYMBOL_STR(xfrm_state_insert) },
	{ 0x6b8389c5, __VMLINUX_SYMBOL_STR(xfrm_init_state) },
	{ 0xba196ef2, __VMLINUX_SYMBOL_STR(xfrm_state_alloc) },
	{ 0xa7bd55e3, __VMLINUX_SYMBOL_STR(ipcomp_init_state) },
	{ 0x76a65f5c, __VMLINUX_SYMBOL_STR(ipv4_update_pmtu) },
	{ 0x58a64d60, __VMLINUX_SYMBOL_STR(__xfrm_state_destroy) },
	{ 0x28000bbc, __VMLINUX_SYMBOL_STR(ipv4_redirect) },
	{ 0x3dceb212, __VMLINUX_SYMBOL_STR(xfrm_state_lookup) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=xfrm_ipcomp";


MODULE_INFO(srcversion, "9006F9B6DE7160554F07F6A");
