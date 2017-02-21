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
	{ 0xe76cb153, __VMLINUX_SYMBOL_STR(ip_tunnel_get_link_net) },
	{ 0xad7ce9b0, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x34419820, __VMLINUX_SYMBOL_STR(ip_tunnel_get_iflink) },
	{ 0xfd31064, __VMLINUX_SYMBOL_STR(ip_tunnel_get_stats64) },
	{ 0x3c85c92f, __VMLINUX_SYMBOL_STR(rtnl_link_register) },
	{ 0xccd9b51d, __VMLINUX_SYMBOL_STR(xfrm4_tunnel_register) },
	{ 0xe056c907, __VMLINUX_SYMBOL_STR(register_pernet_device) },
	{ 0x60a13e90, __VMLINUX_SYMBOL_STR(rcu_barrier) },
	{ 0x2a55a707, __VMLINUX_SYMBOL_STR(unregister_pernet_device) },
	{ 0xfe8349c4, __VMLINUX_SYMBOL_STR(xfrm4_tunnel_deregister) },
	{ 0xf587fec7, __VMLINUX_SYMBOL_STR(rtnl_link_unregister) },
	{ 0xb8b5974, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xfd1fdf8e, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x19f462ab, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0xbc10dd97, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0x5c54b7e6, __VMLINUX_SYMBOL_STR(ns_capable) },
	{ 0x7cf8796e, __VMLINUX_SYMBOL_STR(ip_tunnel_encap_setup) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x234210, __VMLINUX_SYMBOL_STR(register_netdevice) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x643e0ce5, __VMLINUX_SYMBOL_STR(call_rcu_sched) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x82118009, __VMLINUX_SYMBOL_STR(ipv6_chk_prefix) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x3a10617e, __VMLINUX_SYMBOL_STR(ipv6_chk_custom_prefix) },
	{ 0x54be2cdd, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0x78b2d897, __VMLINUX_SYMBOL_STR(neigh_destroy) },
	{ 0xba367ad9, __VMLINUX_SYMBOL_STR(iptunnel_xmit) },
	{ 0xbe8a4b8a, __VMLINUX_SYMBOL_STR(ip_tunnel_encap) },
	{ 0x7de45305, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xd11d7525, __VMLINUX_SYMBOL_STR(skb_set_owner_w) },
	{ 0xed494a8c, __VMLINUX_SYMBOL_STR(skb_realloc_headroom) },
	{ 0xac0b01f, __VMLINUX_SYMBOL_STR(ip_tunnel_xmit) },
	{ 0x7676da74, __VMLINUX_SYMBOL_STR(iptunnel_handle_offloads) },
	{ 0xd542439, __VMLINUX_SYMBOL_STR(__ipv6_addr_type) },
	{ 0x29df810e, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0x9a7b55af, __VMLINUX_SYMBOL_STR(alloc_netdev_mqs) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0x9fdecc31, __VMLINUX_SYMBOL_STR(unregister_netdevice_many) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0xfc3ff21c, __VMLINUX_SYMBOL_STR(ip_tunnel_rcv) },
	{ 0xdc1d8de5, __VMLINUX_SYMBOL_STR(__xfrm_policy_check) },
	{ 0xd9f1831d, __VMLINUX_SYMBOL_STR(iptunnel_pull_header) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x47bf98c, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x28000bbc, __VMLINUX_SYMBOL_STR(ipv4_redirect) },
	{ 0x44de3d4c, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x7a327366, __VMLINUX_SYMBOL_STR(icmpv6_send) },
	{ 0x271c3b96, __VMLINUX_SYMBOL_STR(rt6_lookup) },
	{ 0xf25661f7, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xac04a623, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0x76a65f5c, __VMLINUX_SYMBOL_STR(ipv4_update_pmtu) },
	{ 0x341dbfa3, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0xd3e6f60d, __VMLINUX_SYMBOL_STR(cpu_possible_mask) },
	{ 0x50c89f23, __VMLINUX_SYMBOL_STR(__alloc_percpu) },
	{ 0xd3f57a2, __VMLINUX_SYMBOL_STR(_find_next_bit_le) },
	{ 0x6c209eab, __VMLINUX_SYMBOL_STR(__alloc_percpu_gfp) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x55defda4, __VMLINUX_SYMBOL_STR(netdev_state_change) },
	{ 0xc92d932f, __VMLINUX_SYMBOL_STR(ip_tunnel_dst_reset_all) },
	{ 0x609f1c7e, __VMLINUX_SYMBOL_STR(synchronize_net) },
	{ 0x3ed889dd, __VMLINUX_SYMBOL_STR(__dev_get_by_index) },
	{ 0xd6197f1, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0x3dad1589, __VMLINUX_SYMBOL_STR(ip_route_output_flow) },
	{ 0x3c471b8, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xc9ec4e21, __VMLINUX_SYMBOL_STR(free_percpu) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xc19158ad, __VMLINUX_SYMBOL_STR(unregister_netdevice_queue) },
	{ 0x66940955, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ip_tunnel,tunnel4,ipv6";


MODULE_INFO(srcversion, "F8CA19355D5E488B51A108B");
