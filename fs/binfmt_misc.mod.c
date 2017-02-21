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
	{ 0xd1a81466, __VMLINUX_SYMBOL_STR(kill_litter_super) },
	{ 0xf6944d79, __VMLINUX_SYMBOL_STR(noop_llseek) },
	{ 0x72ca664a, __VMLINUX_SYMBOL_STR(default_llseek) },
	{ 0x56f1ff52, __VMLINUX_SYMBOL_STR(simple_statfs) },
	{ 0xb50ef55d, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0xc0f64cca, __VMLINUX_SYMBOL_STR(unregister_binfmt) },
	{ 0x18ae255, __VMLINUX_SYMBOL_STR(__register_binfmt) },
	{ 0x1f55c130, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0xf4da5db2, __VMLINUX_SYMBOL_STR(iput) },
	{ 0xdcb5739b, __VMLINUX_SYMBOL_STR(d_instantiate) },
	{ 0x76356e9c, __VMLINUX_SYMBOL_STR(simple_pin_fs) },
	{ 0x5871c238, __VMLINUX_SYMBOL_STR(current_fs_time) },
	{ 0xe953b21f, __VMLINUX_SYMBOL_STR(get_next_ino) },
	{ 0x56330dcc, __VMLINUX_SYMBOL_STR(new_inode) },
	{ 0xf3a1bd89, __VMLINUX_SYMBOL_STR(lookup_one_len) },
	{ 0xc8339e24, __VMLINUX_SYMBOL_STR(string_unescape) },
	{ 0x20000329, __VMLINUX_SYMBOL_STR(simple_strtoul) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x85d23016, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x3934a77b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xcdc49e19, __VMLINUX_SYMBOL_STR(lockref_get) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xdc1a78c, __VMLINUX_SYMBOL_STR(bin2hex) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0x528c709d, __VMLINUX_SYMBOL_STR(simple_read_from_buffer) },
	{ 0xd5ca1c74, __VMLINUX_SYMBOL_STR(simple_release_fs) },
	{ 0x7c524ea8, __VMLINUX_SYMBOL_STR(dput) },
	{ 0x7751f17e, __VMLINUX_SYMBOL_STR(d_drop) },
	{ 0x410b0d4d, __VMLINUX_SYMBOL_STR(drop_nlink) },
	{ 0xd100acbd, __VMLINUX_SYMBOL_STR(_raw_write_lock) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xb997c584, __VMLINUX_SYMBOL_STR(clear_inode) },
	{ 0xbe4fab18, __VMLINUX_SYMBOL_STR(simple_fill_super) },
	{ 0x74ec37a3, __VMLINUX_SYMBOL_STR(mount_single) },
	{ 0x21caee34, __VMLINUX_SYMBOL_STR(prepare_binprm) },
	{ 0x18526ce0, __VMLINUX_SYMBOL_STR(would_dump) },
	{ 0x7f708180, __VMLINUX_SYMBOL_STR(fd_install) },
	{ 0xa843805a, __VMLINUX_SYMBOL_STR(get_unused_fd_flags) },
	{ 0xdcb0349b, __VMLINUX_SYMBOL_STR(sys_close) },
	{ 0xad3b7fb2, __VMLINUX_SYMBOL_STR(search_binary_handler) },
	{ 0x25dfa357, __VMLINUX_SYMBOL_STR(kernel_read) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x6562c84, __VMLINUX_SYMBOL_STR(open_exec) },
	{ 0xd5b696e7, __VMLINUX_SYMBOL_STR(bprm_change_interp) },
	{ 0xa75ed5d2, __VMLINUX_SYMBOL_STR(copy_strings_kernel) },
	{ 0xc37c8396, __VMLINUX_SYMBOL_STR(fput) },
	{ 0xabf76394, __VMLINUX_SYMBOL_STR(remove_arg_zero) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x9f984513, __VMLINUX_SYMBOL_STR(strrchr) },
	{ 0xb5198b77, __VMLINUX_SYMBOL_STR(_raw_read_lock) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "D2B5D202BA235ED4DE4D79C");
