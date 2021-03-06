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
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xfe009c06, __VMLINUX_SYMBOL_STR(hrtimer_forward) },
	{ 0x11025677, __VMLINUX_SYMBOL_STR(hrtimer_cancel) },
	{ 0x5ef85d47, __VMLINUX_SYMBOL_STR(snd_timer_global_new) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x2e742b00, __VMLINUX_SYMBOL_STR(hrtimer_start_range_ns) },
	{ 0x406c4cb1, __VMLINUX_SYMBOL_STR(hrtimer_resolution) },
	{ 0xfd1fdf8e, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xd0859a80, __VMLINUX_SYMBOL_STR(snd_timer_interrupt) },
	{ 0x192441c6, __VMLINUX_SYMBOL_STR(hrtimer_init) },
	{ 0x99474e6e, __VMLINUX_SYMBOL_STR(snd_timer_global_register) },
	{ 0x82dd6e42, __VMLINUX_SYMBOL_STR(hrtimer_try_to_cancel) },
	{ 0xb3c4b8b0, __VMLINUX_SYMBOL_STR(snd_timer_global_free) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-timer";


MODULE_INFO(srcversion, "5CD962FC48E784D04EBA3BA");
