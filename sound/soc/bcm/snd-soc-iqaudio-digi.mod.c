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
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x8f3bf70e, __VMLINUX_SYMBOL_STR(of_parse_phandle) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xcbe2ad26, __VMLINUX_SYMBOL_STR(snd_soc_dai_set_pll) },
	{ 0x348e8271, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x90651b24, __VMLINUX_SYMBOL_STR(param_ops_short) },
	{ 0xbd7da979, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xdbe766ca, __VMLINUX_SYMBOL_STR(snd_soc_update_bits) },
	{ 0x46dcd0c4, __VMLINUX_SYMBOL_STR(of_property_read_string) },
	{ 0x4139f6bf, __VMLINUX_SYMBOL_STR(snd_soc_unregister_card) },
	{ 0x511aaf0f, __VMLINUX_SYMBOL_STR(snd_soc_dai_set_bclk_ratio) },
	{ 0x4d5f6d9d, __VMLINUX_SYMBOL_STR(snd_soc_dai_set_clkdiv) },
	{ 0x88da9982, __VMLINUX_SYMBOL_STR(snd_soc_dai_set_sysclk) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x4d0d5ab0, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x5617b771, __VMLINUX_SYMBOL_STR(snd_soc_register_card) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-core";

MODULE_ALIAS("of:N*T*Ciqaudio,wm8804-digi*");

MODULE_INFO(srcversion, "793271B9FFA7CFD02005426");
