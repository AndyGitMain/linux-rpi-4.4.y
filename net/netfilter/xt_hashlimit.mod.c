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
	{ 0xe2b77c92, __VMLINUX_SYMBOL_STR(seq_release) },
	{ 0x4273b3a, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0xc5bced1a, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x5d4057fc, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0xf499fdb2, __VMLINUX_SYMBOL_STR(rcu_barrier_bh) },
	{ 0x3286ca03, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x1a448585, __VMLINUX_SYMBOL_STR(xt_unregister_matches) },
	{ 0x3186554c, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x70689c0d, __VMLINUX_SYMBOL_STR(xt_register_matches) },
	{ 0xf885a403, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x4c29dcbf, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0xa56b31fe, __VMLINUX_SYMBOL_STR(PDE_DATA) },
	{ 0xefe13262, __VMLINUX_SYMBOL_STR(seq_open) },
	{ 0xf429c507, __VMLINUX_SYMBOL_STR(proc_mkdir) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0xbd8fa8f, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xc1d80c28, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0x65933010, __VMLINUX_SYMBOL_STR(ipv6_skip_exthdr) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x31b9195c, __VMLINUX_SYMBOL_STR(__local_bh_disable_ip) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xde9360ba, __VMLINUX_SYMBOL_STR(totalram_pages) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xaede3d98, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0xc499ae1e, __VMLINUX_SYMBOL_STR(kstrdup) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x47884890, __VMLINUX_SYMBOL_STR(system_power_efficient_wq) },
	{ 0x3f616ce2, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0xb8b5974, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xfd1fdf8e, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x32653dd7, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x7e927f92, __VMLINUX_SYMBOL_STR(call_rcu_bh) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x3d9f7f62, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x85d23016, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x3934a77b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xb830ec02, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=x_tables";


MODULE_INFO(srcversion, "08135C4A7728F946A898936");
