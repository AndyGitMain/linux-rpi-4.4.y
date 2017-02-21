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
	{ 0x1494ad7b, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xa466be4a, __VMLINUX_SYMBOL_STR(no_llseek) },
	{ 0xff8cbb1f, __VMLINUX_SYMBOL_STR(idr_destroy) },
	{ 0xba602925, __VMLINUX_SYMBOL_STR(class_interface_unregister) },
	{ 0x7485e15e, __VMLINUX_SYMBOL_STR(unregister_chrdev_region) },
	{ 0x5a041bb8, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0x218db964, __VMLINUX_SYMBOL_STR(scsi_register_interface) },
	{ 0xf39cacaa, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0xd8e484f0, __VMLINUX_SYMBOL_STR(register_chrdev_region) },
	{ 0x334da4e, __VMLINUX_SYMBOL_STR(scsi_command_size_tbl) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x72350130, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xd55fcd59, __VMLINUX_SYMBOL_STR(sg_scsi_ioctl) },
	{ 0xd697e69a, __VMLINUX_SYMBOL_STR(trace_hardirqs_on) },
	{ 0xb5c00014, __VMLINUX_SYMBOL_STR(_raw_write_lock_irq) },
	{ 0x54bdca7d, __VMLINUX_SYMBOL_STR(blk_trace_startstop) },
	{ 0xbc3fb3cb, __VMLINUX_SYMBOL_STR(blk_trace_setup) },
	{ 0x353e3fa5, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0xf3c5030f, __VMLINUX_SYMBOL_STR(blk_trace_remove) },
	{ 0xbc10dd97, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0x1fc1661e, __VMLINUX_SYMBOL_STR(scsi_ioctl) },
	{ 0xf7beda32, __VMLINUX_SYMBOL_STR(scsi_ioctl_block_when_processing_errors) },
	{ 0xf5eb86ea, __VMLINUX_SYMBOL_STR(blk_verify_command) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0x663bbe0c, __VMLINUX_SYMBOL_STR(blk_end_request_all) },
	{ 0x98501cac, __VMLINUX_SYMBOL_STR(blk_rq_map_user) },
	{ 0xa58365dc, __VMLINUX_SYMBOL_STR(blk_execute_rq_nowait) },
	{ 0x1bc30704, __VMLINUX_SYMBOL_STR(blk_rq_map_user_iov) },
	{ 0x6d203b4a, __VMLINUX_SYMBOL_STR(import_iovec) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x56d49109, __VMLINUX_SYMBOL_STR(blk_rq_set_block_pc) },
	{ 0xaa889ee9, __VMLINUX_SYMBOL_STR(blk_get_request) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0xc85e7638, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x518bd932, __VMLINUX_SYMBOL_STR(blk_put_request) },
	{ 0x4820755f, __VMLINUX_SYMBOL_STR(blk_rq_unmap_user) },
	{ 0x1ec17b80, __VMLINUX_SYMBOL_STR(sdev_prefix_printk) },
	{ 0x39ed8122, __VMLINUX_SYMBOL_STR(sysfs_create_link) },
	{ 0x17b37d38, __VMLINUX_SYMBOL_STR(device_create) },
	{ 0xfe96a415, __VMLINUX_SYMBOL_STR(cdev_add) },
	{ 0x45f768a8, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xbfbcddf8, __VMLINUX_SYMBOL_STR(idr_alloc) },
	{ 0x84ffea8b, __VMLINUX_SYMBOL_STR(idr_preload) },
	{ 0x456b8897, __VMLINUX_SYMBOL_STR(cdev_alloc) },
	{ 0x1e1cbf23, __VMLINUX_SYMBOL_STR(alloc_disk) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xc5eb5541, __VMLINUX_SYMBOL_STR(__scsi_print_sense) },
	{ 0xb7488905, __VMLINUX_SYMBOL_STR(scsi_normalize_sense) },
	{ 0xeb3c25f5, __VMLINUX_SYMBOL_STR(__blk_put_request) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x404482a6, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x9c68644, __VMLINUX_SYMBOL_STR(__get_page_tail) },
	{ 0xb8b5974, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x1fd5faa, __VMLINUX_SYMBOL_STR(__module_get) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xfd1fdf8e, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x517b4ea1, __VMLINUX_SYMBOL_STR(scsi_device_put) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x3fdb1126, __VMLINUX_SYMBOL_STR(scsi_block_when_processing_errors) },
	{ 0x190314d3, __VMLINUX_SYMBOL_STR(scsi_autopm_get_device) },
	{ 0xbb22f624, __VMLINUX_SYMBOL_STR(scsi_device_get) },
	{ 0xb5684e29, __VMLINUX_SYMBOL_STR(idr_find_slowpath) },
	{ 0x2bd0fcc4, __VMLINUX_SYMBOL_STR(nonseekable_open) },
	{ 0xe5e85202, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0x8606ce92, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x85d23016, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xf898e611, __VMLINUX_SYMBOL_STR(scsi_autopm_put_device) },
	{ 0x3934a77b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x939648d0, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0x5a71c82a, __VMLINUX_SYMBOL_STR(fasync_helper) },
	{ 0xd022cd81, __VMLINUX_SYMBOL_STR(cdev_del) },
	{ 0x573a869c, __VMLINUX_SYMBOL_STR(device_destroy) },
	{ 0x63eb54ad, __VMLINUX_SYMBOL_STR(sysfs_remove_link) },
	{ 0x45204ed4, __VMLINUX_SYMBOL_STR(kill_fasync) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x64a0e0d1, __VMLINUX_SYMBOL_STR(put_disk) },
	{ 0x32907b91, __VMLINUX_SYMBOL_STR(idr_remove) },
	{ 0xceed7f85, __VMLINUX_SYMBOL_STR(_raw_write_unlock_irqrestore) },
	{ 0x97ec1ff, __VMLINUX_SYMBOL_STR(_raw_write_lock_irqsave) },
	{ 0x9cba3c37, __VMLINUX_SYMBOL_STR(_raw_read_unlock_irqrestore) },
	{ 0xe1f0ab3a, __VMLINUX_SYMBOL_STR(_raw_read_lock_irqsave) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "89160E90129F1C959A1A54C");
