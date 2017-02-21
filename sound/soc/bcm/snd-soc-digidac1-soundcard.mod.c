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
	{ 0xe56a9336, __VMLINUX_SYMBOL_STR(snd_pcm_format_width) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x8f3bf70e, __VMLINUX_SYMBOL_STR(of_parse_phandle) },
	{ 0xd90992c1, __VMLINUX_SYMBOL_STR(snd_soc_add_codec_controls) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xcbe2ad26, __VMLINUX_SYMBOL_STR(snd_soc_dai_set_pll) },
	{ 0x5d71ac4f, __VMLINUX_SYMBOL_STR(snd_soc_put_volsw) },
	{ 0x643bf194, __VMLINUX_SYMBOL_STR(snd_soc_get_volsw) },
	{ 0x348e8271, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x6081b37c, __VMLINUX_SYMBOL_STR(snd_soc_info_enum_double) },
	{ 0xbd7da979, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xdbe766ca, __VMLINUX_SYMBOL_STR(snd_soc_update_bits) },
	{ 0x4139f6bf, __VMLINUX_SYMBOL_STR(snd_soc_unregister_card) },
	{ 0xbe2e4bdc, __VMLINUX_SYMBOL_STR(snd_soc_info_volsw) },
	{ 0x6d301732, __VMLINUX_SYMBOL_STR(snd_soc_get_pcm_runtime) },
	{ 0x511aaf0f, __VMLINUX_SYMBOL_STR(snd_soc_dai_set_bclk_ratio) },
	{ 0x332932b5, __VMLINUX_SYMBOL_STR(snd_soc_get_enum_double) },
	{ 0x4d5f6d9d, __VMLINUX_SYMBOL_STR(snd_soc_dai_set_clkdiv) },
	{ 0x945ef2b7, __VMLINUX_SYMBOL_STR(snd_ctl_remove) },
	{ 0x88da9982, __VMLINUX_SYMBOL_STR(snd_soc_dai_set_sysclk) },
	{ 0x5440b365, __VMLINUX_SYMBOL_STR(snd_soc_put_enum_double) },
	{ 0x1bf56330, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x4d0d5ab0, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x5617b771, __VMLINUX_SYMBOL_STR(snd_soc_register_card) },
	{ 0x15be335f, __VMLINUX_SYMBOL_STR(snd_soc_card_get_kcontrol) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd-soc-core,snd";

MODULE_ALIAS("of:N*T*Crra,digidac1-soundcard*");

MODULE_INFO(srcversion, "570B7AA97968EA2A72519EB");
