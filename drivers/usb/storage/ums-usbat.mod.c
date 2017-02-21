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
	{ 0xb8b5974, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xc9ecaf89, __VMLINUX_SYMBOL_STR(usb_stor_set_xfer_buf) },
	{ 0x666664e1, __VMLINUX_SYMBOL_STR(usb_stor_access_xfer_buf) },
	{ 0x9b06c86f, __VMLINUX_SYMBOL_STR(usb_stor_post_reset) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x8301917f, __VMLINUX_SYMBOL_STR(usb_stor_disconnect) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xa4bc8397, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0xa17b8794, __VMLINUX_SYMBOL_STR(usb_stor_probe2) },
	{ 0xda5dda85, __VMLINUX_SYMBOL_STR(fill_inquiry_response) },
	{ 0x46b3fb7a, __VMLINUX_SYMBOL_STR(usb_stor_host_template_init) },
	{ 0x5cb64b6f, __VMLINUX_SYMBOL_STR(usb_stor_pre_reset) },
	{ 0x3e20e0f4, __VMLINUX_SYMBOL_STR(usb_stor_reset_resume) },
	{ 0xd629576, __VMLINUX_SYMBOL_STR(usb_stor_ctrl_transfer) },
	{ 0x54137350, __VMLINUX_SYMBOL_STR(usb_stor_suspend) },
	{ 0xc15bddc3, __VMLINUX_SYMBOL_STR(usb_stor_CB_reset) },
	{ 0x5fc9c106, __VMLINUX_SYMBOL_STR(usb_stor_clear_halt) },
	{ 0xd868240a, __VMLINUX_SYMBOL_STR(usb_stor_probe1) },
	{ 0xfd1fdf8e, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x58aea2d0, __VMLINUX_SYMBOL_STR(usb_stor_resume) },
	{ 0x58963f53, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xa1ba8e99, __VMLINUX_SYMBOL_STR(usb_stor_bulk_transfer_sg) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v03F0p0207d0001dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03F0p0307d0001dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E6p1010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0781p0005d0005dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "DCE7383BE75D8B4239D27CE");
