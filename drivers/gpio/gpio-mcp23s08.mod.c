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
	{ 0x10782160, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0xeec4978e, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x5d8f8ac3, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0xd05d6167, __VMLINUX_SYMBOL_STR(__spi_register_driver) },
	{ 0xb8b5974, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xfd1fdf8e, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xc004012e, __VMLINUX_SYMBOL_STR(spi_get_device_id) },
	{ 0x3cbaece9, __VMLINUX_SYMBOL_STR(irq_of_parse_and_map) },
	{ 0xe582a165, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xffaa9a00, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0x13ca3b16, __VMLINUX_SYMBOL_STR(of_match_device) },
	{ 0xe26696d4, __VMLINUX_SYMBOL_STR(irq_domain_simple_ops) },
	{ 0x80c16e6f, __VMLINUX_SYMBOL_STR(of_find_property) },
	{ 0x7522f3ba, __VMLINUX_SYMBOL_STR(irq_modify_status) },
	{ 0x3107eea4, __VMLINUX_SYMBOL_STR(irq_set_chip) },
	{ 0x20a789ac, __VMLINUX_SYMBOL_STR(irq_set_chip_data) },
	{ 0xb4d1bdaf, __VMLINUX_SYMBOL_STR(irq_to_desc) },
	{ 0xdd735cca, __VMLINUX_SYMBOL_STR(irq_create_mapping) },
	{ 0xee4faa30, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0x2cb820de, __VMLINUX_SYMBOL_STR(__irq_domain_add) },
	{ 0x49f87f88, __VMLINUX_SYMBOL_STR(gpiochip_add) },
	{ 0x45f768a8, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x549525ef, __VMLINUX_SYMBOL_STR(handle_nested_irq) },
	{ 0xbd7da979, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xdac5fcdc, __VMLINUX_SYMBOL_STR(gpiochip_lock_as_irq) },
	{ 0xd2f2a733, __VMLINUX_SYMBOL_STR(gpiochip_unlock_as_irq) },
	{ 0x85d23016, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x1ec83b6c, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0x32653dd7, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x9bc3e13c, __VMLINUX_SYMBOL_STR(gpiochip_is_requested) },
	{ 0x3934a77b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xa5d0dd22, __VMLINUX_SYMBOL_STR(spi_write_then_read) },
	{ 0x38c4d4fa, __VMLINUX_SYMBOL_STR(i2c_smbus_read_byte_data) },
	{ 0xabfa05d3, __VMLINUX_SYMBOL_STR(i2c_smbus_write_byte_data) },
	{ 0xd6e34d9, __VMLINUX_SYMBOL_STR(i2c_smbus_read_word_data) },
	{ 0xf9f63287, __VMLINUX_SYMBOL_STR(i2c_smbus_write_word_data) },
	{ 0x9b53ea1f, __VMLINUX_SYMBOL_STR(gpiochip_remove) },
	{ 0xc4338564, __VMLINUX_SYMBOL_STR(irq_domain_remove) },
	{ 0x2c7db649, __VMLINUX_SYMBOL_STR(irq_dispose_mapping) },
	{ 0x2576c159, __VMLINUX_SYMBOL_STR(irq_find_mapping) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("spi:mcp23s08");
MODULE_ALIAS("spi:mcp23s17");
MODULE_ALIAS("i2c:mcp23008");
MODULE_ALIAS("i2c:mcp23017");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp23008*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp23017*");
MODULE_ALIAS("of:N*T*Cmcp,mcp23008*");
MODULE_ALIAS("of:N*T*Cmcp,mcp23017*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp23s08*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp23s17*");
MODULE_ALIAS("of:N*T*Cmcp,mcp23s08*");
MODULE_ALIAS("of:N*T*Cmcp,mcp23s17*");

MODULE_INFO(srcversion, "69FDC8A34A198A604EC7B6E");
