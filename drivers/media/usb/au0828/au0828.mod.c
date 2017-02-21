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
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0xb8b5974, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x4ab5efeb, __VMLINUX_SYMBOL_STR(v4l2_event_unsubscribe) },
	{ 0xe092ae0c, __VMLINUX_SYMBOL_STR(rc_unregister_device) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0x18ec80a6, __VMLINUX_SYMBOL_STR(_vb2_fop_release) },
	{ 0xbe47d564, __VMLINUX_SYMBOL_STR(video_device_release_empty) },
	{ 0x1494ad7b, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xda75eda0, __VMLINUX_SYMBOL_STR(dvb_dmx_init) },
	{ 0x4f7514, __VMLINUX_SYMBOL_STR(dvb_unregister_adapter) },
	{ 0x361a3bcf, __VMLINUX_SYMBOL_STR(v4l2_i2c_new_subdev) },
	{ 0x9e9e5a0, __VMLINUX_SYMBOL_STR(v4l2_ctrl_log_status) },
	{ 0x8e20821, __VMLINUX_SYMBOL_STR(tveeprom_hauppauge_analog) },
	{ 0xc3fe0927, __VMLINUX_SYMBOL_STR(dvb_frontend_suspend) },
	{ 0x5a9e05d5, __VMLINUX_SYMBOL_STR(dvb_register_frontend) },
	{ 0xc6a74fb5, __VMLINUX_SYMBOL_STR(v4l2_device_unregister) },
	{ 0x44c80f9b, __VMLINUX_SYMBOL_STR(dvb_frontend_resume) },
	{ 0x8278ee65, __VMLINUX_SYMBOL_STR(i2c_transfer) },
	{ 0x467a00eb, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_free) },
	{ 0xbfb1033a, __VMLINUX_SYMBOL_STR(vb2_fop_poll) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x4defdb38, __VMLINUX_SYMBOL_STR(vb2_ioctl_streamon) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xcb84ccee, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0xcddcecbd, __VMLINUX_SYMBOL_STR(vb2_ops_wait_prepare) },
	{ 0x9a961ba1, __VMLINUX_SYMBOL_STR(dvb_unregister_frontend) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x332679a8, __VMLINUX_SYMBOL_STR(__video_register_device) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x4c29dcbf, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x85d23016, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xc84a5c34, __VMLINUX_SYMBOL_STR(usb_unlink_urb) },
	{ 0xbdbf9b2c, __VMLINUX_SYMBOL_STR(rc_allocate_device) },
	{ 0x1238f49e, __VMLINUX_SYMBOL_STR(dvb_net_release) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x68fbf2d0, __VMLINUX_SYMBOL_STR(i2c_add_adapter) },
	{ 0x2dcfe9c, __VMLINUX_SYMBOL_STR(dvb_frontend_detach) },
	{ 0xd2e095a7, __VMLINUX_SYMBOL_STR(v4l2_device_register) },
	{ 0x52af2fa0, __VMLINUX_SYMBOL_STR(vb2_fop_read) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xdd0a2ba2, __VMLINUX_SYMBOL_STR(strlcat) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x706d051c, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x9f8e5cdb, __VMLINUX_SYMBOL_STR(v4l2_device_disconnect) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x23654cab, __VMLINUX_SYMBOL_STR(vb2_vmalloc_memops) },
	{ 0x30fa2262, __VMLINUX_SYMBOL_STR(rc_free_device) },
	{ 0x90651b24, __VMLINUX_SYMBOL_STR(param_ops_short) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x993408e2, __VMLINUX_SYMBOL_STR(vb2_fop_mmap) },
	{ 0xa9d550b3, __VMLINUX_SYMBOL_STR(vb2_ioctl_qbuf) },
	{ 0xa4bc8397, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x41597cb2, __VMLINUX_SYMBOL_STR(dvb_dmxdev_release) },
	{ 0x5fb7e91b, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x45f768a8, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x531cadf2, __VMLINUX_SYMBOL_STR(video_unregister_device) },
	{ 0xe1e71f59, __VMLINUX_SYMBOL_STR(dvb_net_init) },
	{ 0x6835df49, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0xee275bc7, __VMLINUX_SYMBOL_STR(v4l2_ctrl_subscribe_event) },
	{ 0xa1276b0e, __VMLINUX_SYMBOL_STR(vb2_plane_vaddr) },
	{ 0xbf4dcbbe, __VMLINUX_SYMBOL_STR(vb2_buffer_done) },
	{ 0x65e07d0b, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xd3390a8e, __VMLINUX_SYMBOL_STR(rc_register_device) },
	{ 0x3934a77b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xe4b65964, __VMLINUX_SYMBOL_STR(vb2_ioctl_prepare_buf) },
	{ 0x16e5c2a, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0xa1e033d3, __VMLINUX_SYMBOL_STR(tveeprom_read) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0xad628fd0, __VMLINUX_SYMBOL_STR(vb2_ioctl_create_bufs) },
	{ 0x891035f7, __VMLINUX_SYMBOL_STR(usb_free_coherent) },
	{ 0xd8258b72, __VMLINUX_SYMBOL_STR(dvb_dmx_release) },
	{ 0x9059635d, __VMLINUX_SYMBOL_STR(vb2_ioctl_dqbuf) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x868784cb, __VMLINUX_SYMBOL_STR(__symbol_get) },
	{ 0xd0dd2559, __VMLINUX_SYMBOL_STR(i2c_del_adapter) },
	{ 0x15597bd3, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x47dd02ac, __VMLINUX_SYMBOL_STR(dvb_dmx_swfilter_packets) },
	{ 0xe89580bd, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0x3f616ce2, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x86a4889a, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0xc901fcea, __VMLINUX_SYMBOL_STR(dvb_register_adapter) },
	{ 0xfd1fdf8e, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xc514d721, __VMLINUX_SYMBOL_STR(i2c_master_recv) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x60e56694, __VMLINUX_SYMBOL_STR(v4l2_fh_open) },
	{ 0x3bab9029, __VMLINUX_SYMBOL_STR(vb2_ioctl_querybuf) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x6af3d8d9, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0xf8ba14bc, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_init_class) },
	{ 0x58963f53, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x3ec718d5, __VMLINUX_SYMBOL_STR(vb2_ops_wait_finish) },
	{ 0x182a24ba, __VMLINUX_SYMBOL_STR(ir_raw_event_store) },
	{ 0xab908ba4, __VMLINUX_SYMBOL_STR(i2c_probe_func_quick_read) },
	{ 0x6e9dd606, __VMLINUX_SYMBOL_STR(__symbol_put) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x9f2238f8, __VMLINUX_SYMBOL_STR(usb_ifnum_to_if) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x6989e75f, __VMLINUX_SYMBOL_STR(vb2_ioctl_expbuf) },
	{ 0xfb6f5fba, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0x7f85fdc3, __VMLINUX_SYMBOL_STR(vb2_ioctl_streamoff) },
	{ 0x8e8e313d, __VMLINUX_SYMBOL_STR(vb2_queue_release) },
	{ 0x158ffd67, __VMLINUX_SYMBOL_STR(v4l2_device_put) },
	{ 0xed4cf78, __VMLINUX_SYMBOL_STR(ir_raw_event_handle) },
	{ 0x33e12395, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x1c483a9, __VMLINUX_SYMBOL_STR(v4l2_get_timestamp) },
	{ 0xa7349f56, __VMLINUX_SYMBOL_STR(video_ioctl2) },
	{ 0x9909033d, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x967593fb, __VMLINUX_SYMBOL_STR(dvb_dmxdev_init) },
	{ 0x2b4390e2, __VMLINUX_SYMBOL_STR(vb2_queue_init) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf2-v4l2,videodev,rc-core,dvb-core,v4l2-common,tveeprom,videobuf2-vmalloc,videobuf2-core";

MODULE_ALIAS("usb:v2040p7200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7240d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FE9pD620d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7210d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7217d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p721Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p721Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p721Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7280d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FD9p0008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7201d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7211d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7281d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05E1p0480d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p8200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7260d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7213d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7270d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "D0324931E82C7C8815E207B");
