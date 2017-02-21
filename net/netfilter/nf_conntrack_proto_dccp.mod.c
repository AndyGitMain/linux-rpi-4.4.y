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
	{ 0x45072cd, __VMLINUX_SYMBOL_STR(nf_ct_port_nla_policy) },
	{ 0x3f5b1415, __VMLINUX_SYMBOL_STR(nf_ct_port_nlattr_to_tuple) },
	{ 0x62813e5c, __VMLINUX_SYMBOL_STR(nf_ct_port_nlattr_tuple_size) },
	{ 0xba717d85, __VMLINUX_SYMBOL_STR(nf_ct_port_tuple_to_nlattr) },
	{ 0xe43274bc, __VMLINUX_SYMBOL_STR(proc_dointvec) },
	{ 0x9cf1b46, __VMLINUX_SYMBOL_STR(proc_dointvec_jiffies) },
	{ 0x3286ca03, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x3dd72271, __VMLINUX_SYMBOL_STR(nf_ct_l4proto_unregister) },
	{ 0xe2efaea6, __VMLINUX_SYMBOL_STR(nf_ct_l4proto_register) },
	{ 0xf885a403, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xc66cdd41, __VMLINUX_SYMBOL_STR(nf_ct_l4proto_pernet_register) },
	{ 0xad1695a9, __VMLINUX_SYMBOL_STR(nf_ct_l4proto_pernet_unregister) },
	{ 0xf8a60247, __VMLINUX_SYMBOL_STR(__nf_ct_refresh_acct) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x86af90c5, __VMLINUX_SYMBOL_STR(__nf_ct_kill_acct) },
	{ 0x9840f257, __VMLINUX_SYMBOL_STR(nf_afinfo) },
	{ 0x9b4a44f5, __VMLINUX_SYMBOL_STR(nf_log_packet) },
	{ 0xc1d80c28, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0x32653dd7, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x66940955, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0xea054b22, __VMLINUX_SYMBOL_STR(nla_policy_len) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xf1db1704, __VMLINUX_SYMBOL_STR(nla_memcpy) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x4f391d0e, __VMLINUX_SYMBOL_STR(nla_parse) },
	{ 0xfef8f504, __VMLINUX_SYMBOL_STR(init_user_ns) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack";


MODULE_INFO(srcversion, "FCF3EE4F6C3E94AD2B04E7F");
