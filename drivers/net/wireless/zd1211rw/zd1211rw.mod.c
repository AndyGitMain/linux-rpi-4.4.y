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
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x17312e92, __VMLINUX_SYMBOL_STR(ieee80211_rx_irqsafe) },
	{ 0xb8b5974, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x405c1144, __VMLINUX_SYMBOL_STR(get_seconds) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0xef66075c, __VMLINUX_SYMBOL_STR(usb_wait_anchor_empty_timeout) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xa26145e0, __VMLINUX_SYMBOL_STR(ieee80211_beacon_get_tim) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xcb84ccee, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0xa574c4f9, __VMLINUX_SYMBOL_STR(usb_reset_configuration) },
	{ 0x1d254dce, __VMLINUX_SYMBOL_STR(ieee80211_unregister_hw) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x72d771aa, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x4c29dcbf, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x85d23016, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xd697e69a, __VMLINUX_SYMBOL_STR(trace_hardirqs_on) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xfb3f27bf, __VMLINUX_SYMBOL_STR(skb_unlink) },
	{ 0xd91a7230, __VMLINUX_SYMBOL_STR(ieee80211_stop_queues) },
	{ 0x7603c531, __VMLINUX_SYMBOL_STR(usb_unanchor_urb) },
	{ 0xac36cda1, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xbd7da979, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xa4bc8397, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x9520fcfe, __VMLINUX_SYMBOL_STR(ieee80211_alloc_hw_nm) },
	{ 0x45f768a8, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x1a1c4082, __VMLINUX_SYMBOL_STR(mod_delayed_work_on) },
	{ 0xb6ed0e16, __VMLINUX_SYMBOL_STR(ieee80211_wake_queues) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0x65e07d0b, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x418f917, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x3934a77b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0xf25661f7, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x891035f7, __VMLINUX_SYMBOL_STR(usb_free_coherent) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0x45cf35a1, __VMLINUX_SYMBOL_STR(usb_queue_reset_device) },
	{ 0x565cc1a1, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0x27683889, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x15597bd3, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xd1f0a011, __VMLINUX_SYMBOL_STR(usb_kill_anchored_urbs) },
	{ 0x3f616ce2, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x104547e4, __VMLINUX_SYMBOL_STR(usb_reset_device) },
	{ 0x54166c1d, __VMLINUX_SYMBOL_STR(usb_bulk_msg) },
	{ 0x60c7ca9f, __VMLINUX_SYMBOL_STR(ieee80211_tx_status_irqsafe) },
	{ 0x44de3d4c, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x9c858c25, __VMLINUX_SYMBOL_STR(ieee80211_get_buffered_bc) },
	{ 0xa9d64a8e, __VMLINUX_SYMBOL_STR(usb_interrupt_msg) },
	{ 0xfd1fdf8e, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xd2d84e46, __VMLINUX_SYMBOL_STR(usb_get_intf) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x45d32331, __VMLINUX_SYMBOL_STR(ieee80211_register_hw) },
	{ 0x1eb9516e, __VMLINUX_SYMBOL_STR(round_jiffies_relative) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x83ca91ac, __VMLINUX_SYMBOL_STR(regulatory_hint) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xf9e73082, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0x58963f53, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x92e3cae0, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x918e3224, __VMLINUX_SYMBOL_STR(ieee80211_free_hw) },
	{ 0x714ec84, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0x1bf56330, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xd4669fad, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x7de45305, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xfb6f5fba, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0xfd8bdc76, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x7cf9099, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0x33e12395, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x22f9223c, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0xeda52ea6, __VMLINUX_SYMBOL_STR(usb_anchor_urb) },
	{ 0x9909033d, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0xb016d03d, __VMLINUX_SYMBOL_STR(usb_put_intf) },
	{ 0xe388e89c, __VMLINUX_SYMBOL_STR(ieee80211_queue_stopped) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mac80211,cfg80211";

MODULE_ALIAS("usb:v0105p145Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p3401d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p3402d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p3407d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p3409d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v079Bp004Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p6001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0ACEp1211d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0ACEpA211d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p170Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B3Bp1630d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B3Bp5630d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p9071d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p9075d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v126FpA006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v129Bp1666d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p001Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1435p0711d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14EApAB10d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14EApAB13d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v157Ep300Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v157Ep300Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v157Ep3204d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v157Ep3207d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1740p2000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v6891pA727d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0053p5301d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0409p0248d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p00DAd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p1236d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p1237d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp705Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v054Cp0257d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p340Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p340Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p3410d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p3412d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p3413d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v079Bp0062d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p6001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07FAp1196d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083Ap4505d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083ApE501d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083ApE503d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083ApE506d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0ACEp1215d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0ACEpB215d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p171Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BAFp0121d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CDEp001Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0036d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v129Bp1667d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p0024d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v157Ep300Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1582p6003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019p5303d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pED01d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0ACEp2011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0ACEp20FFd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "C04537F7102EA7D9CDC80F1");
