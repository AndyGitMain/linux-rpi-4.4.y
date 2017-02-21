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
	{ 0xcacf8075, __VMLINUX_SYMBOL_STR(mmc_gpio_get_cd) },
	{ 0x7fb1c99c, __VMLINUX_SYMBOL_STR(mmc_gpio_get_ro) },
	{ 0xeec4978e, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0xd05d6167, __VMLINUX_SYMBOL_STR(__spi_register_driver) },
	{ 0xb8b5974, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x9d9da777, __VMLINUX_SYMBOL_STR(mmc_gpio_request_ro) },
	{ 0xe2307bf, __VMLINUX_SYMBOL_STR(mmc_gpiod_request_cd_irq) },
	{ 0x29779142, __VMLINUX_SYMBOL_STR(mmc_gpio_request_cd) },
	{ 0x27683889, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xa940ac15, __VMLINUX_SYMBOL_STR(mmc_add_host) },
	{ 0x5ded4ff, __VMLINUX_SYMBOL_STR(mmc_spi_get_pdata) },
	{ 0x1997ed7f, __VMLINUX_SYMBOL_STR(mmc_alloc_host) },
	{ 0xfd1fdf8e, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x404482a6, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x294ef97, __VMLINUX_SYMBOL_STR(mmc_request_done) },
	{ 0x85069121, __VMLINUX_SYMBOL_STR(spi_bus_unlock) },
	{ 0xf5b4a948, __VMLINUX_SYMBOL_STR(crc_itu_t) },
	{ 0x10d5868e, __VMLINUX_SYMBOL_STR(flush_kernel_dcache_page) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0xf1969a8e, __VMLINUX_SYMBOL_STR(__usecs_to_jiffies) },
	{ 0x952291f2, __VMLINUX_SYMBOL_STR(spi_bus_lock) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x66213969, __VMLINUX_SYMBOL_STR(crc7_be) },
	{ 0x1bf56330, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xbd7da979, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x46ac8384, __VMLINUX_SYMBOL_STR(spi_sync) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xd0c30848, __VMLINUX_SYMBOL_STR(spi_setup) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x4381d73e, __VMLINUX_SYMBOL_STR(spi_sync_locked) },
	{ 0xc671cca0, __VMLINUX_SYMBOL_STR(mmc_detect_change) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x1c792a04, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0x2939c38b, __VMLINUX_SYMBOL_STR(mmc_spi_put_pdata) },
	{ 0x900d8bb1, __VMLINUX_SYMBOL_STR(mmc_free_host) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xec372062, __VMLINUX_SYMBOL_STR(mmc_remove_host) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=of_mmc_spi,crc7";

MODULE_ALIAS("of:N*T*Cmmc-spi-slot*");

MODULE_INFO(srcversion, "41C02BF26A68E9141F1239E");
