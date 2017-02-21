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
	{ 0x5d8f8ac3, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x71efcd42, __VMLINUX_SYMBOL_STR(regmap_bulk_read) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0xb8b5974, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x27683889, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xe52c8fc3, __VMLINUX_SYMBOL_STR(v4l2_i2c_subdev_init) },
	{ 0xbd7da979, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xf9be28d7, __VMLINUX_SYMBOL_STR(v4l2_ctrl_auto_cluster) },
	{ 0x559620dd, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_std) },
	{ 0xf8ba14bc, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_init_class) },
	{ 0x58c6855b, __VMLINUX_SYMBOL_STR(__devm_regmap_init_i2c) },
	{ 0xfd1fdf8e, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x2cde834b, __VMLINUX_SYMBOL_STR(regmap_bulk_write) },
	{ 0xfcd7c87c, __VMLINUX_SYMBOL_STR(regmap_write) },
	{ 0x64d22431, __VMLINUX_SYMBOL_STR(regmap_read) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x467a00eb, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_free) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=v4l2-common,videodev,regmap-i2c";

MODULE_ALIAS("i2c:e4000");

MODULE_INFO(srcversion, "66EF3F79A8D0D1033516438");
