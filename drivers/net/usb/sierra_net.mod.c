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
	{ 0xc492bfab, __VMLINUX_SYMBOL_STR(usbnet_resume) },
	{ 0xec71637d, __VMLINUX_SYMBOL_STR(usbnet_suspend) },
	{ 0x563d3c83, __VMLINUX_SYMBOL_STR(usbnet_disconnect) },
	{ 0x7d1c0296, __VMLINUX_SYMBOL_STR(usbnet_nway_reset) },
	{ 0x5141dc1c, __VMLINUX_SYMBOL_STR(usbnet_set_msglevel) },
	{ 0x523c1664, __VMLINUX_SYMBOL_STR(usbnet_get_msglevel) },
	{ 0xd97867fd, __VMLINUX_SYMBOL_STR(usbnet_set_settings) },
	{ 0xf76d36b2, __VMLINUX_SYMBOL_STR(usbnet_get_settings) },
	{ 0xc654194e, __VMLINUX_SYMBOL_STR(usbnet_tx_timeout) },
	{ 0x56804d49, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0xa7c13f9d, __VMLINUX_SYMBOL_STR(eth_mac_addr) },
	{ 0x33b3f1ed, __VMLINUX_SYMBOL_STR(usbnet_start_xmit) },
	{ 0x2da6846e, __VMLINUX_SYMBOL_STR(usbnet_stop) },
	{ 0x5724e936, __VMLINUX_SYMBOL_STR(usbnet_open) },
	{ 0xa4bc8397, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x58963f53, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x1bbeac80, __VMLINUX_SYMBOL_STR(usbnet_status_stop) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x90bd60a1, __VMLINUX_SYMBOL_STR(usbnet_status_start) },
	{ 0xa48fc907, __VMLINUX_SYMBOL_STR(usbnet_probe) },
	{ 0x706d051c, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0xe99c3d75, __VMLINUX_SYMBOL_STR(usbnet_link_change) },
	{ 0x65e07d0b, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x1bb31047, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0xc281283b, __VMLINUX_SYMBOL_STR(usbnet_write_cmd) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb8b5974, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xbd7da979, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x344388d8, __VMLINUX_SYMBOL_STR(usbnet_read_cmd) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x4c48d795, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0xfd1fdf8e, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x791eaa34, __VMLINUX_SYMBOL_STR(usbnet_get_endpoints) },
	{ 0x77e4d9e, __VMLINUX_SYMBOL_STR(usbnet_change_mtu) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x3faca1a4, __VMLINUX_SYMBOL_STR(usbnet_get_drvinfo) },
	{ 0xac04a623, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0xf25661f7, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x4eec0745, __VMLINUX_SYMBOL_STR(usbnet_skb_return) },
	{ 0x10694b05, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x72d771aa, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x5c56bfad, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0x418f917, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v1199p68A3d*dc*dsc*dp*ic*isc*ip*in07*");
MODULE_ALIAS("usb:v1199p68A3d*dc*dsc*dp*ic*isc*ip*in0A*");
MODULE_ALIAS("usb:v1199p68A3d*dc*dsc*dp*ic*isc*ip*in0B*");
MODULE_ALIAS("usb:v0F3Dp68A3d*dc*dsc*dp*ic*isc*ip*in07*");
MODULE_ALIAS("usb:v0F3Dp68A3d*dc*dsc*dp*ic*isc*ip*in0A*");
MODULE_ALIAS("usb:v0F3Dp68A3d*dc*dsc*dp*ic*isc*ip*in0B*");
MODULE_ALIAS("usb:v1199p68AAd*dc*dsc*dp*ic*isc*ip*in07*");
MODULE_ALIAS("usb:v1199p68AAd*dc*dsc*dp*ic*isc*ip*in0A*");
MODULE_ALIAS("usb:v1199p68AAd*dc*dsc*dp*ic*isc*ip*in0B*");
MODULE_ALIAS("usb:v0F3Dp68AAd*dc*dsc*dp*ic*isc*ip*in07*");
MODULE_ALIAS("usb:v0F3Dp68AAd*dc*dsc*dp*ic*isc*ip*in0A*");
MODULE_ALIAS("usb:v0F3Dp68AAd*dc*dsc*dp*ic*isc*ip*in0B*");

MODULE_INFO(srcversion, "896313DAA9C61C842F37412");