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
	{ 0x70d4d0d4, __VMLINUX_SYMBOL_STR(vb2_ioctl_reqbufs) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xb8b5974, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x4ab5efeb, __VMLINUX_SYMBOL_STR(v4l2_event_unsubscribe) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xbe47d564, __VMLINUX_SYMBOL_STR(video_device_release_empty) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x1494ad7b, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x9e9e5a0, __VMLINUX_SYMBOL_STR(v4l2_ctrl_log_status) },
	{ 0x686df339, __VMLINUX_SYMBOL_STR(vchi_initialise) },
	{ 0xf227e770, __VMLINUX_SYMBOL_STR(vchi_service_open) },
	{ 0xc6a74fb5, __VMLINUX_SYMBOL_STR(v4l2_device_unregister) },
	{ 0x467a00eb, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_free) },
	{ 0x559620dd, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_std) },
	{ 0xbfb1033a, __VMLINUX_SYMBOL_STR(vb2_fop_poll) },
	{ 0x4defdb38, __VMLINUX_SYMBOL_STR(vb2_ioctl_streamon) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x332679a8, __VMLINUX_SYMBOL_STR(__video_register_device) },
	{ 0x85d23016, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x974501cf, __VMLINUX_SYMBOL_STR(vchi_msg_hold) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x73be3770, __VMLINUX_SYMBOL_STR(vchi_service_use) },
	{ 0xd2e095a7, __VMLINUX_SYMBOL_STR(v4l2_device_register) },
	{ 0x52af2fa0, __VMLINUX_SYMBOL_STR(vb2_fop_read) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xe5f56da5, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_std_menu) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x23654cab, __VMLINUX_SYMBOL_STR(vb2_vmalloc_memops) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x993408e2, __VMLINUX_SYMBOL_STR(vb2_fop_mmap) },
	{ 0xa9d550b3, __VMLINUX_SYMBOL_STR(vb2_ioctl_qbuf) },
	{ 0x5fb7e91b, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x45f768a8, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x44e4c065, __VMLINUX_SYMBOL_STR(vchi_held_msg_release) },
	{ 0x531cadf2, __VMLINUX_SYMBOL_STR(video_unregister_device) },
	{ 0xee275bc7, __VMLINUX_SYMBOL_STR(v4l2_ctrl_subscribe_event) },
	{ 0xa1276b0e, __VMLINUX_SYMBOL_STR(vb2_plane_vaddr) },
	{ 0xbf4dcbbe, __VMLINUX_SYMBOL_STR(vb2_buffer_done) },
	{ 0x3ca7dbcc, __VMLINUX_SYMBOL_STR(vchi_connect) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x3934a77b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xe4b65964, __VMLINUX_SYMBOL_STR(vb2_ioctl_prepare_buf) },
	{ 0xad628fd0, __VMLINUX_SYMBOL_STR(vb2_ioctl_create_bufs) },
	{ 0x9059635d, __VMLINUX_SYMBOL_STR(vb2_ioctl_dqbuf) },
	{ 0x48244456, __VMLINUX_SYMBOL_STR(vchi_service_close) },
	{ 0xdc583d7d, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_int_menu) },
	{ 0xf5ef842e, __VMLINUX_SYMBOL_STR(v4l_bound_align_image) },
	{ 0x288c5c02, __VMLINUX_SYMBOL_STR(vb2_fop_release) },
	{ 0xe89580bd, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0x86a4889a, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0xf9be28d7, __VMLINUX_SYMBOL_STR(v4l2_ctrl_auto_cluster) },
	{ 0x59d29dab, __VMLINUX_SYMBOL_STR(v7_flush_kern_dcache_area) },
	{ 0x2394bc74, __VMLINUX_SYMBOL_STR(vchi_service_release) },
	{ 0xfd1fdf8e, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x60e56694, __VMLINUX_SYMBOL_STR(v4l2_fh_open) },
	{ 0x3bab9029, __VMLINUX_SYMBOL_STR(vb2_ioctl_querybuf) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x6af3d8d9, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0xf8ba14bc, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_init_class) },
	{ 0xd13b4d69, __VMLINUX_SYMBOL_STR(vchi_msg_queue) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xd4669fad, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x7f85fdc3, __VMLINUX_SYMBOL_STR(vb2_ioctl_streamoff) },
	{ 0x4e9a9f81, __VMLINUX_SYMBOL_STR(vchi_bulk_queue_receive) },
	{ 0x7cf9099, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0x1c483a9, __VMLINUX_SYMBOL_STR(v4l2_get_timestamp) },
	{ 0xa7349f56, __VMLINUX_SYMBOL_STR(video_ioctl2) },
	{ 0x2b4390e2, __VMLINUX_SYMBOL_STR(vb2_queue_init) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf2-v4l2,videodev,videobuf2-vmalloc,videobuf2-core,v4l2-common";


MODULE_INFO(srcversion, "DEF6A0D47341719E3F5E658");
