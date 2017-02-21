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
	{ 0x155826b2, __VMLINUX_SYMBOL_STR(udp6_set_csum) },
	{ 0xded69195, __VMLINUX_SYMBOL_STR(sock_release) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x28c64091, __VMLINUX_SYMBOL_STR(sock_create_kern) },
	{ 0xf2923ffa, __VMLINUX_SYMBOL_STR(kernel_setsockopt) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x39673177, __VMLINUX_SYMBOL_STR(kernel_connect) },
	{ 0x258da6b6, __VMLINUX_SYMBOL_STR(kernel_sock_shutdown) },
	{ 0x20b12b4f, __VMLINUX_SYMBOL_STR(kernel_bind) },
	{ 0x30456453, __VMLINUX_SYMBOL_STR(ip6_local_out) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "804CA7961BD5DD851150598");
