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
	{ 0x48ba866a, __VMLINUX_SYMBOL_STR(nf_nat_amanda_hook) },
	{ 0xc2cdbf1, __VMLINUX_SYMBOL_STR(synchronize_sched) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x4d77347f, __VMLINUX_SYMBOL_STR(nf_nat_follow_master) },
	{ 0xa47f1504, __VMLINUX_SYMBOL_STR(nf_ct_unexpect_related) },
	{ 0x27361611, __VMLINUX_SYMBOL_STR(nf_ct_helper_log) },
	{ 0xf819d65a, __VMLINUX_SYMBOL_STR(nf_nat_mangle_udp_packet) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xcd7d9401, __VMLINUX_SYMBOL_STR(nf_ct_expect_related_report) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack_amanda,nf_nat,nf_conntrack";


MODULE_INFO(srcversion, "5C257A3DA42BDD2C2052E49");
