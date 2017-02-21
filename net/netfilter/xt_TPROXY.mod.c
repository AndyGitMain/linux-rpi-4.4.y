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
	{ 0x76107b6b, __VMLINUX_SYMBOL_STR(xt_unregister_targets) },
	{ 0x95195c60, __VMLINUX_SYMBOL_STR(xt_register_targets) },
	{ 0x6eb85693, __VMLINUX_SYMBOL_STR(nf_defrag_ipv6_enable) },
	{ 0x6b6c3d10, __VMLINUX_SYMBOL_STR(nf_defrag_ipv4_enable) },
	{ 0xbdc51646, __VMLINUX_SYMBOL_STR(__inet_lookup_listener) },
	{ 0x96ce9f25, __VMLINUX_SYMBOL_STR(__inet_lookup_established) },
	{ 0x4da78a96, __VMLINUX_SYMBOL_STR(udp4_lib_lookup) },
	{ 0xee9c3647, __VMLINUX_SYMBOL_STR(tcp_hashinfo) },
	{ 0x3dca76b, __VMLINUX_SYMBOL_STR(inet_twsk_deschedule_put) },
	{ 0x89e34d09, __VMLINUX_SYMBOL_STR(inet6_lookup_listener) },
	{ 0x590b03be, __VMLINUX_SYMBOL_STR(inet_twsk_put) },
	{ 0x2c5c6cda, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0xdb1a2a29, __VMLINUX_SYMBOL_STR(__inet6_lookup_established) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xa60324cb, __VMLINUX_SYMBOL_STR(udp6_lib_lookup) },
	{ 0xc1d80c28, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0x91223fca, __VMLINUX_SYMBOL_STR(ipv6_find_hdr) },
	{ 0x1f7fc912, __VMLINUX_SYMBOL_STR(sock_edemux) },
	{ 0x2e44d9fc, __VMLINUX_SYMBOL_STR(sock_gen_put) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=x_tables,nf_defrag_ipv6,nf_defrag_ipv4,ipv6";


MODULE_INFO(srcversion, "8CC000D015F2730D68DD5D8");
