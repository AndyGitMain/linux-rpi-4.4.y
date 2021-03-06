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
	{ 0x1494ad7b, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x6c09c2a4, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0x6486add1, __VMLINUX_SYMBOL_STR(usb_stor_bulk_transfer_buf) },
	{ 0x9b06c86f, __VMLINUX_SYMBOL_STR(usb_stor_post_reset) },
	{ 0x3ac89df0, __VMLINUX_SYMBOL_STR(usb_stor_control_msg) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x85d23016, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xa6d37fb9, __VMLINUX_SYMBOL_STR(usb_autopm_get_interface) },
	{ 0xdd8969f3, __VMLINUX_SYMBOL_STR(usb_enable_autosuspend) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x8301917f, __VMLINUX_SYMBOL_STR(usb_stor_disconnect) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xa4bc8397, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0xc9d9845c, __VMLINUX_SYMBOL_STR(usb_autopm_put_interface_async) },
	{ 0x3934a77b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xa17b8794, __VMLINUX_SYMBOL_STR(usb_stor_probe2) },
	{ 0x16e5c2a, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x46b3fb7a, __VMLINUX_SYMBOL_STR(usb_stor_host_template_init) },
	{ 0x54166c1d, __VMLINUX_SYMBOL_STR(usb_bulk_msg) },
	{ 0x5cb64b6f, __VMLINUX_SYMBOL_STR(usb_stor_pre_reset) },
	{ 0x3e20e0f4, __VMLINUX_SYMBOL_STR(usb_stor_reset_resume) },
	{ 0xd868240a, __VMLINUX_SYMBOL_STR(usb_stor_probe1) },
	{ 0xfd1fdf8e, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x58963f53, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x48711182, __VMLINUX_SYMBOL_STR(pm_runtime_set_autosuspend_delay) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0BDAp0138d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp0158d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp0159d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "3DE335DD0957A25F87328C4");
