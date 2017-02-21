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
	{ 0x9fa8d08f, __VMLINUX_SYMBOL_STR(mipi_dsi_driver_unregister) },
	{ 0x78958bd8, __VMLINUX_SYMBOL_STR(mipi_dsi_driver_register_full) },
	{ 0x4566de76, __VMLINUX_SYMBOL_STR(mipi_dsi_attach) },
	{ 0xa9f0908, __VMLINUX_SYMBOL_STR(drm_panel_add) },
	{ 0xb772621d, __VMLINUX_SYMBOL_STR(drm_panel_init) },
	{ 0x4587c37a, __VMLINUX_SYMBOL_STR(of_node_put) },
	{ 0xc4ebabd7, __VMLINUX_SYMBOL_STR(of_find_i2c_device_by_node) },
	{ 0x8f3bf70e, __VMLINUX_SYMBOL_STR(of_parse_phandle) },
	{ 0xe582a165, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x85d23016, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x3934a77b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8083c7ed, __VMLINUX_SYMBOL_STR(drm_mode_probed_add) },
	{ 0x6edab1c6, __VMLINUX_SYMBOL_STR(drm_mode_set_name) },
	{ 0xcde6159a, __VMLINUX_SYMBOL_STR(drm_mode_duplicate) },
	{ 0xbd7da979, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xa3291d10, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0xe08facb5, __VMLINUX_SYMBOL_STR(drm_panel_remove) },
	{ 0x6b79d3f0, __VMLINUX_SYMBOL_STR(drm_panel_detach) },
	{ 0x571f4a26, __VMLINUX_SYMBOL_STR(mipi_dsi_detach) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=drm_mipi_dsi,drm";

MODULE_ALIAS("of:N*T*Craspberrypi,touchscreen*");

MODULE_INFO(srcversion, "F366A476C6604B286F68843");
