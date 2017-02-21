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
	{ 0xc135a948, __VMLINUX_SYMBOL_STR(dev_queue_xmit) },
	{ 0xc6fe777a, __VMLINUX_SYMBOL_STR(ovs_netdev_tunnel_destroy) },
	{ 0xe1e29f6, __VMLINUX_SYMBOL_STR(ovs_vport_ops_unregister) },
	{ 0xb489caa3, __VMLINUX_SYMBOL_STR(__ovs_vport_ops_register) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x5f3b4a87, __VMLINUX_SYMBOL_STR(ovs_vport_free) },
	{ 0x46e86148, __VMLINUX_SYMBOL_STR(ovs_netdev_link) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0x1485cd9e, __VMLINUX_SYMBOL_STR(dev_change_flags) },
	{ 0xf49ba9dc, __VMLINUX_SYMBOL_STR(gretap_fb_dev_create) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0x5d525b23, __VMLINUX_SYMBOL_STR(ovs_vport_alloc) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=openvswitch,ip_gre";


MODULE_INFO(srcversion, "A4455AB407AE7569E81E791");