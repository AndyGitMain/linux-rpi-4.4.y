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
	{ 0x3286ca03, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x20070efa, __VMLINUX_SYMBOL_STR(nfnetlink_subsys_unregister) },
	{ 0xf885a403, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0xec98593c, __VMLINUX_SYMBOL_STR(nfnetlink_subsys_register) },
	{ 0xe9e73de0, __VMLINUX_SYMBOL_STR(nf_ct_remove_expectations) },
	{ 0x58c72379, __VMLINUX_SYMBOL_STR(__nf_ct_try_assign_helper) },
	{ 0x1b26b798, __VMLINUX_SYMBOL_STR(__nf_ct_ext_add_length) },
	{ 0xc4da5834, __VMLINUX_SYMBOL_STR(nf_conntrack_free) },
	{ 0xcbabf74e, __VMLINUX_SYMBOL_STR(nf_conntrack_hash_check_insert) },
	{ 0xe4689576, __VMLINUX_SYMBOL_STR(ktime_get_with_offset) },
	{ 0x2ee20042, __VMLINUX_SYMBOL_STR(nf_ct_helper_ext_add) },
	{ 0x8bb69c9, __VMLINUX_SYMBOL_STR(nf_conntrack_alloc) },
	{ 0xb6cb8296, __VMLINUX_SYMBOL_STR(nfnetlink_parse_nat_setup_hook) },
	{ 0x5ce3b588, __VMLINUX_SYMBOL_STR(nfnl_lock) },
	{ 0xdb065657, __VMLINUX_SYMBOL_STR(nfnl_unlock) },
	{ 0x4a82ecd6, __VMLINUX_SYMBOL_STR(nf_ct_helper_expectfn_find_by_symbol) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x7cfd8c0, __VMLINUX_SYMBOL_STR(nf_conntrack_locks) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x31b9195c, __VMLINUX_SYMBOL_STR(__local_bh_disable_ip) },
	{ 0x99bab161, __VMLINUX_SYMBOL_STR(nf_ct_zone_dflt) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x90d38cfe, __VMLINUX_SYMBOL_STR(nfnetlink_send) },
	{ 0xc16bd0be, __VMLINUX_SYMBOL_STR(nfnetlink_has_listeners) },
	{ 0x41c8938b, __VMLINUX_SYMBOL_STR(nfnetlink_set_err) },
	{ 0xc3a0c6bb, __VMLINUX_SYMBOL_STR(nf_connlabels_replace) },
	{ 0x91f5b00c, __VMLINUX_SYMBOL_STR(nf_ct_iterate_cleanup) },
	{ 0xeabd28f8, __VMLINUX_SYMBOL_STR(nf_ct_delete) },
	{ 0xb8b5974, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xfd1fdf8e, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x1bb31047, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0x1893f64f, __VMLINUX_SYMBOL_STR(__nf_ct_expect_find) },
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0xcd7d9401, __VMLINUX_SYMBOL_STR(nf_ct_expect_related_report) },
	{ 0xe6085a07, __VMLINUX_SYMBOL_STR(__nf_conntrack_helper_find) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x204d454c, __VMLINUX_SYMBOL_STR(nf_ct_helper_expectfn_find_by_name) },
	{ 0xf3a97acd, __VMLINUX_SYMBOL_STR(nf_ct_expect_alloc) },
	{ 0xa2bb52b4, __VMLINUX_SYMBOL_STR(nf_conntrack_find_get) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0xde823516, __VMLINUX_SYMBOL_STR(netlink_unicast) },
	{ 0x44de3d4c, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x2f316960, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xc18ac88d, __VMLINUX_SYMBOL_STR(nf_ct_expect_hsize) },
	{ 0xc2abd2fd, __VMLINUX_SYMBOL_STR(nf_conntrack_expect_lock) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xc0c8d55e, __VMLINUX_SYMBOL_STR(nf_ct_unlink_expect_report) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x6c09c2a4, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x866d989e, __VMLINUX_SYMBOL_STR(nf_ct_expect_find_get) },
	{ 0x2ed8d0b0, __VMLINUX_SYMBOL_STR(nf_conntrack_l3proto_generic) },
	{ 0xf3ce8d64, __VMLINUX_SYMBOL_STR(nf_ct_l3protos) },
	{ 0x3f3ee7dd, __VMLINUX_SYMBOL_STR(__nf_ct_l4proto_find) },
	{ 0x347013de, __VMLINUX_SYMBOL_STR(nla_validate) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x4f391d0e, __VMLINUX_SYMBOL_STR(nla_parse) },
	{ 0xb1af7412, __VMLINUX_SYMBOL_STR(nf_ct_expect_put) },
	{ 0x2101766e, __VMLINUX_SYMBOL_STR(__netlink_dump_start) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x672b1b49, __VMLINUX_SYMBOL_STR(nf_ct_expect_register_notifier) },
	{ 0x5b237861, __VMLINUX_SYMBOL_STR(nf_conntrack_register_notifier) },
	{ 0x341dbfa3, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0xd3e6f60d, __VMLINUX_SYMBOL_STR(cpu_possible_mask) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x10694b05, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xf68d004, __VMLINUX_SYMBOL_STR(__nlmsg_put) },
	{ 0x66940955, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x3aac3b96, __VMLINUX_SYMBOL_STR(nf_conntrack_unregister_notifier) },
	{ 0xb5f25ea9, __VMLINUX_SYMBOL_STR(nf_ct_expect_unregister_notifier) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nfnetlink,nf_conntrack";


MODULE_INFO(srcversion, "D681B62CCD89B4C353DF289");
