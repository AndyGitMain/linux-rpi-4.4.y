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
	{ 0xe0e23e20, __VMLINUX_SYMBOL_STR(sdio_writeb) },
	{ 0x2d8d7ca5, __VMLINUX_SYMBOL_STR(sdio_readb) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xb8b5974, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xac895760, __VMLINUX_SYMBOL_STR(mwifiex_cancel_hs) },
	{ 0xd0decb2a, __VMLINUX_SYMBOL_STR(sdio_writesb) },
	{ 0xa3142f7c, __VMLINUX_SYMBOL_STR(sdio_enable_func) },
	{ 0x2ac60cb, __VMLINUX_SYMBOL_STR(sdio_claim_irq) },
	{ 0xf0c0773f, __VMLINUX_SYMBOL_STR(mmc_hw_reset) },
	{ 0x1afae5e7, __VMLINUX_SYMBOL_STR(down_interruptible) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x937fd9d2, __VMLINUX_SYMBOL_STR(mwifiex_disable_auto_ds) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x72d771aa, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x9eab74bf, __VMLINUX_SYMBOL_STR(mwifiex_process_sleep_confirm_resp) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x5e187744, __VMLINUX_SYMBOL_STR(mwifiex_main_process) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xd86056aa, __VMLINUX_SYMBOL_STR(sdio_get_host_pm_caps) },
	{ 0x10694b05, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x4162c783, __VMLINUX_SYMBOL_STR(_mwifiex_dbg) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xe4d024e2, __VMLINUX_SYMBOL_STR(mwifiex_add_card) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0xf25661f7, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x31bd9748, __VMLINUX_SYMBOL_STR(mwifiex_alloc_dma_align_buf) },
	{ 0x23aacb45, __VMLINUX_SYMBOL_STR(sdio_readsb) },
	{ 0x47faa073, __VMLINUX_SYMBOL_STR(sdio_unregister_driver) },
	{ 0x9426a546, __VMLINUX_SYMBOL_STR(sdio_set_host_pm_flags) },
	{ 0x565cc1a1, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0xc71ce22d, __VMLINUX_SYMBOL_STR(sdio_release_irq) },
	{ 0x66e1dd57, __VMLINUX_SYMBOL_STR(sdio_f0_readb) },
	{ 0xfd1fdf8e, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x4be7fb63, __VMLINUX_SYMBOL_STR(up) },
	{ 0xc56b1ae3, __VMLINUX_SYMBOL_STR(mwifiex_handle_rx_packet) },
	{ 0x6cfec08e, __VMLINUX_SYMBOL_STR(mwifiex_deauthenticate_all) },
	{ 0xdab7180e, __VMLINUX_SYMBOL_STR(mwifiex_remove_card) },
	{ 0xcbfa968c, __VMLINUX_SYMBOL_STR(mwifiex_enable_hs) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xcdd24bbd, __VMLINUX_SYMBOL_STR(mwifiex_upload_device_dump) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x97869949, __VMLINUX_SYMBOL_STR(sdio_register_driver) },
	{ 0xa0b9e767, __VMLINUX_SYMBOL_STR(sdio_claim_host) },
	{ 0x5f02e9db, __VMLINUX_SYMBOL_STR(mwifiex_drv_info_dump) },
	{ 0xfd8bdc76, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x44497ed1, __VMLINUX_SYMBOL_STR(mwifiex_init_shutdown_fw) },
	{ 0x4c16dd67, __VMLINUX_SYMBOL_STR(sdio_set_block_size) },
	{ 0x1187b4e1, __VMLINUX_SYMBOL_STR(sdio_disable_func) },
	{ 0x1f18c69f, __VMLINUX_SYMBOL_STR(sdio_release_host) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mwifiex";

MODULE_ALIAS("sdio:c*v02DFd9116*");
MODULE_ALIAS("sdio:c*v02DFd9119*");
MODULE_ALIAS("sdio:c*v02DFd9129*");
MODULE_ALIAS("sdio:c*v02DFd912D*");
MODULE_ALIAS("sdio:c*v02DFd9135*");
MODULE_ALIAS("sdio:c*v02DFd9139*");
MODULE_ALIAS("sdio:c*v02DFd9141*");

MODULE_INFO(srcversion, "9A22339DEBDD9B867F6763D");
