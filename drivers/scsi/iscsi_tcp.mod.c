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
	{ 0xd90e0f90, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x1494ad7b, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xd3edc2fb, __VMLINUX_SYMBOL_STR(iscsi_session_recovery_timedout) },
	{ 0xf36339fa, __VMLINUX_SYMBOL_STR(iscsi_tcp_cleanup_task) },
	{ 0x404675f, __VMLINUX_SYMBOL_STR(iscsi_tcp_task_xmit) },
	{ 0x59f039e0, __VMLINUX_SYMBOL_STR(iscsi_tcp_task_init) },
	{ 0xa79a10fa, __VMLINUX_SYMBOL_STR(iscsi_conn_send_pdu) },
	{ 0x727fed73, __VMLINUX_SYMBOL_STR(iscsi_host_set_param) },
	{ 0xc42e86c3, __VMLINUX_SYMBOL_STR(iscsi_session_get_param) },
	{ 0x3328dad4, __VMLINUX_SYMBOL_STR(iscsi_conn_start) },
	{ 0xa7cadad8, __VMLINUX_SYMBOL_STR(scsi_change_queue_depth) },
	{ 0x11db3216, __VMLINUX_SYMBOL_STR(iscsi_target_alloc) },
	{ 0xa077b749, __VMLINUX_SYMBOL_STR(iscsi_eh_recover_target) },
	{ 0xc1c0dbb0, __VMLINUX_SYMBOL_STR(iscsi_eh_device_reset) },
	{ 0xbf046a0, __VMLINUX_SYMBOL_STR(iscsi_eh_abort) },
	{ 0x52e2ef08, __VMLINUX_SYMBOL_STR(iscsi_queuecommand) },
	{ 0xc5f646eb, __VMLINUX_SYMBOL_STR(iscsi_unregister_transport) },
	{ 0x72f7358, __VMLINUX_SYMBOL_STR(iscsi_register_transport) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x1e0b6130, __VMLINUX_SYMBOL_STR(blk_queue_dma_alignment) },
	{ 0x93f1cff6, __VMLINUX_SYMBOL_STR(blk_queue_bounce_limit) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xd01e0118, __VMLINUX_SYMBOL_STR(iscsi_tcp_r2tpool_alloc) },
	{ 0x71a28c80, __VMLINUX_SYMBOL_STR(iscsi_session_setup) },
	{ 0x48fe8602, __VMLINUX_SYMBOL_STR(iscsi_host_add) },
	{ 0xbc14f21c, __VMLINUX_SYMBOL_STR(iscsi_host_alloc) },
	{ 0x4da1eb43, __VMLINUX_SYMBOL_STR(iscsi_host_free) },
	{ 0xd2a1c253, __VMLINUX_SYMBOL_STR(iscsi_host_remove) },
	{ 0xe59b2731, __VMLINUX_SYMBOL_STR(iscsi_session_teardown) },
	{ 0x67640fac, __VMLINUX_SYMBOL_STR(iscsi_tcp_r2tpool_free) },
	{ 0xda97f3e8, __VMLINUX_SYMBOL_STR(scsi_is_host_device) },
	{ 0x69760c4c, __VMLINUX_SYMBOL_STR(crypto_alloc_base) },
	{ 0x285dc680, __VMLINUX_SYMBOL_STR(iscsi_tcp_conn_setup) },
	{ 0x1ba49df5, __VMLINUX_SYMBOL_STR(iscsi_tcp_recv_skb) },
	{ 0x6b2e30b6, __VMLINUX_SYMBOL_STR(tcp_read_sock) },
	{ 0xb5198b77, __VMLINUX_SYMBOL_STR(_raw_read_lock) },
	{ 0xa5b37205, __VMLINUX_SYMBOL_STR(iscsi_conn_queue_work) },
	{ 0x4c233a44, __VMLINUX_SYMBOL_STR(_raw_read_unlock_bh) },
	{ 0x4c5fc58c, __VMLINUX_SYMBOL_STR(_raw_read_lock_bh) },
	{ 0xe9d0bef4, __VMLINUX_SYMBOL_STR(iscsi_tcp_hdr_recv_prep) },
	{ 0xdc3f1397, __VMLINUX_SYMBOL_STR(sk_set_memalloc) },
	{ 0xd8a70b4d, __VMLINUX_SYMBOL_STR(iscsi_conn_bind) },
	{ 0xfdcdd090, __VMLINUX_SYMBOL_STR(sockfd_lookup) },
	{ 0x7d8125ab, __VMLINUX_SYMBOL_STR(iscsi_conn_stop) },
	{ 0x29254990, __VMLINUX_SYMBOL_STR(iscsi_suspend_tx) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xc2767d77, __VMLINUX_SYMBOL_STR(iscsi_tcp_conn_teardown) },
	{ 0x6bacd242, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0x2c5c6cda, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0xc37c8396, __VMLINUX_SYMBOL_STR(fput) },
	{ 0xc0056be5, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0x6ec9ccdb, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0x993a5f79, __VMLINUX_SYMBOL_STR(sock_no_sendpage) },
	{ 0x7495aa8c, __VMLINUX_SYMBOL_STR(iscsi_tcp_set_max_r2t) },
	{ 0x9b82a1be, __VMLINUX_SYMBOL_STR(iscsi_set_param) },
	{ 0x70b3ed61, __VMLINUX_SYMBOL_STR(kernel_getpeername) },
	{ 0x72685fb5, __VMLINUX_SYMBOL_STR(iscsi_conn_get_param) },
	{ 0x77ef0caa, __VMLINUX_SYMBOL_STR(iscsi_host_get_param) },
	{ 0xbf8c9136, __VMLINUX_SYMBOL_STR(iscsi_conn_get_addr_param) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x1634c6dd, __VMLINUX_SYMBOL_STR(kernel_getsockname) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x760bb94e, __VMLINUX_SYMBOL_STR(iscsi_tcp_conn_get_stats) },
	{ 0xd0ad5bb3, __VMLINUX_SYMBOL_STR(iscsi_conn_failure) },
	{ 0x2e309468, __VMLINUX_SYMBOL_STR(iscsi_tcp_segment_unmap) },
	{ 0x77ab1a34, __VMLINUX_SYMBOL_STR(iscsi_tcp_segment_done) },
	{ 0xa695be4, __VMLINUX_SYMBOL_STR(kernel_sendmsg) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xc7a6c75f, __VMLINUX_SYMBOL_STR(iscsi_segment_seek_sg) },
	{ 0x97a878fd, __VMLINUX_SYMBOL_STR(iscsi_segment_init_linear) },
	{ 0x56cc94c2, __VMLINUX_SYMBOL_STR(iscsi_tcp_dgst_header) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xa1ee5929, __VMLINUX_SYMBOL_STR(dev_printk) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libiscsi,libiscsi_tcp";


MODULE_INFO(srcversion, "0A7D191587D7867DCD7816A");
