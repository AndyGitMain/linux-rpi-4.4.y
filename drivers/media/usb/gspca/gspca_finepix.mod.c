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
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xe1552ef8, __VMLINUX_SYMBOL_STR(gspca_suspend) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x1e0510c7, __VMLINUX_SYMBOL_STR(gspca_dev_probe) },
	{ 0x31f57551, __VMLINUX_SYMBOL_STR(gspca_resume) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x85d23016, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xfff468a0, __VMLINUX_SYMBOL_STR(gspca_disconnect) },
	{ 0xa4bc8397, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x65e07d0b, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x3934a77b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x54166c1d, __VMLINUX_SYMBOL_STR(usb_bulk_msg) },
	{ 0x35c16464, __VMLINUX_SYMBOL_STR(usb_clear_halt) },
	{ 0x9670af2c, __VMLINUX_SYMBOL_STR(gspca_debug) },
	{ 0xde10a4f4, __VMLINUX_SYMBOL_STR(gspca_frame_add) },
	{ 0x58963f53, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=gspca_main";

MODULE_ALIAS("usb:v04CBp0104d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CBp0109d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CBp010Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CBp010Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CBp0111d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CBp0113d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CBp0115d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CBp0117d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CBp0119d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CBp011Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CBp011Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CBp0121d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CBp0123d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CBp0125d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CBp0127d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CBp0129d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CBp012Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CBp012Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CBp012Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CBp0131d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CBp013Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CBp013Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CBp013Fd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "6715675DAB164E26AF8430D");
