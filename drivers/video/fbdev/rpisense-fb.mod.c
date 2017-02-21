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
	{ 0x17a8ac7a, __VMLINUX_SYMBOL_STR(fb_sys_read) },
	{ 0x4d0d5ab0, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x348e8271, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x1122d1cd, __VMLINUX_SYMBOL_STR(fb_sys_write) },
	{ 0x46c2ec70, __VMLINUX_SYMBOL_STR(sys_fillrect) },
	{ 0x42246c4, __VMLINUX_SYMBOL_STR(sys_copyarea) },
	{ 0x9dd752c1, __VMLINUX_SYMBOL_STR(sys_imageblit) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xbd7da979, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x5b10feb5, __VMLINUX_SYMBOL_STR(register_framebuffer) },
	{ 0x1c9239f2, __VMLINUX_SYMBOL_STR(fb_deferred_io_init) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xd8a4ac6c, __VMLINUX_SYMBOL_STR(framebuffer_alloc) },
	{ 0xe582a165, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x40a9b349, __VMLINUX_SYMBOL_STR(vzalloc) },
	{ 0xca40a251, __VMLINUX_SYMBOL_STR(rpisense_get_dev) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0x3f616ce2, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x394851d2, __VMLINUX_SYMBOL_STR(rpisense_block_write) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x70d9e5a8, __VMLINUX_SYMBOL_STR(framebuffer_release) },
	{ 0x3b0cc79b, __VMLINUX_SYMBOL_STR(fb_deferred_io_cleanup) },
	{ 0x6a74c672, __VMLINUX_SYMBOL_STR(unregister_framebuffer) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=fb_sys_fops,sysfillrect,syscopyarea,sysimgblt,rpisense-core";

MODULE_ALIAS("platform:rpi-sense-fb");
MODULE_ALIAS("of:N*T*Crpi,rpi-sense-fb*");

MODULE_INFO(srcversion, "FC554BC5F2903919A643A1E");
