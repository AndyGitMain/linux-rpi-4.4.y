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
	{ 0xb077e70a, __VMLINUX_SYMBOL_STR(clk_unprepare) },
	{ 0x9dfd11d4, __VMLINUX_SYMBOL_STR(devm_snd_soc_register_card) },
	{ 0x815588a6, __VMLINUX_SYMBOL_STR(clk_enable) },
	{ 0x2eb6acfa, __VMLINUX_SYMBOL_STR(snd_soc_of_parse_card_name) },
	{ 0x641defbf, __VMLINUX_SYMBOL_STR(snd_soc_of_parse_audio_simple_widgets) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xb6e6d99d, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0xffaa9a00, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x556e4390, __VMLINUX_SYMBOL_STR(clk_get_rate) },
	{ 0x348e8271, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xbd7da979, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x2ad510c1, __VMLINUX_SYMBOL_STR(snd_soc_of_get_dai_name) },
	{ 0xdc572605, __VMLINUX_SYMBOL_STR(of_device_is_available) },
	{ 0x80c16e6f, __VMLINUX_SYMBOL_STR(of_find_property) },
	{ 0xb78dfd58, __VMLINUX_SYMBOL_STR(of_get_child_by_name) },
	{ 0x2023ceef, __VMLINUX_SYMBOL_STR(of_get_next_child) },
	{ 0x7c9a7371, __VMLINUX_SYMBOL_STR(clk_prepare) },
	{ 0x3d627d29, __VMLINUX_SYMBOL_STR(of_get_named_gpio_flags) },
	{ 0x120266e1, __VMLINUX_SYMBOL_STR(of_clk_get) },
	{ 0x88da9982, __VMLINUX_SYMBOL_STR(snd_soc_dai_set_sysclk) },
	{ 0xbe39e864, __VMLINUX_SYMBOL_STR(snd_soc_of_parse_audio_routing) },
	{ 0x77ff65f2, __VMLINUX_SYMBOL_STR(snd_soc_card_jack_new) },
	{ 0x4716930c, __VMLINUX_SYMBOL_STR(snd_soc_jack_add_gpios) },
	{ 0x49d947a9, __VMLINUX_SYMBOL_STR(snd_soc_of_parse_daifmt) },
	{ 0x7c163ac, __VMLINUX_SYMBOL_STR(of_parse_phandle_with_args) },
	{ 0x6e325e6, __VMLINUX_SYMBOL_STR(snd_soc_dai_set_tdm_slot) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x7edda6d, __VMLINUX_SYMBOL_STR(snd_soc_jack_free_gpios) },
	{ 0x4d0d5ab0, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x4587c37a, __VMLINUX_SYMBOL_STR(of_node_put) },
	{ 0xe582a165, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x8836e72a, __VMLINUX_SYMBOL_STR(snd_soc_of_parse_tdm_slot) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-core";

MODULE_ALIAS("of:N*T*Csimple-audio-card*");

MODULE_INFO(srcversion, "B64E4FE8C90DFC2B5562509");
