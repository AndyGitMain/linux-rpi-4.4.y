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
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0x9395b19c, __VMLINUX_SYMBOL_STR(i2c_master_send) },
	{ 0xb8b5974, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x1494ad7b, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x10782160, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x100af0a6, __VMLINUX_SYMBOL_STR(param_ops_string) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x98785051, __VMLINUX_SYMBOL_STR(media_entity_init) },
	{ 0x868784cb, __VMLINUX_SYMBOL_STR(__symbol_get) },
	{ 0x64c2c8b3, __VMLINUX_SYMBOL_STR(v4l2_device_unregister_subdev) },
	{ 0x66d87d38, __VMLINUX_SYMBOL_STR(symbol_put_addr) },
	{ 0x5d8f8ac3, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0xfd1fdf8e, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xc514d721, __VMLINUX_SYMBOL_STR(i2c_master_recv) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x6af3d8d9, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x6e9dd606, __VMLINUX_SYMBOL_STR(__symbol_put) },
	{ 0xe52c8fc3, __VMLINUX_SYMBOL_STR(v4l2_i2c_subdev_init) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=media,videodev,v4l2-common";

MODULE_ALIAS("i2c:tuner");

MODULE_INFO(srcversion, "D4C7019C7914CA1BC981DC0");
