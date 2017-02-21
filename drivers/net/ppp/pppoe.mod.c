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
	{ 0x89d36cc2, __VMLINUX_SYMBOL_STR(seq_release_net) },
	{ 0x4273b3a, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0xc5bced1a, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x73379edd, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0xe0675ebf, __VMLINUX_SYMBOL_STR(sock_no_getsockopt) },
	{ 0xcc35c946, __VMLINUX_SYMBOL_STR(sock_no_setsockopt) },
	{ 0xd666c6c5, __VMLINUX_SYMBOL_STR(sock_no_shutdown) },
	{ 0xde0cbdfd, __VMLINUX_SYMBOL_STR(sock_no_listen) },
	{ 0x7b7a238f, __VMLINUX_SYMBOL_STR(pppox_ioctl) },
	{ 0xecafa86f, __VMLINUX_SYMBOL_STR(datagram_poll) },
	{ 0xf761994f, __VMLINUX_SYMBOL_STR(sock_no_accept) },
	{ 0x5083d6d6, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0x3f2c8a9b, __VMLINUX_SYMBOL_STR(sock_no_bind) },
	{ 0xe0ff7a18, __VMLINUX_SYMBOL_STR(unregister_pppox_proto) },
	{ 0x4bdca996, __VMLINUX_SYMBOL_STR(dev_remove_pack) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0x2a55a707, __VMLINUX_SYMBOL_STR(unregister_pernet_device) },
	{ 0xa7e1d79d, __VMLINUX_SYMBOL_STR(proto_unregister) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0xd0b8206b, __VMLINUX_SYMBOL_STR(dev_add_pack) },
	{ 0xa4f716a7, __VMLINUX_SYMBOL_STR(register_pppox_proto) },
	{ 0xe36d0777, __VMLINUX_SYMBOL_STR(proto_register) },
	{ 0xe056c907, __VMLINUX_SYMBOL_STR(register_pernet_device) },
	{ 0xaede3d98, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0x1ec83b6c, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0x32653dd7, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x27aab5c0, __VMLINUX_SYMBOL_STR(seq_open_net) },
	{ 0xb830ec02, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0xebe816df, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0xc08f4cf3, __VMLINUX_SYMBOL_STR(ppp_register_net_channel) },
	{ 0xa476df45, __VMLINUX_SYMBOL_STR(dev_get_by_name) },
	{ 0xc4a0819e, __VMLINUX_SYMBOL_STR(copy_from_iter) },
	{ 0xfd8bdc76, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x93028abb, __VMLINUX_SYMBOL_STR(sock_wmalloc) },
	{ 0xba65f4f9, __VMLINUX_SYMBOL_STR(skb_copy_datagram_iter) },
	{ 0xda3803a5, __VMLINUX_SYMBOL_STR(skb_recv_datagram) },
	{ 0xe3da28c7, __VMLINUX_SYMBOL_STR(ppp_input) },
	{ 0xf777c76e, __VMLINUX_SYMBOL_STR(sock_queue_rcv_skb) },
	{ 0x2060e54e, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0xc135a948, __VMLINUX_SYMBOL_STR(dev_queue_xmit) },
	{ 0x3eb2e4c5, __VMLINUX_SYMBOL_STR(sock_init_data) },
	{ 0x65ef8bfc, __VMLINUX_SYMBOL_STR(sk_alloc) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x41064a9a, __VMLINUX_SYMBOL_STR(dev_get_by_name_rcu) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0xbc10dd97, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0x353e3fa5, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0x80ec3f48, __VMLINUX_SYMBOL_STR(___pskb_trim) },
	{ 0xa7b7bcf0, __VMLINUX_SYMBOL_STR(sk_receive_skb) },
	{ 0xf9b23496, __VMLINUX_SYMBOL_STR(skb_pull_rcsum) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x47bf98c, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x4c233a44, __VMLINUX_SYMBOL_STR(_raw_read_unlock_bh) },
	{ 0x4c5fc58c, __VMLINUX_SYMBOL_STR(_raw_read_lock_bh) },
	{ 0x44de3d4c, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x7de45305, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xac04a623, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0xc0056be5, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0x6ec9ccdb, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0x2c5c6cda, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x980aca46, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0x56e5f73b, __VMLINUX_SYMBOL_STR(pppox_unbind_sock) },
	{ 0x50e661b, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=pppox,ppp_generic";


MODULE_INFO(srcversion, "488E5D7A1A83DA196E98EC7");
