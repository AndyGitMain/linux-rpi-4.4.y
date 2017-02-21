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
	{ 0xb830ec02, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0x706d051c, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0xdf1f7a49, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x3c471b8, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x17ceb1ef, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0xaede3d98, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0x29df810e, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0x9a7b55af, __VMLINUX_SYMBOL_STR(alloc_netdev_mqs) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x7de45305, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x59d8223a, __VMLINUX_SYMBOL_STR(ioport_resource) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x9bce482f, __VMLINUX_SYMBOL_STR(__release_region) },
	{ 0xadf42bd5, __VMLINUX_SYMBOL_STR(__request_region) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x54be2cdd, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0xfd8bdc76, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xac36cda1, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x72d771aa, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x714ec84, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0xfb1282f3, __VMLINUX_SYMBOL_STR(ax25_ip_xmit) },
	{ 0x565cc1a1, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0xb8b5974, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x22f9223c, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0xfd1fdf8e, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x3a249a9e, __VMLINUX_SYMBOL_STR(platform_device_unregister) },
	{ 0x92e3cae0, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x183357e7, __VMLINUX_SYMBOL_STR(platform_device_register_full) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xa735db59, __VMLINUX_SYMBOL_STR(prandom_u32) },
	{ 0x1bb31047, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0x32653dd7, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xefe13262, __VMLINUX_SYMBOL_STR(seq_open) },
	{ 0xaeb7451e, __VMLINUX_SYMBOL_STR(ax25_defaddr) },
	{ 0xac93ae05, __VMLINUX_SYMBOL_STR(ax25_bcast) },
	{ 0x72ef4a3d, __VMLINUX_SYMBOL_STR(ax25_header_ops) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ax25";


MODULE_INFO(srcversion, "6657B217497F3326C4CE191");
