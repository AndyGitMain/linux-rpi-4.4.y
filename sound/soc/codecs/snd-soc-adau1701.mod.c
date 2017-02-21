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
	{ 0x94f4694c, __VMLINUX_SYMBOL_STR(__devm_regmap_init) },
	{ 0xe56a9336, __VMLINUX_SYMBOL_STR(snd_pcm_format_width) },
	{ 0x9395b19c, __VMLINUX_SYMBOL_STR(i2c_master_send) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x10782160, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0x8278ee65, __VMLINUX_SYMBOL_STR(i2c_transfer) },
	{ 0xaf631f5f, __VMLINUX_SYMBOL_STR(gpio_to_desc) },
	{ 0x17c49212, __VMLINUX_SYMBOL_STR(devm_sigmadsp_init_i2c) },
	{ 0xffaa9a00, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x5d71ac4f, __VMLINUX_SYMBOL_STR(snd_soc_put_volsw) },
	{ 0x64d22431, __VMLINUX_SYMBOL_STR(regmap_read) },
	{ 0x643bf194, __VMLINUX_SYMBOL_STR(snd_soc_get_volsw) },
	{ 0xfc8bac30, __VMLINUX_SYMBOL_STR(sigmadsp_attach) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xbd7da979, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x4448ff7e, __VMLINUX_SYMBOL_STR(sigmadsp_reset) },
	{ 0x7e91a43c, __VMLINUX_SYMBOL_STR(sigmadsp_setup) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0xa3dbab24, __VMLINUX_SYMBOL_STR(devm_gpio_request_one) },
	{ 0xbe2e4bdc, __VMLINUX_SYMBOL_STR(snd_soc_info_volsw) },
	{ 0x5d8f8ac3, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0xc8ae1f6c, __VMLINUX_SYMBOL_STR(sigmadsp_restrict_params) },
	{ 0x64abb578, __VMLINUX_SYMBOL_STR(of_property_read_u8_array) },
	{ 0x3d627d29, __VMLINUX_SYMBOL_STR(of_get_named_gpio_flags) },
	{ 0x9e7edc1c, __VMLINUX_SYMBOL_STR(snd_soc_unregister_codec) },
	{ 0x9d6f3e1b, __VMLINUX_SYMBOL_STR(regcache_mark_dirty) },
	{ 0x1bf56330, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xc151d399, __VMLINUX_SYMBOL_STR(gpiod_set_raw_value_cansleep) },
	{ 0x9568afc7, __VMLINUX_SYMBOL_STR(snd_soc_register_codec) },
	{ 0xe582a165, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x27d975b8, __VMLINUX_SYMBOL_STR(regmap_update_bits) },
	{ 0xfcd7c87c, __VMLINUX_SYMBOL_STR(regmap_write) },
	{ 0xbea56b9a, __VMLINUX_SYMBOL_STR(regcache_sync) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd-soc-sigmadsp-i2c,snd-soc-core,snd-soc-sigmadsp";

MODULE_ALIAS("of:N*T*Cadi,adau1701*");
MODULE_ALIAS("i2c:adau1401");
MODULE_ALIAS("i2c:adau1401a");
MODULE_ALIAS("i2c:adau1701");
MODULE_ALIAS("i2c:adau1702");

MODULE_INFO(srcversion, "7F1AFBD3E3E2098D40140FF");
