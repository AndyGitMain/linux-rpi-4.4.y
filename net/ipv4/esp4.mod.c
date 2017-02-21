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
	{ 0xd4cf71cd, __VMLINUX_SYMBOL_STR(xfrm_input) },
	{ 0x9d11bb70, __VMLINUX_SYMBOL_STR(xfrm4_rcv) },
	{ 0xbb59c7e5, __VMLINUX_SYMBOL_STR(xfrm4_protocol_deregister) },
	{ 0x489c30a, __VMLINUX_SYMBOL_STR(xfrm_unregister_type) },
	{ 0xcb3fe7a3, __VMLINUX_SYMBOL_STR(xfrm4_protocol_register) },
	{ 0x696f4522, __VMLINUX_SYMBOL_STR(xfrm_register_type) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xa6e66685, __VMLINUX_SYMBOL_STR(xfrm_aalg_get_byname) },
	{ 0x406a42d9, __VMLINUX_SYMBOL_STR(crypto_aead_setauthsize) },
	{ 0xaf6d3754, __VMLINUX_SYMBOL_STR(crypto_aead_setkey) },
	{ 0x73175cbb, __VMLINUX_SYMBOL_STR(crypto_alloc_aead) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x4c907557, __VMLINUX_SYMBOL_STR(pskb_put) },
	{ 0x47bf98c, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x418f917, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x27df1485, __VMLINUX_SYMBOL_STR(skb_to_sgvec) },
	{ 0xf88c3301, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0xe210b58b, __VMLINUX_SYMBOL_STR(skb_cow_data) },
	{ 0x6bacd242, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0x4cc42be, __VMLINUX_SYMBOL_STR(xfrm_input_resume) },
	{ 0x80ec3f48, __VMLINUX_SYMBOL_STR(___pskb_trim) },
	{ 0x95b55d4b, __VMLINUX_SYMBOL_STR(km_new_mapping) },
	{ 0xc1d80c28, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x611312a7, __VMLINUX_SYMBOL_STR(xfrm_output_resume) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x76a65f5c, __VMLINUX_SYMBOL_STR(ipv4_update_pmtu) },
	{ 0x58a64d60, __VMLINUX_SYMBOL_STR(__xfrm_state_destroy) },
	{ 0x28000bbc, __VMLINUX_SYMBOL_STR(ipv4_redirect) },
	{ 0x3dceb212, __VMLINUX_SYMBOL_STR(xfrm_state_lookup) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "53A1581F2BB6C271940148A");
