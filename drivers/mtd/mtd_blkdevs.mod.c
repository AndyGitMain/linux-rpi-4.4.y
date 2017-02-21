#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
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
	{ 0x7e236255, __VMLINUX_SYMBOL_STR(blk_init_queue) },
	{ 0x1e1cbf23, __VMLINUX_SYMBOL_STR(alloc_disk) },
	{ 0x64308369, __VMLINUX_SYMBOL_STR(blk_cleanup_queue) },
	{ 0x404482a6, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0xdb9c373a, __VMLINUX_SYMBOL_STR(mtd_table_mutex) },
	{ 0x251be480, __VMLINUX_SYMBOL_STR(rq_flush_dcache_pages) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x85d23016, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x5913ab53, __VMLINUX_SYMBOL_STR(__put_mtd_device) },
	{ 0xfa6ead70, __VMLINUX_SYMBOL_STR(blk_queue_flush) },
	{ 0xad5d1559, __VMLINUX_SYMBOL_STR(blk_start_queue) },
	{ 0x7e4f159a, __VMLINUX_SYMBOL_STR(__get_mtd_device) },
	{ 0xd697e69a, __VMLINUX_SYMBOL_STR(trace_hardirqs_on) },
	{ 0x3995c8b7, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0xb194914f, __VMLINUX_SYMBOL_STR(mutex_trylock) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x45f768a8, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x1403bc31, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0xb33c4c2b, __VMLINUX_SYMBOL_STR(blk_queue_max_discard_sectors) },
	{ 0x52ce470c, __VMLINUX_SYMBOL_STR(del_gendisk) },
	{ 0x1c43892a, __VMLINUX_SYMBOL_STR(register_mtd_user) },
	{ 0x42747d3f, __VMLINUX_SYMBOL_STR(__mtd_next_device) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x3934a77b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x71a50dbc, __VMLINUX_SYMBOL_STR(register_blkdev) },
	{ 0x1ef2c4d2, __VMLINUX_SYMBOL_STR(unregister_mtd_user) },
	{ 0xb5a459dc, __VMLINUX_SYMBOL_STR(unregister_blkdev) },
	{ 0xc85e7638, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x64a0e0d1, __VMLINUX_SYMBOL_STR(put_disk) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x25a3e832, __VMLINUX_SYMBOL_STR(__blk_end_request_cur) },
	{ 0xf5d279da, __VMLINUX_SYMBOL_STR(blk_fetch_request) },
	{ 0x700c8aa0, __VMLINUX_SYMBOL_STR(__blk_end_request_all) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x1fd5faa, __VMLINUX_SYMBOL_STR(__module_get) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xe325ca41, __VMLINUX_SYMBOL_STR(add_disk) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x759637b4, __VMLINUX_SYMBOL_STR(blk_queue_logical_block_size) },
	{ 0x6e76727, __VMLINUX_SYMBOL_STR(set_disk_ro) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mtd";


MODULE_INFO(srcversion, "2E55A38A7C5F8CE32D064A7");
