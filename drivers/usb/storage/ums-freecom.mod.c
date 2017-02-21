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
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x6486add1, __VMLINUX_SYMBOL_STR(usb_stor_bulk_transfer_buf) },
	{ 0x9b06c86f, __VMLINUX_SYMBOL_STR(usb_stor_post_reset) },
	{ 0x3ac89df0, __VMLINUX_SYMBOL_STR(usb_stor_control_msg) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x8301917f, __VMLINUX_SYMBOL_STR(usb_stor_disconnect) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xa4bc8397, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xa17b8794, __VMLINUX_SYMBOL_STR(usb_stor_probe2) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x46b3fb7a, __VMLINUX_SYMBOL_STR(usb_stor_host_template_init) },
	{ 0x5cb64b6f, __VMLINUX_SYMBOL_STR(usb_stor_pre_reset) },
	{ 0x3e20e0f4, __VMLINUX_SYMBOL_STR(usb_stor_reset_resume) },
	{ 0x54137350, __VMLINUX_SYMBOL_STR(usb_stor_suspend) },
	{ 0xd868240a, __VMLINUX_SYMBOL_STR(usb_stor_probe1) },
	{ 0x58aea2d0, __VMLINUX_SYMBOL_STR(usb_stor_resume) },
	{ 0x58963f53, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x1726266f, __VMLINUX_SYMBOL_STR(usb_stor_bulk_srb) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v07ABpFC01d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "03B464CB478E47B9DE27D52");
