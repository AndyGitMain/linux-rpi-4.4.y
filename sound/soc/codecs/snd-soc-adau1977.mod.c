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

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xf51a0302, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xe56a9336, __VMLINUX_SYMBOL_STR(snd_pcm_format_width) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xd848b13f, __VMLINUX_SYMBOL_STR(regcache_cache_bypass) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x3c7a6ae1, __VMLINUX_SYMBOL_STR(snd_soc_dapm_new_controls) },
	{ 0x5d71ac4f, __VMLINUX_SYMBOL_STR(snd_soc_put_volsw) },
	{ 0x64d22431, __VMLINUX_SYMBOL_STR(regmap_read) },
	{ 0x643bf194, __VMLINUX_SYMBOL_STR(snd_soc_get_volsw) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x38e0c11a, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_mask64) },
	{ 0xce7a38f1, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_list) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0xbe2e4bdc, __VMLINUX_SYMBOL_STR(snd_soc_info_volsw) },
	{ 0x585b4ba9, __VMLINUX_SYMBOL_STR(devm_gpiod_get_optional) },
	{ 0x9d6f3e1b, __VMLINUX_SYMBOL_STR(regcache_mark_dirty) },
	{ 0x5a58f189, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_minmax) },
	{ 0xf7e55eb1, __VMLINUX_SYMBOL_STR(gpiod_set_value_cansleep) },
	{ 0x9568afc7, __VMLINUX_SYMBOL_STR(snd_soc_register_codec) },
	{ 0xe582a165, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x27d975b8, __VMLINUX_SYMBOL_STR(regmap_update_bits) },
	{ 0xfcd7c87c, __VMLINUX_SYMBOL_STR(regmap_write) },
	{ 0xbea56b9a, __VMLINUX_SYMBOL_STR(regcache_sync) },
	{ 0xd5f77261, __VMLINUX_SYMBOL_STR(regcache_cache_only) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd-soc-core";


MODULE_INFO(srcversion, "4101675D26F3B421F02F3C6");
