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
	{ 0xb077e70a, __VMLINUX_SYMBOL_STR(clk_unprepare) },
	{ 0xe56a9336, __VMLINUX_SYMBOL_STR(snd_pcm_format_width) },
	{ 0x20563baa, __VMLINUX_SYMBOL_STR(__pm_runtime_idle) },
	{ 0xeb711ae7, __VMLINUX_SYMBOL_STR(snd_soc_params_to_bclk) },
	{ 0x815588a6, __VMLINUX_SYMBOL_STR(clk_enable) },
	{ 0xf6ee1824, __VMLINUX_SYMBOL_STR(__pm_runtime_disable) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xea124bd1, __VMLINUX_SYMBOL_STR(gcd) },
	{ 0xfb9f9e38, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_ratnums) },
	{ 0xb6e6d99d, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0x503bd137, __VMLINUX_SYMBOL_STR(snd_interval_ranges) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0xffaa9a00, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x5d71ac4f, __VMLINUX_SYMBOL_STR(snd_soc_put_volsw) },
	{ 0x643bf194, __VMLINUX_SYMBOL_STR(snd_soc_get_volsw) },
	{ 0x556e4390, __VMLINUX_SYMBOL_STR(clk_get_rate) },
	{ 0x6081b37c, __VMLINUX_SYMBOL_STR(snd_soc_info_enum_double) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xbd7da979, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xce7a38f1, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_list) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0xbe2e4bdc, __VMLINUX_SYMBOL_STR(snd_soc_info_volsw) },
	{ 0x27683889, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xe327bedf, __VMLINUX_SYMBOL_STR(snd_pcm_hw_rule_add) },
	{ 0x332932b5, __VMLINUX_SYMBOL_STR(snd_soc_get_enum_double) },
	{ 0x4f5de93c, __VMLINUX_SYMBOL_STR(pm_runtime_enable) },
	{ 0x7c9a7371, __VMLINUX_SYMBOL_STR(clk_prepare) },
	{ 0xc1cf3439, __VMLINUX_SYMBOL_STR(__pm_runtime_set_status) },
	{ 0x1887364e, __VMLINUX_SYMBOL_STR(devm_clk_get) },
	{ 0x9e7edc1c, __VMLINUX_SYMBOL_STR(snd_soc_unregister_codec) },
	{ 0xc8269f94, __VMLINUX_SYMBOL_STR(snd_soc_params_to_frame_size) },
	{ 0x9d6f3e1b, __VMLINUX_SYMBOL_STR(regcache_mark_dirty) },
	{ 0x5440b365, __VMLINUX_SYMBOL_STR(snd_soc_put_enum_double) },
	{ 0x68a24153, __VMLINUX_SYMBOL_STR(snd_pcm_format_physical_width) },
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


MODULE_INFO(srcversion, "A3F4A6AD8180B6EDCB602EE");
