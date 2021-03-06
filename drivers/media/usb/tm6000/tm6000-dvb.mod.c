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
	{ 0x6af3d8d9, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x90651b24, __VMLINUX_SYMBOL_STR(param_ops_short) },
	{ 0xc6e1e98d, __VMLINUX_SYMBOL_STR(tm6000_unregister_extension) },
	{ 0x66e07e26, __VMLINUX_SYMBOL_STR(tm6000_register_extension) },
	{ 0xdff8e89d, __VMLINUX_SYMBOL_STR(tm6000_tuner_callback) },
	{ 0x2309a6d6, __VMLINUX_SYMBOL_STR(tm6000_xc5000_callback) },
	{ 0xb8b5974, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x6e9dd606, __VMLINUX_SYMBOL_STR(__symbol_put) },
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0x967593fb, __VMLINUX_SYMBOL_STR(dvb_dmxdev_init) },
	{ 0xda75eda0, __VMLINUX_SYMBOL_STR(dvb_dmx_init) },
	{ 0x5a9e05d5, __VMLINUX_SYMBOL_STR(dvb_register_frontend) },
	{ 0xc901fcea, __VMLINUX_SYMBOL_STR(dvb_register_adapter) },
	{ 0x868784cb, __VMLINUX_SYMBOL_STR(__symbol_get) },
	{ 0x45f768a8, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xfd1fdf8e, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x4f7514, __VMLINUX_SYMBOL_STR(dvb_unregister_adapter) },
	{ 0xd8258b72, __VMLINUX_SYMBOL_STR(dvb_dmx_release) },
	{ 0x41597cb2, __VMLINUX_SYMBOL_STR(dvb_dmxdev_release) },
	{ 0x2dcfe9c, __VMLINUX_SYMBOL_STR(dvb_frontend_detach) },
	{ 0x9a961ba1, __VMLINUX_SYMBOL_STR(dvb_unregister_frontend) },
	{ 0xc84a5c34, __VMLINUX_SYMBOL_STR(usb_unlink_urb) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x89b611dd, __VMLINUX_SYMBOL_STR(tm6000_debug) },
	{ 0xa928ebda, __VMLINUX_SYMBOL_STR(dvb_dmx_swfilter) },
	{ 0x15597bd3, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x35c16464, __VMLINUX_SYMBOL_STR(usb_clear_halt) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x9909033d, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x2aca2a8, __VMLINUX_SYMBOL_STR(tm6000_init_digital_mode) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x33e12395, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xcb84ccee, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x85d23016, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x3934a77b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=tm6000,dvb-core";


MODULE_INFO(srcversion, "E190D9F3DB3740615F1F4E2");
