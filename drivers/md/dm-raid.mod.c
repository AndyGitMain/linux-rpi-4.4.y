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
	{ 0xad7ce9b0, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x75e6ff14, __VMLINUX_SYMBOL_STR(dm_unregister_target) },
	{ 0xf5491c1b, __VMLINUX_SYMBOL_STR(dm_register_target) },
	{ 0xb1425b32, __VMLINUX_SYMBOL_STR(dm_table_add_target_callbacks) },
	{ 0x56fa3817, __VMLINUX_SYMBOL_STR(mddev_unlock) },
	{ 0xf7ed2c0, __VMLINUX_SYMBOL_STR(md_run) },
	{ 0x3934a77b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xe5e85202, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0x9583a120, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0x333eff82, __VMLINUX_SYMBOL_STR(md_error) },
	{ 0xadeb9e06, __VMLINUX_SYMBOL_STR(raid5_set_cache_size) },
	{ 0x8606ce92, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0x1ca77253, __VMLINUX_SYMBOL_STR(dm_get_device) },
	{ 0x6d0f1f89, __VMLINUX_SYMBOL_STR(dm_table_get_mode) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0x15f1b9fc, __VMLINUX_SYMBOL_STR(dm_set_target_max_io_len) },
	{ 0x6f3e7e22, __VMLINUX_SYMBOL_STR(md_rdev_init) },
	{ 0x744eb268, __VMLINUX_SYMBOL_STR(mddev_init) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x996bdb64, __VMLINUX_SYMBOL_STR(_kstrtoul) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xad84bef8, __VMLINUX_SYMBOL_STR(dm_table_event) },
	{ 0x22c1704a, __VMLINUX_SYMBOL_STR(mddev_congested) },
	{ 0x36919f72, __VMLINUX_SYMBOL_STR(md_stop) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xf2f57791, __VMLINUX_SYMBOL_STR(md_rdev_clear) },
	{ 0x477bbc7a, __VMLINUX_SYMBOL_STR(dm_put_device) },
	{ 0x6590d30b, __VMLINUX_SYMBOL_STR(md_stop_writes) },
	{ 0xb4172ed6, __VMLINUX_SYMBOL_STR(mddev_suspend) },
	{ 0x22e93b20, __VMLINUX_SYMBOL_STR(bitmap_load) },
	{ 0x5bdd0bdb, __VMLINUX_SYMBOL_STR(sync_page_io) },
	{ 0x393c1177, __VMLINUX_SYMBOL_STR(mddev_resume) },
	{ 0x74c134b9, __VMLINUX_SYMBOL_STR(__sw_hweight32) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xf9e73082, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0xe63f1aec, __VMLINUX_SYMBOL_STR(md_reap_sync_thread) },
	{ 0x800f9ca5, __VMLINUX_SYMBOL_STR(md_wakeup_thread) },
	{ 0xaafdc258, __VMLINUX_SYMBOL_STR(strcasecmp) },
	{ 0x404482a6, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x8e74e192, __VMLINUX_SYMBOL_STR(blk_limits_io_opt) },
	{ 0xe3baeb78, __VMLINUX_SYMBOL_STR(blk_limits_io_min) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dm-mod,md-mod,raid456";


MODULE_INFO(srcversion, "CBE976C99267ADDF314F7A8");
