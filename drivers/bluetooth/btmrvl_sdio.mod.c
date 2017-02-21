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
	{ 0x47faa073, __VMLINUX_SYMBOL_STR(sdio_unregister_driver) },
	{ 0x97869949, __VMLINUX_SYMBOL_STR(sdio_register_driver) },
	{ 0xb8b5974, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x22f9223c, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0xfd1fdf8e, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x92e3cae0, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x4c16dd67, __VMLINUX_SYMBOL_STR(sdio_set_block_size) },
	{ 0x2ac60cb, __VMLINUX_SYMBOL_STR(sdio_claim_irq) },
	{ 0xbf13ac7f, __VMLINUX_SYMBOL_STR(btmrvl_register_hdev) },
	{ 0x12df0051, __VMLINUX_SYMBOL_STR(btmrvl_add_card) },
	{ 0xa3142f7c, __VMLINUX_SYMBOL_STR(sdio_enable_func) },
	{ 0xe582a165, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0xe5801286, __VMLINUX_SYMBOL_STR(btmrvl_send_module_cfg_cmd) },
	{ 0x4e649077, __VMLINUX_SYMBOL_STR(btmrvl_remove_card) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x6d738531, __VMLINUX_SYMBOL_STR(btmrvl_interrupt) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xd0decb2a, __VMLINUX_SYMBOL_STR(sdio_writesb) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x23142072, __VMLINUX_SYMBOL_STR(btmrvl_check_evtpkt) },
	{ 0xd9437d4f, __VMLINUX_SYMBOL_STR(hci_recv_frame) },
	{ 0x44de3d4c, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x35cd30e4, __VMLINUX_SYMBOL_STR(btmrvl_process_event) },
	{ 0xf25661f7, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xfd8bdc76, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x23aacb45, __VMLINUX_SYMBOL_STR(sdio_readsb) },
	{ 0x2f316960, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xfefa4478, __VMLINUX_SYMBOL_STR(dev_coredumpv) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x40a9b349, __VMLINUX_SYMBOL_STR(vzalloc) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0xd7442057, __VMLINUX_SYMBOL_STR(bt_info) },
	{ 0x2d8d7ca5, __VMLINUX_SYMBOL_STR(sdio_readb) },
	{ 0x66e1dd57, __VMLINUX_SYMBOL_STR(sdio_f0_readb) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x1187b4e1, __VMLINUX_SYMBOL_STR(sdio_disable_func) },
	{ 0xc71ce22d, __VMLINUX_SYMBOL_STR(sdio_release_irq) },
	{ 0x1f18c69f, __VMLINUX_SYMBOL_STR(sdio_release_host) },
	{ 0xe0e23e20, __VMLINUX_SYMBOL_STR(sdio_writeb) },
	{ 0xa0b9e767, __VMLINUX_SYMBOL_STR(sdio_claim_host) },
	{ 0x9426a546, __VMLINUX_SYMBOL_STR(sdio_set_host_pm_flags) },
	{ 0xa2579bb0, __VMLINUX_SYMBOL_STR(btmrvl_enable_hs) },
	{ 0xebe816df, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0xd0a0a643, __VMLINUX_SYMBOL_STR(hci_suspend_dev) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x47022514, __VMLINUX_SYMBOL_STR(bt_err) },
	{ 0x45657a22, __VMLINUX_SYMBOL_STR(hci_resume_dev) },
	{ 0xd86056aa, __VMLINUX_SYMBOL_STR(sdio_get_host_pm_caps) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=btmrvl,bluetooth";

MODULE_ALIAS("sdio:c*v02DFd9105*");
MODULE_ALIAS("sdio:c*v02DFd911A*");
MODULE_ALIAS("sdio:c*v02DFd911B*");
MODULE_ALIAS("sdio:c*v02DFd912A*");
MODULE_ALIAS("sdio:c*v02DFd9136*");
MODULE_ALIAS("sdio:c*v02DFd912E*");
MODULE_ALIAS("sdio:c*v02DFd9142*");

MODULE_INFO(srcversion, "F41F02713BDBF9DD01A2AF8");
