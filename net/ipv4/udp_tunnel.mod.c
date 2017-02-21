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
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xded69195, __VMLINUX_SYMBOL_STR(sock_release) },
	{ 0xa9166ab1, __VMLINUX_SYMBOL_STR(metadata_dst_alloc) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x28c64091, __VMLINUX_SYMBOL_STR(sock_create_kern) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x39673177, __VMLINUX_SYMBOL_STR(kernel_connect) },
	{ 0xba367ad9, __VMLINUX_SYMBOL_STR(iptunnel_xmit) },
	{ 0x258da6b6, __VMLINUX_SYMBOL_STR(kernel_sock_shutdown) },
	{ 0x99517682, __VMLINUX_SYMBOL_STR(udp_encap_enable) },
	{ 0x2ba558f6, __VMLINUX_SYMBOL_STR(ipv6_stub) },
	{ 0xe878de4f, __VMLINUX_SYMBOL_STR(udp_set_csum) },
	{ 0x20b12b4f, __VMLINUX_SYMBOL_STR(kernel_bind) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "F8F56A46D6FB9F1702501C0");
