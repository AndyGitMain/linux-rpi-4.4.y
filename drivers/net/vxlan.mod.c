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
	{ 0x980aca46, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0xac3c0d05, __VMLINUX_SYMBOL_STR(neigh_lookup) },
	{ 0xd6e92e3f, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0xb8b5974, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x9ffa3a75, __VMLINUX_SYMBOL_STR(netdev_max_backlog) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xfd31064, __VMLINUX_SYMBOL_STR(ip_tunnel_get_stats64) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x19f462ab, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0x7216984b, __VMLINUX_SYMBOL_STR(ip_mc_leave_group) },
	{ 0x38379459, __VMLINUX_SYMBOL_STR(peernet2id_alloc) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0xcd13dc7c, __VMLINUX_SYMBOL_STR(ip_tunnel_metadata_cnt) },
	{ 0x4d9e161a, __VMLINUX_SYMBOL_STR(arp_tbl) },
	{ 0xd6197f1, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xaaeed0a7, __VMLINUX_SYMBOL_STR(udp_add_offload) },
	{ 0xac04a623, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0xd3f57a2, __VMLINUX_SYMBOL_STR(_find_next_bit_le) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0xb6bb2626, __VMLINUX_SYMBOL_STR(udp_tunnel_xmit_skb) },
	{ 0xb682d74a, __VMLINUX_SYMBOL_STR(rtnl_notify) },
	{ 0x50c89f23, __VMLINUX_SYMBOL_STR(__alloc_percpu) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x72d771aa, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0xa8e978f0, __VMLINUX_SYMBOL_STR(udp_tun_rx_dst) },
	{ 0xad7ce9b0, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x78b2d897, __VMLINUX_SYMBOL_STR(neigh_destroy) },
	{ 0xc4b9c6cb, __VMLINUX_SYMBOL_STR(skb_scrub_packet) },
	{ 0x72de7864, __VMLINUX_SYMBOL_STR(netif_napi_del) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xc9ec4e21, __VMLINUX_SYMBOL_STR(free_percpu) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0x10694b05, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xa7ed4270, __VMLINUX_SYMBOL_STR(udp_sock_create6) },
	{ 0x5067bca2, __VMLINUX_SYMBOL_STR(setup_udp_tunnel_sock) },
	{ 0x54be2cdd, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0x47bf98c, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0xf1db1704, __VMLINUX_SYMBOL_STR(nla_memcpy) },
	{ 0xf439ec5e, __VMLINUX_SYMBOL_STR(udp_tunnel_sock_release) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x706d051c, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x1528aac3, __VMLINUX_SYMBOL_STR(netif_rx_ni) },
	{ 0x3286ca03, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x9fdecc31, __VMLINUX_SYMBOL_STR(unregister_netdevice_many) },
	{ 0xf6388c56, __VMLINUX_SYMBOL_STR(sysctl_ip_default_ttl) },
	{ 0x667dfb1a, __VMLINUX_SYMBOL_STR(arp_create) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xd5e50c63, __VMLINUX_SYMBOL_STR(ethtool_op_get_link) },
	{ 0x50e661b, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0x7dcf0f1b, __VMLINUX_SYMBOL_STR(ip_mc_join_group) },
	{ 0x3c471b8, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x66940955, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x38a9f7c5, __VMLINUX_SYMBOL_STR(in6addr_loopback) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x418f917, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x16e5c2a, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0xf4a282e3, __VMLINUX_SYMBOL_STR(netif_napi_add) },
	{ 0xf25661f7, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x2ba558f6, __VMLINUX_SYMBOL_STR(ipv6_stub) },
	{ 0x9d68172, __VMLINUX_SYMBOL_STR(__skb_get_hash) },
	{ 0xf587fec7, __VMLINUX_SYMBOL_STR(rtnl_link_unregister) },
	{ 0x3ed889dd, __VMLINUX_SYMBOL_STR(__dev_get_by_index) },
	{ 0x6c209eab, __VMLINUX_SYMBOL_STR(__alloc_percpu_gfp) },
	{ 0xc2720437, __VMLINUX_SYMBOL_STR(eth_gro_receive) },
	{ 0x6ff3b494, __VMLINUX_SYMBOL_STR(napi_gro_receive) },
	{ 0xff88e482, __VMLINUX_SYMBOL_STR(rtnl_set_sk_err) },
	{ 0xca473053, __VMLINUX_SYMBOL_STR(udp_del_offload) },
	{ 0xa739f58e, __VMLINUX_SYMBOL_STR(eth_gro_complete) },
	{ 0x2f316960, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xe9893be3, __VMLINUX_SYMBOL_STR(__napi_schedule) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xd3e6f60d, __VMLINUX_SYMBOL_STR(cpu_possible_mask) },
	{ 0x44de3d4c, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x97e8a9d9, __VMLINUX_SYMBOL_STR(napi_complete_done) },
	{ 0x618e6f32, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0xf885a403, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x2060e54e, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0xc1c0d601, __VMLINUX_SYMBOL_STR(ether_setup) },
	{ 0xfd1fdf8e, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x7676da74, __VMLINUX_SYMBOL_STR(iptunnel_handle_offloads) },
	{ 0x341dbfa3, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0xc19158ad, __VMLINUX_SYMBOL_STR(unregister_netdevice_queue) },
	{ 0x3dad1589, __VMLINUX_SYMBOL_STR(ip_route_output_flow) },
	{ 0x5b81d5e3, __VMLINUX_SYMBOL_STR(rtnl_create_link) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x56804d49, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x44da5d0f, __VMLINUX_SYMBOL_STR(__csum_ipv6_magic) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x643e0ce5, __VMLINUX_SYMBOL_STR(call_rcu_sched) },
	{ 0x3c85c92f, __VMLINUX_SYMBOL_STR(rtnl_link_register) },
	{ 0x3cc4e12e, __VMLINUX_SYMBOL_STR(udp_tunnel6_xmit_skb) },
	{ 0xd9f1831d, __VMLINUX_SYMBOL_STR(iptunnel_pull_header) },
	{ 0xa87ce105, __VMLINUX_SYMBOL_STR(udp_sock_create4) },
	{ 0x7d0db45c, __VMLINUX_SYMBOL_STR(jiffies_to_clock_t) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xe113bbbc, __VMLINUX_SYMBOL_STR(csum_partial) },
	{ 0x7de45305, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x15373e5d, __VMLINUX_SYMBOL_STR(param_ops_ushort) },
	{ 0x7504a837, __VMLINUX_SYMBOL_STR(ip6_dst_hoplimit) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0xfd8bdc76, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xa7c13f9d, __VMLINUX_SYMBOL_STR(eth_mac_addr) },
	{ 0xf68d004, __VMLINUX_SYMBOL_STR(__nlmsg_put) },
	{ 0x440b6b27, __VMLINUX_SYMBOL_STR(inet_get_local_port_range) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0x9e62ad80, __VMLINUX_SYMBOL_STR(__skb_checksum_complete) },
	{ 0x200b2041, __VMLINUX_SYMBOL_STR(in6addr_any) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=udp_tunnel,ip6_udp_tunnel";


MODULE_INFO(srcversion, "1C8E991735029CE20755342");