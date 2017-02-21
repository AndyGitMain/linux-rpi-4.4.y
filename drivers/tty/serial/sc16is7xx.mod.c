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
	{ 0x136c791, __VMLINUX_SYMBOL_STR(uart_unregister_driver) },
	{ 0xeec4978e, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x10782160, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0xd05d6167, __VMLINUX_SYMBOL_STR(__spi_register_driver) },
	{ 0x5d8f8ac3, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x7abd1da3, __VMLINUX_SYMBOL_STR(uart_register_driver) },
	{ 0xc004012e, __VMLINUX_SYMBOL_STR(spi_get_device_id) },
	{ 0xd69a1de3, __VMLINUX_SYMBOL_STR(__devm_regmap_init_spi) },
	{ 0xd0c30848, __VMLINUX_SYMBOL_STR(spi_setup) },
	{ 0x58c6855b, __VMLINUX_SYMBOL_STR(__devm_regmap_init_i2c) },
	{ 0x13ca3b16, __VMLINUX_SYMBOL_STR(of_match_device) },
	{ 0x955b0e2e, __VMLINUX_SYMBOL_STR(kthread_worker_fn) },
	{ 0x815588a6, __VMLINUX_SYMBOL_STR(clk_enable) },
	{ 0xee4faa30, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0x5c28699a, __VMLINUX_SYMBOL_STR(uart_add_one_port) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x49f87f88, __VMLINUX_SYMBOL_STR(gpiochip_add) },
	{ 0x10463f9b, __VMLINUX_SYMBOL_STR(sched_setscheduler) },
	{ 0xf511fcb6, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0x66d8d454, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x440c497d, __VMLINUX_SYMBOL_STR(__init_kthread_worker) },
	{ 0x556e4390, __VMLINUX_SYMBOL_STR(clk_get_rate) },
	{ 0x7c9a7371, __VMLINUX_SYMBOL_STR(clk_prepare) },
	{ 0x1887364e, __VMLINUX_SYMBOL_STR(devm_clk_get) },
	{ 0xe582a165, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0xea9ed05f, __VMLINUX_SYMBOL_STR(uart_update_timeout) },
	{ 0x3d1aa9db, __VMLINUX_SYMBOL_STR(uart_get_baud_rate) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xd799d966, __VMLINUX_SYMBOL_STR(do_SAK) },
	{ 0x1bf56330, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xcd9531c3, __VMLINUX_SYMBOL_STR(uart_handle_cts_change) },
	{ 0x23d10ab8, __VMLINUX_SYMBOL_STR(tty_flip_buffer_push) },
	{ 0x60528bcc, __VMLINUX_SYMBOL_STR(uart_insert_char) },
	{ 0xe2aa94cc, __VMLINUX_SYMBOL_STR(regmap_raw_read) },
	{ 0x72350130, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x6a7e9281, __VMLINUX_SYMBOL_STR(uart_write_wakeup) },
	{ 0xe090d2a8, __VMLINUX_SYMBOL_STR(regmap_raw_write) },
	{ 0xd848b13f, __VMLINUX_SYMBOL_STR(regcache_cache_bypass) },
	{ 0xfcd7c87c, __VMLINUX_SYMBOL_STR(regmap_write) },
	{ 0x64d22431, __VMLINUX_SYMBOL_STR(regmap_read) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xbd7da979, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x238b3879, __VMLINUX_SYMBOL_STR(queue_kthread_work) },
	{ 0x9b53ea1f, __VMLINUX_SYMBOL_STR(gpiochip_remove) },
	{ 0xb077e70a, __VMLINUX_SYMBOL_STR(clk_unprepare) },
	{ 0xb6e6d99d, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0xf9964443, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0x345bcb0f, __VMLINUX_SYMBOL_STR(flush_kthread_worker) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x1cfd144c, __VMLINUX_SYMBOL_STR(uart_remove_one_port) },
	{ 0x27d975b8, __VMLINUX_SYMBOL_STR(regmap_update_bits) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=regmap-spi,regmap-i2c";

MODULE_ALIAS("i2c:sc16is74x");
MODULE_ALIAS("i2c:sc16is740");
MODULE_ALIAS("i2c:sc16is741");
MODULE_ALIAS("i2c:sc16is750");
MODULE_ALIAS("i2c:sc16is752");
MODULE_ALIAS("i2c:sc16is760");
MODULE_ALIAS("i2c:sc16is762");
MODULE_ALIAS("spi:sc16is74x");
MODULE_ALIAS("spi:sc16is740");
MODULE_ALIAS("spi:sc16is741");
MODULE_ALIAS("spi:sc16is750");
MODULE_ALIAS("spi:sc16is752");
MODULE_ALIAS("spi:sc16is760");
MODULE_ALIAS("spi:sc16is762");
MODULE_ALIAS("of:N*T*Cnxp,sc16is740*");
MODULE_ALIAS("of:N*T*Cnxp,sc16is741*");
MODULE_ALIAS("of:N*T*Cnxp,sc16is750*");
MODULE_ALIAS("of:N*T*Cnxp,sc16is752*");
MODULE_ALIAS("of:N*T*Cnxp,sc16is760*");
MODULE_ALIAS("of:N*T*Cnxp,sc16is762*");

MODULE_INFO(srcversion, "2021DCD9C98A4797C2CB85D");
