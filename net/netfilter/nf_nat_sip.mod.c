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
	{ 0x3f972dc6, __VMLINUX_SYMBOL_STR(nf_ct_helper_expectfn_register) },
	{ 0xc4eb939b, __VMLINUX_SYMBOL_STR(nf_nat_sip_hooks) },
	{ 0xc2cdbf1, __VMLINUX_SYMBOL_STR(synchronize_sched) },
	{ 0x68662761, __VMLINUX_SYMBOL_STR(nf_ct_helper_expectfn_unregister) },
	{ 0x9255efa, __VMLINUX_SYMBOL_STR(ct_sip_parse_numerical_param) },
	{ 0x50fa27e6, __VMLINUX_SYMBOL_STR(ct_sip_parse_address_param) },
	{ 0x626daf57, __VMLINUX_SYMBOL_STR(skb_make_writable) },
	{ 0x6d0f08fc, __VMLINUX_SYMBOL_STR(ct_sip_parse_request) },
	{ 0x2aa0e4fc, __VMLINUX_SYMBOL_STR(strncasecmp) },
	{ 0x7cc9ad93, __VMLINUX_SYMBOL_STR(ct_sip_parse_header_uri) },
	{ 0xd153a9f1, __VMLINUX_SYMBOL_STR(nf_ct_seqadj_set) },
	{ 0x27361611, __VMLINUX_SYMBOL_STR(nf_ct_helper_log) },
	{ 0xa47f1504, __VMLINUX_SYMBOL_STR(nf_ct_unexpect_related) },
	{ 0xcd7d9401, __VMLINUX_SYMBOL_STR(nf_ct_expect_related_report) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x2ea36ba9, __VMLINUX_SYMBOL_STR(ct_sip_get_header) },
	{ 0xaea5e699, __VMLINUX_SYMBOL_STR(ct_sip_get_sdp_header) },
	{ 0xe35541d0, __VMLINUX_SYMBOL_STR(__nf_nat_mangle_tcp_packet) },
	{ 0xf819d65a, __VMLINUX_SYMBOL_STR(nf_nat_mangle_udp_packet) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x4b67a69, __VMLINUX_SYMBOL_STR(nf_nat_setup_info) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack,nf_conntrack_sip,nf_nat";


MODULE_INFO(srcversion, "4473DC33407AFAE86A62D7E");
