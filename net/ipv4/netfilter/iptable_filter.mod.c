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
	{ 0xad7ce9b0, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x43b3e59e, __VMLINUX_SYMBOL_STR(xt_hook_unlink) },
	{ 0x3286ca03, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x4f0bea4e, __VMLINUX_SYMBOL_STR(xt_hook_link) },
	{ 0xf885a403, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x1f88e2ef, __VMLINUX_SYMBOL_STR(ipt_do_table) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x6206d28e, __VMLINUX_SYMBOL_STR(ipt_register_table) },
	{ 0x2e1f26c, __VMLINUX_SYMBOL_STR(ipt_alloc_initial_table) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x8a397b6c, __VMLINUX_SYMBOL_STR(ipt_unregister_table) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=x_tables,ip_tables";


MODULE_INFO(srcversion, "09182DFC1C02302622F9AB6");
