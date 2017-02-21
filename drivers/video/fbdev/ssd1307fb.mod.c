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
	{ 0xd90e0f90, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x17a8ac7a, __VMLINUX_SYMBOL_STR(fb_sys_read) },
	{ 0x10782160, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0x5d8f8ac3, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x27683889, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xcb2ae2d, __VMLINUX_SYMBOL_STR(backlight_device_register) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x5b10feb5, __VMLINUX_SYMBOL_STR(register_framebuffer) },
	{ 0xdd39af8, __VMLINUX_SYMBOL_STR(pwm_enable) },
	{ 0xe6a264e8, __VMLINUX_SYMBOL_STR(pwm_config) },
	{ 0x4d2119d6, __VMLINUX_SYMBOL_STR(pwm_get) },
	{ 0x1bd879c, __VMLINUX_SYMBOL_STR(gpiod_set_raw_value) },
	{ 0xaf631f5f, __VMLINUX_SYMBOL_STR(gpio_to_desc) },
	{ 0xa3dbab24, __VMLINUX_SYMBOL_STR(devm_gpio_request_one) },
	{ 0x1c9239f2, __VMLINUX_SYMBOL_STR(fb_deferred_io_init) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xe582a165, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0x80c16e6f, __VMLINUX_SYMBOL_STR(of_find_property) },
	{ 0xffaa9a00, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0x3d627d29, __VMLINUX_SYMBOL_STR(of_get_named_gpio_flags) },
	{ 0x13ca3b16, __VMLINUX_SYMBOL_STR(of_match_device) },
	{ 0xd8a4ac6c, __VMLINUX_SYMBOL_STR(framebuffer_alloc) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x46c2ec70, __VMLINUX_SYMBOL_STR(sys_fillrect) },
	{ 0x42246c4, __VMLINUX_SYMBOL_STR(sys_copyarea) },
	{ 0x9dd752c1, __VMLINUX_SYMBOL_STR(sys_imageblit) },
	{ 0x44a0841f, __VMLINUX_SYMBOL_STR(pwm_put) },
	{ 0xc4dca207, __VMLINUX_SYMBOL_STR(pwm_disable) },
	{ 0x70d9e5a8, __VMLINUX_SYMBOL_STR(framebuffer_release) },
	{ 0x939648d0, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0x3b0cc79b, __VMLINUX_SYMBOL_STR(fb_deferred_io_cleanup) },
	{ 0x6a74c672, __VMLINUX_SYMBOL_STR(unregister_framebuffer) },
	{ 0xf976be6a, __VMLINUX_SYMBOL_STR(backlight_device_unregister) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xbd7da979, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x9395b19c, __VMLINUX_SYMBOL_STR(i2c_master_send) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=fb_sys_fops,sysfillrect,syscopyarea,sysimgblt";

MODULE_ALIAS("i2c:ssd1305fb");
MODULE_ALIAS("i2c:ssd1306fb");
MODULE_ALIAS("i2c:ssd1307fb");
MODULE_ALIAS("i2c:ssd1309fb");
MODULE_ALIAS("of:N*T*Csolomon,ssd1305fb-i2c*");
MODULE_ALIAS("of:N*T*Csolomon,ssd1306fb-i2c*");
MODULE_ALIAS("of:N*T*Csolomon,ssd1307fb-i2c*");
MODULE_ALIAS("of:N*T*Csolomon,ssd1309fb-i2c*");

MODULE_INFO(srcversion, "B8AB72BF12DD8890158ADE1");
