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
	{ 0x7b6b7ef8, __VMLINUX_SYMBOL_STR(hid_unregister_driver) },
	{ 0x5a041bb8, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0x5aab954d, __VMLINUX_SYMBOL_STR(__hid_register_driver) },
	{ 0xf39cacaa, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0x919defb4, __VMLINUX_SYMBOL_STR(roccat_common2_sysfs_read) },
	{ 0xc11a6344, __VMLINUX_SYMBOL_STR(roccat_common2_sysfs_write) },
	{ 0xb8b5974, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xb8c99aeb, __VMLINUX_SYMBOL_STR(roccat_connect) },
	{ 0xe45bb18, __VMLINUX_SYMBOL_STR(roccat_common2_device_init_struct) },
	{ 0xfd1fdf8e, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xcce45ff3, __VMLINUX_SYMBOL_STR(hid_connect) },
	{ 0xbd7da979, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x13d1d5ae, __VMLINUX_SYMBOL_STR(hid_open_report) },
	{ 0x2f622ea1, __VMLINUX_SYMBOL_STR(roccat_disconnect) },
	{ 0x546a599a, __VMLINUX_SYMBOL_STR(hid_disconnect) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x8c4181ec, __VMLINUX_SYMBOL_STR(roccat_report_event) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=hid-roccat-common,hid-roccat";

MODULE_ALIAS("hid:b0003g*v00001E7Dp00003138");
MODULE_ALIAS("hid:b0003g*v00001E7Dp000031CE");
MODULE_ALIAS("hid:b0003g*v00001E7Dp00003232");

MODULE_INFO(srcversion, "19A81F77FC4D344E280E30E");
