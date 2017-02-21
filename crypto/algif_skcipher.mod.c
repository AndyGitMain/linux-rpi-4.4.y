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
	{ 0x73379edd, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0xe0675ebf, __VMLINUX_SYMBOL_STR(sock_no_getsockopt) },
	{ 0xcc35c946, __VMLINUX_SYMBOL_STR(sock_no_setsockopt) },
	{ 0xd666c6c5, __VMLINUX_SYMBOL_STR(sock_no_shutdown) },
	{ 0xde0cbdfd, __VMLINUX_SYMBOL_STR(sock_no_listen) },
	{ 0x24c7dd92, __VMLINUX_SYMBOL_STR(sock_no_ioctl) },
	{ 0xbd9f60c6, __VMLINUX_SYMBOL_STR(sock_no_getname) },
	{ 0xf761994f, __VMLINUX_SYMBOL_STR(sock_no_accept) },
	{ 0x5083d6d6, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0x719ffc96, __VMLINUX_SYMBOL_STR(sock_no_connect) },
	{ 0x3f2c8a9b, __VMLINUX_SYMBOL_STR(sock_no_bind) },
	{ 0x266bb023, __VMLINUX_SYMBOL_STR(af_alg_release) },
	{ 0xb0967d31, __VMLINUX_SYMBOL_STR(af_alg_unregister_type) },
	{ 0xf1086f5d, __VMLINUX_SYMBOL_STR(af_alg_register_type) },
	{ 0xe704b0ad, __VMLINUX_SYMBOL_STR(af_alg_link_sg) },
	{ 0x606dc7cc, __VMLINUX_SYMBOL_STR(iov_iter_advance) },
	{ 0xd954ef95, __VMLINUX_SYMBOL_STR(af_alg_wait_for_completion) },
	{ 0xf498bf5b, __VMLINUX_SYMBOL_STR(af_alg_make_sg) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0xe5e85202, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0x404482a6, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x939648d0, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0xc4a0819e, __VMLINUX_SYMBOL_STR(copy_from_iter) },
	{ 0x8606ce92, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x17e504fc, __VMLINUX_SYMBOL_STR(af_alg_cmsg_send) },
	{ 0x9c68644, __VMLINUX_SYMBOL_STR(__get_page_tail) },
	{ 0x746be06d, __VMLINUX_SYMBOL_STR(sock_wake_async) },
	{ 0x2babe81f, __VMLINUX_SYMBOL_STR(__wake_up_sync_key) },
	{ 0xb8b5974, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd806f8ee, __VMLINUX_SYMBOL_STR(crypto_alloc_skcipher) },
	{ 0xfd1fdf8e, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x6bacd242, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0xd9e67753, __VMLINUX_SYMBOL_STR(af_alg_complete) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x79c832b5, __VMLINUX_SYMBOL_STR(af_alg_release_parent) },
	{ 0xac3afdc7, __VMLINUX_SYMBOL_STR(sock_kzfree_s) },
	{ 0x7a4497db, __VMLINUX_SYMBOL_STR(kzfree) },
	{ 0xd5152710, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0xfe33c6c3, __VMLINUX_SYMBOL_STR(sg_nents) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x46890c47, __VMLINUX_SYMBOL_STR(af_alg_free_sg) },
	{ 0xc3ee1344, __VMLINUX_SYMBOL_STR(sock_kfree_s) },
	{ 0x9583a120, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0xf88c3301, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0x3c70f410, __VMLINUX_SYMBOL_STR(sock_kmalloc) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x499cb58c, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x2c5c6cda, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x980aca46, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0x50e661b, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=af_alg";


MODULE_INFO(srcversion, "5B1D410639956981626366B");
