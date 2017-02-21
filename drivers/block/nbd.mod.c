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
	{ 0x1494ad7b, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x28858fae, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0x4273b3a, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0xc5bced1a, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0xb5a459dc, __VMLINUX_SYMBOL_STR(unregister_blkdev) },
	{ 0x52ce470c, __VMLINUX_SYMBOL_STR(del_gendisk) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x64308369, __VMLINUX_SYMBOL_STR(blk_cleanup_queue) },
	{ 0xe325ca41, __VMLINUX_SYMBOL_STR(add_disk) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x45f768a8, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x71a50dbc, __VMLINUX_SYMBOL_STR(register_blkdev) },
	{ 0xa7cfa5f0, __VMLINUX_SYMBOL_STR(blk_queue_max_hw_sectors) },
	{ 0xb33c4c2b, __VMLINUX_SYMBOL_STR(blk_queue_max_discard_sectors) },
	{ 0x64a0e0d1, __VMLINUX_SYMBOL_STR(put_disk) },
	{ 0x7e236255, __VMLINUX_SYMBOL_STR(blk_init_queue) },
	{ 0x1e1cbf23, __VMLINUX_SYMBOL_STR(alloc_disk) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x72350130, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0xf5d279da, __VMLINUX_SYMBOL_STR(blk_fetch_request) },
	{ 0x5c73b003, __VMLINUX_SYMBOL_STR(force_sig) },
	{ 0xfdcdd090, __VMLINUX_SYMBOL_STR(sockfd_lookup) },
	{ 0x30193f9a, __VMLINUX_SYMBOL_STR(blkdev_reread_part) },
	{ 0xca5c4f95, __VMLINUX_SYMBOL_STR(set_device_ro) },
	{ 0xf9964443, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0x96967609, __VMLINUX_SYMBOL_STR(debugfs_remove_recursive) },
	{ 0x5db21408, __VMLINUX_SYMBOL_STR(debugfs_create_u32) },
	{ 0x7e1b2e59, __VMLINUX_SYMBOL_STR(debugfs_create_u64) },
	{ 0x5d72defc, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0x524515b1, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0xf511fcb6, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0x66d8d454, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0xfa6ead70, __VMLINUX_SYMBOL_STR(blk_queue_flush) },
	{ 0xb3cfe1c3, __VMLINUX_SYMBOL_STR(set_blocksize) },
	{ 0xc37c8396, __VMLINUX_SYMBOL_STR(fput) },
	{ 0x3e825553, __VMLINUX_SYMBOL_STR(kill_bdev) },
	{ 0x52ef1406, __VMLINUX_SYMBOL_STR(blk_rq_init) },
	{ 0xfa85d9d6, __VMLINUX_SYMBOL_STR(fsync_bdev) },
	{ 0x27683889, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xe998aeda, __VMLINUX_SYMBOL_STR(device_remove_file) },
	{ 0x9a623b12, __VMLINUX_SYMBOL_STR(device_create_file) },
	{ 0xdc3f1397, __VMLINUX_SYMBOL_STR(sk_set_memalloc) },
	{ 0xbefec898, __VMLINUX_SYMBOL_STR(dequeue_signal) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x85d23016, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x3934a77b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xd697e69a, __VMLINUX_SYMBOL_STR(trace_hardirqs_on) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0x71aaa09c, __VMLINUX_SYMBOL_STR(set_user_nice) },
	{ 0x706d051c, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x258da6b6, __VMLINUX_SYMBOL_STR(kernel_sock_shutdown) },
	{ 0x1bf56330, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x1ec83b6c, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0x32653dd7, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x92ec2f75, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0x404482a6, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xbd7da979, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x16e5c2a, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x9ebef83f, __VMLINUX_SYMBOL_STR(kernel_recvmsg) },
	{ 0xa695be4, __VMLINUX_SYMBOL_STR(kernel_sendmsg) },
	{ 0x4d3c153f, __VMLINUX_SYMBOL_STR(sigprocmask) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x700c8aa0, __VMLINUX_SYMBOL_STR(__blk_end_request_all) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "DD8C5FF6C2BE9A22548F48D");
