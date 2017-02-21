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
	{ 0xd6e92e3f, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0xb8b5974, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x743f51ab, __VMLINUX_SYMBOL_STR(mii_ethtool_gset) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xb5ce0511, __VMLINUX_SYMBOL_STR(phy_disconnect) },
	{ 0xc492bfab, __VMLINUX_SYMBOL_STR(usbnet_resume) },
	{ 0x53e626f9, __VMLINUX_SYMBOL_STR(phy_stop) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xa48fc907, __VMLINUX_SYMBOL_STR(usbnet_probe) },
	{ 0xd97867fd, __VMLINUX_SYMBOL_STR(usbnet_set_settings) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0xe99c3d75, __VMLINUX_SYMBOL_STR(usbnet_link_change) },
	{ 0x353a6b7d, __VMLINUX_SYMBOL_STR(__mdiobus_register) },
	{ 0x563d3c83, __VMLINUX_SYMBOL_STR(usbnet_disconnect) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x52fc4733, __VMLINUX_SYMBOL_STR(generic_mii_ioctl) },
	{  0xed87a, __VMLINUX_SYMBOL_STR(phy_ethtool_gset) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x72d771aa, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x2da6846e, __VMLINUX_SYMBOL_STR(usbnet_stop) },
	{ 0x259eae39, __VMLINUX_SYMBOL_STR(usbnet_update_max_qlen) },
	{ 0x85d23016, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xc5bcbae6, __VMLINUX_SYMBOL_STR(mdiobus_unregister) },
	{ 0xac36cda1, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x25546db7, __VMLINUX_SYMBOL_STR(phy_start_aneg) },
	{ 0x4a719ca, __VMLINUX_SYMBOL_STR(phy_print_status) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x7d1c0296, __VMLINUX_SYMBOL_STR(usbnet_nway_reset) },
	{ 0xd065d86, __VMLINUX_SYMBOL_STR(phy_start) },
	{ 0x3aaff552, __VMLINUX_SYMBOL_STR(mii_nway_restart) },
	{ 0xa4bc8397, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x241f00ad, __VMLINUX_SYMBOL_STR(mdiobus_free) },
	{ 0x791eaa34, __VMLINUX_SYMBOL_STR(usbnet_get_endpoints) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x3faca1a4, __VMLINUX_SYMBOL_STR(usbnet_get_drvinfo) },
	{ 0x418f917, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x3934a77b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x6220b4a2, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0x33b3f1ed, __VMLINUX_SYMBOL_STR(usbnet_start_xmit) },
	{ 0xec71637d, __VMLINUX_SYMBOL_STR(usbnet_suspend) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x49ec28b, __VMLINUX_SYMBOL_STR(usbnet_get_link) },
	{ 0xf76d36b2, __VMLINUX_SYMBOL_STR(usbnet_get_settings) },
	{ 0x4a3b0c15, __VMLINUX_SYMBOL_STR(skb_copy_expand) },
	{ 0x344388d8, __VMLINUX_SYMBOL_STR(usbnet_read_cmd) },
	{ 0xc654194e, __VMLINUX_SYMBOL_STR(usbnet_tx_timeout) },
	{ 0x44de3d4c, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x5343bdd2, __VMLINUX_SYMBOL_STR(genphy_resume) },
	{ 0x4eec0745, __VMLINUX_SYMBOL_STR(usbnet_skb_return) },
	{ 0x5724e936, __VMLINUX_SYMBOL_STR(usbnet_open) },
	{ 0x40f86f70, __VMLINUX_SYMBOL_STR(mii_check_media) },
	{ 0x523c1664, __VMLINUX_SYMBOL_STR(usbnet_get_msglevel) },
	{ 0x5c56bfad, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0xfd1fdf8e, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x5a23001e, __VMLINUX_SYMBOL_STR(usbnet_unlink_rx_urbs) },
	{ 0x56804d49, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xee6fe6a1, __VMLINUX_SYMBOL_STR(usbnet_write_cmd_async) },
	{ 0x77e4d9e, __VMLINUX_SYMBOL_STR(usbnet_change_mtu) },
	{ 0x41084867, __VMLINUX_SYMBOL_STR(phy_connect) },
	{ 0x58963f53, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x21ea0a09, __VMLINUX_SYMBOL_STR(phy_mii_ioctl) },
	{ 0xb16ac020, __VMLINUX_SYMBOL_STR(phy_ethtool_sset) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x2a1581a7, __VMLINUX_SYMBOL_STR(mii_link_ok) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xfd8bdc76, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xa7c13f9d, __VMLINUX_SYMBOL_STR(eth_mac_addr) },
	{ 0xc281283b, __VMLINUX_SYMBOL_STR(usbnet_write_cmd) },
	{ 0x5141dc1c, __VMLINUX_SYMBOL_STR(usbnet_set_msglevel) },
	{ 0xbb7f2c7e, __VMLINUX_SYMBOL_STR(mdiobus_alloc_size) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libphy";

MODULE_ALIAS("usb:v077Bp2226d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p1040d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p1A00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p1720d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p420Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08DDp90FFd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08DDp0114d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0557p2009d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p003Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p006Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v6189p182Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0056d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p061Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AAp0017d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1189p0893d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1631p6200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F1p3008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17EFp7203d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p772Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p7720d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p1780d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0789p0160d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p0018d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1557p7720d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3C05d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3C05d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p1A02d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1737p0039d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp0930d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp5055d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp1402d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p772Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14EApAB11d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0pA877d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p7E2Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p172Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v066Bp20F9d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "6DC57650C94C15D43747D8F");
