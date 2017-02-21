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
	{ 0x4d0d5ab0, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x348e8271, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x17b37d38, __VMLINUX_SYMBOL_STR(device_create) },
	{ 0xf39cacaa, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0xfe96a415, __VMLINUX_SYMBOL_STR(cdev_add) },
	{ 0x69745ea, __VMLINUX_SYMBOL_STR(cdev_init) },
	{ 0x29537c9e, __VMLINUX_SYMBOL_STR(alloc_chrdev_region) },
	{ 0xe582a165, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xa0cd584b, __VMLINUX_SYMBOL_STR(bcm2835_smi_get) },
	{ 0x8f3bf70e, __VMLINUX_SYMBOL_STR(of_parse_phandle) },
	{ 0xb33bd6cb, __VMLINUX_SYMBOL_STR(bcm2835_smi_read_buf) },
	{ 0xa00dc18f, __VMLINUX_SYMBOL_STR(bcm2835_smi_write_buf) },
	{ 0x727204cb, __VMLINUX_SYMBOL_STR(bcm2835_smi_user_dma) },
	{ 0x837d0f0a, __VMLINUX_SYMBOL_STR(down_timeout) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xab7a4d1d, __VMLINUX_SYMBOL_STR(bcm2835_smi_set_regs_from_settings) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0x72db83c4, __VMLINUX_SYMBOL_STR(bcm2835_smi_set_address) },
	{ 0xf6720336, __VMLINUX_SYMBOL_STR(bcm2835_smi_get_settings_from_regs) },
	{ 0xbd7da979, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x27683889, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x7485e15e, __VMLINUX_SYMBOL_STR(unregister_chrdev_region) },
	{ 0xd022cd81, __VMLINUX_SYMBOL_STR(cdev_del) },
	{ 0x5a041bb8, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0x573a869c, __VMLINUX_SYMBOL_STR(device_destroy) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=bcm2835_smi";

MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-smi-dev*");

MODULE_INFO(srcversion, "EAA6F6E38EA847DDED23243");
