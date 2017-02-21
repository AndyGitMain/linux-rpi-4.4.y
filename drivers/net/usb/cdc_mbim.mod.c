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
	{ 0x563d3c83, __VMLINUX_SYMBOL_STR(usbnet_disconnect) },
	{ 0xa48fc907, __VMLINUX_SYMBOL_STR(usbnet_probe) },
	{ 0xc654194e, __VMLINUX_SYMBOL_STR(usbnet_tx_timeout) },
	{ 0x1771b00a, __VMLINUX_SYMBOL_STR(cdc_ncm_change_mtu) },
	{ 0x56804d49, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0xa7c13f9d, __VMLINUX_SYMBOL_STR(eth_mac_addr) },
	{ 0x33b3f1ed, __VMLINUX_SYMBOL_STR(usbnet_start_xmit) },
	{ 0x2da6846e, __VMLINUX_SYMBOL_STR(usbnet_stop) },
	{ 0x5724e936, __VMLINUX_SYMBOL_STR(usbnet_open) },
	{ 0xa4bc8397, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x58963f53, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xbce02304, __VMLINUX_SYMBOL_STR(usb_match_id) },
	{ 0x6835df49, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0x1fba23aa, __VMLINUX_SYMBOL_STR(usb_cdc_wdm_register) },
	{ 0x8914d5f3, __VMLINUX_SYMBOL_STR(cdc_ncm_bind_common) },
	{ 0x64b176b9, __VMLINUX_SYMBOL_STR(cdc_ncm_select_altsetting) },
	{ 0xec71637d, __VMLINUX_SYMBOL_STR(usbnet_suspend) },
	{ 0xc492bfab, __VMLINUX_SYMBOL_STR(usbnet_resume) },
	{ 0x7e5a4268, __VMLINUX_SYMBOL_STR(cdc_ncm_unbind) },
	{ 0x295f82c9, __VMLINUX_SYMBOL_STR(usb_autopm_put_interface) },
	{ 0xa6d37fb9, __VMLINUX_SYMBOL_STR(usb_autopm_get_interface) },
	{ 0x2ba558f6, __VMLINUX_SYMBOL_STR(ipv6_stub) },
	{ 0xef293f3d, __VMLINUX_SYMBOL_STR(in6_dev_finish_destroy) },
	{ 0x610dcb5b, __VMLINUX_SYMBOL_STR(__vlan_find_dev_deep_rcu) },
	{ 0xd542439, __VMLINUX_SYMBOL_STR(__ipv6_addr_type) },
	{ 0x4eec0745, __VMLINUX_SYMBOL_STR(usbnet_skb_return) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xfd8bdc76, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xac36cda1, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x8458990c, __VMLINUX_SYMBOL_STR(cdc_ncm_rx_verify_ndp16) },
	{ 0xbd1a49c5, __VMLINUX_SYMBOL_STR(cdc_ncm_rx_verify_nth16) },
	{ 0x5c56bfad, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x1b6d164c, __VMLINUX_SYMBOL_STR(cdc_ncm_fill_tx_frame) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xf25661f7, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x72d771aa, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cdc_ncm,cdc-wdm";

MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v0BDBp*d*dc*dsc*dp*ic02isc0Eip00in*");
MODULE_ALIAS("usb:v12D1p*d*dc*dsc*dp*ic02isc0Eip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc0Eip00in*");

MODULE_INFO(srcversion, "3D61EE6588F01F19A2EC4DD");
