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
	{ 0x4d0d5ab0, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x348e8271, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x5e3c68ff, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0x56f5ce8e, __VMLINUX_SYMBOL_STR(arizona_clk32k_enable) },
	{ 0xbc8cb4fd, __VMLINUX_SYMBOL_STR(device_property_present) },
	{ 0x349e01fa, __VMLINUX_SYMBOL_STR(device_property_read_u32_array) },
	{ 0xba1309a6, __VMLINUX_SYMBOL_STR(gpiod_get_optional) },
	{ 0x21c33a3f, __VMLINUX_SYMBOL_STR(arizona_request_irq) },
	{ 0x4f5de93c, __VMLINUX_SYMBOL_STR(pm_runtime_enable) },
	{ 0xc6d91913, __VMLINUX_SYMBOL_STR(input_set_capability) },
	{ 0xa3dbab24, __VMLINUX_SYMBOL_STR(devm_gpio_request_one) },
	{ 0x100f88ab, __VMLINUX_SYMBOL_STR(devm_input_allocate_device) },
	{ 0x66041832, __VMLINUX_SYMBOL_STR(devm_extcon_dev_register) },
	{ 0xb615e8b8, __VMLINUX_SYMBOL_STR(devm_extcon_dev_allocate) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x45f768a8, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xe582a165, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x20563baa, __VMLINUX_SYMBOL_STR(__pm_runtime_idle) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xa51e983c, __VMLINUX_SYMBOL_STR(extcon_get_cable_state_) },
	{ 0xf7e55eb1, __VMLINUX_SYMBOL_STR(gpiod_set_value_cansleep) },
	{ 0xc151d399, __VMLINUX_SYMBOL_STR(gpiod_set_raw_value_cansleep) },
	{ 0xaf631f5f, __VMLINUX_SYMBOL_STR(gpio_to_desc) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0x47884890, __VMLINUX_SYMBOL_STR(system_power_efficient_wq) },
	{ 0x3f616ce2, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0x9bab6d43, __VMLINUX_SYMBOL_STR(extcon_update_state) },
	{ 0xa5a3b82a, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0x64d22431, __VMLINUX_SYMBOL_STR(regmap_read) },
	{ 0xb361a269, __VMLINUX_SYMBOL_STR(extcon_set_cable_state_) },
	{ 0xbd7da979, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xfcd7c87c, __VMLINUX_SYMBOL_STR(regmap_write) },
	{ 0xf21e40e2, __VMLINUX_SYMBOL_STR(__pm_runtime_suspend) },
	{ 0xc3bb3aa4, __VMLINUX_SYMBOL_STR(regmap_update_bits_check) },
	{ 0xa24c8064, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0x49a2dc62, __VMLINUX_SYMBOL_STR(snd_soc_dapm_disable_pin) },
	{ 0x94c7a338, __VMLINUX_SYMBOL_STR(snd_soc_dapm_sync) },
	{ 0x12971c63, __VMLINUX_SYMBOL_STR(snd_soc_dapm_force_enable_pin) },
	{ 0x1bf56330, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x85d23016, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x3934a77b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xe6752342, __VMLINUX_SYMBOL_STR(arizona_clk32k_disable) },
	{ 0x4c29dcbf, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x4a92b45, __VMLINUX_SYMBOL_STR(arizona_free_irq) },
	{ 0x47c89a1d, __VMLINUX_SYMBOL_STR(arizona_set_irq_wake) },
	{ 0x27d975b8, __VMLINUX_SYMBOL_STR(regmap_update_bits) },
	{ 0xf6ee1824, __VMLINUX_SYMBOL_STR(__pm_runtime_disable) },
	{ 0x3cc4f0fd, __VMLINUX_SYMBOL_STR(gpiod_put) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=extcon,snd-soc-core";


MODULE_INFO(srcversion, "01E31161C7FDFB072EC14F1");
