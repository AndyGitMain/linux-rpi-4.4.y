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
	{ 0x83770bc6, __VMLINUX_SYMBOL_STR(unregister_md_personality) },
	{ 0xe66678cd, __VMLINUX_SYMBOL_STR(register_md_personality) },
	{ 0x9ae1a19, __VMLINUX_SYMBOL_STR(md_finish_reshape) },
	{ 0x85fc5421, __VMLINUX_SYMBOL_STR(sysfs_notify) },
	{ 0x51e81d51, __VMLINUX_SYMBOL_STR(bio_alloc_mddev) },
	{ 0x5c1facd, __VMLINUX_SYMBOL_STR(bitmap_close_sync) },
	{ 0x4726af88, __VMLINUX_SYMBOL_STR(bitmap_end_sync) },
	{ 0xf4dc0ac9, __VMLINUX_SYMBOL_STR(bio_add_page) },
	{ 0x2ca15312, __VMLINUX_SYMBOL_STR(bitmap_cond_end_sync) },
	{ 0x6474037c, __VMLINUX_SYMBOL_STR(bitmap_start_sync) },
	{ 0x404482a6, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x24112c31, __VMLINUX_SYMBOL_STR(bio_copy_data) },
	{ 0x872ba8a0, __VMLINUX_SYMBOL_STR(bio_reset) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xbd9074b1, __VMLINUX_SYMBOL_STR(blk_finish_plug) },
	{ 0x853e5b44, __VMLINUX_SYMBOL_STR(submit_bio_wait) },
	{ 0x99a7a0bb, __VMLINUX_SYMBOL_STR(rdev_clear_badblocks) },
	{ 0x7d705738, __VMLINUX_SYMBOL_STR(blk_start_plug) },
	{ 0x88a60a62, __VMLINUX_SYMBOL_STR(md_check_recovery) },
	{ 0x660f4e0d, __VMLINUX_SYMBOL_STR(fs_bio_set) },
	{ 0x1b82fefa, __VMLINUX_SYMBOL_STR(md_unplug) },
	{ 0x63abedd5, __VMLINUX_SYMBOL_STR(bio_chain) },
	{ 0x91de6c11, __VMLINUX_SYMBOL_STR(bio_split) },
	{ 0x1b01e7a5, __VMLINUX_SYMBOL_STR(md_flush_request) },
	{ 0x3ab30e06, __VMLINUX_SYMBOL_STR(md_wait_for_blocked_rdev) },
	{ 0xd27b25dd, __VMLINUX_SYMBOL_STR(blk_check_plugged) },
	{ 0xdfa2ee68, __VMLINUX_SYMBOL_STR(bitmap_startwrite) },
	{ 0x5bba37f2, __VMLINUX_SYMBOL_STR(bio_trim) },
	{ 0x51c4ff81, __VMLINUX_SYMBOL_STR(bio_clone_mddev) },
	{ 0x3026722, __VMLINUX_SYMBOL_STR(mempool_alloc) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0xbe50167a, __VMLINUX_SYMBOL_STR(md_write_start) },
	{ 0x37bb6ff1, __VMLINUX_SYMBOL_STR(md_unregister_thread) },
	{ 0x78594af8, __VMLINUX_SYMBOL_STR(blk_queue_io_opt) },
	{ 0x4e0280e5, __VMLINUX_SYMBOL_STR(blk_queue_io_min) },
	{ 0x3f001e92, __VMLINUX_SYMBOL_STR(blk_queue_max_write_same_sectors) },
	{ 0xb33c4c2b, __VMLINUX_SYMBOL_STR(blk_queue_max_discard_sectors) },
	{ 0xcf19fcd, __VMLINUX_SYMBOL_STR(md_integrity_register) },
	{ 0xc2cdbf1, __VMLINUX_SYMBOL_STR(synchronize_sched) },
	{ 0x32653dd7, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xdabab0c4, __VMLINUX_SYMBOL_STR(md_do_sync) },
	{ 0x39ed8122, __VMLINUX_SYMBOL_STR(sysfs_create_link) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xdb6c07b6, __VMLINUX_SYMBOL_STR(md_new_event) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xbf0c8788, __VMLINUX_SYMBOL_STR(disk_stack_limits) },
	{ 0x5963406f, __VMLINUX_SYMBOL_STR(md_integrity_add_rdev) },
	{ 0xc762ead6, __VMLINUX_SYMBOL_STR(kernfs_notify) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0x9c68644, __VMLINUX_SYMBOL_STR(__get_page_tail) },
	{ 0xa8ddde30, __VMLINUX_SYMBOL_STR(bio_alloc_bioset) },
	{ 0x5df47a5a, __VMLINUX_SYMBOL_STR(bitmap_resize) },
	{ 0xf0f56e99, __VMLINUX_SYMBOL_STR(revalidate_disk) },
	{ 0x70aa8729, __VMLINUX_SYMBOL_STR(md_set_array_sectors) },
	{ 0xe5e85202, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0xb8b5974, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x17a97119, __VMLINUX_SYMBOL_STR(md_register_thread) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x2b4e956e, __VMLINUX_SYMBOL_STR(mempool_create) },
	{ 0x8606ce92, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0xfd1fdf8e, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9583a120, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0xa58fea9d, __VMLINUX_SYMBOL_STR(mempool_destroy) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x5e515be6, __VMLINUX_SYMBOL_STR(ktime_get_ts64) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x72350130, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0x8a963cd1, __VMLINUX_SYMBOL_STR(bdevname) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xd2260e3, __VMLINUX_SYMBOL_STR(md_is_badblock) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x333eff82, __VMLINUX_SYMBOL_STR(md_error) },
	{ 0xc84c920c, __VMLINUX_SYMBOL_STR(rdev_set_badblocks) },
	{ 0x5bdd0bdb, __VMLINUX_SYMBOL_STR(sync_page_io) },
	{ 0x9a49ba58, __VMLINUX_SYMBOL_STR(md_done_sync) },
	{ 0x800f9ca5, __VMLINUX_SYMBOL_STR(md_wakeup_thread) },
	{ 0x19c634ef, __VMLINUX_SYMBOL_STR(bio_put) },
	{ 0x2232a8a5, __VMLINUX_SYMBOL_STR(mempool_free) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x420c70d9, __VMLINUX_SYMBOL_STR(bio_endio) },
	{ 0xb9625021, __VMLINUX_SYMBOL_STR(generic_make_request) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xe9c95cd6, __VMLINUX_SYMBOL_STR(bitmap_unplug) },
	{ 0xd697e69a, __VMLINUX_SYMBOL_STR(trace_hardirqs_on) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0xa0e4e99d, __VMLINUX_SYMBOL_STR(md_write_end) },
	{ 0x429d4e28, __VMLINUX_SYMBOL_STR(bitmap_endwrite) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=md-mod";


MODULE_INFO(srcversion, "39F89B229AB6D080F5D6C96");
