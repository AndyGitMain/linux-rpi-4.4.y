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
	{ 0x4ab5efeb, __VMLINUX_SYMBOL_STR(v4l2_event_unsubscribe) },
	{ 0xee275bc7, __VMLINUX_SYMBOL_STR(v4l2_ctrl_subscribe_event) },
	{ 0x9e9e5a0, __VMLINUX_SYMBOL_STR(v4l2_ctrl_log_status) },
	{ 0x3c622007, __VMLINUX_SYMBOL_STR(v4l2_fh_release) },
	{ 0x60e56694, __VMLINUX_SYMBOL_STR(v4l2_fh_open) },
	{ 0xa7349f56, __VMLINUX_SYMBOL_STR(video_ioctl2) },
	{ 0x560c1f4b, __VMLINUX_SYMBOL_STR(v4l2_ctrl_poll) },
	{ 0xa4bc8397, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x58963f53, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xbe47d564, __VMLINUX_SYMBOL_STR(video_device_release_empty) },
	{ 0xb8b5974, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xc6a74fb5, __VMLINUX_SYMBOL_STR(v4l2_device_unregister) },
	{ 0xbd7da979, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x27683889, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xb510dc3d, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_setup) },
	{ 0x332679a8, __VMLINUX_SYMBOL_STR(__video_register_device) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x45f768a8, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xd2e095a7, __VMLINUX_SYMBOL_STR(v4l2_device_register) },
	{ 0xe5f56da5, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_std_menu) },
	{ 0x559620dd, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_std) },
	{ 0xf8ba14bc, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_init_class) },
	{ 0xfd1fdf8e, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xe89580bd, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x467a00eb, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_free) },
	{ 0x158ffd67, __VMLINUX_SYMBOL_STR(v4l2_device_put) },
	{ 0x85d23016, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x9f8e5cdb, __VMLINUX_SYMBOL_STR(v4l2_device_disconnect) },
	{ 0x531cadf2, __VMLINUX_SYMBOL_STR(video_unregister_device) },
	{ 0x3934a77b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x1bf56330, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x65e07d0b, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videodev";

MODULE_ALIAS("usb:v046Dp0A0Ed*dc*dsc*dp*ic03isc00ip00in*");

MODULE_INFO(srcversion, "2AA5FECC5F0CA4F22BB6E9F");
