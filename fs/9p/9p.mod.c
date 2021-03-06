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
	{ 0x68abb700, __VMLINUX_SYMBOL_STR(kobject_put) },
	{ 0x5d4057fc, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0xb000516d, __VMLINUX_SYMBOL_STR(iget_failed) },
	{ 0xb8b5974, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x410b0d4d, __VMLINUX_SYMBOL_STR(drop_nlink) },
	{ 0xe42bad6a, __VMLINUX_SYMBOL_STR(set_anon_super) },
	{ 0xf404dcb4, __VMLINUX_SYMBOL_STR(generic_getxattr) },
	{ 0x53538d84, __VMLINUX_SYMBOL_STR(p9_client_mknod_dotl) },
	{ 0xa0630c6b, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0xd41a9bca, __VMLINUX_SYMBOL_STR(save_mount_options) },
	{ 0x33e41a48, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0x2d130194, __VMLINUX_SYMBOL_STR(__mark_inode_dirty) },
	{ 0x404482a6, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0xbd715ff0, __VMLINUX_SYMBOL_STR(__set_page_dirty_nobuffers) },
	{ 0xb7d66b4c, __VMLINUX_SYMBOL_STR(filemap_fault) },
	{ 0x2a01ea5, __VMLINUX_SYMBOL_STR(generic_write_checks) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x60a13e90, __VMLINUX_SYMBOL_STR(rcu_barrier) },
	{ 0x46d4e564, __VMLINUX_SYMBOL_STR(p9_client_readdir) },
	{ 0x9816698e, __VMLINUX_SYMBOL_STR(filemap_write_and_wait_range) },
	{ 0x196554e3, __VMLINUX_SYMBOL_STR(iget5_locked) },
	{ 0xa562d771, __VMLINUX_SYMBOL_STR(kill_anon_super) },
	{ 0xa8cabb9e, __VMLINUX_SYMBOL_STR(posix_acl_to_xattr) },
	{ 0x19f462ab, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0xb5ba9720, __VMLINUX_SYMBOL_STR(p9_client_getlock_dotl) },
	{ 0x66965043, __VMLINUX_SYMBOL_STR(p9_client_begin_disconnect) },
	{ 0x8de210c5, __VMLINUX_SYMBOL_STR(generic_file_open) },
	{ 0xacf4d843, __VMLINUX_SYMBOL_STR(match_strdup) },
	{ 0xb6917751, __VMLINUX_SYMBOL_STR(posix_acl_update_mode) },
	{ 0xbde3cf3c, __VMLINUX_SYMBOL_STR(__lock_page) },
	{ 0xfc341b0e, __VMLINUX_SYMBOL_STR(filemap_write_and_wait) },
	{ 0x20000329, __VMLINUX_SYMBOL_STR(simple_strtoul) },
	{ 0x5c1c7a3d, __VMLINUX_SYMBOL_STR(deactivate_locked_super) },
	{ 0xcdc49e19, __VMLINUX_SYMBOL_STR(lockref_get) },
	{ 0x7c524ea8, __VMLINUX_SYMBOL_STR(dput) },
	{ 0x8e81be3a, __VMLINUX_SYMBOL_STR(p9_client_stat) },
	{ 0x44e9a829, __VMLINUX_SYMBOL_STR(match_token) },
	{ 0x3a6deb61, __VMLINUX_SYMBOL_STR(inc_nlink) },
	{ 0x5f5305c9, __VMLINUX_SYMBOL_STR(p9_client_link) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xfef8f504, __VMLINUX_SYMBOL_STR(init_user_ns) },
	{ 0x5b6f04bc, __VMLINUX_SYMBOL_STR(p9_client_statfs) },
	{ 0x85d23016, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0xb0dcd09d, __VMLINUX_SYMBOL_STR(generic_read_dir) },
	{ 0x45946329, __VMLINUX_SYMBOL_STR(p9stat_read) },
	{ 0x4cdf8a3, __VMLINUX_SYMBOL_STR(p9_client_clunk) },
	{ 0xb7380b21, __VMLINUX_SYMBOL_STR(generic_setxattr) },
	{ 0x50092c6d, __VMLINUX_SYMBOL_STR(redirty_page_for_writepage) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x3995c8b7, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0x925203e3, __VMLINUX_SYMBOL_STR(p9_is_proto_dotl) },
	{ 0xc499ae1e, __VMLINUX_SYMBOL_STR(kstrdup) },
	{ 0xde0236b1, __VMLINUX_SYMBOL_STR(set_page_dirty) },
	{ 0x4a617fbd, __VMLINUX_SYMBOL_STR(p9_client_readlink) },
	{ 0x9f94b59, __VMLINUX_SYMBOL_STR(blk_get_backing_dev_info) },
	{ 0x3a65643, __VMLINUX_SYMBOL_STR(truncate_setsize) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x3c3c6611, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0x44b5a2c1, __VMLINUX_SYMBOL_STR(kobject_create_and_add) },
	{ 0x3640c116, __VMLINUX_SYMBOL_STR(end_page_writeback) },
	{ 0x50b149d5, __VMLINUX_SYMBOL_STR(p9_client_symlink) },
	{ 0x9ce58e4f, __VMLINUX_SYMBOL_STR(p9dirent_read) },
	{ 0x62a5c3aa, __VMLINUX_SYMBOL_STR(p9_client_fsync) },
	{ 0x7a2add7d, __VMLINUX_SYMBOL_STR(current_kernel_time64) },
	{ 0xb8896828, __VMLINUX_SYMBOL_STR(inode_owner_or_capable) },
	{ 0x5a681f00, __VMLINUX_SYMBOL_STR(p9_client_read) },
	{ 0x54e671d2, __VMLINUX_SYMBOL_STR(iov_iter_bvec) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xb21429f5, __VMLINUX_SYMBOL_STR(p9_client_walk) },
	{ 0x1a8c3ce, __VMLINUX_SYMBOL_STR(inode_add_bytes) },
	{ 0x6c5d9d97, __VMLINUX_SYMBOL_STR(p9_client_write) },
	{ 0x98b68f4c, __VMLINUX_SYMBOL_STR(finish_no_open) },
	{ 0x43fc2772, __VMLINUX_SYMBOL_STR(sync_inode) },
	{ 0x45f768a8, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x7a52fea3, __VMLINUX_SYMBOL_STR(d_rehash) },
	{ 0x1403bc31, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xb16c8091, __VMLINUX_SYMBOL_STR(p9_client_lock_dotl) },
	{ 0x1dd7603e, __VMLINUX_SYMBOL_STR(p9_client_create_dotl) },
	{ 0x840023bc, __VMLINUX_SYMBOL_STR(sget) },
	{ 0x3021a2c3, __VMLINUX_SYMBOL_STR(iov_iter_kvec) },
	{ 0xcdebfd0a, __VMLINUX_SYMBOL_STR(p9_client_xattrcreate) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x2a3370e2, __VMLINUX_SYMBOL_STR(d_move) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x9b1f6bc6, __VMLINUX_SYMBOL_STR(p9_client_mkdir_dotl) },
	{ 0x3d9f7f62, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xe081e2fe, __VMLINUX_SYMBOL_STR(set_nlink) },
	{ 0x3934a77b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xd5ffdc1, __VMLINUX_SYMBOL_STR(file_update_time) },
	{ 0x7d284c10, __VMLINUX_SYMBOL_STR(get_cached_acl) },
	{ 0x870344e9, __VMLINUX_SYMBOL_STR(setattr_copy) },
	{ 0x4705fc83, __VMLINUX_SYMBOL_STR(p9_client_unlinkat) },
	{ 0x1c7720da, __VMLINUX_SYMBOL_STR(p9_client_destroy) },
	{ 0x54f7f1dc, __VMLINUX_SYMBOL_STR(set_cached_acl) },
	{ 0x4e3567f7, __VMLINUX_SYMBOL_STR(match_int) },
	{ 0xfdbac831, __VMLINUX_SYMBOL_STR(unlock_page) },
	{ 0x48a31785, __VMLINUX_SYMBOL_STR(generic_file_read_iter) },
	{ 0xba398182, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0xa7546ca, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0x85ff90c5, __VMLINUX_SYMBOL_STR(p9_client_xattrwalk) },
	{ 0x2761152d, __VMLINUX_SYMBOL_STR(generic_removexattr) },
	{ 0x8376b591, __VMLINUX_SYMBOL_STR(p9_client_setattr) },
	{ 0xd8f48cea, __VMLINUX_SYMBOL_STR(inode_init_once) },
	{ 0x6f4caca7, __VMLINUX_SYMBOL_STR(xattr_full_name) },
	{ 0xbd8fa8f, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xd12a5ac9, __VMLINUX_SYMBOL_STR(generic_file_mmap) },
	{ 0xad92a06d, __VMLINUX_SYMBOL_STR(wait_for_stable_page) },
	{ 0x3999f2f0, __VMLINUX_SYMBOL_STR(fs_kobj) },
	{ 0x36d46ae9, __VMLINUX_SYMBOL_STR(truncate_inode_pages_final) },
	{ 0x7add44b5, __VMLINUX_SYMBOL_STR(posix_acl_valid) },
	{ 0xe12c80c9, __VMLINUX_SYMBOL_STR(p9_client_create) },
	{ 0x638e7d39, __VMLINUX_SYMBOL_STR(posix_acl_from_xattr) },
	{ 0x8425f131, __VMLINUX_SYMBOL_STR(unlock_new_inode) },
	{ 0x788e709, __VMLINUX_SYMBOL_STR(bdi_setup_and_register) },
	{ 0x44d2c2c0, __VMLINUX_SYMBOL_STR(p9stat_free) },
	{ 0x5e95b1cd, __VMLINUX_SYMBOL_STR(current_umask) },
	{ 0x607bce71, __VMLINUX_SYMBOL_STR(locks_lock_inode_wait) },
	{ 0x2bd8e074, __VMLINUX_SYMBOL_STR(p9_client_attach) },
	{ 0xcb8a8371, __VMLINUX_SYMBOL_STR(clear_page_dirty_for_io) },
	{ 0xac2d761e, __VMLINUX_SYMBOL_STR(inode_change_ok) },
	{ 0xfd1fdf8e, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xa07676f5, __VMLINUX_SYMBOL_STR(generic_show_options) },
	{ 0x2eab1b34, __VMLINUX_SYMBOL_STR(p9_client_disconnect) },
	{ 0x390774ce, __VMLINUX_SYMBOL_STR(read_cache_pages) },
	{ 0x3186554c, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x1f55c130, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0x1e805e7, __VMLINUX_SYMBOL_STR(p9_is_proto_dotu) },
	{ 0xa689c26a, __VMLINUX_SYMBOL_STR(generic_file_write_iter) },
	{ 0xcc772dff, __VMLINUX_SYMBOL_STR(p9_client_fcreate) },
	{ 0x88397f94, __VMLINUX_SYMBOL_STR(__test_set_page_writeback) },
	{ 0xc93234d, __VMLINUX_SYMBOL_STR(I_BDEV) },
	{ 0xedf5e82d, __VMLINUX_SYMBOL_STR(blockdev_superblock) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x9fe0398a, __VMLINUX_SYMBOL_STR(generic_file_readonly_mmap) },
	{ 0xf4da5db2, __VMLINUX_SYMBOL_STR(iput) },
	{ 0xa7a33f50, __VMLINUX_SYMBOL_STR(finish_open) },
	{ 0x9c55cec, __VMLINUX_SYMBOL_STR(schedule_timeout_interruptible) },
	{ 0xa05bea31, __VMLINUX_SYMBOL_STR(invalidate_inode_pages2_range) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xb976f452, __VMLINUX_SYMBOL_STR(p9_client_renameat) },
	{ 0xd08007d8, __VMLINUX_SYMBOL_STR(ihold) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x643e0ce5, __VMLINUX_SYMBOL_STR(call_rcu_sched) },
	{ 0xa6dc8386, __VMLINUX_SYMBOL_STR(d_splice_alias) },
	{ 0xc8b29f2c, __VMLINUX_SYMBOL_STR(p9_client_remove) },
	{ 0x158f00c3, __VMLINUX_SYMBOL_STR(always_delete_dentry) },
	{ 0x7b58f0cc, __VMLINUX_SYMBOL_STR(invalidate_mapping_pages) },
	{ 0x41793ac6, __VMLINUX_SYMBOL_STR(generic_readlink) },
	{ 0x9583a120, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0x50ded37c, __VMLINUX_SYMBOL_STR(__posix_acl_chmod) },
	{ 0xf41bcb20, __VMLINUX_SYMBOL_STR(d_make_root) },
	{ 0x56f1ff52, __VMLINUX_SYMBOL_STR(simple_statfs) },
	{ 0xce5c3e5f, __VMLINUX_SYMBOL_STR(bdi_destroy) },
	{ 0xb50ef55d, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0x4fa2d458, __VMLINUX_SYMBOL_STR(init_special_inode) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xcdbf71a0, __VMLINUX_SYMBOL_STR(filemap_map_pages) },
	{ 0x56330dcc, __VMLINUX_SYMBOL_STR(new_inode) },
	{ 0x1398ac0, __VMLINUX_SYMBOL_STR(kfree_put_link) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x28bb462d, __VMLINUX_SYMBOL_STR(grab_cache_page_write_begin) },
	{ 0xb997c584, __VMLINUX_SYMBOL_STR(clear_inode) },
	{ 0xdcb5739b, __VMLINUX_SYMBOL_STR(d_instantiate) },
	{ 0x15098c29, __VMLINUX_SYMBOL_STR(__init_rwsem) },
	{ 0xbf0fd53d, __VMLINUX_SYMBOL_STR(flush_dcache_page) },
	{ 0xbf571377, __VMLINUX_SYMBOL_STR(p9_client_rename) },
	{ 0x2f4b289a, __VMLINUX_SYMBOL_STR(clear_nlink) },
	{ 0xe8ff6130, __VMLINUX_SYMBOL_STR(p9_client_open) },
	{ 0x4c85532c, __VMLINUX_SYMBOL_STR(p9_client_wstat) },
	{ 0x2d5c9101, __VMLINUX_SYMBOL_STR(p9_client_getattr_dotl) },
	{ 0x81f667a5, __VMLINUX_SYMBOL_STR(generic_fillattr) },
	{ 0x5f58cc82, __VMLINUX_SYMBOL_STR(filemap_fdatawrite) },
	{ 0x422f266, __VMLINUX_SYMBOL_STR(inode_init_owner) },
	{ 0x5063df40, __VMLINUX_SYMBOL_STR(__posix_acl_create) },
	{ 0xde4f6d9c, __VMLINUX_SYMBOL_STR(noop_backing_dev_info) },
	{ 0x2c1e0e65, __VMLINUX_SYMBOL_STR(posix_test_lock) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=9pnet";


MODULE_INFO(srcversion, "543C2441BF5CBF505DA97C5");
