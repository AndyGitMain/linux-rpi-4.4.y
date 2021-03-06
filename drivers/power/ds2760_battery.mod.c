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
	{ 0xd90e0f90, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x4d0d5ab0, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x348e8271, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x75cccde0, __VMLINUX_SYMBOL_STR(dev_notice) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xbd7da979, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x3f616ce2, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x139ba09e, __VMLINUX_SYMBOL_STR(power_supply_register) },
	{ 0xe582a165, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xba6d56ab, __VMLINUX_SYMBOL_STR(w1_ds2760_recall_eeprom) },
	{ 0x3f335a50, __VMLINUX_SYMBOL_STR(w1_ds2760_store_eeprom) },
	{ 0xfd17404f, __VMLINUX_SYMBOL_STR(w1_ds2760_write) },
	{ 0x1bf45d74, __VMLINUX_SYMBOL_STR(power_supply_am_i_supplied) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x1bf56330, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0xf1768fd2, __VMLINUX_SYMBOL_STR(w1_ds2760_read) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0xb65f7f3d, __VMLINUX_SYMBOL_STR(power_supply_get_drvdata) },
	{ 0xa45463a4, __VMLINUX_SYMBOL_STR(power_supply_unregister) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x4c29dcbf, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x1a1c4082, __VMLINUX_SYMBOL_STR(mod_delayed_work_on) },
	{ 0xad830a50, __VMLINUX_SYMBOL_STR(power_supply_changed) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=w1_ds2760";


MODULE_INFO(srcversion, "B6DC6865C0F30BD9B1310CE");
