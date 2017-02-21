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
	{ 0x61b7b126, __VMLINUX_SYMBOL_STR(simple_strtoull) },
	{ 0xebc5c461, __VMLINUX_SYMBOL_STR(blkdev_issue_discard) },
	{ 0x92b57248, __VMLINUX_SYMBOL_STR(flush_work) },
	{ 0x9752f8e2, __VMLINUX_SYMBOL_STR(kset_create_and_add) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x5d4057fc, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0x6e6b2cc1, __VMLINUX_SYMBOL_STR(address_space_init_once) },
	{ 0x2d6507b5, __VMLINUX_SYMBOL_STR(_find_next_zero_bit_le) },
	{ 0x660f4e0d, __VMLINUX_SYMBOL_STR(fs_bio_set) },
	{ 0xb000516d, __VMLINUX_SYMBOL_STR(iget_failed) },
	{ 0xb8b5974, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xe6242986, __VMLINUX_SYMBOL_STR(perf_tp_event) },
	{ 0x405c1144, __VMLINUX_SYMBOL_STR(get_seconds) },
	{ 0x410b0d4d, __VMLINUX_SYMBOL_STR(drop_nlink) },
	{ 0x257a1ba7, __VMLINUX_SYMBOL_STR(sb_min_blocksize) },
	{ 0xa0630c6b, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0xa8ddde30, __VMLINUX_SYMBOL_STR(bio_alloc_bioset) },
	{ 0xa7ad5969, __VMLINUX_SYMBOL_STR(make_bad_inode) },
	{ 0x33e41a48, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0x2d130194, __VMLINUX_SYMBOL_STR(__mark_inode_dirty) },
	{ 0x404482a6, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0xbd715ff0, __VMLINUX_SYMBOL_STR(__set_page_dirty_nobuffers) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0xb7d66b4c, __VMLINUX_SYMBOL_STR(filemap_fault) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x60a13e90, __VMLINUX_SYMBOL_STR(rcu_barrier) },
	{ 0x196554e3, __VMLINUX_SYMBOL_STR(iget5_locked) },
	{ 0x41cd470f, __VMLINUX_SYMBOL_STR(find_get_pages_contig) },
	{ 0xd7acd732, __VMLINUX_SYMBOL_STR(bdev_read_only) },
	{ 0x92a9c60c, __VMLINUX_SYMBOL_STR(time_to_tm) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0x8b1a9bb8, __VMLINUX_SYMBOL_STR(block_invalidatepage) },
	{ 0xf19e9355, __VMLINUX_SYMBOL_STR(cpu_online_mask) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0xa089c022, __VMLINUX_SYMBOL_STR(block_is_partially_uptodate) },
	{ 0x605f93d4, __VMLINUX_SYMBOL_STR(block_write_begin) },
	{ 0x1ec83b6c, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0xcc2675ae, __VMLINUX_SYMBOL_STR(is_bad_inode) },
	{ 0x1d17f7cb, __VMLINUX_SYMBOL_STR(blkdev_issue_flush) },
	{ 0x9a19a5a8, __VMLINUX_SYMBOL_STR(pagecache_get_page) },
	{ 0x5ad0ff1e, __VMLINUX_SYMBOL_STR(touch_buffer) },
	{ 0x24d9885c, __VMLINUX_SYMBOL_STR(downgrade_write) },
	{ 0x8de210c5, __VMLINUX_SYMBOL_STR(generic_file_open) },
	{ 0x7ab88a45, __VMLINUX_SYMBOL_STR(system_freezing_cnt) },
	{ 0xbde3cf3c, __VMLINUX_SYMBOL_STR(__lock_page) },
	{ 0xdd55c024, __VMLINUX_SYMBOL_STR(__lock_buffer) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x345ba6c2, __VMLINUX_SYMBOL_STR(touch_atime) },
	{ 0x5c1c7a3d, __VMLINUX_SYMBOL_STR(deactivate_locked_super) },
	{ 0xcdc49e19, __VMLINUX_SYMBOL_STR(lockref_get) },
	{ 0xd3f57a2, __VMLINUX_SYMBOL_STR(_find_next_bit_le) },
	{ 0x7c524ea8, __VMLINUX_SYMBOL_STR(dput) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0x32653dd7, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x353e3fa5, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0x44e9a829, __VMLINUX_SYMBOL_STR(match_token) },
	{ 0x3a6deb61, __VMLINUX_SYMBOL_STR(inc_nlink) },
	{ 0xfac57818, __VMLINUX_SYMBOL_STR(d_find_alias) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0x85d23016, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0x4e0604e4, __VMLINUX_SYMBOL_STR(trace_event_buffer_reserve) },
	{ 0xadd47e82, __VMLINUX_SYMBOL_STR(kobject_del) },
	{ 0xb0dcd09d, __VMLINUX_SYMBOL_STR(generic_read_dir) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x2d824880, __VMLINUX_SYMBOL_STR(__getblk_gfp) },
	{ 0x22573e99, __VMLINUX_SYMBOL_STR(igrab) },
	{ 0x5df08168, __VMLINUX_SYMBOL_STR(unlock_buffer) },
	{ 0x50092c6d, __VMLINUX_SYMBOL_STR(redirty_page_for_writepage) },
	{ 0xd697e69a, __VMLINUX_SYMBOL_STR(trace_hardirqs_on) },
	{ 0x3995c8b7, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0x66d8d454, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x23f16bb2, __VMLINUX_SYMBOL_STR(insert_inode_locked4) },
	{ 0x3a65643, __VMLINUX_SYMBOL_STR(truncate_setsize) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0x3c3c6611, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x3640c116, __VMLINUX_SYMBOL_STR(end_page_writeback) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xffd5a395, __VMLINUX_SYMBOL_STR(default_wake_function) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x1fab5905, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x7a2add7d, __VMLINUX_SYMBOL_STR(current_kernel_time64) },
	{ 0xb8896828, __VMLINUX_SYMBOL_STR(inode_owner_or_capable) },
	{ 0xa3e0b9ad, __VMLINUX_SYMBOL_STR(mpage_readpages) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x706d051c, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0xa2d09977, __VMLINUX_SYMBOL_STR(trace_define_field) },
	{ 0x1308e6f8, __VMLINUX_SYMBOL_STR(mpage_readpage) },
	{ 0x8c09e823, __VMLINUX_SYMBOL_STR(d_obtain_root) },
	{ 0x1a8c3ce, __VMLINUX_SYMBOL_STR(inode_add_bytes) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xe1927216, __VMLINUX_SYMBOL_STR(freezing_slow_path) },
	{ 0xa088e62c, __VMLINUX_SYMBOL_STR(__bread_gfp) },
	{ 0x45f768a8, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x1403bc31, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0xd851d712, __VMLINUX_SYMBOL_STR(d_obtain_alias) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xf4dc0ac9, __VMLINUX_SYMBOL_STR(bio_add_page) },
	{ 0x840023bc, __VMLINUX_SYMBOL_STR(sget) },
	{ 0xa13f2b11, __VMLINUX_SYMBOL_STR(kobject_init_and_add) },
	{ 0x7c1372e8, __VMLINUX_SYMBOL_STR(panic) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x4d9b652b, __VMLINUX_SYMBOL_STR(rb_erase) },
	{ 0x3feaf038, __VMLINUX_SYMBOL_STR(trace_event_reg) },
	{ 0xaf8cf7ec, __VMLINUX_SYMBOL_STR(__sync_dirty_buffer) },
	{ 0x21d38556, __VMLINUX_SYMBOL_STR(blkdev_get_by_path) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x3d9f7f62, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xe081e2fe, __VMLINUX_SYMBOL_STR(set_nlink) },
	{ 0x3934a77b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x34e895f, __VMLINUX_SYMBOL_STR(__wait_on_buffer) },
	{ 0xd5ffdc1, __VMLINUX_SYMBOL_STR(file_update_time) },
	{ 0x6220b4a2, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0x870344e9, __VMLINUX_SYMBOL_STR(setattr_copy) },
	{ 0x4b31c872, __VMLINUX_SYMBOL_STR(page_symlink) },
	{ 0x25725f51, __VMLINUX_SYMBOL_STR(sync_dirty_buffer) },
	{ 0x1bb31047, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0xca8bb321, __VMLINUX_SYMBOL_STR(truncate_pagecache) },
	{ 0x965799dc, __VMLINUX_SYMBOL_STR(wait_on_page_bit) },
	{ 0xfdbac831, __VMLINUX_SYMBOL_STR(unlock_page) },
	{ 0x48a31785, __VMLINUX_SYMBOL_STR(generic_file_read_iter) },
	{ 0xba398182, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0xa7546ca, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0x9c68644, __VMLINUX_SYMBOL_STR(__get_page_tail) },
	{ 0x9bb02469, __VMLINUX_SYMBOL_STR(__brelse) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x1683a50b, __VMLINUX_SYMBOL_STR(radix_tree_delete) },
	{ 0x19c634ef, __VMLINUX_SYMBOL_STR(bio_put) },
	{ 0x34e46a9f, __VMLINUX_SYMBOL_STR(ilookup5) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0xd8f48cea, __VMLINUX_SYMBOL_STR(inode_init_once) },
	{ 0xb285af80, __VMLINUX_SYMBOL_STR(page_follow_link_light) },
	{ 0x5561ae62, __VMLINUX_SYMBOL_STR(mnt_drop_write_file) },
	{ 0x6aee757f, __VMLINUX_SYMBOL_STR(submit_bio) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0xbd8fa8f, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x3fe8be9c, __VMLINUX_SYMBOL_STR(blkdev_put) },
	{ 0xbc10dd97, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0x4d0d163d, __VMLINUX_SYMBOL_STR(copy_page) },
	{ 0x22dfdd06, __VMLINUX_SYMBOL_STR(radix_tree_tag_set) },
	{ 0xad92a06d, __VMLINUX_SYMBOL_STR(wait_for_stable_page) },
	{ 0x3999f2f0, __VMLINUX_SYMBOL_STR(fs_kobj) },
	{ 0x8a963cd1, __VMLINUX_SYMBOL_STR(bdevname) },
	{ 0xb20571f9, __VMLINUX_SYMBOL_STR(inode_sub_bytes) },
	{ 0xc10ebabb, __VMLINUX_SYMBOL_STR(block_write_end) },
	{ 0x36d46ae9, __VMLINUX_SYMBOL_STR(truncate_inode_pages_final) },
	{ 0x3884749e, __VMLINUX_SYMBOL_STR(create_empty_buffers) },
	{ 0x6a9bdead, __VMLINUX_SYMBOL_STR(trace_event_ignore_this_pid) },
	{ 0x290232e6, __VMLINUX_SYMBOL_STR(pagevec_lookup_tag) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x7b46827e, __VMLINUX_SYMBOL_STR(generic_write_end) },
	{ 0xe34c691d, __VMLINUX_SYMBOL_STR(__breadahead) },
	{ 0xfdfc0b3b, __VMLINUX_SYMBOL_STR(fiemap_fill_next_extent) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x8425f131, __VMLINUX_SYMBOL_STR(unlock_new_inode) },
	{ 0xf350dc63, __VMLINUX_SYMBOL_STR(mnt_want_write_file) },
	{ 0x8478e495, __VMLINUX_SYMBOL_STR(kill_block_super) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x5e95b1cd, __VMLINUX_SYMBOL_STR(current_umask) },
	{ 0x4482cdb, __VMLINUX_SYMBOL_STR(__refrigerator) },
	{ 0xce225efb, __VMLINUX_SYMBOL_STR(trace_event_buffer_commit) },
	{ 0xf511fcb6, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0x8961dc3f, __VMLINUX_SYMBOL_STR(shrink_dcache_parent) },
	{ 0xcb8a8371, __VMLINUX_SYMBOL_STR(clear_page_dirty_for_io) },
	{ 0xac2d761e, __VMLINUX_SYMBOL_STR(inode_change_ok) },
	{ 0x3754b4f, __VMLINUX_SYMBOL_STR(submit_bh) },
	{ 0xfd1fdf8e, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x4bcf03a4, __VMLINUX_SYMBOL_STR(radix_tree_tag_clear) },
	{ 0xa5526619, __VMLINUX_SYMBOL_STR(rb_insert_color) },
	{ 0x3186554c, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x1f55c130, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0xa689c26a, __VMLINUX_SYMBOL_STR(generic_file_write_iter) },
	{ 0xd087f2e1, __VMLINUX_SYMBOL_STR(event_triggers_call) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x99e603d5, __VMLINUX_SYMBOL_STR(__pagevec_release) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x88397f94, __VMLINUX_SYMBOL_STR(__test_set_page_writeback) },
	{ 0xc7bcbc8d, __VMLINUX_SYMBOL_STR(add_wait_queue) },
	{ 0x31683780, __VMLINUX_SYMBOL_STR(kset_unregister) },
	{ 0xf4da5db2, __VMLINUX_SYMBOL_STR(iput) },
	{ 0x501480c2, __VMLINUX_SYMBOL_STR(read_cache_page) },
	{ 0xa05bea31, __VMLINUX_SYMBOL_STR(invalidate_inode_pages2_range) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xa46f2f1b, __VMLINUX_SYMBOL_STR(kstrtouint) },
	{ 0x6831ce26, __VMLINUX_SYMBOL_STR(generic_permission) },
	{ 0xb21f155, __VMLINUX_SYMBOL_STR(inode_dio_wait) },
	{ 0x5e4b3a91, __VMLINUX_SYMBOL_STR(pagevec_lookup) },
	{ 0xd08007d8, __VMLINUX_SYMBOL_STR(ihold) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x5957c017, __VMLINUX_SYMBOL_STR(__sb_end_write) },
	{ 0xe93f6042, __VMLINUX_SYMBOL_STR(trace_print_symbols_seq) },
	{ 0xe9103183, __VMLINUX_SYMBOL_STR(trace_event_raw_init) },
	{ 0x643e0ce5, __VMLINUX_SYMBOL_STR(call_rcu_sched) },
	{ 0x499cb58c, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0xa6dc8386, __VMLINUX_SYMBOL_STR(d_splice_alias) },
	{ 0x721b1851, __VMLINUX_SYMBOL_STR(skip_spaces) },
	{ 0xd0df6c7d, __VMLINUX_SYMBOL_STR(block_page_mkwrite) },
	{ 0xc5b3baa1, __VMLINUX_SYMBOL_STR(end_buffer_read_sync) },
	{ 0x1ff6c8b8, __VMLINUX_SYMBOL_STR(perf_trace_buf_prepare) },
	{ 0x9754ec10, __VMLINUX_SYMBOL_STR(radix_tree_preload) },
	{ 0x453a7dfb, __VMLINUX_SYMBOL_STR(sync_filesystem) },
	{ 0x7b58f0cc, __VMLINUX_SYMBOL_STR(invalidate_mapping_pages) },
	{ 0x28fa2161, __VMLINUX_SYMBOL_STR(block_truncate_page) },
	{ 0x838d43a0, __VMLINUX_SYMBOL_STR(sb_set_blocksize) },
	{ 0xbf7e4beb, __VMLINUX_SYMBOL_STR(__sb_start_write) },
	{ 0x41793ac6, __VMLINUX_SYMBOL_STR(generic_readlink) },
	{ 0x9583a120, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0xf9e73082, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0xf41bcb20, __VMLINUX_SYMBOL_STR(d_make_root) },
	{ 0x249be5b7, __VMLINUX_SYMBOL_STR(__blockdev_direct_IO) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x8c674307, __VMLINUX_SYMBOL_STR(inode_set_flags) },
	{ 0x1660f001, __VMLINUX_SYMBOL_STR(__block_write_begin) },
	{ 0x38b23a56, __VMLINUX_SYMBOL_STR(mark_buffer_dirty) },
	{ 0xb50ef55d, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0x4fa2d458, __VMLINUX_SYMBOL_STR(init_special_inode) },
	{ 0xbbb73492, __VMLINUX_SYMBOL_STR(trace_raw_output_prep) },
	{ 0xe2e8065e, __VMLINUX_SYMBOL_STR(memdup_user) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xcdbf71a0, __VMLINUX_SYMBOL_STR(filemap_map_pages) },
	{ 0xd4669fad, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x871c0a7e, __VMLINUX_SYMBOL_STR(fiemap_check_flags) },
	{ 0x56330dcc, __VMLINUX_SYMBOL_STR(new_inode) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x3c93ea25, __VMLINUX_SYMBOL_STR(trace_seq_printf) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x40848232, __VMLINUX_SYMBOL_STR(generic_file_splice_read) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x6cfc4e61, __VMLINUX_SYMBOL_STR(empty_aops) },
	{ 0x6e6514ed, __VMLINUX_SYMBOL_STR(radix_tree_insert) },
	{ 0xb997c584, __VMLINUX_SYMBOL_STR(clear_inode) },
	{ 0x9c8baf54, __VMLINUX_SYMBOL_STR(page_put_link) },
	{ 0xdcb5739b, __VMLINUX_SYMBOL_STR(d_instantiate) },
	{ 0x15098c29, __VMLINUX_SYMBOL_STR(__init_rwsem) },
	{ 0xbf0fd53d, __VMLINUX_SYMBOL_STR(flush_dcache_page) },
	{ 0x2f4b289a, __VMLINUX_SYMBOL_STR(clear_nlink) },
	{ 0x760a0f4f, __VMLINUX_SYMBOL_STR(yield) },
	{ 0x422f266, __VMLINUX_SYMBOL_STR(inode_init_owner) },
	{ 0x81c75893, __VMLINUX_SYMBOL_STR(truncate_inode_pages) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "E5A476F85FDE9D7D91AF76A");