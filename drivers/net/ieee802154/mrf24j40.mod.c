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
	{ 0xeec4978e, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0xd05d6167, __VMLINUX_SYMBOL_STR(__spi_register_driver) },
	{ 0x27c6f01c, __VMLINUX_SYMBOL_STR(ieee802154_xmit_complete) },
	{ 0x28281c11, __VMLINUX_SYMBOL_STR(ieee802154_rx_irqsafe) },
	{ 0xfd8bdc76, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xac36cda1, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x94daa3d1, __VMLINUX_SYMBOL_STR(ieee802154_register_hw) },
	{ 0xbd7da979, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xee4faa30, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0x1bf56330, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xd315e13d, __VMLINUX_SYMBOL_STR(irq_get_irq_data) },
	{ 0xc004012e, __VMLINUX_SYMBOL_STR(spi_get_device_id) },
	{ 0x94f4694c, __VMLINUX_SYMBOL_STR(__devm_regmap_init) },
	{ 0xd69a1de3, __VMLINUX_SYMBOL_STR(__devm_regmap_init_spi) },
	{ 0xd081fcd2, __VMLINUX_SYMBOL_STR(ieee802154_alloc_hw) },
	{ 0x27683889, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xfcd7c87c, __VMLINUX_SYMBOL_STR(regmap_write) },
	{ 0x27d975b8, __VMLINUX_SYMBOL_STR(regmap_update_bits) },
	{ 0x46ac8384, __VMLINUX_SYMBOL_STR(spi_sync) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xa5d0dd22, __VMLINUX_SYMBOL_STR(spi_write_then_read) },
	{ 0xfcec0987, __VMLINUX_SYMBOL_STR(enable_irq) },
	{ 0xc7ed00ad, __VMLINUX_SYMBOL_STR(spi_async) },
	{ 0x27bbf221, __VMLINUX_SYMBOL_STR(disable_irq_nosync) },
	{ 0xf096043c, __VMLINUX_SYMBOL_STR(ieee802154_free_hw) },
	{ 0x7d2e3b88, __VMLINUX_SYMBOL_STR(ieee802154_unregister_hw) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mac802154,regmap-spi";

MODULE_ALIAS("spi:mrf24j40");
MODULE_ALIAS("spi:mrf24j40ma");
MODULE_ALIAS("spi:mrf24j40mc");
MODULE_ALIAS("of:N*T*Cmicrochip,mrf24j40*");
MODULE_ALIAS("of:N*T*Cmicrochip,mrf24j40ma*");
MODULE_ALIAS("of:N*T*Cmicrochip,mrf24j40mc*");

MODULE_INFO(srcversion, "92086293411115D99BAFF86");
