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
	{ 0x1494ad7b, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xa4bc8397, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x58963f53, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x27683889, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xbd7da979, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xb8b5974, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x5e3c68ff, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0xc6d91913, __VMLINUX_SYMBOL_STR(input_set_capability) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xdd0a2ba2, __VMLINUX_SYMBOL_STR(strlcat) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xdb056ef6, __VMLINUX_SYMBOL_STR(input_free_device) },
	{ 0x65e07d0b, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x9909033d, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0xfb6f5fba, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0xcede96b1, __VMLINUX_SYMBOL_STR(input_allocate_device) },
	{ 0xfd1fdf8e, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xa5a3b82a, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0x15597bd3, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x891035f7, __VMLINUX_SYMBOL_STR(usb_free_coherent) },
	{ 0x33e12395, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x1a52eeee, __VMLINUX_SYMBOL_STR(input_unregister_device) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xcb84ccee, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v06CDp0202d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "C93D7E9199921A5212675F3");
