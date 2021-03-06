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
	{ 0x4d3c153f, __VMLINUX_SYMBOL_STR(sigprocmask) },
	{ 0x5d4057fc, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0xb000516d, __VMLINUX_SYMBOL_STR(iget_failed) },
	{ 0xb8b5974, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x405c1144, __VMLINUX_SYMBOL_STR(get_seconds) },
	{ 0x410b0d4d, __VMLINUX_SYMBOL_STR(drop_nlink) },
	{ 0x7e9efe8e, __VMLINUX_SYMBOL_STR(complete_and_exit) },
	{ 0x2a2de98b, __VMLINUX_SYMBOL_STR(mtd_point) },
	{ 0x107e5878, __VMLINUX_SYMBOL_STR(zlib_inflateEnd) },
	{ 0xa0630c6b, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0xca9e0851, __VMLINUX_SYMBOL_STR(mtd_block_isbad) },
	{ 0xa7ad5969, __VMLINUX_SYMBOL_STR(make_bad_inode) },
	{ 0x33e41a48, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0xbefec898, __VMLINUX_SYMBOL_STR(dequeue_signal) },
	{ 0x36cbf8da, __VMLINUX_SYMBOL_STR(d_invalidate) },
	{ 0x404482a6, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x60a13e90, __VMLINUX_SYMBOL_STR(rcu_barrier) },
	{ 0x9816698e, __VMLINUX_SYMBOL_STR(filemap_write_and_wait_range) },
	{ 0x2b91a7c0, __VMLINUX_SYMBOL_STR(send_sig) },
	{ 0x97e54b22, __VMLINUX_SYMBOL_STR(generic_fh_to_parent) },
	{ 0x4e68e9be, __VMLINUX_SYMBOL_STR(rb_next_postorder) },
	{ 0x4c86184b, __VMLINUX_SYMBOL_STR(remove_wait_queue) },
	{ 0xcc2675ae, __VMLINUX_SYMBOL_STR(is_bad_inode) },
	{ 0x8de210c5, __VMLINUX_SYMBOL_STR(generic_file_open) },
	{ 0xacf4d843, __VMLINUX_SYMBOL_STR(match_strdup) },
	{ 0x7ab88a45, __VMLINUX_SYMBOL_STR(system_freezing_cnt) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x32653dd7, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xee91879b, __VMLINUX_SYMBOL_STR(rb_first_postorder) },
	{ 0x44e9a829, __VMLINUX_SYMBOL_STR(match_token) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x3a6deb61, __VMLINUX_SYMBOL_STR(inc_nlink) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x4c29dcbf, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x85d23016, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0xb0dcd09d, __VMLINUX_SYMBOL_STR(generic_read_dir) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0xb5d0137f, __VMLINUX_SYMBOL_STR(mtd_write) },
	{ 0xd697e69a, __VMLINUX_SYMBOL_STR(trace_hardirqs_on) },
	{ 0x66d8d454, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x7fe32873, __VMLINUX_SYMBOL_STR(rb_replace_node) },
	{ 0x3a65643, __VMLINUX_SYMBOL_STR(truncate_setsize) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x3c3c6611, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0x131db64a, __VMLINUX_SYMBOL_STR(system_long_wq) },
	{ 0xb03c9890, __VMLINUX_SYMBOL_STR(mtd_erase) },
	{ 0xece784c2, __VMLINUX_SYMBOL_STR(rb_first) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xffd5a395, __VMLINUX_SYMBOL_STR(default_wake_function) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x1fab5905, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xe1927216, __VMLINUX_SYMBOL_STR(freezing_slow_path) },
	{ 0x5fb7e91b, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x45f768a8, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x28480619, __VMLINUX_SYMBOL_STR(posix_acl_chmod) },
	{ 0xe5d0a3d8, __VMLINUX_SYMBOL_STR(mtd_read) },
	{ 0xd851d712, __VMLINUX_SYMBOL_STR(d_obtain_alias) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x4d9b652b, __VMLINUX_SYMBOL_STR(rb_erase) },
	{ 0xce5ac24f, __VMLINUX_SYMBOL_STR(zlib_inflate_workspacesize) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x3d9f7f62, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x3934a77b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xe081e2fe, __VMLINUX_SYMBOL_STR(set_nlink) },
	{ 0x6220b4a2, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0xaffb5dd6, __VMLINUX_SYMBOL_STR(insert_inode_locked) },
	{ 0x4e3567f7, __VMLINUX_SYMBOL_STR(match_int) },
	{ 0x5a0b73d0, __VMLINUX_SYMBOL_STR(zlib_deflateInit2) },
	{ 0xfdbac831, __VMLINUX_SYMBOL_STR(unlock_page) },
	{ 0x48a31785, __VMLINUX_SYMBOL_STR(generic_file_read_iter) },
	{ 0xba398182, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0xa7546ca, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0xe500c1df, __VMLINUX_SYMBOL_STR(mtd_block_markbad) },
	{ 0x581f98da, __VMLINUX_SYMBOL_STR(zlib_inflate) },
	{ 0xd8f48cea, __VMLINUX_SYMBOL_STR(inode_init_once) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x40a9b349, __VMLINUX_SYMBOL_STR(vzalloc) },
	{ 0xbd8fa8f, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xb3cdc490, __VMLINUX_SYMBOL_STR(ilookup) },
	{ 0xd9ce8f0c, __VMLINUX_SYMBOL_STR(strnlen) },
	{ 0x36d46ae9, __VMLINUX_SYMBOL_STR(truncate_inode_pages_final) },
	{ 0xf82ec573, __VMLINUX_SYMBOL_STR(rb_prev) },
	{ 0x3f616ce2, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0xe9f7149c, __VMLINUX_SYMBOL_STR(zlib_deflate_workspacesize) },
	{ 0xc474dd18, __VMLINUX_SYMBOL_STR(kill_mtd_super) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x8425f131, __VMLINUX_SYMBOL_STR(unlock_new_inode) },
	{ 0x4482cdb, __VMLINUX_SYMBOL_STR(__refrigerator) },
	{ 0xf511fcb6, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0x6f20960a, __VMLINUX_SYMBOL_STR(full_name_hash) },
	{ 0x3f2c0f58, __VMLINUX_SYMBOL_STR(mount_mtd) },
	{ 0xac2d761e, __VMLINUX_SYMBOL_STR(inode_change_ok) },
	{ 0xfd1fdf8e, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xa5526619, __VMLINUX_SYMBOL_STR(rb_insert_color) },
	{ 0x41814cb8, __VMLINUX_SYMBOL_STR(dirty_writeback_interval) },
	{ 0x3186554c, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x1f55c130, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0x35a88f28, __VMLINUX_SYMBOL_STR(zlib_inflateInit2) },
	{ 0xf2c43f3f, __VMLINUX_SYMBOL_STR(zlib_deflate) },
	{ 0xa689c26a, __VMLINUX_SYMBOL_STR(generic_file_write_iter) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0x9fe0398a, __VMLINUX_SYMBOL_STR(generic_file_readonly_mmap) },
	{ 0xf80d964c, __VMLINUX_SYMBOL_STR(mtd_unpoint) },
	{ 0xc7bcbc8d, __VMLINUX_SYMBOL_STR(add_wait_queue) },
	{ 0xf4da5db2, __VMLINUX_SYMBOL_STR(iput) },
	{ 0x9c55cec, __VMLINUX_SYMBOL_STR(schedule_timeout_interruptible) },
	{ 0x501480c2, __VMLINUX_SYMBOL_STR(read_cache_page) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xd08007d8, __VMLINUX_SYMBOL_STR(ihold) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x643e0ce5, __VMLINUX_SYMBOL_STR(call_rcu_sched) },
	{ 0x6df1aaf1, __VMLINUX_SYMBOL_STR(kernel_sigaction) },
	{ 0x9e61bb05, __VMLINUX_SYMBOL_STR(set_freezable) },
	{ 0xa6dc8386, __VMLINUX_SYMBOL_STR(d_splice_alias) },
	{ 0x453a7dfb, __VMLINUX_SYMBOL_STR(sync_filesystem) },
	{ 0x71aaa09c, __VMLINUX_SYMBOL_STR(set_user_nice) },
	{ 0xa33a7c52, __VMLINUX_SYMBOL_STR(simple_follow_link) },
	{ 0x41793ac6, __VMLINUX_SYMBOL_STR(generic_readlink) },
	{ 0x9583a120, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0xf41bcb20, __VMLINUX_SYMBOL_STR(d_make_root) },
	{ 0xc890c008, __VMLINUX_SYMBOL_STR(zlib_deflateEnd) },
	{ 0xca9360b5, __VMLINUX_SYMBOL_STR(rb_next) },
	{ 0xb50ef55d, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0x75ca38ad, __VMLINUX_SYMBOL_STR(mtd_kmalloc_up_to) },
	{ 0x4fa2d458, __VMLINUX_SYMBOL_STR(init_special_inode) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xd4669fad, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xd3d5e277, __VMLINUX_SYMBOL_STR(mtd_writev) },
	{ 0x56330dcc, __VMLINUX_SYMBOL_STR(new_inode) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x40848232, __VMLINUX_SYMBOL_STR(generic_file_splice_read) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0xdf2c2742, __VMLINUX_SYMBOL_STR(rb_last) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x3783331b, __VMLINUX_SYMBOL_STR(generic_fh_to_dentry) },
	{ 0x28bb462d, __VMLINUX_SYMBOL_STR(grab_cache_page_write_begin) },
	{ 0xfa64f71b, __VMLINUX_SYMBOL_STR(mtd_read_oob) },
	{ 0xb997c584, __VMLINUX_SYMBOL_STR(clear_inode) },
	{ 0xdcb5739b, __VMLINUX_SYMBOL_STR(d_instantiate) },
	{ 0x15098c29, __VMLINUX_SYMBOL_STR(__init_rwsem) },
	{ 0xbf0fd53d, __VMLINUX_SYMBOL_STR(flush_dcache_page) },
	{ 0x2f4b289a, __VMLINUX_SYMBOL_STR(clear_nlink) },
	{ 0xd4f4d023, __VMLINUX_SYMBOL_STR(iget_locked) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mtd,zlib_deflate";


MODULE_INFO(srcversion, "9F41B3A16F12714EF23AA24");
