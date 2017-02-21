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
	{ 0xc2cdbf1, __VMLINUX_SYMBOL_STR(synchronize_sched) },
	{ 0x68662761, __VMLINUX_SYMBOL_STR(nf_ct_helper_expectfn_unregister) },
	{ 0xf8df2b15, __VMLINUX_SYMBOL_STR(nat_q931_hook) },
	{ 0xeb5d837b, __VMLINUX_SYMBOL_STR(nat_callforwarding_hook) },
	{ 0xf3d8e6cd, __VMLINUX_SYMBOL_STR(nat_h245_hook) },
	{ 0x300dda7a, __VMLINUX_SYMBOL_STR(nat_t120_hook) },
	{ 0x3c5bf7ea, __VMLINUX_SYMBOL_STR(nat_rtp_rtcp_hook) },
	{ 0x1523be01, __VMLINUX_SYMBOL_STR(set_ras_addr_hook) },
	{ 0xdf98fa0b, __VMLINUX_SYMBOL_STR(set_sig_addr_hook) },
	{ 0xd51224c8, __VMLINUX_SYMBOL_STR(set_h225_addr_hook) },
	{ 0x72a71fa2, __VMLINUX_SYMBOL_STR(set_h245_addr_hook) },
	{ 0x3f972dc6, __VMLINUX_SYMBOL_STR(nf_ct_helper_expectfn_register) },
	{ 0xa47f1504, __VMLINUX_SYMBOL_STR(nf_ct_unexpect_related) },
	{ 0xab4d8a, __VMLINUX_SYMBOL_STR(get_h225_addr) },
	{ 0xcd7d9401, __VMLINUX_SYMBOL_STR(nf_ct_expect_related_report) },
	{ 0xc1d80c28, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0xe35541d0, __VMLINUX_SYMBOL_STR(__nf_nat_mangle_tcp_packet) },
	{ 0xf819d65a, __VMLINUX_SYMBOL_STR(nf_nat_mangle_udp_packet) },
	{ 0x4d77347f, __VMLINUX_SYMBOL_STR(nf_nat_follow_master) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x4b67a69, __VMLINUX_SYMBOL_STR(nf_nat_setup_info) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack,nf_conntrack_h323,nf_nat";


MODULE_INFO(srcversion, "B50D0B221589CC8C4479864");
