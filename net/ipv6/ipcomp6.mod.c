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
	{ 0x692e583f, __VMLINUX_SYMBOL_STR(xfrm6_rcv) },
	{ 0x9d26dd40, __VMLINUX_SYMBOL_STR(xfrm6_find_1stfragopt) },
	{ 0x880e9f8e, __VMLINUX_SYMBOL_STR(ipcomp_output) },
	{ 0xb4c1c49b, __VMLINUX_SYMBOL_STR(ipcomp_input) },
	{ 0x356c0332, __VMLINUX_SYMBOL_STR(ipcomp_destroy) },
	{ 0xaaf786b0, __VMLINUX_SYMBOL_STR(xfrm6_protocol_deregister) },
	{ 0x489c30a, __VMLINUX_SYMBOL_STR(xfrm_unregister_type) },
	{ 0x1dd1ee9d, __VMLINUX_SYMBOL_STR(xfrm6_protocol_register) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x696f4522, __VMLINUX_SYMBOL_STR(xfrm_register_type) },
	{ 0x5daa25ad, __VMLINUX_SYMBOL_STR(xfrm_state_insert) },
	{ 0x6b8389c5, __VMLINUX_SYMBOL_STR(xfrm_init_state) },
	{ 0x798237bc, __VMLINUX_SYMBOL_STR(xfrm6_tunnel_alloc_spi) },
	{ 0xba196ef2, __VMLINUX_SYMBOL_STR(xfrm_state_alloc) },
	{ 0x187aec62, __VMLINUX_SYMBOL_STR(xfrm6_tunnel_spi_lookup) },
	{ 0xa7bd55e3, __VMLINUX_SYMBOL_STR(ipcomp_init_state) },
	{ 0xcbb683d1, __VMLINUX_SYMBOL_STR(ip6_redirect) },
	{ 0x58a64d60, __VMLINUX_SYMBOL_STR(__xfrm_state_destroy) },
	{ 0xabfc42fb, __VMLINUX_SYMBOL_STR(ip6_update_pmtu) },
	{ 0x3dceb212, __VMLINUX_SYMBOL_STR(xfrm_state_lookup) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ipv6,xfrm_ipcomp,xfrm6_tunnel";


MODULE_INFO(srcversion, "46C1D87521CE8B31714C7AE");
