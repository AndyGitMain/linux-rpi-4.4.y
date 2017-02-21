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
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x87be536b, __VMLINUX_SYMBOL_STR(nf_ct_nat_ext_add) },
	{ 0xd6197f1, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0xdcba47d5, __VMLINUX_SYMBOL_STR(nf_nat_used_tuple) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x5680333d, __VMLINUX_SYMBOL_STR(nf_nat_l4proto_register) },
	{ 0x2d023194, __VMLINUX_SYMBOL_STR(inet_proto_csum_replace4) },
	{ 0xd03c7700, __VMLINUX_SYMBOL_STR(secure_ipv4_port_ephemeral) },
	{ 0xbfc93742, __VMLINUX_SYMBOL_STR(nf_ip_checksum) },
	{ 0x86af90c5, __VMLINUX_SYMBOL_STR(__nf_ct_kill_acct) },
	{ 0x7176a8e0, __VMLINUX_SYMBOL_STR(skb_checksum) },
	{ 0xd9bae4b, __VMLINUX_SYMBOL_STR(nf_nat_l4proto_nlattr_to_range) },
	{ 0x29be3fc7, __VMLINUX_SYMBOL_STR(ip_route_me_harder) },
	{ 0xc962b583, __VMLINUX_SYMBOL_STR(nf_nat_l4proto_unregister) },
	{ 0xcd80626, __VMLINUX_SYMBOL_STR(nf_xfrm_me_harder) },
	{ 0xf50bd82f, __VMLINUX_SYMBOL_STR(nf_nat_packet) },
	{ 0x626daf57, __VMLINUX_SYMBOL_STR(skb_make_writable) },
	{ 0xe92559a3, __VMLINUX_SYMBOL_STR(nf_nat_l3proto_unregister) },
	{ 0xe113bbbc, __VMLINUX_SYMBOL_STR(csum_partial) },
	{ 0xe659dd69, __VMLINUX_SYMBOL_STR(nf_nat_l3proto_register) },
	{ 0xdfa738e4, __VMLINUX_SYMBOL_STR(__nf_nat_l4proto_find) },
	{ 0xf8d53d0c, __VMLINUX_SYMBOL_STR(nf_nat_alloc_null_binding) },
	{ 0x90ff6c9f, __VMLINUX_SYMBOL_STR(nf_ct_invert_tuplepr) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_nat,nf_conntrack";


MODULE_INFO(srcversion, "62E44ADA1A1F6F29B5E6B7A");
