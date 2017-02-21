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
	{ 0xe76cb153, __VMLINUX_SYMBOL_STR(ip_tunnel_get_link_net) },
	{ 0x27b9a18c, __VMLINUX_SYMBOL_STR(ip_tunnel_dellink) },
	{ 0xad7ce9b0, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x34419820, __VMLINUX_SYMBOL_STR(ip_tunnel_get_iflink) },
	{ 0xfd31064, __VMLINUX_SYMBOL_STR(ip_tunnel_get_stats64) },
	{ 0xf4666c21, __VMLINUX_SYMBOL_STR(ip_tunnel_change_mtu) },
	{ 0x7d26e871, __VMLINUX_SYMBOL_STR(ip_tunnel_uninit) },
	{ 0xf587fec7, __VMLINUX_SYMBOL_STR(rtnl_link_unregister) },
	{ 0x2a55a707, __VMLINUX_SYMBOL_STR(unregister_pernet_device) },
	{ 0xfe8349c4, __VMLINUX_SYMBOL_STR(xfrm4_tunnel_deregister) },
	{ 0x3c85c92f, __VMLINUX_SYMBOL_STR(rtnl_link_register) },
	{ 0xccd9b51d, __VMLINUX_SYMBOL_STR(xfrm4_tunnel_register) },
	{ 0xe056c907, __VMLINUX_SYMBOL_STR(register_pernet_device) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xff23689c, __VMLINUX_SYMBOL_STR(ip_tunnel_init_net) },
	{ 0x30014c94, __VMLINUX_SYMBOL_STR(ip_tunnel_delete_net) },
	{ 0xfc3ff21c, __VMLINUX_SYMBOL_STR(ip_tunnel_rcv) },
	{ 0xdc1d8de5, __VMLINUX_SYMBOL_STR(__xfrm_policy_check) },
	{ 0xd9f1831d, __VMLINUX_SYMBOL_STR(iptunnel_pull_header) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x28000bbc, __VMLINUX_SYMBOL_STR(ipv4_redirect) },
	{ 0x76a65f5c, __VMLINUX_SYMBOL_STR(ipv4_update_pmtu) },
	{ 0xbcd5f746, __VMLINUX_SYMBOL_STR(ip_tunnel_lookup) },
	{ 0x6e052935, __VMLINUX_SYMBOL_STR(ip_tunnel_init) },
	{ 0x44de3d4c, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xac0b01f, __VMLINUX_SYMBOL_STR(ip_tunnel_xmit) },
	{ 0x7676da74, __VMLINUX_SYMBOL_STR(iptunnel_handle_offloads) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0xef2ba817, __VMLINUX_SYMBOL_STR(ip_tunnel_ioctl) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0x7e913a87, __VMLINUX_SYMBOL_STR(ip_tunnel_setup) },
	{ 0x69ee9394, __VMLINUX_SYMBOL_STR(ip_tunnel_newlink) },
	{ 0xddac56ce, __VMLINUX_SYMBOL_STR(ip_tunnel_changelink) },
	{ 0x7cf8796e, __VMLINUX_SYMBOL_STR(ip_tunnel_encap_setup) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x66940955, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ip_tunnel,tunnel4";


MODULE_INFO(srcversion, "9BD9E415A4147CE33434DF3");
