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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xf51a0302, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x4d0d5ab0, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0xeec4978e, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x348e8271, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xd05d6167, __VMLINUX_SYMBOL_STR(__spi_register_driver) },
	{ 0x27683889, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xbd7da979, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x1bd879c, __VMLINUX_SYMBOL_STR(gpiod_set_raw_value) },
	{ 0xaf631f5f, __VMLINUX_SYMBOL_STR(gpio_to_desc) },
	{ 0x85d23016, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x3934a77b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xfc39ad62, __VMLINUX_SYMBOL_STR(fbtft_probe_common) },
	{ 0x2f0e4150, __VMLINUX_SYMBOL_STR(fbtft_remove_common) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=fbtft";

MODULE_ALIAS("of:N*T*Csolomon,ssd1306*");

MODULE_INFO(srcversion, "31641403FD3137BC6675F23");
