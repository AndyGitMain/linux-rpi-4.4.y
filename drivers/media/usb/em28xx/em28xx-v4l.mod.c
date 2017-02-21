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
	{ 0xb74159ab, __VMLINUX_SYMBOL_STR(em28xx_read_reg) },
	{ 0xb8b5974, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x4ab5efeb, __VMLINUX_SYMBOL_STR(v4l2_event_unsubscribe) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xbe47d564, __VMLINUX_SYMBOL_STR(video_device_release_empty) },
	{ 0x1494ad7b, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x361a3bcf, __VMLINUX_SYMBOL_STR(v4l2_i2c_new_subdev) },
	{ 0xcd75ef7f, __VMLINUX_SYMBOL_STR(em28xx_free_device) },
	{ 0x614dd5a, __VMLINUX_SYMBOL_STR(v4l2_video_std_frame_period) },
	{ 0x9dcd2f33, __VMLINUX_SYMBOL_STR(em28xx_write_regs) },
	{ 0xa598f7be, __VMLINUX_SYMBOL_STR(v4l2_ctrl_notify) },
	{ 0x5a6b2d07, __VMLINUX_SYMBOL_STR(em28xx_setup_xc3028) },
	{ 0xc6a74fb5, __VMLINUX_SYMBOL_STR(v4l2_device_unregister) },
	{ 0x467a00eb, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_free) },
	{ 0x7fc8652c, __VMLINUX_SYMBOL_STR(em28xx_tuner_callback) },
	{ 0xf2a353ac, __VMLINUX_SYMBOL_STR(v4l2_i2c_tuner_addrs) },
	{ 0x559620dd, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_std) },
	{ 0xbfb1033a, __VMLINUX_SYMBOL_STR(vb2_fop_poll) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x4defdb38, __VMLINUX_SYMBOL_STR(vb2_ioctl_streamon) },
	{ 0xcddcecbd, __VMLINUX_SYMBOL_STR(vb2_ops_wait_prepare) },
	{ 0xee4fb081, __VMLINUX_SYMBOL_STR(em28xx_init_usb_xfer) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x332679a8, __VMLINUX_SYMBOL_STR(__video_register_device) },
	{ 0x85d23016, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x75768931, __VMLINUX_SYMBOL_STR(em28xx_register_extension) },
	{ 0xd2e095a7, __VMLINUX_SYMBOL_STR(v4l2_device_register) },
	{ 0x52af2fa0, __VMLINUX_SYMBOL_STR(vb2_fop_read) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x9f8e5cdb, __VMLINUX_SYMBOL_STR(v4l2_device_disconnect) },
	{ 0x23654cab, __VMLINUX_SYMBOL_STR(vb2_vmalloc_memops) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x993408e2, __VMLINUX_SYMBOL_STR(vb2_fop_mmap) },
	{ 0xa9d550b3, __VMLINUX_SYMBOL_STR(vb2_ioctl_qbuf) },
	{ 0x5fb7e91b, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x45f768a8, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x531cadf2, __VMLINUX_SYMBOL_STR(video_unregister_device) },
	{ 0x6835df49, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0xee275bc7, __VMLINUX_SYMBOL_STR(v4l2_ctrl_subscribe_event) },
	{ 0xa1276b0e, __VMLINUX_SYMBOL_STR(vb2_plane_vaddr) },
	{ 0xbf4dcbbe, __VMLINUX_SYMBOL_STR(vb2_buffer_done) },
	{ 0xc692cbc6, __VMLINUX_SYMBOL_STR(em28xx_unregister_extension) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x3934a77b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xe4b65964, __VMLINUX_SYMBOL_STR(vb2_ioctl_prepare_buf) },
	{ 0xa9ec9ef8, __VMLINUX_SYMBOL_STR(em28xx_uninit_usb_xfer) },
	{ 0xad628fd0, __VMLINUX_SYMBOL_STR(vb2_ioctl_create_bufs) },
	{ 0x9059635d, __VMLINUX_SYMBOL_STR(vb2_ioctl_dqbuf) },
	{ 0x123959a1, __VMLINUX_SYMBOL_STR(v4l2_type_names) },
	{ 0x10bb359b, __VMLINUX_SYMBOL_STR(v4l2_ctrl_find) },
	{ 0xf5ef842e, __VMLINUX_SYMBOL_STR(v4l_bound_align_image) },
	{ 0x288c5c02, __VMLINUX_SYMBOL_STR(vb2_fop_release) },
	{ 0xe89580bd, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0x3429f9f6, __VMLINUX_SYMBOL_STR(em28xx_audio_setup) },
	{ 0xe4d192b2, __VMLINUX_SYMBOL_STR(v4l2_clk_unregister_fixed) },
	{ 0xb510dc3d, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_setup) },
	{ 0xf04761af, __VMLINUX_SYMBOL_STR(v4l2_i2c_subdev_addr) },
	{ 0xfd1fdf8e, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x60e56694, __VMLINUX_SYMBOL_STR(v4l2_fh_open) },
	{ 0xdade80f7, __VMLINUX_SYMBOL_STR(em28xx_set_mode) },
	{ 0x3bab9029, __VMLINUX_SYMBOL_STR(vb2_ioctl_querybuf) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x6af3d8d9, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0xf8ba14bc, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_init_class) },
	{ 0x3ec718d5, __VMLINUX_SYMBOL_STR(vb2_ops_wait_finish) },
	{ 0xb6388605, __VMLINUX_SYMBOL_STR(em28xx_stop_urbs) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xc9684ab, __VMLINUX_SYMBOL_STR(em28xx_write_reg) },
	{ 0xf4d0e31a, __VMLINUX_SYMBOL_STR(em28xx_audio_analog_set) },
	{ 0x7f85fdc3, __VMLINUX_SYMBOL_STR(vb2_ioctl_streamoff) },
	{ 0x1c483a9, __VMLINUX_SYMBOL_STR(v4l2_get_timestamp) },
	{ 0xa7349f56, __VMLINUX_SYMBOL_STR(video_ioctl2) },
	{ 0x6d578f78, __VMLINUX_SYMBOL_STR(em28xx_boards) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x73e1598b, __VMLINUX_SYMBOL_STR(em28xx_init_camera) },
	{ 0x2b4390e2, __VMLINUX_SYMBOL_STR(vb2_queue_init) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf2-v4l2,em28xx,videodev,v4l2-common,videobuf2-vmalloc,videobuf2-core";


MODULE_INFO(srcversion, "769279BA70B826DC169E8A3");
