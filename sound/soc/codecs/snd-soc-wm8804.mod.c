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
	{ 0x20563baa, __VMLINUX_SYMBOL_STR(__pm_runtime_idle) },
	{ 0x8f38b005, __VMLINUX_SYMBOL_STR(snd_soc_test_bits) },
	{ 0xf6ee1824, __VMLINUX_SYMBOL_STR(__pm_runtime_disable) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xe2e3e9a7, __VMLINUX_SYMBOL_STR(snd_soc_dapm_get_enum_double) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x85d23016, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xa24c8064, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0x64d22431, __VMLINUX_SYMBOL_STR(regmap_read) },
	{ 0xc3bb3aa4, __VMLINUX_SYMBOL_STR(regmap_update_bits_check) },
	{ 0x6081b37c, __VMLINUX_SYMBOL_STR(snd_soc_info_enum_double) },
	{ 0x2dd329d8, __VMLINUX_SYMBOL_STR(snd_soc_dapm_kcontrol_dapm) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xe4a0b7df, __VMLINUX_SYMBOL_STR(snd_soc_read) },
	{ 0xbd7da979, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xdbe766ca, __VMLINUX_SYMBOL_STR(snd_soc_update_bits) },
	{ 0x3934a77b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0x27683889, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x4f5de93c, __VMLINUX_SYMBOL_STR(pm_runtime_enable) },
	{ 0xc1cf3439, __VMLINUX_SYMBOL_STR(__pm_runtime_set_status) },
	{ 0x9e7edc1c, __VMLINUX_SYMBOL_STR(snd_soc_unregister_codec) },
	{ 0x585b4ba9, __VMLINUX_SYMBOL_STR(devm_gpiod_get_optional) },
	{ 0x9d6f3e1b, __VMLINUX_SYMBOL_STR(regcache_mark_dirty) },
	{ 0xf7e55eb1, __VMLINUX_SYMBOL_STR(gpiod_set_value_cansleep) },
	{ 0x9568afc7, __VMLINUX_SYMBOL_STR(snd_soc_register_codec) },
	{ 0xe582a165, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x27d975b8, __VMLINUX_SYMBOL_STR(regmap_update_bits) },
	{ 0xfcd7c87c, __VMLINUX_SYMBOL_STR(regmap_write) },
	{ 0xbea56b9a, __VMLINUX_SYMBOL_STR(regcache_sync) },
	{ 0xd8e099de, __VMLINUX_SYMBOL_STR(snd_soc_write) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd-soc-core";


MODULE_INFO(srcversion, "F8E491E0DF2DE73AA6839B1");
