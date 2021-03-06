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
	{ 0xc8fbe643, __VMLINUX_SYMBOL_STR(scsi_set_medium_removal) },
	{ 0xb8b5974, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xe4383d13, __VMLINUX_SYMBOL_STR(blk_queue_rq_timeout) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x1e1cbf23, __VMLINUX_SYMBOL_STR(alloc_disk) },
	{ 0xb7488905, __VMLINUX_SYMBOL_STR(scsi_normalize_sense) },
	{ 0x1494ad7b, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x50298f07, __VMLINUX_SYMBOL_STR(cdrom_number_of_slots) },
	{ 0xd3dbfbc4, __VMLINUX_SYMBOL_STR(_find_first_zero_bit_le) },
	{ 0x8fd4eac7, __VMLINUX_SYMBOL_STR(scsi_execute_req_flags) },
	{ 0xf7beda32, __VMLINUX_SYMBOL_STR(scsi_ioctl_block_when_processing_errors) },
	{ 0xf15eeb4d, __VMLINUX_SYMBOL_STR(unregister_cdrom) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0xd5152710, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x8a9b6234, __VMLINUX_SYMBOL_STR(scmd_printk) },
	{ 0x85d23016, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xa1d937fe, __VMLINUX_SYMBOL_STR(cdrom_open) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x7af1bd0c, __VMLINUX_SYMBOL_STR(scsi_execute) },
	{ 0x190314d3, __VMLINUX_SYMBOL_STR(scsi_autopm_get_device) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x51e4ca1a, __VMLINUX_SYMBOL_STR(cdrom_release) },
	{ 0x52ce470c, __VMLINUX_SYMBOL_STR(del_gendisk) },
	{ 0xeec4978e, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x1ec17b80, __VMLINUX_SYMBOL_STR(sdev_prefix_printk) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x3934a77b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x1d2a2041, __VMLINUX_SYMBOL_STR(cdrom_get_media_event) },
	{ 0x71a50dbc, __VMLINUX_SYMBOL_STR(register_blkdev) },
	{ 0xd72dd661, __VMLINUX_SYMBOL_STR(cdrom_check_events) },
	{ 0xb5a459dc, __VMLINUX_SYMBOL_STR(unregister_blkdev) },
	{ 0xf660fc45, __VMLINUX_SYMBOL_STR(cdrom_get_last_written) },
	{ 0x517b4ea1, __VMLINUX_SYMBOL_STR(scsi_device_put) },
	{ 0x1fc1661e, __VMLINUX_SYMBOL_STR(scsi_ioctl) },
	{ 0x64a0e0d1, __VMLINUX_SYMBOL_STR(put_disk) },
	{ 0x9ad5d660, __VMLINUX_SYMBOL_STR(scsi_register_driver) },
	{ 0x3fdb1126, __VMLINUX_SYMBOL_STR(scsi_block_when_processing_errors) },
	{ 0x90737af0, __VMLINUX_SYMBOL_STR(scsi_test_unit_ready) },
	{ 0x823ae38a, __VMLINUX_SYMBOL_STR(scsi_init_io) },
	{ 0xfd1fdf8e, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xe325ca41, __VMLINUX_SYMBOL_STR(add_disk) },
	{ 0xc5c9167d, __VMLINUX_SYMBOL_STR(cdrom_ioctl) },
	{ 0x1321a0ab, __VMLINUX_SYMBOL_STR(blk_pm_runtime_init) },
	{ 0x61bb311f, __VMLINUX_SYMBOL_STR(register_cdrom) },
	{ 0xbb22f624, __VMLINUX_SYMBOL_STR(scsi_device_get) },
	{ 0xf898e611, __VMLINUX_SYMBOL_STR(scsi_autopm_put_device) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x759637b4, __VMLINUX_SYMBOL_STR(blk_queue_logical_block_size) },
	{ 0xc10f693, __VMLINUX_SYMBOL_STR(scsi_mode_sense) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cdrom";


MODULE_INFO(srcversion, "F411657402A9E0E2D7A0D43");
