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
	{ 0x3d6f33ed, __VMLINUX_SYMBOL_STR(crypto_spawn_tfm) },
	{ 0xf40b2297, __VMLINUX_SYMBOL_STR(__crypto_memneq) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xd5152710, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x3db91586, __VMLINUX_SYMBOL_STR(scatterwalk_done) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x8810ad5e, __VMLINUX_SYMBOL_STR(crypto_xor) },
	{ 0xab18e6bd, __VMLINUX_SYMBOL_STR(scatterwalk_map) },
	{ 0x599d0cb6, __VMLINUX_SYMBOL_STR(scatterwalk_start) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xfd39f8b8, __VMLINUX_SYMBOL_STR(crypto_grab_skcipher) },
	{ 0x9fce7db7, __VMLINUX_SYMBOL_STR(crypto_init_spawn) },
	{ 0x8a2c0d5e, __VMLINUX_SYMBOL_STR(crypto_mod_put) },
	{ 0x9d4da9d5, __VMLINUX_SYMBOL_STR(crypto_alg_mod_lookup) },
	{ 0xb8b5974, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x489fca21, __VMLINUX_SYMBOL_STR(aead_register_instance) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x35aa220f, __VMLINUX_SYMBOL_STR(crypto_drop_spawn) },
	{ 0xc1cb303c, __VMLINUX_SYMBOL_STR(crypto_grab_aead) },
	{ 0xfd1fdf8e, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9a11a0fc, __VMLINUX_SYMBOL_STR(crypto_attr_alg_name) },
	{ 0x124f2056, __VMLINUX_SYMBOL_STR(crypto_get_attr_type) },
	{ 0xd85fc206, __VMLINUX_SYMBOL_STR(crypto_spawn_tfm2) },
	{ 0x6bacd242, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0xaf6d3754, __VMLINUX_SYMBOL_STR(crypto_aead_setkey) },
	{ 0x406a42d9, __VMLINUX_SYMBOL_STR(crypto_aead_setauthsize) },
	{ 0x404482a6, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x607f18e2, __VMLINUX_SYMBOL_STR(scatterwalk_ffwd) },
	{ 0xf88c3301, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0x91dda801, __VMLINUX_SYMBOL_STR(scatterwalk_map_and_copy) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "06783F4D49B6CD6B5D7915B");
