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
	{ 0xd90e0f90, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0xad7ce9b0, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x4d0d5ab0, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x348e8271, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xb8b5974, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x27683889, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x556e4390, __VMLINUX_SYMBOL_STR(clk_get_rate) },
	{ 0xee4502db, __VMLINUX_SYMBOL_STR(i2c_add_numbered_adapter) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x79c5a9f0, __VMLINUX_SYMBOL_STR(ioremap) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x1bf56330, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xfd1fdf8e, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x815588a6, __VMLINUX_SYMBOL_STR(clk_enable) },
	{ 0x7c9a7371, __VMLINUX_SYMBOL_STR(clk_prepare) },
	{ 0x74795e8e, __VMLINUX_SYMBOL_STR(clk_get) },
	{ 0x6e532d2f, __VMLINUX_SYMBOL_STR(platform_get_irq) },
	{ 0xae9d90ab, __VMLINUX_SYMBOL_STR(platform_get_resource) },
	{ 0xffaa9a00, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0xd318dc3b, __VMLINUX_SYMBOL_STR(of_alias_get_id) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xbd7da979, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x7cf9099, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xd4669fad, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x2e1ca751, __VMLINUX_SYMBOL_STR(clk_put) },
	{ 0xb077e70a, __VMLINUX_SYMBOL_STR(clk_unprepare) },
	{ 0xb6e6d99d, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0xd0dd2559, __VMLINUX_SYMBOL_STR(i2c_del_adapter) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cbrcm,bcm2708-i2c*");

MODULE_INFO(srcversion, "0C1F4F8690E98B7CEAABAE5");
