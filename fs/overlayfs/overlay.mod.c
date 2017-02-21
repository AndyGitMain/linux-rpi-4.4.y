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
	{ 0x7cfebbb5, __VMLINUX_SYMBOL_STR(vfs_create) },
	{ 0xb8b5974, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x36cbf8da, __VMLINUX_SYMBOL_STR(d_invalidate) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xa562d771, __VMLINUX_SYMBOL_STR(kill_anon_super) },
	{ 0x4905475e, __VMLINUX_SYMBOL_STR(dget_parent) },
	{ 0x29909c72, __VMLINUX_SYMBOL_STR(vfs_link) },
	{ 0x19f462ab, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0x706736cf, __VMLINUX_SYMBOL_STR(seq_escape) },
	{ 0xacf4d843, __VMLINUX_SYMBOL_STR(match_strdup) },
	{ 0x84ec01dc, __VMLINUX_SYMBOL_STR(vfs_llseek) },
	{ 0x345ba6c2, __VMLINUX_SYMBOL_STR(touch_atime) },
	{ 0xcdc49e19, __VMLINUX_SYMBOL_STR(lockref_get) },
	{ 0x7c524ea8, __VMLINUX_SYMBOL_STR(dput) },
	{ 0x44e9a829, __VMLINUX_SYMBOL_STR(match_token) },
	{ 0x5c69ae75, __VMLINUX_SYMBOL_STR(dentry_open) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xca535a2, __VMLINUX_SYMBOL_STR(vfs_mknod) },
	{ 0x85d23016, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xcbad382b, __VMLINUX_SYMBOL_STR(vfs_fsync) },
	{ 0xb0dcd09d, __VMLINUX_SYMBOL_STR(generic_read_dir) },
	{ 0xceea1cb2, __VMLINUX_SYMBOL_STR(vfs_symlink) },
	{ 0xad82b396, __VMLINUX_SYMBOL_STR(mount_nodev) },
	{ 0x7561fa8e, __VMLINUX_SYMBOL_STR(override_creds) },
	{ 0xc499ae1e, __VMLINUX_SYMBOL_STR(kstrdup) },
	{ 0xa0457df9, __VMLINUX_SYMBOL_STR(mnt_drop_write) },
	{ 0xc1d36210, __VMLINUX_SYMBOL_STR(mutex_lock_killable) },
	{ 0xe85ff110, __VMLINUX_SYMBOL_STR(vfs_rmdir) },
	{ 0x32fdbd54, __VMLINUX_SYMBOL_STR(unlock_rename) },
	{ 0x75190b0a, __VMLINUX_SYMBOL_STR(kern_path) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x7a52fea3, __VMLINUX_SYMBOL_STR(d_rehash) },
	{ 0x75a9d74e, __VMLINUX_SYMBOL_STR(vfs_getxattr) },
	{ 0x4dd79bf9, __VMLINUX_SYMBOL_STR(seq_putc) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x8e1614e3, __VMLINUX_SYMBOL_STR(lock_rename) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x3934a77b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x9daa2a78, __VMLINUX_SYMBOL_STR(vfs_whiteout) },
	{ 0xc37c8396, __VMLINUX_SYMBOL_STR(fput) },
	{ 0x29c3bfae, __VMLINUX_SYMBOL_STR(prepare_creds) },
	{ 0x2302d75a, __VMLINUX_SYMBOL_STR(mntput) },
	{ 0xc49551fb, __VMLINUX_SYMBOL_STR(__check_sticky) },
	{ 0xd9ce8f0c, __VMLINUX_SYMBOL_STR(strnlen) },
	{ 0x2d601b5c, __VMLINUX_SYMBOL_STR(mnt_want_write) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0x7751f17e, __VMLINUX_SYMBOL_STR(d_drop) },
	{ 0xc466942b, __VMLINUX_SYMBOL_STR(vfs_statfs) },
	{ 0xd9d66827, __VMLINUX_SYMBOL_STR(vfs_mkdir) },
	{ 0x99926f5c, __VMLINUX_SYMBOL_STR(__put_cred) },
	{ 0xac2d761e, __VMLINUX_SYMBOL_STR(inode_change_ok) },
	{ 0x41afa549, __VMLINUX_SYMBOL_STR(path_put) },
	{ 0xfd1fdf8e, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xa5526619, __VMLINUX_SYMBOL_STR(rb_insert_color) },
	{ 0x1a56e8c7, __VMLINUX_SYMBOL_STR(vfs_unlink) },
	{ 0x1f55c130, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0x8366c2da, __VMLINUX_SYMBOL_STR(do_splice_direct) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0xe953b21f, __VMLINUX_SYMBOL_STR(get_next_ino) },
	{ 0xf4da5db2, __VMLINUX_SYMBOL_STR(iput) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xc5bb9c09, __VMLINUX_SYMBOL_STR(d_find_any_alias) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xcc931fbd, __VMLINUX_SYMBOL_STR(__inode_permission) },
	{ 0xf41bcb20, __VMLINUX_SYMBOL_STR(d_make_root) },
	{ 0x8d811b47, __VMLINUX_SYMBOL_STR(iterate_dir) },
	{ 0xb50ef55d, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x56330dcc, __VMLINUX_SYMBOL_STR(new_inode) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xf3a1bd89, __VMLINUX_SYMBOL_STR(lookup_one_len) },
	{ 0xea378cd0, __VMLINUX_SYMBOL_STR(clone_private_mount) },
	{ 0x12ec661d, __VMLINUX_SYMBOL_STR(vfs_rename) },
	{ 0x1d48e73d, __VMLINUX_SYMBOL_STR(vfs_getattr) },
	{ 0x497d557c, __VMLINUX_SYMBOL_STR(notify_change) },
	{ 0xe2536d80, __VMLINUX_SYMBOL_STR(vfs_setxattr) },
	{ 0xdcb5739b, __VMLINUX_SYMBOL_STR(d_instantiate) },
	{ 0xcd2c924c, __VMLINUX_SYMBOL_STR(revert_creds) },
	{ 0xd412da5e, __VMLINUX_SYMBOL_STR(vfs_listxattr) },
	{ 0xf9ddd49b, __VMLINUX_SYMBOL_STR(vfs_removexattr) },
	{ 0xcca1e3cb, __VMLINUX_SYMBOL_STR(vfs_fsync_range) },
	{ 0xb859f38b, __VMLINUX_SYMBOL_STR(krealloc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "8BF61618C724F91CDBAB8DE");
