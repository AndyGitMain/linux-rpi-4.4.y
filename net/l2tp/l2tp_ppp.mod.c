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
	{ 0xdd0cfc88, __VMLINUX_SYMBOL_STR(l2tp_session_delete) },
	{ 0x89d36cc2, __VMLINUX_SYMBOL_STR(seq_release_net) },
	{ 0x4273b3a, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0xc5bced1a, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x73379edd, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0xd666c6c5, __VMLINUX_SYMBOL_STR(sock_no_shutdown) },
	{ 0xde0cbdfd, __VMLINUX_SYMBOL_STR(sock_no_listen) },
	{ 0x7b7a238f, __VMLINUX_SYMBOL_STR(pppox_ioctl) },
	{ 0xecafa86f, __VMLINUX_SYMBOL_STR(datagram_poll) },
	{ 0xf761994f, __VMLINUX_SYMBOL_STR(sock_no_accept) },
	{ 0x5083d6d6, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0x3f2c8a9b, __VMLINUX_SYMBOL_STR(sock_no_bind) },
	{ 0x337f2432, __VMLINUX_SYMBOL_STR(l2tp_nl_unregister_ops) },
	{ 0x2a55a707, __VMLINUX_SYMBOL_STR(unregister_pernet_device) },
	{ 0xa7e1d79d, __VMLINUX_SYMBOL_STR(proto_unregister) },
	{ 0xe0ff7a18, __VMLINUX_SYMBOL_STR(unregister_pppox_proto) },
	{ 0x37e1f566, __VMLINUX_SYMBOL_STR(l2tp_nl_register_ops) },
	{ 0xa4f716a7, __VMLINUX_SYMBOL_STR(register_pppox_proto) },
	{ 0xe36d0777, __VMLINUX_SYMBOL_STR(proto_register) },
	{ 0xe056c907, __VMLINUX_SYMBOL_STR(register_pernet_device) },
	{ 0x6f53e242, __VMLINUX_SYMBOL_STR(l2tp_session_find_nth) },
	{ 0x1ec83b6c, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0x2deb449e, __VMLINUX_SYMBOL_STR(ppp_dev_name) },
	{ 0x32653dd7, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x47bf98c, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0xf25661f7, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xe20827a1, __VMLINUX_SYMBOL_STR(inet_shutdown) },
	{ 0xcc99697d, __VMLINUX_SYMBOL_STR(l2tp_session_free) },
	{ 0xaede3d98, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0x479093aa, __VMLINUX_SYMBOL_STR(l2tp_tunnel_find_nth) },
	{ 0x27aab5c0, __VMLINUX_SYMBOL_STR(seq_open_net) },
	{ 0xb830ec02, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0xebe816df, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0x5c3b62ce, __VMLINUX_SYMBOL_STR(l2tp_session_queue_purge) },
	{ 0xdeb2acf7, __VMLINUX_SYMBOL_STR(__l2tp_session_unhash) },
	{ 0xc0056be5, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0x6ec9ccdb, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0x56e5f73b, __VMLINUX_SYMBOL_STR(pppox_unbind_sock) },
	{ 0x958e5e3a, __VMLINUX_SYMBOL_STR(l2tp_tunnel_create) },
	{ 0xc08f4cf3, __VMLINUX_SYMBOL_STR(ppp_register_net_channel) },
	{ 0x980aca46, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0x50e661b, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xd6197f1, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0x7f094ffb, __VMLINUX_SYMBOL_STR(__secpath_destroy) },
	{ 0xf777c76e, __VMLINUX_SYMBOL_STR(sock_queue_rcv_skb) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xe3da28c7, __VMLINUX_SYMBOL_STR(ppp_input) },
	{ 0x2060e54e, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0x831d5ff8, __VMLINUX_SYMBOL_STR(l2tp_session_set_header_len) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0xa83a0f4, __VMLINUX_SYMBOL_STR(l2tp_xmit_skb) },
	{ 0x31b9195c, __VMLINUX_SYMBOL_STR(__local_bh_disable_ip) },
	{ 0xc4a0819e, __VMLINUX_SYMBOL_STR(copy_from_iter) },
	{ 0xfd8bdc76, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x93028abb, __VMLINUX_SYMBOL_STR(sock_wmalloc) },
	{ 0xba65f4f9, __VMLINUX_SYMBOL_STR(skb_copy_datagram_iter) },
	{ 0xda3803a5, __VMLINUX_SYMBOL_STR(skb_recv_datagram) },
	{ 0x44de3d4c, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x2bff514b, __VMLINUX_SYMBOL_STR(l2tp_udp_encap_recv) },
	{ 0x3eb2e4c5, __VMLINUX_SYMBOL_STR(sock_init_data) },
	{ 0x65ef8bfc, __VMLINUX_SYMBOL_STR(sk_alloc) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0xbc10dd97, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0x353e3fa5, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0x2c5c6cda, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xe67b8c22, __VMLINUX_SYMBOL_STR(l2tp_session_create) },
	{ 0xdb60b904, __VMLINUX_SYMBOL_STR(l2tp_session_find) },
	{ 0x2c9166f9, __VMLINUX_SYMBOL_STR(l2tp_tunnel_find) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=l2tp_core,pppox,l2tp_netlink,ppp_generic";


MODULE_INFO(srcversion, "49DFE5F42607B5B6F8DFD83");
