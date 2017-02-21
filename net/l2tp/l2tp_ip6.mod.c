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
	{ 0x3c5113a8, __VMLINUX_SYMBOL_STR(inet_unhash) },
	{ 0x764929c9, __VMLINUX_SYMBOL_STR(inet_hash) },
	{ 0xd4a4ba79, __VMLINUX_SYMBOL_STR(ipv6_getsockopt) },
	{ 0xfd626f8a, __VMLINUX_SYMBOL_STR(ipv6_setsockopt) },
	{ 0xe8895f08, __VMLINUX_SYMBOL_STR(udp_ioctl) },
	{ 0x993a5f79, __VMLINUX_SYMBOL_STR(sock_no_sendpage) },
	{ 0x73379edd, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0xb48620c2, __VMLINUX_SYMBOL_STR(sock_common_recvmsg) },
	{ 0xff30ea6e, __VMLINUX_SYMBOL_STR(inet_sendmsg) },
	{ 0x10c4a178, __VMLINUX_SYMBOL_STR(sock_common_getsockopt) },
	{ 0x90aa306e, __VMLINUX_SYMBOL_STR(sock_common_setsockopt) },
	{ 0xe20827a1, __VMLINUX_SYMBOL_STR(inet_shutdown) },
	{ 0xde0cbdfd, __VMLINUX_SYMBOL_STR(sock_no_listen) },
	{ 0x3537bfde, __VMLINUX_SYMBOL_STR(inet6_ioctl) },
	{ 0xecafa86f, __VMLINUX_SYMBOL_STR(datagram_poll) },
	{ 0xf761994f, __VMLINUX_SYMBOL_STR(sock_no_accept) },
	{ 0x5083d6d6, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0x173d3613, __VMLINUX_SYMBOL_STR(inet_dgram_connect) },
	{ 0x19ebeaeb, __VMLINUX_SYMBOL_STR(inet6_bind) },
	{ 0x6adcfcbf, __VMLINUX_SYMBOL_STR(inet6_release) },
	{ 0xfe651d98, __VMLINUX_SYMBOL_STR(inet6_del_protocol) },
	{ 0xcddd2c26, __VMLINUX_SYMBOL_STR(inet6_unregister_protosw) },
	{ 0xa7e1d79d, __VMLINUX_SYMBOL_STR(proto_unregister) },
	{ 0x1b4d0ed1, __VMLINUX_SYMBOL_STR(inet6_register_protosw) },
	{ 0x1fd0634, __VMLINUX_SYMBOL_STR(inet6_add_protocol) },
	{ 0xe36d0777, __VMLINUX_SYMBOL_STR(proto_register) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x47bf98c, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0xa7b7bcf0, __VMLINUX_SYMBOL_STR(sk_receive_skb) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xdc1d8de5, __VMLINUX_SYMBOL_STR(__xfrm_policy_check) },
	{ 0x2c9166f9, __VMLINUX_SYMBOL_STR(l2tp_tunnel_find) },
	{ 0xf273ba06, __VMLINUX_SYMBOL_STR(l2tp_recv_common) },
	{ 0x34908c14, __VMLINUX_SYMBOL_STR(print_hex_dump_bytes) },
	{ 0xdb60b904, __VMLINUX_SYMBOL_STR(l2tp_session_find) },
	{ 0xf66c8d1e, __VMLINUX_SYMBOL_STR(ipv6_chk_addr) },
	{ 0xa60678a4, __VMLINUX_SYMBOL_STR(dev_get_by_index_rcu) },
	{ 0x4c233a44, __VMLINUX_SYMBOL_STR(_raw_read_unlock_bh) },
	{ 0x4c5fc58c, __VMLINUX_SYMBOL_STR(_raw_read_lock_bh) },
	{ 0xacaa2ff, __VMLINUX_SYMBOL_STR(ip6_datagram_connect) },
	{ 0xdf1f7a49, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x44de3d4c, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x31b9195c, __VMLINUX_SYMBOL_STR(__local_bh_disable_ip) },
	{ 0xf777c76e, __VMLINUX_SYMBOL_STR(sock_queue_rcv_skb) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x55c980ff, __VMLINUX_SYMBOL_STR(sk_common_release) },
	{ 0x96c15699, __VMLINUX_SYMBOL_STR(udp_disconnect) },
	{ 0x2c5c6cda, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x9386b84, __VMLINUX_SYMBOL_STR(inet6_destroy_sock) },
	{ 0x46e7827c, __VMLINUX_SYMBOL_STR(l2tp_tunnel_closeall) },
	{ 0x4e7e747b, __VMLINUX_SYMBOL_STR(ip_generic_getfrag) },
	{ 0x7504a837, __VMLINUX_SYMBOL_STR(ip6_dst_hoplimit) },
	{ 0x9b10a315, __VMLINUX_SYMBOL_STR(ip6_push_pending_frames) },
	{ 0xba65787e, __VMLINUX_SYMBOL_STR(ip6_flush_pending_frames) },
	{ 0x19f462ab, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0x1225db3e, __VMLINUX_SYMBOL_STR(ip6_datagram_send_ctl) },
	{ 0x2d306d87, __VMLINUX_SYMBOL_STR(fl6_sock_lookup) },
	{ 0xd6197f1, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0x980aca46, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0x197c68e7, __VMLINUX_SYMBOL_STR(ip6_append_data) },
	{ 0x50e661b, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0x94dad2d7, __VMLINUX_SYMBOL_STR(ip6_dst_lookup_flow) },
	{ 0xffb74af4, __VMLINUX_SYMBOL_STR(fl6_update_dst) },
	{ 0x463d24ea, __VMLINUX_SYMBOL_STR(ipv6_fixup_options) },
	{ 0x3a19c5ad, __VMLINUX_SYMBOL_STR(fl6_merge_options) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x6287adc5, __VMLINUX_SYMBOL_STR(ip6_datagram_recv_ctl) },
	{ 0x45538635, __VMLINUX_SYMBOL_STR(__sock_recv_wifi_status) },
	{ 0x235be645, __VMLINUX_SYMBOL_STR(__sock_recv_timestamp) },
	{ 0x28107459, __VMLINUX_SYMBOL_STR(ipv6_recv_error) },
	{ 0xdd177a99, __VMLINUX_SYMBOL_STR(skb_free_datagram) },
	{ 0xba65f4f9, __VMLINUX_SYMBOL_STR(skb_copy_datagram_iter) },
	{ 0xda3803a5, __VMLINUX_SYMBOL_STR(skb_recv_datagram) },
	{ 0xc0056be5, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0x6ec9ccdb, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xd542439, __VMLINUX_SYMBOL_STR(__ipv6_addr_type) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ipv6,l2tp_core";


MODULE_INFO(srcversion, "70C31A1B020F30D459B235E");
