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
	{ 0x1a01ff13, __VMLINUX_SYMBOL_STR(bus_register) },
	{ 0xb8b5974, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x63f46561, __VMLINUX_SYMBOL_STR(driver_register) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x776fbc8a, __VMLINUX_SYMBOL_STR(device_release_driver) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x85d23016, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xd697e69a, __VMLINUX_SYMBOL_STR(trace_hardirqs_on) },
	{ 0x131db64a, __VMLINUX_SYMBOL_STR(system_long_wq) },
	{ 0x1d9c427e, __VMLINUX_SYMBOL_STR(device_bind_driver) },
	{ 0xc892d754, __VMLINUX_SYMBOL_STR(device_del) },
	{ 0xbd7da979, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x5fb7e91b, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x45f768a8, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xeec4978e, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x3934a77b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xce704cc9, __VMLINUX_SYMBOL_STR(device_attach) },
	{ 0x9e314d5e, __VMLINUX_SYMBOL_STR(device_add) },
	{ 0x764a0981, __VMLINUX_SYMBOL_STR(bus_unregister) },
	{ 0xc85e7638, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0xa3291d10, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0xfd1fdf8e, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x1fd5faa, __VMLINUX_SYMBOL_STR(__module_get) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x4a0ff26f, __VMLINUX_SYMBOL_STR(device_initialize) },
	{ 0x1bf56330, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x156c77e7, __VMLINUX_SYMBOL_STR(driver_attach) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x78b2e9f8, __VMLINUX_SYMBOL_STR(dev_set_name) },
	{ 0xa6bb3e82, __VMLINUX_SYMBOL_STR(driver_find) },
	{ 0xd7945ba, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0x6c07d933, __VMLINUX_SYMBOL_STR(add_uevent_var) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "DA3FD97D8D02D2AB9D0BF64");
