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
	{ 0x993a5f79, __VMLINUX_SYMBOL_STR(sock_no_sendpage) },
	{ 0x73379edd, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0xe0675ebf, __VMLINUX_SYMBOL_STR(sock_no_getsockopt) },
	{ 0xcc35c946, __VMLINUX_SYMBOL_STR(sock_no_setsockopt) },
	{ 0xd666c6c5, __VMLINUX_SYMBOL_STR(sock_no_shutdown) },
	{ 0xde0cbdfd, __VMLINUX_SYMBOL_STR(sock_no_listen) },
	{ 0x24c7dd92, __VMLINUX_SYMBOL_STR(sock_no_ioctl) },
	{ 0xecafa86f, __VMLINUX_SYMBOL_STR(datagram_poll) },
	{ 0xbd9f60c6, __VMLINUX_SYMBOL_STR(sock_no_getname) },
	{ 0xf761994f, __VMLINUX_SYMBOL_STR(sock_no_accept) },
	{ 0x5083d6d6, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0x719ffc96, __VMLINUX_SYMBOL_STR(sock_no_connect) },
	{ 0x3f2c8a9b, __VMLINUX_SYMBOL_STR(sock_no_bind) },
	{ 0x460c0938, __VMLINUX_SYMBOL_STR(xfrm_register_km) },
	{ 0x7bb733dc, __VMLINUX_SYMBOL_STR(sock_register) },
	{ 0xf885a403, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0xe36d0777, __VMLINUX_SYMBOL_STR(proto_register) },
	{ 0xa7e1d79d, __VMLINUX_SYMBOL_STR(proto_unregister) },
	{ 0x3286ca03, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x62737e1d, __VMLINUX_SYMBOL_STR(sock_unregister) },
	{ 0x6cfd7768, __VMLINUX_SYMBOL_STR(xfrm_unregister_km) },
	{ 0x7a8ca627, __VMLINUX_SYMBOL_STR(xfrm_count_pfkey_enc_supported) },
	{ 0xa575945, __VMLINUX_SYMBOL_STR(xfrm_count_pfkey_auth_supported) },
	{ 0x28e23139, __VMLINUX_SYMBOL_STR(xfrm_probe_algs) },
	{ 0xb830ec02, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0x402ecb47, __VMLINUX_SYMBOL_STR(xfrm_alloc_spi) },
	{ 0xf10526ac, __VMLINUX_SYMBOL_STR(verify_spi_info) },
	{ 0x2ec6b8e3, __VMLINUX_SYMBOL_STR(xfrm_find_acq) },
	{ 0x47b34e60, __VMLINUX_SYMBOL_STR(xfrm_ealg_get_byname) },
	{ 0x3bf471d7, __VMLINUX_SYMBOL_STR(xfrm_calg_get_byname) },
	{ 0xa6e66685, __VMLINUX_SYMBOL_STR(xfrm_aalg_get_byname) },
	{ 0xdbfc35c8, __VMLINUX_SYMBOL_STR(xfrm_ealg_get_byidx) },
	{ 0xaa762fe2, __VMLINUX_SYMBOL_STR(xfrm_aalg_get_byidx) },
	{ 0x52a84ee9, __VMLINUX_SYMBOL_STR(xfrm_policy_byid) },
	{ 0xad1b60ed, __VMLINUX_SYMBOL_STR(xfrm_calg_get_byid) },
	{ 0x834ba96d, __VMLINUX_SYMBOL_STR(xfrm_aalg_get_byid) },
	{ 0x5b611e61, __VMLINUX_SYMBOL_STR(xfrm_state_add) },
	{ 0x25b09d29, __VMLINUX_SYMBOL_STR(xfrm_state_update) },
	{ 0x6b8389c5, __VMLINUX_SYMBOL_STR(xfrm_init_state) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0xdfea3a6d, __VMLINUX_SYMBOL_STR(xfrm_ealg_get_byid) },
	{ 0xba196ef2, __VMLINUX_SYMBOL_STR(xfrm_state_alloc) },
	{ 0x2a94575f, __VMLINUX_SYMBOL_STR(xfrm_state_delete) },
	{ 0x56be5b90, __VMLINUX_SYMBOL_STR(xfrm_policy_insert) },
	{ 0xafd70d5e, __VMLINUX_SYMBOL_STR(xfrm_garbage_collect) },
	{ 0xf0040dcf, __VMLINUX_SYMBOL_STR(xfrm_policy_bysel_ctx) },
	{ 0xaede3d98, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0x1e9edfb7, __VMLINUX_SYMBOL_STR(seq_hlist_start_head_rcu) },
	{ 0x67b78eb3, __VMLINUX_SYMBOL_STR(seq_hlist_next_rcu) },
	{ 0x8b618d08, __VMLINUX_SYMBOL_STR(overflowuid) },
	{ 0x32653dd7, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x5bd88cf, __VMLINUX_SYMBOL_STR(sock_i_ino) },
	{ 0x3c86103c, __VMLINUX_SYMBOL_STR(sock_i_uid) },
	{ 0x27aab5c0, __VMLINUX_SYMBOL_STR(seq_open_net) },
	{ 0xc2cdbf1, __VMLINUX_SYMBOL_STR(synchronize_sched) },
	{ 0xc0056be5, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0x6ec9ccdb, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0x3dceb212, __VMLINUX_SYMBOL_STR(xfrm_state_lookup) },
	{ 0x58a64d60, __VMLINUX_SYMBOL_STR(__xfrm_state_destroy) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xc761e5ed, __VMLINUX_SYMBOL_STR(xfrm_find_acq_byseq) },
	{ 0x1b1429a, __VMLINUX_SYMBOL_STR(km_state_notify) },
	{ 0xc59035e1, __VMLINUX_SYMBOL_STR(xfrm_state_flush) },
	{ 0x9d7f461a, __VMLINUX_SYMBOL_STR(xfrm_state_walk) },
	{ 0xd7ebbed3, __VMLINUX_SYMBOL_STR(xfrm_state_walk_done) },
	{ 0xb8b5974, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x83b009ea, __VMLINUX_SYMBOL_STR(xfrm_state_walk_init) },
	{ 0xfd1fdf8e, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x87b48b4b, __VMLINUX_SYMBOL_STR(skb_copy) },
	{ 0x150c5601, __VMLINUX_SYMBOL_STR(km_policy_notify) },
	{ 0x8eaad80f, __VMLINUX_SYMBOL_STR(xfrm_policy_flush) },
	{ 0xc4a0819e, __VMLINUX_SYMBOL_STR(copy_from_iter) },
	{ 0x85d23016, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x3934a77b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x3eb2e4c5, __VMLINUX_SYMBOL_STR(sock_init_data) },
	{ 0x65ef8bfc, __VMLINUX_SYMBOL_STR(sk_alloc) },
	{ 0x5c54b7e6, __VMLINUX_SYMBOL_STR(ns_capable) },
	{ 0x5acab4d0, __VMLINUX_SYMBOL_STR(__sock_recv_ts_and_drops) },
	{ 0xdd177a99, __VMLINUX_SYMBOL_STR(skb_free_datagram) },
	{ 0xba65f4f9, __VMLINUX_SYMBOL_STR(skb_copy_datagram_iter) },
	{ 0xda3803a5, __VMLINUX_SYMBOL_STR(skb_recv_datagram) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xebe816df, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xeff4a381, __VMLINUX_SYMBOL_STR(xfrm_policy_destroy) },
	{ 0x77abf8da, __VMLINUX_SYMBOL_STR(xfrm_policy_alloc) },
	{ 0x15f33403, __VMLINUX_SYMBOL_STR(xfrm_policy_walk_done) },
	{ 0xe5ed5467, __VMLINUX_SYMBOL_STR(xfrm_policy_walk_init) },
	{ 0x2db19712, __VMLINUX_SYMBOL_STR(xfrm_policy_walk) },
	{ 0xfd8bdc76, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xf3434519, __VMLINUX_SYMBOL_STR(sock_rfree) },
	{ 0xac04a623, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0x2c5c6cda, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x565cc1a1, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0x44de3d4c, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x2f316960, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "B16B3D31A28C82C44CB63F1");
