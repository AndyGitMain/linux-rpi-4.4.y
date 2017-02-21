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
	{ 0x1700ab88, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0x6af3d8d9, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0xd90e0f90, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0xad7ce9b0, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x1494ad7b, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x4d0d5ab0, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0xeec4978e, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x348e8271, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xd05d6167, __VMLINUX_SYMBOL_STR(__spi_register_driver) },
	{ 0x85bd1617, __VMLINUX_SYMBOL_STR(fbtft_write_spi_emulate_9) },
	{ 0x6e021750, __VMLINUX_SYMBOL_STR(fbtft_write_gpio8_wr) },
	{ 0x8ac81fa3, __VMLINUX_SYMBOL_STR(fbtft_write_vmem16_bus16) },
	{ 0x252d09d1, __VMLINUX_SYMBOL_STR(fbtft_write_gpio16_wr) },
	{ 0xbcaf408e, __VMLINUX_SYMBOL_STR(fbtft_write_gpio16_wr_latched) },
	{ 0x73862e88, __VMLINUX_SYMBOL_STR(fbtft_write_reg16_bus16) },
	{ 0x7cb56d5d, __VMLINUX_SYMBOL_STR(fbtft_write_vmem16_bus8) },
	{ 0x8c2d4852, __VMLINUX_SYMBOL_STR(fbtft_register_backlight) },
	{ 0x394cbb8a, __VMLINUX_SYMBOL_STR(fbtft_write_reg8_bus8) },
	{ 0x27a39eeb, __VMLINUX_SYMBOL_STR(fbtft_write_reg8_bus9) },
	{ 0x2e98cec2, __VMLINUX_SYMBOL_STR(fbtft_write_vmem16_bus9) },
	{ 0x4832b8e7, __VMLINUX_SYMBOL_STR(fbtft_write_spi) },
	{ 0x738cd5c4, __VMLINUX_SYMBOL_STR(fbtft_write_reg16_bus8) },
	{ 0xfb47ceb8, __VMLINUX_SYMBOL_STR(fbtft_init_display) },
	{ 0xe582a165, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x1bf56330, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x7b25c066, __VMLINUX_SYMBOL_STR(fbtft_register_framebuffer) },
	{ 0x46eb4739, __VMLINUX_SYMBOL_STR(fbtft_framebuffer_alloc) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xbd7da979, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x27683889, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x98789770, __VMLINUX_SYMBOL_STR(fbtft_framebuffer_release) },
	{ 0xdb17802, __VMLINUX_SYMBOL_STR(fbtft_unregister_framebuffer) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=fbtft";


MODULE_INFO(srcversion, "EA5C86705DB9BB727C0E715");
