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
	{ 0x83770bc6, __VMLINUX_SYMBOL_STR(unregister_md_personality) },
	{ 0xe66678cd, __VMLINUX_SYMBOL_STR(register_md_personality) },
	{ 0x660f4e0d, __VMLINUX_SYMBOL_STR(fs_bio_set) },
	{ 0x63abedd5, __VMLINUX_SYMBOL_STR(bio_chain) },
	{ 0x91de6c11, __VMLINUX_SYMBOL_STR(bio_split) },
	{ 0x420c70d9, __VMLINUX_SYMBOL_STR(bio_endio) },
	{ 0x8a963cd1, __VMLINUX_SYMBOL_STR(bdevname) },
	{ 0x1b01e7a5, __VMLINUX_SYMBOL_STR(md_flush_request) },
	{ 0xb9625021, __VMLINUX_SYMBOL_STR(generic_make_request) },
	{ 0xcf19fcd, __VMLINUX_SYMBOL_STR(md_integrity_register) },
	{ 0x540fd74e, __VMLINUX_SYMBOL_STR(md_check_no_bitmap) },
	{ 0x32653dd7, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xf0f56e99, __VMLINUX_SYMBOL_STR(revalidate_disk) },
	{ 0x393c1177, __VMLINUX_SYMBOL_STR(mddev_resume) },
	{ 0x70aa8729, __VMLINUX_SYMBOL_STR(md_set_array_sectors) },
	{ 0xb4172ed6, __VMLINUX_SYMBOL_STR(mddev_suspend) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xbf0c8788, __VMLINUX_SYMBOL_STR(disk_stack_limits) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=md-mod";


MODULE_INFO(srcversion, "F8DB013C275DE0C19FEB0C9");
