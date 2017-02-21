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
	{ 0xa4bc8397, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x58963f53, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xb8b5974, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xbd7da979, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x9a623b12, __VMLINUX_SYMBOL_STR(device_create_file) },
	{ 0xb7c027d4, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0xfd1fdf8e, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x65e07d0b, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x20000329, __VMLINUX_SYMBOL_STR(simple_strtoul) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x62f2205a, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0xe998aeda, __VMLINUX_SYMBOL_STR(device_remove_file) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0B49p064Fd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "CE6276EDC6F1A46799AF83E");
