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
	{ 0x9a89fd49, __VMLINUX_SYMBOL_STR(crypto_attr_alg2) },
	{ 0xb8b5974, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xcf76a6f4, __VMLINUX_SYMBOL_STR(ahash_register_instance) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xe0b05d94, __VMLINUX_SYMBOL_STR(shash_attr_alg) },
	{ 0x8a2c0d5e, __VMLINUX_SYMBOL_STR(crypto_mod_put) },
	{ 0x415a3049, __VMLINUX_SYMBOL_STR(crypto_ablkcipher_type) },
	{ 0xba88dbb8, __VMLINUX_SYMBOL_STR(crypto_dequeue_request) },
	{ 0x9a11a0fc, __VMLINUX_SYMBOL_STR(crypto_attr_alg_name) },
	{ 0x501ff19b, __VMLINUX_SYMBOL_STR(shash_ahash_digest) },
	{ 0x63002e1e, __VMLINUX_SYMBOL_STR(crypto_unregister_template) },
	{ 0xd3f57a2, __VMLINUX_SYMBOL_STR(_find_next_bit_le) },
	{ 0x50c89f23, __VMLINUX_SYMBOL_STR(__alloc_percpu) },
	{ 0x9fce7db7, __VMLINUX_SYMBOL_STR(crypto_init_spawn) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xc7832041, __VMLINUX_SYMBOL_STR(crypto_shash_final) },
	{ 0x3d6f33ed, __VMLINUX_SYMBOL_STR(crypto_spawn_tfm) },
	{ 0x6c1d8890, __VMLINUX_SYMBOL_STR(shash_ahash_finup) },
	{ 0xc9ec4e21, __VMLINUX_SYMBOL_STR(free_percpu) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0xc1cb303c, __VMLINUX_SYMBOL_STR(crypto_grab_aead) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0xa60e977a, __VMLINUX_SYMBOL_STR(crypto_register_template) },
	{ 0x3ef00f25, __VMLINUX_SYMBOL_STR(crypto_register_instance) },
	{ 0x6489e36c, __VMLINUX_SYMBOL_STR(crypto_shash_setkey) },
	{ 0x499043d3, __VMLINUX_SYMBOL_STR(crypto_init_queue) },
	{ 0x35aa220f, __VMLINUX_SYMBOL_STR(crypto_drop_spawn) },
	{ 0xaf6d3754, __VMLINUX_SYMBOL_STR(crypto_aead_setkey) },
	{ 0x124f2056, __VMLINUX_SYMBOL_STR(crypto_get_attr_type) },
	{ 0xb9de2b18, __VMLINUX_SYMBOL_STR(crypto_enqueue_request) },
	{ 0xd3e6f60d, __VMLINUX_SYMBOL_STR(cpu_possible_mask) },
	{ 0x6bacd242, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0x2ce98559, __VMLINUX_SYMBOL_STR(kcrypto_wq) },
	{ 0xfd1fdf8e, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x341dbfa3, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0x406a42d9, __VMLINUX_SYMBOL_STR(crypto_aead_setauthsize) },
	{ 0x73175cbb, __VMLINUX_SYMBOL_STR(crypto_alloc_aead) },
	{ 0x31b9195c, __VMLINUX_SYMBOL_STR(__local_bh_disable_ip) },
	{ 0xd85fc206, __VMLINUX_SYMBOL_STR(crypto_spawn_tfm2) },
	{ 0x2a0f10ff, __VMLINUX_SYMBOL_STR(crypto_init_shash_spawn) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x73c843d0, __VMLINUX_SYMBOL_STR(shash_ahash_update) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x69760c4c, __VMLINUX_SYMBOL_STR(crypto_alloc_base) },
	{ 0x489fca21, __VMLINUX_SYMBOL_STR(aead_register_instance) },
	{ 0xae90c54, __VMLINUX_SYMBOL_STR(crypto_alloc_ahash) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "4892CD1949CAD30CC23EDAA");
