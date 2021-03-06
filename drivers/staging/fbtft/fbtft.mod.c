#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xf51a0302, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xe998aeda, __VMLINUX_SYMBOL_STR(device_remove_file) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x70d9e5a8, __VMLINUX_SYMBOL_STR(framebuffer_release) },
	{ 0x17a8ac7a, __VMLINUX_SYMBOL_STR(fb_sys_read) },
	{ 0xcb2ae2d, __VMLINUX_SYMBOL_STR(backlight_device_register) },
	{ 0xaf631f5f, __VMLINUX_SYMBOL_STR(gpio_to_desc) },
	{ 0xc87c1f84, __VMLINUX_SYMBOL_STR(ktime_get) },
	{ 0xffaa9a00, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xad7ce9b0, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x85d23016, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x42246c4, __VMLINUX_SYMBOL_STR(sys_copyarea) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x586e0d70, __VMLINUX_SYMBOL_STR(of_prop_next_u32) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xbd7da979, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x45f768a8, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x11a13e31, __VMLINUX_SYMBOL_STR(_kstrtol) },
	{ 0x80c16e6f, __VMLINUX_SYMBOL_STR(of_find_property) },
	{ 0x46dcd0c4, __VMLINUX_SYMBOL_STR(of_property_read_string) },
	{ 0xaafdc258, __VMLINUX_SYMBOL_STR(strcasecmp) },
	{ 0x5b10feb5, __VMLINUX_SYMBOL_STR(register_framebuffer) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x3934a77b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0xa3dbab24, __VMLINUX_SYMBOL_STR(devm_gpio_request_one) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x46ac8384, __VMLINUX_SYMBOL_STR(spi_sync) },
	{ 0x61651be, __VMLINUX_SYMBOL_STR(strcat) },
	{ 0x9a623b12, __VMLINUX_SYMBOL_STR(device_create_file) },
	{ 0x27683889, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x40a9b349, __VMLINUX_SYMBOL_STR(vzalloc) },
	{ 0x46c2ec70, __VMLINUX_SYMBOL_STR(sys_fillrect) },
	{ 0xc2acc033, __VMLINUX_SYMBOL_STR(hex_dump_to_buffer) },
	{ 0x3f616ce2, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x9dd752c1, __VMLINUX_SYMBOL_STR(sys_imageblit) },
	{ 0x1122d1cd, __VMLINUX_SYMBOL_STR(fb_sys_write) },
	{ 0x996bdb64, __VMLINUX_SYMBOL_STR(_kstrtoul) },
	{ 0x3d627d29, __VMLINUX_SYMBOL_STR(of_get_named_gpio_flags) },
	{ 0x2c2c37e1, __VMLINUX_SYMBOL_STR(dev_driver_string) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xd8a4ac6c, __VMLINUX_SYMBOL_STR(framebuffer_alloc) },
	{ 0x3b0cc79b, __VMLINUX_SYMBOL_STR(fb_deferred_io_cleanup) },
	{ 0x1c9239f2, __VMLINUX_SYMBOL_STR(fb_deferred_io_init) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x1bd879c, __VMLINUX_SYMBOL_STR(gpiod_set_raw_value) },
	{ 0xf9e73082, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0x1bf56330, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x15c71f20, __VMLINUX_SYMBOL_STR(gpiod_get_raw_value) },
	{ 0x77bc13a0, __VMLINUX_SYMBOL_STR(strim) },
	{ 0xe582a165, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xf976be6a, __VMLINUX_SYMBOL_STR(backlight_device_unregister) },
	{ 0xc76f457f, __VMLINUX_SYMBOL_STR(param_ops_ulong) },
	{ 0xa43b1297, __VMLINUX_SYMBOL_STR(vscnprintf) },
	{ 0x13f34367, __VMLINUX_SYMBOL_STR(dmam_alloc_coherent) },
	{ 0x6a74c672, __VMLINUX_SYMBOL_STR(unregister_framebuffer) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=fb_sys_fops,syscopyarea,sysfillrect,sysimgblt";


MODULE_INFO(srcversion, "F59FBEDAA5A36FA212CA012");
