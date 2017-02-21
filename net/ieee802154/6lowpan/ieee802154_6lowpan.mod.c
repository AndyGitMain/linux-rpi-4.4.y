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
	{ 0x234210, __VMLINUX_SYMBOL_STR(register_netdevice) },
	{ 0x9c9ec2a0, __VMLINUX_SYMBOL_STR(proc_dointvec_minmax) },
	{ 0x18e60984, __VMLINUX_SYMBOL_STR(__do_once_start) },
	{ 0x2bf7e919, __VMLINUX_SYMBOL_STR(inet_frag_kill) },
	{ 0x3e80684a, __VMLINUX_SYMBOL_STR(__percpu_counter_add) },
	{ 0xb10c551f, __VMLINUX_SYMBOL_STR(percpu_counter_destroy) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xd75a0258, __VMLINUX_SYMBOL_STR(unregister_net_sysctl_table) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0xac04a623, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0x87b48b4b, __VMLINUX_SYMBOL_STR(skb_copy) },
	{ 0xa83d9e0f, __VMLINUX_SYMBOL_STR(lowpan_header_compress) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xfef8f504, __VMLINUX_SYMBOL_STR(init_user_ns) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0x29f0e43a, __VMLINUX_SYMBOL_STR(inet_frag_find) },
	{ 0x54be2cdd, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0x47bf98c, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0xf5b2a651, __VMLINUX_SYMBOL_STR(lowpan_netdev_setup) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xc0eb8278, __VMLINUX_SYMBOL_STR(kfree_skb_partial) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x3286ca03, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x3c471b8, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xcb9130d3, __VMLINUX_SYMBOL_STR(inet_frags_fini) },
	{ 0xd3388125, __VMLINUX_SYMBOL_STR(inet_frags_exit_net) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x384c579, __VMLINUX_SYMBOL_STR(ieee802154_hdr_peek) },
	{ 0xd4e482cb, __VMLINUX_SYMBOL_STR(dev_get_by_index) },
	{ 0x4bdca996, __VMLINUX_SYMBOL_STR(dev_remove_pack) },
	{ 0xf25661f7, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xdf1f7a49, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0xf587fec7, __VMLINUX_SYMBOL_STR(rtnl_link_unregister) },
	{ 0xb10a3f17, __VMLINUX_SYMBOL_STR(lowpan_header_decompress) },
	{ 0x839d8a07, __VMLINUX_SYMBOL_STR(skb_try_coalesce) },
	{ 0x2f316960, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xf2381716, __VMLINUX_SYMBOL_STR(inet_frag_maybe_warn_overflow) },
	{ 0x44de3d4c, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xc47c9524, __VMLINUX_SYMBOL_STR(inet_frag_destroy) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0xf885a403, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x2060e54e, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0xe8c39d22, __VMLINUX_SYMBOL_STR(__percpu_counter_init) },
	{ 0x473c9340, __VMLINUX_SYMBOL_STR(ieee802154_hdr_peek_addrs) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xc19158ad, __VMLINUX_SYMBOL_STR(unregister_netdevice_queue) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x3c85c92f, __VMLINUX_SYMBOL_STR(rtnl_link_register) },
	{ 0x162a69df, __VMLINUX_SYMBOL_STR(inet_frags_init) },
	{ 0xd0b8206b, __VMLINUX_SYMBOL_STR(dev_add_pack) },
	{ 0x7de45305, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0xc135a948, __VMLINUX_SYMBOL_STR(dev_queue_xmit) },
	{ 0x162a4dee, __VMLINUX_SYMBOL_STR(register_net_sysctl) },
	{ 0xfd8bdc76, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x9cf1b46, __VMLINUX_SYMBOL_STR(proc_dointvec_jiffies) },
	{ 0xf5154e83, __VMLINUX_SYMBOL_STR(skb_morph) },
	{ 0x4d7aef69, __VMLINUX_SYMBOL_STR(ieee802154_max_payload) },
	{ 0xd966ddc2, __VMLINUX_SYMBOL_STR(__do_once_done) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=6lowpan,ieee802154";


MODULE_INFO(srcversion, "40022D68F925AFD8FB22AD5");
