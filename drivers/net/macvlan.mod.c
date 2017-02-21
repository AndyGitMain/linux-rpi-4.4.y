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
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xb8b5974, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x6b304b45, __VMLINUX_SYMBOL_STR(dev_forward_skb) },
	{ 0x67b4cf90, __VMLINUX_SYMBOL_STR(dev_mc_unsync) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xbeddf9b1, __VMLINUX_SYMBOL_STR(dev_get_nest_level) },
	{ 0x19f462ab, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0xe307b6e2, __VMLINUX_SYMBOL_STR(dev_uc_add) },
	{ 0xa16bd08d, __VMLINUX_SYMBOL_STR(__dev_forward_skb) },
	{ 0x204bde49, __VMLINUX_SYMBOL_STR(dev_mc_add_excl) },
	{ 0x4b31bac1, __VMLINUX_SYMBOL_STR(netdev_rx_handler_register) },
	{ 0xa282bdfc, __VMLINUX_SYMBOL_STR(dev_uc_add_excl) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xac04a623, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0xd3f57a2, __VMLINUX_SYMBOL_STR(_find_next_bit_le) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x7c2f0c07, __VMLINUX_SYMBOL_STR(dev_set_allmulti) },
	{ 0xc9d533a2, __VMLINUX_SYMBOL_STR(vlan_vid_del) },
	{ 0x116d7c52, __VMLINUX_SYMBOL_STR(call_netdevice_notifiers) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x709eea3d, __VMLINUX_SYMBOL_STR(vlan_vid_add) },
	{ 0xd25e501b, __VMLINUX_SYMBOL_STR(__netpoll_setup) },
	{ 0xd697e69a, __VMLINUX_SYMBOL_STR(trace_hardirqs_on) },
	{ 0xc9ec4e21, __VMLINUX_SYMBOL_STR(free_percpu) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0x54be2cdd, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0x1e277c97, __VMLINUX_SYMBOL_STR(netpoll_send_skb_on_dev) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x1528aac3, __VMLINUX_SYMBOL_STR(netif_rx_ni) },
	{ 0x16af230c, __VMLINUX_SYMBOL_STR(dev_set_mac_address) },
	{ 0x88d6355a, __VMLINUX_SYMBOL_STR(ip_check_defrag) },
	{ 0x9fdecc31, __VMLINUX_SYMBOL_STR(unregister_netdevice_many) },
	{ 0xd5e50c63, __VMLINUX_SYMBOL_STR(ethtool_op_get_link) },
	{ 0xf48939a4, __VMLINUX_SYMBOL_STR(__netpoll_free_async) },
	{ 0x753d8771, __VMLINUX_SYMBOL_STR(__ethtool_get_settings) },
	{ 0x3c471b8, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x5a01881b, __VMLINUX_SYMBOL_STR(dev_mc_del) },
	{ 0x66940955, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0xeed0d7cd, __VMLINUX_SYMBOL_STR(netdev_upper_dev_unlink) },
	{ 0x6de1ca3e, __VMLINUX_SYMBOL_STR(ndo_dflt_fdb_dump) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xc2cdbf1, __VMLINUX_SYMBOL_STR(synchronize_sched) },
	{ 0x6168860b, __VMLINUX_SYMBOL_STR(netif_stacked_transfer_operstate) },
	{ 0xf587fec7, __VMLINUX_SYMBOL_STR(rtnl_link_unregister) },
	{ 0x3ed889dd, __VMLINUX_SYMBOL_STR(__dev_get_by_index) },
	{ 0x6c209eab, __VMLINUX_SYMBOL_STR(__alloc_percpu_gfp) },
	{ 0x93077cd8, __VMLINUX_SYMBOL_STR(eth_header_cache_update) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xd3e6f60d, __VMLINUX_SYMBOL_STR(cpu_possible_mask) },
	{ 0x5eee1e70, __VMLINUX_SYMBOL_STR(netdev_rx_handler_unregister) },
	{ 0xa0bd761c, __VMLINUX_SYMBOL_STR(eth_header_parse) },
	{ 0x44de3d4c, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xcfea14b6, __VMLINUX_SYMBOL_STR(passthru_features_check) },
	{ 0xe831d99a, __VMLINUX_SYMBOL_STR(netdev_upper_dev_link) },
	{ 0xc1c0d601, __VMLINUX_SYMBOL_STR(ether_setup) },
	{ 0xdcc7ed75, __VMLINUX_SYMBOL_STR(dev_uc_unsync) },
	{ 0xfd1fdf8e, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x341dbfa3, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0xc19158ad, __VMLINUX_SYMBOL_STR(unregister_netdevice_queue) },
	{ 0x56804d49, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x64368b61, __VMLINUX_SYMBOL_STR(dev_set_promiscuity) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xa25f2322, __VMLINUX_SYMBOL_STR(eth_header_cache) },
	{ 0x3c85c92f, __VMLINUX_SYMBOL_STR(rtnl_link_register) },
	{ 0x22646eae, __VMLINUX_SYMBOL_STR(dev_uc_del) },
	{ 0x72a3ceab, __VMLINUX_SYMBOL_STR(dev_uc_sync) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x7de45305, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x305c6efe, __VMLINUX_SYMBOL_STR(netdev_update_features) },
	{ 0x2d6da049, __VMLINUX_SYMBOL_STR(dev_queue_xmit_accel) },
	{ 0xc135a948, __VMLINUX_SYMBOL_STR(dev_queue_xmit) },
	{ 0xec3d2e1b, __VMLINUX_SYMBOL_STR(trace_hardirqs_off) },
	{ 0x108cd9e3, __VMLINUX_SYMBOL_STR(dev_mc_sync) },
	{ 0xc58a8cd, __VMLINUX_SYMBOL_STR(netdev_increment_features) },
	{ 0xccbafe11, __VMLINUX_SYMBOL_STR(dev_set_mtu) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "3C06D450616B6D481E37E59");
