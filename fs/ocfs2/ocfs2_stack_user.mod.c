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
	{ 0xb8b5974, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x528c709d, __VMLINUX_SYMBOL_STR(simple_read_from_buffer) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x5a2528ee, __VMLINUX_SYMBOL_STR(dlm_posix_lock) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0x85d23016, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x9321df95, __VMLINUX_SYMBOL_STR(dlm_lock) },
	{ 0xda4f7c38, __VMLINUX_SYMBOL_STR(dlm_posix_get) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x1fab5905, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x238c90c9, __VMLINUX_SYMBOL_STR(misc_register) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x72ca664a, __VMLINUX_SYMBOL_STR(default_llseek) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x3934a77b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xb5670854, __VMLINUX_SYMBOL_STR(ocfs2_stack_glue_unregister) },
	{ 0xec44f86b, __VMLINUX_SYMBOL_STR(ocfs2_stack_glue_register) },
	{ 0xd0c05159, __VMLINUX_SYMBOL_STR(emergency_restart) },
	{ 0x3efec60f, __VMLINUX_SYMBOL_STR(dlm_posix_unlock) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xcf9f3328, __VMLINUX_SYMBOL_STR(dlm_release_lockspace) },
	{ 0xfd1fdf8e, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xdc583c08, __VMLINUX_SYMBOL_STR(dlm_unlock) },
	{ 0xc6dc8c2f, __VMLINUX_SYMBOL_STR(dlm_new_lockspace) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xb742fd7, __VMLINUX_SYMBOL_STR(simple_strtol) },
	{ 0xd4669fad, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x255b6fac, __VMLINUX_SYMBOL_STR(misc_deregister) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dlm,ocfs2_stackglue";


MODULE_INFO(srcversion, "41E92D40B8FD3D5455F31E3");
