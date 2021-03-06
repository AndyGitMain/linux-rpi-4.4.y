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
	{ 0x6d662533, __VMLINUX_SYMBOL_STR(_find_first_bit_le) },
	{ 0xebc5c461, __VMLINUX_SYMBOL_STR(blkdev_issue_discard) },
	{ 0x91de6c11, __VMLINUX_SYMBOL_STR(bio_split) },
	{ 0x5d4057fc, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0x660f4e0d, __VMLINUX_SYMBOL_STR(fs_bio_set) },
	{ 0xb8b5974, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0xd9a8be2f, __VMLINUX_SYMBOL_STR(async_raid6_datap_recov) },
	{ 0x78594af8, __VMLINUX_SYMBOL_STR(blk_queue_io_opt) },
	{ 0xa8ddde30, __VMLINUX_SYMBOL_STR(bio_alloc_bioset) },
	{ 0xc84c920c, __VMLINUX_SYMBOL_STR(rdev_set_badblocks) },
	{ 0x404482a6, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xd0ee38b8, __VMLINUX_SYMBOL_STR(schedule_timeout_uninterruptible) },
	{ 0xd2260e3, __VMLINUX_SYMBOL_STR(md_is_badblock) },
	{ 0xc7a1840e, __VMLINUX_SYMBOL_STR(llist_add_batch) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x51c4ff81, __VMLINUX_SYMBOL_STR(bio_clone_mddev) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0xf19e9355, __VMLINUX_SYMBOL_STR(cpu_online_mask) },
	{ 0xb4172ed6, __VMLINUX_SYMBOL_STR(mddev_suspend) },
	{ 0xe1083ae3, __VMLINUX_SYMBOL_STR(__tracepoint_block_bio_remap) },
	{ 0x88a60a62, __VMLINUX_SYMBOL_STR(md_check_recovery) },
	{ 0x4e0280e5, __VMLINUX_SYMBOL_STR(blk_queue_io_min) },
	{ 0xd3f57a2, __VMLINUX_SYMBOL_STR(_find_next_bit_le) },
	{ 0xa0e4e99d, __VMLINUX_SYMBOL_STR(md_write_end) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0xe4a0d7af, __VMLINUX_SYMBOL_STR(__tracepoint_block_bio_complete) },
	{ 0x32653dd7, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xacf7679, __VMLINUX_SYMBOL_STR(dma_issue_pending_all) },
	{ 0x429d4e28, __VMLINUX_SYMBOL_STR(bitmap_endwrite) },
	{ 0xe9c95cd6, __VMLINUX_SYMBOL_STR(bitmap_unplug) },
	{ 0x50c89f23, __VMLINUX_SYMBOL_STR(__alloc_percpu) },
	{ 0xf182c0b1, __VMLINUX_SYMBOL_STR(async_syndrome_val) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xdb6c07b6, __VMLINUX_SYMBOL_STR(md_new_event) },
	{ 0xad7ce9b0, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x85d23016, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x83770bc6, __VMLINUX_SYMBOL_STR(unregister_md_personality) },
	{ 0x27000b29, __VMLINUX_SYMBOL_STR(crc32c) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xf0f56e99, __VMLINUX_SYMBOL_STR(revalidate_disk) },
	{ 0xd697e69a, __VMLINUX_SYMBOL_STR(trace_hardirqs_on) },
	{ 0x8606ce92, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xc9ec4e21, __VMLINUX_SYMBOL_STR(free_percpu) },
	{ 0xb194914f, __VMLINUX_SYMBOL_STR(mutex_trylock) },
	{ 0x5df47a5a, __VMLINUX_SYMBOL_STR(bitmap_resize) },
	{ 0xd4d7a32, __VMLINUX_SYMBOL_STR(_atomic_dec_and_lock) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0x872ba8a0, __VMLINUX_SYMBOL_STR(bio_reset) },
	{ 0x6474037c, __VMLINUX_SYMBOL_STR(bitmap_start_sync) },
	{ 0xd27b25dd, __VMLINUX_SYMBOL_STR(blk_check_plugged) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xd4cb6873, __VMLINUX_SYMBOL_STR(raid6_call) },
	{ 0x17a97119, __VMLINUX_SYMBOL_STR(md_register_thread) },
	{ 0xe78eba81, __VMLINUX_SYMBOL_STR(bio_init) },
	{ 0x1b01e7a5, __VMLINUX_SYMBOL_STR(md_flush_request) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x5fb7e91b, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x45f768a8, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x1403bc31, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0x23b829ff, __VMLINUX_SYMBOL_STR(md_update_sb) },
	{ 0xf4dc0ac9, __VMLINUX_SYMBOL_STR(bio_add_page) },
	{ 0x99481813, __VMLINUX_SYMBOL_STR(async_raid6_2data_recov) },
	{ 0xdabab0c4, __VMLINUX_SYMBOL_STR(md_do_sync) },
	{ 0xde4eaf2b, __VMLINUX_SYMBOL_STR(async_trigger_callback) },
	{ 0xbf0c8788, __VMLINUX_SYMBOL_STR(disk_stack_limits) },
	{ 0x5c1facd, __VMLINUX_SYMBOL_STR(bitmap_close_sync) },
	{ 0x63abedd5, __VMLINUX_SYMBOL_STR(bio_chain) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x93bf2fcd, __VMLINUX_SYMBOL_STR(__tracepoint_block_unplug) },
	{ 0x56fa3817, __VMLINUX_SYMBOL_STR(mddev_unlock) },
	{ 0x3d9f7f62, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x3934a77b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x465757c3, __VMLINUX_SYMBOL_STR(cpu_present_mask) },
	{ 0xc2cdbf1, __VMLINUX_SYMBOL_STR(synchronize_sched) },
	{ 0x3ac025b9, __VMLINUX_SYMBOL_STR(async_memcpy) },
	{ 0xa735db59, __VMLINUX_SYMBOL_STR(prandom_u32) },
	{ 0xb9625021, __VMLINUX_SYMBOL_STR(generic_make_request) },
	{ 0x3ab30e06, __VMLINUX_SYMBOL_STR(md_wait_for_blocked_rdev) },
	{ 0xa37e78b6, __VMLINUX_SYMBOL_STR(flex_array_get) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0xe5e85202, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0x420c70d9, __VMLINUX_SYMBOL_STR(bio_endio) },
	{ 0x19c634ef, __VMLINUX_SYMBOL_STR(bio_put) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0x9a49ba58, __VMLINUX_SYMBOL_STR(md_done_sync) },
	{ 0x7d4cd9bf, __VMLINUX_SYMBOL_STR(flush_signals) },
	{ 0x39ed8122, __VMLINUX_SYMBOL_STR(sysfs_create_link) },
	{ 0x6aee757f, __VMLINUX_SYMBOL_STR(submit_bio) },
	{ 0xbd9074b1, __VMLINUX_SYMBOL_STR(blk_finish_plug) },
	{ 0x7020a4c7, __VMLINUX_SYMBOL_STR(async_xor_val) },
	{ 0xbd8fa8f, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x939648d0, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0x2ca15312, __VMLINUX_SYMBOL_STR(bitmap_cond_end_sync) },
	{ 0x7ccc3ef8, __VMLINUX_SYMBOL_STR(async_xor) },
	{ 0x6570764f, __VMLINUX_SYMBOL_STR(unregister_shrinker) },
	{ 0xddb1cd7, __VMLINUX_SYMBOL_STR(llist_reverse_order) },
	{ 0xbe50167a, __VMLINUX_SYMBOL_STR(md_write_start) },
	{ 0x8a963cd1, __VMLINUX_SYMBOL_STR(bdevname) },
	{ 0x47e69a3d, __VMLINUX_SYMBOL_STR(__trace_note_message) },
	{ 0x8575aa41, __VMLINUX_SYMBOL_STR(async_tx_quiesce) },
	{ 0x99a7a0bb, __VMLINUX_SYMBOL_STR(rdev_clear_badblocks) },
	{ 0xd3e6f60d, __VMLINUX_SYMBOL_STR(cpu_possible_mask) },
	{ 0x44415167, __VMLINUX_SYMBOL_STR(md_allow_write) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x72350130, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0x70aa8729, __VMLINUX_SYMBOL_STR(md_set_array_sectors) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x996bdb64, __VMLINUX_SYMBOL_STR(_kstrtoul) },
	{ 0x85fc5421, __VMLINUX_SYMBOL_STR(sysfs_notify) },
	{ 0x800f9ca5, __VMLINUX_SYMBOL_STR(md_wakeup_thread) },
	{ 0xc762ead6, __VMLINUX_SYMBOL_STR(kernfs_notify) },
	{ 0xfd1fdf8e, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x341dbfa3, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x3186554c, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x7a4b576, __VMLINUX_SYMBOL_STR(flex_array_free) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x5bdd0bdb, __VMLINUX_SYMBOL_STR(sync_page_io) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x37bb6ff1, __VMLINUX_SYMBOL_STR(md_unregister_thread) },
	{ 0xb6b7ce0b, __VMLINUX_SYMBOL_STR(async_gen_syndrome) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xdfa2ee68, __VMLINUX_SYMBOL_STR(bitmap_startwrite) },
	{ 0x499cb58c, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0x27c90079, __VMLINUX_SYMBOL_STR(register_shrinker) },
	{ 0x333eff82, __VMLINUX_SYMBOL_STR(md_error) },
	{ 0x13315729, __VMLINUX_SYMBOL_STR(flex_array_alloc) },
	{ 0x9583a120, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x393c1177, __VMLINUX_SYMBOL_STR(mddev_resume) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0xec3d2e1b, __VMLINUX_SYMBOL_STR(trace_hardirqs_off) },
	{ 0x7d705738, __VMLINUX_SYMBOL_STR(blk_start_plug) },
	{ 0x3f001e92, __VMLINUX_SYMBOL_STR(blk_queue_max_write_same_sectors) },
	{ 0xe66678cd, __VMLINUX_SYMBOL_STR(register_md_personality) },
	{ 0x9fd7cda1, __VMLINUX_SYMBOL_STR(flex_array_prealloc) },
	{ 0x6e76727, __VMLINUX_SYMBOL_STR(set_disk_ro) },
	{ 0x4726af88, __VMLINUX_SYMBOL_STR(bitmap_end_sync) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=async_raid6_recov,md-mod,async_pq,raid6_pq,async_tx,async_memcpy,async_xor";


MODULE_INFO(srcversion, "D8FD90E99F9CE4E6ED34E01");
