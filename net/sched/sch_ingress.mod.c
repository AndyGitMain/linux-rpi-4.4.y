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
	{ 0xd6331e7a, __VMLINUX_SYMBOL_STR(unregister_qdisc) },
	{ 0xff70565a, __VMLINUX_SYMBOL_STR(register_qdisc) },
	{ 0x2c3054f9, __VMLINUX_SYMBOL_STR(net_inc_ingress_queue) },
	{ 0x46013233, __VMLINUX_SYMBOL_STR(net_dec_ingress_queue) },
	{ 0x884811ff, __VMLINUX_SYMBOL_STR(tcf_destroy_chain) },
	{ 0x66940955, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "A23DFCC846A636A28B94AC8");
