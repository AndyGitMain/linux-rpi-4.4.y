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
	{ 0x5d4057fc, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0x2d6507b5, __VMLINUX_SYMBOL_STR(_find_next_zero_bit_le) },
	{ 0x1863518b, __VMLINUX_SYMBOL_STR(page_zero_new_buffers) },
	{ 0xa79ebf52, __VMLINUX_SYMBOL_STR(dquot_alloc) },
	{ 0x198f0273, __VMLINUX_SYMBOL_STR(dquot_destroy) },
	{ 0xb8b5974, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x405c1144, __VMLINUX_SYMBOL_STR(get_seconds) },
	{ 0x410b0d4d, __VMLINUX_SYMBOL_STR(drop_nlink) },
	{ 0x6b1b67d3, __VMLINUX_SYMBOL_STR(__bdevname) },
	{ 0xf404dcb4, __VMLINUX_SYMBOL_STR(generic_getxattr) },
	{ 0xa0630c6b, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0xd41a9bca, __VMLINUX_SYMBOL_STR(save_mount_options) },
	{ 0xa7ad5969, __VMLINUX_SYMBOL_STR(make_bad_inode) },
	{ 0x33e41a48, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0x2d130194, __VMLINUX_SYMBOL_STR(__mark_inode_dirty) },
	{ 0x404482a6, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x4d18ce12, __VMLINUX_SYMBOL_STR(dquot_writeback_dquots) },
	{ 0xbd715ff0, __VMLINUX_SYMBOL_STR(__set_page_dirty_nobuffers) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xd0ee38b8, __VMLINUX_SYMBOL_STR(schedule_timeout_uninterruptible) },
	{ 0x60a13e90, __VMLINUX_SYMBOL_STR(rcu_barrier) },
	{ 0x6fa5a2cf, __VMLINUX_SYMBOL_STR(dquot_acquire) },
	{ 0x3df288f1, __VMLINUX_SYMBOL_STR(d_set_d_op) },
	{ 0x9816698e, __VMLINUX_SYMBOL_STR(filemap_write_and_wait_range) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x196554e3, __VMLINUX_SYMBOL_STR(iget5_locked) },
	{ 0x64999478, __VMLINUX_SYMBOL_STR(congestion_wait) },
	{ 0xd7acd732, __VMLINUX_SYMBOL_STR(bdev_read_only) },
	{ 0x19f462ab, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0xd3dbfbc4, __VMLINUX_SYMBOL_STR(_find_first_zero_bit_le) },
	{ 0x706736cf, __VMLINUX_SYMBOL_STR(seq_escape) },
	{ 0xadafd3ed, __VMLINUX_SYMBOL_STR(dquot_file_open) },
	{ 0x3a9545e6, __VMLINUX_SYMBOL_STR(dquot_mark_dquot_dirty) },
	{ 0x1ec83b6c, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0x4c86184b, __VMLINUX_SYMBOL_STR(remove_wait_queue) },
	{ 0xcc2675ae, __VMLINUX_SYMBOL_STR(is_bad_inode) },
	{ 0x1d17f7cb, __VMLINUX_SYMBOL_STR(blkdev_issue_flush) },
	{ 0x9a19a5a8, __VMLINUX_SYMBOL_STR(pagecache_get_page) },
	{ 0xdf23056a, __VMLINUX_SYMBOL_STR(dquot_quota_on_mount) },
	{ 0x12652418, __VMLINUX_SYMBOL_STR(posix_acl_access_xattr_handler) },
	{ 0xb6917751, __VMLINUX_SYMBOL_STR(posix_acl_update_mode) },
	{ 0xbde3cf3c, __VMLINUX_SYMBOL_STR(__lock_page) },
	{ 0x106396ed, __VMLINUX_SYMBOL_STR(ll_rw_block) },
	{ 0xdd55c024, __VMLINUX_SYMBOL_STR(__lock_buffer) },
	{ 0x20000329, __VMLINUX_SYMBOL_STR(simple_strtoul) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xcdc49e19, __VMLINUX_SYMBOL_STR(lockref_get) },
	{ 0x7c524ea8, __VMLINUX_SYMBOL_STR(dput) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0x32653dd7, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x27ecc173, __VMLINUX_SYMBOL_STR(dquot_quota_off) },
	{ 0x353e3fa5, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0x3a6deb61, __VMLINUX_SYMBOL_STR(inc_nlink) },
	{ 0x2a7257f9, __VMLINUX_SYMBOL_STR(block_read_full_page) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x4c29dcbf, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x85d23016, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xd78aa292, __VMLINUX_SYMBOL_STR(mount_bdev) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0xf3621e5f, __VMLINUX_SYMBOL_STR(__dquot_free_space) },
	{ 0xb0dcd09d, __VMLINUX_SYMBOL_STR(generic_read_dir) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x2d824880, __VMLINUX_SYMBOL_STR(__getblk_gfp) },
	{ 0x22573e99, __VMLINUX_SYMBOL_STR(igrab) },
	{ 0x5df08168, __VMLINUX_SYMBOL_STR(unlock_buffer) },
	{ 0xb7380b21, __VMLINUX_SYMBOL_STR(generic_setxattr) },
	{ 0x783523de, __VMLINUX_SYMBOL_STR(__dquot_alloc_space) },
	{ 0x50092c6d, __VMLINUX_SYMBOL_STR(redirty_page_for_writepage) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xc499ae1e, __VMLINUX_SYMBOL_STR(kstrdup) },
	{ 0x54e394a2, __VMLINUX_SYMBOL_STR(dquot_get_dqblk) },
	{ 0x23f16bb2, __VMLINUX_SYMBOL_STR(insert_inode_locked4) },
	{ 0x3a65643, __VMLINUX_SYMBOL_STR(truncate_setsize) },
	{ 0xf2959026, __VMLINUX_SYMBOL_STR(try_to_release_page) },
	{ 0xb194914f, __VMLINUX_SYMBOL_STR(mutex_trylock) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x3c3c6611, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0x131db64a, __VMLINUX_SYMBOL_STR(system_long_wq) },
	{ 0x3640c116, __VMLINUX_SYMBOL_STR(end_page_writeback) },
	{ 0x7c2d663c, __VMLINUX_SYMBOL_STR(d_delete) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xffd5a395, __VMLINUX_SYMBOL_STR(default_wake_function) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x7a2add7d, __VMLINUX_SYMBOL_STR(current_kernel_time64) },
	{ 0xb8896828, __VMLINUX_SYMBOL_STR(inode_owner_or_capable) },
	{ 0xa3e0b9ad, __VMLINUX_SYMBOL_STR(mpage_readpages) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xd7ef9519, __VMLINUX_SYMBOL_STR(dquot_alloc_inode) },
	{ 0xa088e62c, __VMLINUX_SYMBOL_STR(__bread_gfp) },
	{ 0x5871c238, __VMLINUX_SYMBOL_STR(current_fs_time) },
	{ 0x45f768a8, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x28480619, __VMLINUX_SYMBOL_STR(posix_acl_chmod) },
	{ 0xd851d712, __VMLINUX_SYMBOL_STR(d_obtain_alias) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x7c1372e8, __VMLINUX_SYMBOL_STR(panic) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0xaf8cf7ec, __VMLINUX_SYMBOL_STR(__sync_dirty_buffer) },
	{ 0x21d38556, __VMLINUX_SYMBOL_STR(blkdev_get_by_path) },
	{ 0x4dd79bf9, __VMLINUX_SYMBOL_STR(seq_putc) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x68b83ac6, __VMLINUX_SYMBOL_STR(posix_acl_alloc) },
	{ 0x3d9f7f62, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xe081e2fe, __VMLINUX_SYMBOL_STR(set_nlink) },
	{ 0x3934a77b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x34e895f, __VMLINUX_SYMBOL_STR(__wait_on_buffer) },
	{ 0x6220b4a2, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x870344e9, __VMLINUX_SYMBOL_STR(setattr_copy) },
	{ 0xfd8ab044, __VMLINUX_SYMBOL_STR(dquot_resume) },
	{ 0xa681fe88, __VMLINUX_SYMBOL_STR(generate_random_uuid) },
	{ 0x25725f51, __VMLINUX_SYMBOL_STR(sync_dirty_buffer) },
	{ 0x19f80091, __VMLINUX_SYMBOL_STR(blkdev_get_by_dev) },
	{ 0x54f7f1dc, __VMLINUX_SYMBOL_STR(set_cached_acl) },
	{ 0xfdbac831, __VMLINUX_SYMBOL_STR(unlock_page) },
	{ 0x48a31785, __VMLINUX_SYMBOL_STR(generic_file_read_iter) },
	{ 0xba398182, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0xab37e9dd, __VMLINUX_SYMBOL_STR(shrink_dcache_sb) },
	{ 0xa7546ca, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0x9c68644, __VMLINUX_SYMBOL_STR(__get_page_tail) },
	{ 0xa92e791c, __VMLINUX_SYMBOL_STR(posix_acl_create) },
	{ 0x9bb02469, __VMLINUX_SYMBOL_STR(__brelse) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x2761152d, __VMLINUX_SYMBOL_STR(generic_removexattr) },
	{ 0xa5f91ae6, __VMLINUX_SYMBOL_STR(dquot_set_dqblk) },
	{ 0xf27f5e71, __VMLINUX_SYMBOL_STR(mark_buffer_async_write) },
	{ 0xd8f48cea, __VMLINUX_SYMBOL_STR(inode_init_once) },
	{ 0xb285af80, __VMLINUX_SYMBOL_STR(page_follow_link_light) },
	{ 0x5561ae62, __VMLINUX_SYMBOL_STR(mnt_drop_write_file) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x617a218d, __VMLINUX_SYMBOL_STR(__cond_resched_lock) },
	{ 0x6f4caca7, __VMLINUX_SYMBOL_STR(xattr_full_name) },
	{ 0x40a9b349, __VMLINUX_SYMBOL_STR(vzalloc) },
	{ 0xbd8fa8f, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x3fe8be9c, __VMLINUX_SYMBOL_STR(blkdev_put) },
	{ 0x63303f94, __VMLINUX_SYMBOL_STR(dquot_quota_on) },
	{ 0xbc10dd97, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0x11b0445f, __VMLINUX_SYMBOL_STR(dquot_initialize) },
	{ 0xadd16a6b, __VMLINUX_SYMBOL_STR(sync_mapping_buffers) },
	{ 0xd12a5ac9, __VMLINUX_SYMBOL_STR(generic_file_mmap) },
	{ 0x8a963cd1, __VMLINUX_SYMBOL_STR(bdevname) },
	{ 0x36d46ae9, __VMLINUX_SYMBOL_STR(truncate_inode_pages_final) },
	{ 0x3884749e, __VMLINUX_SYMBOL_STR(create_empty_buffers) },
	{ 0xa648634f, __VMLINUX_SYMBOL_STR(try_to_free_buffers) },
	{ 0x7cd04ace, __VMLINUX_SYMBOL_STR(generic_cont_expand_simple) },
	{ 0x3f616ce2, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xe17f6bd3, __VMLINUX_SYMBOL_STR(dquot_quota_sync) },
	{ 0x8425f131, __VMLINUX_SYMBOL_STR(unlock_new_inode) },
	{ 0xf350dc63, __VMLINUX_SYMBOL_STR(mnt_want_write_file) },
	{ 0x8478e495, __VMLINUX_SYMBOL_STR(kill_block_super) },
	{ 0x8074e8c0, __VMLINUX_SYMBOL_STR(inode_newsize_ok) },
	{ 0x5e95b1cd, __VMLINUX_SYMBOL_STR(current_umask) },
	{ 0x281395ce, __VMLINUX_SYMBOL_STR(inode_set_bytes) },
	{ 0x96fa614e, __VMLINUX_SYMBOL_STR(inode_get_bytes) },
	{ 0xac2d761e, __VMLINUX_SYMBOL_STR(inode_change_ok) },
	{ 0x3754b4f, __VMLINUX_SYMBOL_STR(submit_bh) },
	{ 0xfd1fdf8e, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x4cb9cbf9, __VMLINUX_SYMBOL_STR(dquot_drop) },
	{ 0x41814cb8, __VMLINUX_SYMBOL_STR(dirty_writeback_interval) },
	{ 0x3186554c, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0xda9e9668, __VMLINUX_SYMBOL_STR(dquot_transfer) },
	{ 0x1f55c130, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0xa689c26a, __VMLINUX_SYMBOL_STR(generic_file_write_iter) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x88397f94, __VMLINUX_SYMBOL_STR(__test_set_page_writeback) },
	{ 0x68f1e08a, __VMLINUX_SYMBOL_STR(iter_file_splice_write) },
	{ 0xc7bcbc8d, __VMLINUX_SYMBOL_STR(add_wait_queue) },
	{ 0xf4da5db2, __VMLINUX_SYMBOL_STR(iput) },
	{ 0x501480c2, __VMLINUX_SYMBOL_STR(read_cache_page) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x6831ce26, __VMLINUX_SYMBOL_STR(generic_permission) },
	{ 0xb21f155, __VMLINUX_SYMBOL_STR(inode_dio_wait) },
	{ 0xd08007d8, __VMLINUX_SYMBOL_STR(ihold) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x643e0ce5, __VMLINUX_SYMBOL_STR(call_rcu_sched) },
	{ 0xa6dc8386, __VMLINUX_SYMBOL_STR(d_splice_alias) },
	{ 0x453a7dfb, __VMLINUX_SYMBOL_STR(sync_filesystem) },
	{ 0x6b21ee1f, __VMLINUX_SYMBOL_STR(write_dirty_buffer) },
	{ 0x9f45dab4, __VMLINUX_SYMBOL_STR(__set_page_dirty_buffers) },
	{ 0x838d43a0, __VMLINUX_SYMBOL_STR(sb_set_blocksize) },
	{ 0x41793ac6, __VMLINUX_SYMBOL_STR(generic_readlink) },
	{ 0x9583a120, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0x17fbeaa7, __VMLINUX_SYMBOL_STR(__bforget) },
	{ 0xf41bcb20, __VMLINUX_SYMBOL_STR(d_make_root) },
	{ 0x74c134b9, __VMLINUX_SYMBOL_STR(__sw_hweight32) },
	{ 0x249be5b7, __VMLINUX_SYMBOL_STR(__blockdev_direct_IO) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x1660f001, __VMLINUX_SYMBOL_STR(__block_write_begin) },
	{ 0x7d81da02, __VMLINUX_SYMBOL_STR(__find_get_block) },
	{ 0xe94195b4, __VMLINUX_SYMBOL_STR(posix_acl_default_xattr_handler) },
	{ 0x38b23a56, __VMLINUX_SYMBOL_STR(mark_buffer_dirty) },
	{ 0xd1253f9e, __VMLINUX_SYMBOL_STR(replace_mount_options) },
	{ 0xb50ef55d, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0x4fa2d458, __VMLINUX_SYMBOL_STR(init_special_inode) },
	{ 0x1945c7b8, __VMLINUX_SYMBOL_STR(dquot_get_state) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x56330dcc, __VMLINUX_SYMBOL_STR(new_inode) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x40848232, __VMLINUX_SYMBOL_STR(generic_file_splice_read) },
	{ 0xe113bbbc, __VMLINUX_SYMBOL_STR(csum_partial) },
	{ 0xf3a1bd89, __VMLINUX_SYMBOL_STR(lookup_one_len) },
	{ 0xb3cfe1c3, __VMLINUX_SYMBOL_STR(set_blocksize) },
	{ 0x5d0a94b3, __VMLINUX_SYMBOL_STR(dquot_free_inode) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0x248c7bac, __VMLINUX_SYMBOL_STR(dquot_release) },
	{ 0x29da667, __VMLINUX_SYMBOL_STR(dquot_disable) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x28bb462d, __VMLINUX_SYMBOL_STR(grab_cache_page_write_begin) },
	{ 0xea54dbd2, __VMLINUX_SYMBOL_STR(dquot_commit_info) },
	{ 0x9ef5eff, __VMLINUX_SYMBOL_STR(dquot_set_dqinfo) },
	{ 0x2482e688, __VMLINUX_SYMBOL_STR(vsprintf) },
	{ 0xb997c584, __VMLINUX_SYMBOL_STR(clear_inode) },
	{ 0x9c8baf54, __VMLINUX_SYMBOL_STR(page_put_link) },
	{ 0xdcb5739b, __VMLINUX_SYMBOL_STR(d_instantiate) },
	{ 0x15098c29, __VMLINUX_SYMBOL_STR(__init_rwsem) },
	{ 0xbf0fd53d, __VMLINUX_SYMBOL_STR(flush_dcache_page) },
	{ 0x96777f9b, __VMLINUX_SYMBOL_STR(generic_block_bmap) },
	{ 0x2f4b289a, __VMLINUX_SYMBOL_STR(clear_nlink) },
	{ 0x760a0f4f, __VMLINUX_SYMBOL_STR(yield) },
	{ 0x422f266, __VMLINUX_SYMBOL_STR(inode_init_owner) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x81c75893, __VMLINUX_SYMBOL_STR(truncate_inode_pages) },
	{ 0xa4c12b9a, __VMLINUX_SYMBOL_STR(dquot_commit) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "7DFDAED6FCD3B17DE2E3F19");