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
	{ 0x980aca46, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0xb8b5974, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x91ebfe84, __VMLINUX_SYMBOL_STR(can_rx_register) },
	{ 0x92ec2f75, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x5d153a7a, __VMLINUX_SYMBOL_STR(hrtimer_active) },
	{ 0xfe009c06, __VMLINUX_SYMBOL_STR(hrtimer_forward) },
	{ 0xcc35c946, __VMLINUX_SYMBOL_STR(sock_no_setsockopt) },
	{ 0xe0675ebf, __VMLINUX_SYMBOL_STR(sock_no_getsockopt) },
	{ 0x28858fae, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0x11025677, __VMLINUX_SYMBOL_STR(hrtimer_cancel) },
	{ 0x47939e0d, __VMLINUX_SYMBOL_STR(__tasklet_hi_schedule) },
	{ 0xc3a8837a, __VMLINUX_SYMBOL_STR(can_proto_unregister) },
	{ 0xc4a0819e, __VMLINUX_SYMBOL_STR(copy_from_iter) },
	{ 0x32653dd7, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0xbd9f60c6, __VMLINUX_SYMBOL_STR(sock_no_getname) },
	{ 0xc87c1f84, __VMLINUX_SYMBOL_STR(ktime_get) },
	{ 0xb830ec02, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0xf777c76e, __VMLINUX_SYMBOL_STR(sock_queue_rcv_skb) },
	{ 0xda3803a5, __VMLINUX_SYMBOL_STR(skb_recv_datagram) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x5bd88cf, __VMLINUX_SYMBOL_STR(sock_i_ino) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x4273b3a, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0x993a5f79, __VMLINUX_SYMBOL_STR(sock_no_sendpage) },
	{ 0x73379edd, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0xa56b31fe, __VMLINUX_SYMBOL_STR(PDE_DATA) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x40d76750, __VMLINUX_SYMBOL_STR(sock_efree) },
	{ 0x2e742b00, __VMLINUX_SYMBOL_STR(hrtimer_start_range_ns) },
	{ 0x5083d6d6, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0xf429c507, __VMLINUX_SYMBOL_STR(proc_mkdir) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x3f2c8a9b, __VMLINUX_SYMBOL_STR(sock_no_bind) },
	{ 0x50e661b, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0x4dd79bf9, __VMLINUX_SYMBOL_STR(seq_putc) },
	{ 0xde0cbdfd, __VMLINUX_SYMBOL_STR(sock_no_listen) },
	{ 0xf761994f, __VMLINUX_SYMBOL_STR(sock_no_accept) },
	{ 0xa60678a4, __VMLINUX_SYMBOL_STR(dev_get_by_index_rcu) },
	{ 0x2c5c6cda, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0xd4e482cb, __VMLINUX_SYMBOL_STR(dev_get_by_index) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0xdf1f7a49, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0xd666c6c5, __VMLINUX_SYMBOL_STR(sock_no_shutdown) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0x5ebc51cc, __VMLINUX_SYMBOL_STR(can_ioctl) },
	{ 0xfc2c037e, __VMLINUX_SYMBOL_STR(can_send) },
	{ 0x5acab4d0, __VMLINUX_SYMBOL_STR(__sock_recv_ts_and_drops) },
	{ 0x2f316960, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xecafa86f, __VMLINUX_SYMBOL_STR(datagram_poll) },
	{ 0x44de3d4c, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xeee3319f, __VMLINUX_SYMBOL_STR(can_proto_register) },
	{ 0xfd1fdf8e, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xc0056be5, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0xaede3d98, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0xc5bced1a, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x192441c6, __VMLINUX_SYMBOL_STR(hrtimer_init) },
	{ 0x6ec9ccdb, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0x6082be84, __VMLINUX_SYMBOL_STR(copy_to_iter) },
	{ 0x287de348, __VMLINUX_SYMBOL_STR(can_rx_unregister) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0xfd8bdc76, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0xdd177a99, __VMLINUX_SYMBOL_STR(skb_free_datagram) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=can";


MODULE_INFO(srcversion, "EFA4E3A412BAC3656A140A0");
