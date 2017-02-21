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
	{ 0xb8b5974, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x4bb5c592, __VMLINUX_SYMBOL_STR(usbip_event_happened) },
	{ 0xd02753dc, __VMLINUX_SYMBOL_STR(usbip_header_correct_endian) },
	{ 0xa695be4, __VMLINUX_SYMBOL_STR(kernel_sendmsg) },
	{ 0xfdcdd090, __VMLINUX_SYMBOL_STR(sockfd_lookup) },
	{ 0xc4d972d8, __VMLINUX_SYMBOL_STR(usb_add_hcd) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x2d6d18c2, __VMLINUX_SYMBOL_STR(usb_remove_hcd) },
	{ 0xeaf9ac6c, __VMLINUX_SYMBOL_STR(usb_create_hcd) },
	{ 0x7dcafca7, __VMLINUX_SYMBOL_STR(usb_hcd_poll_rh_status) },
	{ 0x43622add, __VMLINUX_SYMBOL_STR(usbip_alloc_iso_desc_pdu) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xc5ba6f6f, __VMLINUX_SYMBOL_STR(usb_hcd_giveback_urb) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x3995c8b7, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0x66d8d454, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x348e8271, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xe6645663, __VMLINUX_SYMBOL_STR(usb_put_hcd) },
	{ 0x322999cb, __VMLINUX_SYMBOL_STR(usbip_event_add) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xe1ea0586, __VMLINUX_SYMBOL_STR(usbip_dump_header) },
	{ 0x77ae495d, __VMLINUX_SYMBOL_STR(usb_speed_string) },
	{ 0xe98149f4, __VMLINUX_SYMBOL_STR(usb_hcd_link_urb_to_ep) },
	{ 0xbd7da979, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0xf9964443, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0x1403bc31, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x258da6b6, __VMLINUX_SYMBOL_STR(kernel_sock_shutdown) },
	{ 0x7f53d3b4, __VMLINUX_SYMBOL_STR(usbip_stop_eh) },
	{ 0xfcb248a0, __VMLINUX_SYMBOL_STR(dev_attr_usbip_debug) },
	{ 0x3a249a9e, __VMLINUX_SYMBOL_STR(platform_device_unregister) },
	{ 0xc37c8396, __VMLINUX_SYMBOL_STR(fput) },
	{ 0x4afb2203, __VMLINUX_SYMBOL_STR(usbip_recv_iso) },
	{ 0x49051fde, __VMLINUX_SYMBOL_STR(usbip_pad_iso) },
	{ 0x1181adbb, __VMLINUX_SYMBOL_STR(usb_hcd_check_unlink_urb) },
	{ 0x27683889, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xba75b592, __VMLINUX_SYMBOL_STR(usbip_dump_urb) },
	{ 0x85fe5d9b, __VMLINUX_SYMBOL_STR(platform_device_register) },
	{ 0xb7c027d4, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0xabb129, __VMLINUX_SYMBOL_STR(usbip_recv) },
	{ 0x62f2205a, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xf511fcb6, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0xfd1fdf8e, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x19a304ba, __VMLINUX_SYMBOL_STR(usb_disabled) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xc29e2a3c, __VMLINUX_SYMBOL_STR(usbip_recv_xbuff) },
	{ 0x9856393, __VMLINUX_SYMBOL_STR(__put_task_struct) },
	{ 0x78b72f44, __VMLINUX_SYMBOL_STR(usbip_debug_flag) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x4d0d5ab0, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x3e81f09e, __VMLINUX_SYMBOL_STR(usb_hcd_unlink_urb_from_ep) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x5bb1fa21, __VMLINUX_SYMBOL_STR(usb_hcd_resume_root_hub) },
	{ 0xeeef6982, __VMLINUX_SYMBOL_STR(usbip_start_eh) },
	{ 0xdceae4db, __VMLINUX_SYMBOL_STR(usbip_pack_pdu) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbip-core";


MODULE_INFO(srcversion, "0ADE5E6B77BC88B5CABBCD4");
