#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xf51a0302, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xb8b5974, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xe092ae0c, __VMLINUX_SYMBOL_STR(rc_unregister_device) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x1494ad7b, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xda75eda0, __VMLINUX_SYMBOL_STR(dvb_dmx_init) },
	{ 0x4f7514, __VMLINUX_SYMBOL_STR(dvb_unregister_adapter) },
	{ 0x5a9e05d5, __VMLINUX_SYMBOL_STR(dvb_register_frontend) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xcb84ccee, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x9a961ba1, __VMLINUX_SYMBOL_STR(dvb_unregister_frontend) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x4c29dcbf, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x85d23016, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xbdbf9b2c, __VMLINUX_SYMBOL_STR(rc_allocate_device) },
	{ 0x1238f49e, __VMLINUX_SYMBOL_STR(dvb_net_release) },
	{ 0x68fbf2d0, __VMLINUX_SYMBOL_STR(i2c_add_adapter) },
	{ 0x2dcfe9c, __VMLINUX_SYMBOL_STR(dvb_frontend_detach) },
	{ 0xa5a3b82a, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0xdd0a2ba2, __VMLINUX_SYMBOL_STR(strlcat) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xdcc45cdf, __VMLINUX_SYMBOL_STR(dvb_dmx_swfilter_raw) },
	{ 0x30fa2262, __VMLINUX_SYMBOL_STR(rc_free_device) },
	{ 0x41597cb2, __VMLINUX_SYMBOL_STR(dvb_dmxdev_release) },
	{ 0x5fb7e91b, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x45f768a8, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xa928ebda, __VMLINUX_SYMBOL_STR(dvb_dmx_swfilter) },
	{ 0xe1e71f59, __VMLINUX_SYMBOL_STR(dvb_net_init) },
	{ 0x65e07d0b, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xd3390a8e, __VMLINUX_SYMBOL_STR(rc_register_device) },
	{ 0x891035f7, __VMLINUX_SYMBOL_STR(usb_free_coherent) },
	{ 0xd8258b72, __VMLINUX_SYMBOL_STR(dvb_dmx_release) },
	{ 0xe3552080, __VMLINUX_SYMBOL_STR(dvb_dmx_swfilter_204) },
	{ 0xd0dd2559, __VMLINUX_SYMBOL_STR(i2c_del_adapter) },
	{ 0x15597bd3, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x3f616ce2, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x5e3c68ff, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0x54166c1d, __VMLINUX_SYMBOL_STR(usb_bulk_msg) },
	{ 0x35c16464, __VMLINUX_SYMBOL_STR(usb_clear_halt) },
	{ 0xdb056ef6, __VMLINUX_SYMBOL_STR(input_free_device) },
	{ 0xc901fcea, __VMLINUX_SYMBOL_STR(dvb_register_adapter) },
	{ 0xfd1fdf8e, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x2c256e1f, __VMLINUX_SYMBOL_STR(input_scancode_to_scalar) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x1a52eeee, __VMLINUX_SYMBOL_STR(input_unregister_device) },
	{ 0x92e3cae0, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xfb6f5fba, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0x33e12395, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x22f9223c, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x9909033d, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x967593fb, __VMLINUX_SYMBOL_STR(dvb_dmxdev_init) },
	{ 0xcede96b1, __VMLINUX_SYMBOL_STR(input_allocate_device) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rc-core,dvb-core";


MODULE_INFO(srcversion, "AEA35B78E3BA551C53125F7");
