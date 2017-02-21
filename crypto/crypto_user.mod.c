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
	{ 0xf9c3bc7c, __VMLINUX_SYMBOL_STR(netlink_kernel_release) },
	{ 0xdf1f7a49, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0xf99d5aa6, __VMLINUX_SYMBOL_STR(__netlink_kernel_create) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x4f391d0e, __VMLINUX_SYMBOL_STR(nla_parse) },
	{ 0x2101766e, __VMLINUX_SYMBOL_STR(__netlink_dump_start) },
	{ 0x9d4da9d5, __VMLINUX_SYMBOL_STR(crypto_alg_mod_lookup) },
	{ 0x60592a3b, __VMLINUX_SYMBOL_STR(crypto_lookup_skcipher) },
	{ 0x2027ea6b, __VMLINUX_SYMBOL_STR(crypto_unregister_instance) },
	{ 0x3de9cae1, __VMLINUX_SYMBOL_STR(crypto_remove_final) },
	{ 0xba398182, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0x3ce8e478, __VMLINUX_SYMBOL_STR(crypto_remove_spawns) },
	{ 0xa7546ca, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0xde823516, __VMLINUX_SYMBOL_STR(netlink_unicast) },
	{ 0x8a2c0d5e, __VMLINUX_SYMBOL_STR(crypto_mod_put) },
	{ 0x2f316960, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xd9ce8f0c, __VMLINUX_SYMBOL_STR(strnlen) },
	{ 0x89c49ec3, __VMLINUX_SYMBOL_STR(crypto_alg_sem) },
	{ 0xa0630c6b, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0xbdaf03c6, __VMLINUX_SYMBOL_STR(crypto_mod_get) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x3c3c6611, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0x457594fa, __VMLINUX_SYMBOL_STR(crypto_alg_list) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x10694b05, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xf68d004, __VMLINUX_SYMBOL_STR(__nlmsg_put) },
	{ 0x66940955, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x5bd0748f, __VMLINUX_SYMBOL_STR(crypto_del_default_rng) },
	{ 0xf31213df, __VMLINUX_SYMBOL_STR(netlink_capable) },
	{ 0x85d23016, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xd5d0a89e, __VMLINUX_SYMBOL_STR(netlink_rcv_skb) },
	{ 0x3934a77b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "DE5515E6F79F088345E0949");
