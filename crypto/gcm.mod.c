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
	{ 0x63002e1e, __VMLINUX_SYMBOL_STR(crypto_unregister_template) },
	{ 0xa60e977a, __VMLINUX_SYMBOL_STR(crypto_register_template) },
	{ 0xd5152710, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0x7ed56dc4, __VMLINUX_SYMBOL_STR(crypto_ahash_finup) },
	{ 0xfd5683b9, __VMLINUX_SYMBOL_STR(wait_for_completion_interruptible) },
	{ 0x22b0f09f, __VMLINUX_SYMBOL_STR(crypto_ahash_setkey) },
	{ 0x7a4497db, __VMLINUX_SYMBOL_STR(kzfree) },
	{ 0xefdd2345, __VMLINUX_SYMBOL_STR(sg_init_one) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xd031e012, __VMLINUX_SYMBOL_STR(crypto_ahash_type) },
	{ 0xfd39f8b8, __VMLINUX_SYMBOL_STR(crypto_grab_skcipher) },
	{ 0x8a2c0d5e, __VMLINUX_SYMBOL_STR(crypto_mod_put) },
	{ 0xc4da54d9, __VMLINUX_SYMBOL_STR(crypto_init_ahash_spawn) },
	{ 0x107f0ed8, __VMLINUX_SYMBOL_STR(crypto_find_alg) },
	{ 0xb8b5974, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x489fca21, __VMLINUX_SYMBOL_STR(aead_register_instance) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xc1cb303c, __VMLINUX_SYMBOL_STR(crypto_grab_aead) },
	{ 0xfd1fdf8e, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9a11a0fc, __VMLINUX_SYMBOL_STR(crypto_attr_alg_name) },
	{ 0x124f2056, __VMLINUX_SYMBOL_STR(crypto_get_attr_type) },
	{ 0x3d6f33ed, __VMLINUX_SYMBOL_STR(crypto_spawn_tfm) },
	{ 0xd4669fad, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xf40b2297, __VMLINUX_SYMBOL_STR(__crypto_memneq) },
	{ 0x8810ad5e, __VMLINUX_SYMBOL_STR(crypto_xor) },
	{ 0x404482a6, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x607f18e2, __VMLINUX_SYMBOL_STR(scatterwalk_ffwd) },
	{ 0xf88c3301, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0x91dda801, __VMLINUX_SYMBOL_STR(scatterwalk_map_and_copy) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x35aa220f, __VMLINUX_SYMBOL_STR(crypto_drop_spawn) },
	{ 0x5bf5ecee, __VMLINUX_SYMBOL_STR(crypto_get_default_null_skcipher) },
	{ 0xd85fc206, __VMLINUX_SYMBOL_STR(crypto_spawn_tfm2) },
	{ 0x21cd536a, __VMLINUX_SYMBOL_STR(crypto_put_default_null_skcipher) },
	{ 0x6bacd242, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0xaf6d3754, __VMLINUX_SYMBOL_STR(crypto_aead_setkey) },
	{ 0x406a42d9, __VMLINUX_SYMBOL_STR(crypto_aead_setauthsize) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "8FAE74AF2D2EADD80BE0C39");
