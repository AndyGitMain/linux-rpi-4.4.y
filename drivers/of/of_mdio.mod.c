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
	{ 0x75c3acf7, __VMLINUX_SYMBOL_STR(get_phy_device) },
	{ 0x24c643c, __VMLINUX_SYMBOL_STR(phy_attach_direct) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x3cbaece9, __VMLINUX_SYMBOL_STR(irq_of_parse_and_map) },
	{ 0x353a6b7d, __VMLINUX_SYMBOL_STR(__mdiobus_register) },
	{ 0xffaa9a00, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xa72c72a6, __VMLINUX_SYMBOL_STR(of_device_is_compatible) },
	{ 0xa3c8a10, __VMLINUX_SYMBOL_STR(phy_device_register) },
	{ 0x8609f678, __VMLINUX_SYMBOL_STR(phy_device_create) },
	{ 0xd3264006, __VMLINUX_SYMBOL_STR(phy_device_free) },
	{ 0xbd7da979, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x80c16e6f, __VMLINUX_SYMBOL_STR(of_find_property) },
	{ 0x737aba32, __VMLINUX_SYMBOL_STR(bus_find_device) },
	{ 0x718327ca, __VMLINUX_SYMBOL_STR(of_prop_next_string) },
	{ 0x27683889, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xf5150ccc, __VMLINUX_SYMBOL_STR(phy_connect_direct) },
	{ 0xa3291d10, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0x71005c25, __VMLINUX_SYMBOL_STR(of_get_property) },
	{ 0x194b734a, __VMLINUX_SYMBOL_STR(of_get_next_available_child) },
	{ 0x2e208eb6, __VMLINUX_SYMBOL_STR(of_node_get) },
	{ 0xb56f1dae, __VMLINUX_SYMBOL_STR(mdio_bus_type) },
	{ 0x4587c37a, __VMLINUX_SYMBOL_STR(of_node_put) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libphy";


MODULE_INFO(srcversion, "375ACA0D33C7574ABBA042E");
