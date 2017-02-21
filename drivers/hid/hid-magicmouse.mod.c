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
	{ 0xd9a5d07d, __VMLINUX_SYMBOL_STR(param_get_uint) },
	{ 0x7b6b7ef8, __VMLINUX_SYMBOL_STR(hid_unregister_driver) },
	{ 0x5aab954d, __VMLINUX_SYMBOL_STR(__hid_register_driver) },
	{ 0x546a599a, __VMLINUX_SYMBOL_STR(hid_disconnect) },
	{ 0x6ff259a5, __VMLINUX_SYMBOL_STR(hid_register_report) },
	{ 0xcce45ff3, __VMLINUX_SYMBOL_STR(hid_connect) },
	{ 0x13d1d5ae, __VMLINUX_SYMBOL_STR(hid_open_report) },
	{ 0xe582a165, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x1bf56330, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x86bd076, __VMLINUX_SYMBOL_STR(input_mt_report_pointer_emulation) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xdc9dfbb3, __VMLINUX_SYMBOL_STR(input_mt_report_slot_state) },
	{ 0xa5a3b82a, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0xcae74265, __VMLINUX_SYMBOL_STR(input_alloc_absinfo) },
	{ 0xe6214982, __VMLINUX_SYMBOL_STR(input_set_abs_params) },
	{ 0xbd7da979, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xb7c712b8, __VMLINUX_SYMBOL_STR(input_mt_init_slots) },
	{ 0x996bdb64, __VMLINUX_SYMBOL_STR(_kstrtoul) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("hid:b0005g*v000005ACp0000030D");
MODULE_ALIAS("hid:b0005g*v000005ACp0000030E");

MODULE_INFO(srcversion, "6EEA67C7805C442DB3354C8");
