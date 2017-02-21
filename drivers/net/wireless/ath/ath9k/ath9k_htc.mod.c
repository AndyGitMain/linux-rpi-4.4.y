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
	{ 0x370e8565, __VMLINUX_SYMBOL_STR(ieee80211_rx_napi) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x84d7948c, __VMLINUX_SYMBOL_STR(ath9k_hw_set_txq_props) },
	{ 0x7acef08, __VMLINUX_SYMBOL_STR(ieee80211_csa_finish) },
	{ 0xdee72241, __VMLINUX_SYMBOL_STR(ath9k_hw_init) },
	{ 0xb8b5974, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xb4519c16, __VMLINUX_SYMBOL_STR(ath9k_cmn_get_channel) },
	{ 0x3e05f82d, __VMLINUX_SYMBOL_STR(ath9k_hw_deinit) },
	{ 0xba71aef8, __VMLINUX_SYMBOL_STR(ath9k_hw_cfg_output) },
	{ 0x1494ad7b, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x776fbc8a, __VMLINUX_SYMBOL_STR(device_release_driver) },
	{ 0xb4337390, __VMLINUX_SYMBOL_STR(ath9k_hw_set_gpio) },
	{ 0xeae093e4, __VMLINUX_SYMBOL_STR(ath9k_cmn_init_crypto) },
	{  0xb250a, __VMLINUX_SYMBOL_STR(ieee80211_queue_work) },
	{ 0x85007295, __VMLINUX_SYMBOL_STR(ath9k_cmn_process_rate) },
	{ 0xbbbd54dc, __VMLINUX_SYMBOL_STR(led_classdev_register) },
	{ 0x6d3c84bb, __VMLINUX_SYMBOL_STR(ieee80211_csa_is_complete) },
	{ 0xd3dbfbc4, __VMLINUX_SYMBOL_STR(_find_first_zero_bit_le) },
	{ 0xa7fb81b, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_enable) },
	{ 0x385aadb3, __VMLINUX_SYMBOL_STR(ath9k_hw_wait) },
	{ 0x5190b8ed, __VMLINUX_SYMBOL_STR(ath9k_cmn_get_hw_crypto_keytype) },
	{ 0xa5a5083a, __VMLINUX_SYMBOL_STR(ath9k_hw_stopdmarecv) },
	{ 0x8eccb285, __VMLINUX_SYMBOL_STR(ath_key_delete) },
	{ 0x297a0a32, __VMLINUX_SYMBOL_STR(ath9k_cmn_update_txpow) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x7ef39823, __VMLINUX_SYMBOL_STR(ieee80211_hdrlen) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xa26145e0, __VMLINUX_SYMBOL_STR(ieee80211_beacon_get_tim) },
	{ 0x1277ddec, __VMLINUX_SYMBOL_STR(ath9k_hw_gpio_get) },
	{ 0x275934b3, __VMLINUX_SYMBOL_STR(ath_regd_init) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xcb84ccee, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x1d254dce, __VMLINUX_SYMBOL_STR(ieee80211_unregister_hw) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x72d771aa, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x4c29dcbf, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x85d23016, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xc96a71ad, __VMLINUX_SYMBOL_STR(ieee80211_iterate_active_interfaces_atomic) },
	{ 0x5589a9fe, __VMLINUX_SYMBOL_STR(ath9k_hw_setrxfilter) },
	{ 0x2148f4a8, __VMLINUX_SYMBOL_STR(ath9k_hw_get_txq_props) },
	{ 0xeaa359, __VMLINUX_SYMBOL_STR(ath9k_hw_releasetxqueue) },
	{ 0x2d60bf97, __VMLINUX_SYMBOL_STR(ath9k_hw_reset_tsf) },
	{ 0x30cc88d1, __VMLINUX_SYMBOL_STR(wiphy_rfkill_start_polling) },
	{ 0x74176c6d, __VMLINUX_SYMBOL_STR(ath9k_cmn_reload_chainmask) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x1f732064, __VMLINUX_SYMBOL_STR(ath9k_cmn_init_channels_rates) },
	{ 0x10694b05, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xd91a7230, __VMLINUX_SYMBOL_STR(ieee80211_stop_queues) },
	{ 0x7603c531, __VMLINUX_SYMBOL_STR(usb_unanchor_urb) },
	{ 0x81f3afb, __VMLINUX_SYMBOL_STR(complete_all) },
	{ 0xac36cda1, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x9c47c795, __VMLINUX_SYMBOL_STR(ieee80211_tx_status) },
	{ 0x21613072, __VMLINUX_SYMBOL_STR(ath_printk) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x60812513, __VMLINUX_SYMBOL_STR(ath9k_hw_setopmode) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x1fab5905, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0xc4018afd, __VMLINUX_SYMBOL_STR(ath9k_hw_disable) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x706d051c, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x701a9fe2, __VMLINUX_SYMBOL_STR(ath9k_hw_resettxqueue) },
	{ 0x85ae575c, __VMLINUX_SYMBOL_STR(ath9k_hw_gettsf64) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x8b9c242f, __VMLINUX_SYMBOL_STR(ath_cmn_process_fft) },
	{ 0xbd7da979, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0xa4bc8397, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x9520fcfe, __VMLINUX_SYMBOL_STR(ieee80211_alloc_hw_nm) },
	{ 0x45f768a8, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x1a78cdaa, __VMLINUX_SYMBOL_STR(ath9k_hw_set_sta_beacon_timers) },
	{ 0xdc467034, __VMLINUX_SYMBOL_STR(ath9k_hw_set_tsfadjust) },
	{ 0xa0656231, __VMLINUX_SYMBOL_STR(ath9k_cmn_beacon_config_ap) },
	{ 0xb6ed0e16, __VMLINUX_SYMBOL_STR(ieee80211_wake_queues) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0x4638e338, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_disable) },
	{ 0x131c623b, __VMLINUX_SYMBOL_STR(ath9k_hw_getrxfilter) },
	{ 0xdb72a461, __VMLINUX_SYMBOL_STR(ath9k_hw_ani_monitor) },
	{ 0x220e2dd8, __VMLINUX_SYMBOL_STR(ath_is_mybeacon) },
	{ 0x2eba7923, __VMLINUX_SYMBOL_STR(ath9k_cmn_beacon_config_adhoc) },
	{ 0x65e07d0b, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0xdb87e93d, __VMLINUX_SYMBOL_STR(ath9k_cmn_process_rssi) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0xaafdb617, __VMLINUX_SYMBOL_STR(ath_is_world_regd) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x418f917, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x3934a77b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0x16e5c2a, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0xf25661f7, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x6335a9a4, __VMLINUX_SYMBOL_STR(wiphy_rfkill_stop_polling) },
	{ 0x1b39b015, __VMLINUX_SYMBOL_STR(request_firmware_nowait) },
	{ 0x374bdae9, __VMLINUX_SYMBOL_STR(ath9k_hw_write_associd) },
	{ 0xa220cbfa, __VMLINUX_SYMBOL_STR(ieee80211_queue_delayed_work) },
	{ 0x97bd76c5, __VMLINUX_SYMBOL_STR(ath_reg_notifier_apply) },
	{ 0x9949c57d, __VMLINUX_SYMBOL_STR(wiphy_to_ieee80211_hw) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0x8f8a60ef, __VMLINUX_SYMBOL_STR(ath9k_hw_init_btcoex_hw) },
	{ 0x843483d, __VMLINUX_SYMBOL_STR(ieee80211_stop_tx_ba_cb_irqsafe) },
	{ 0x565cc1a1, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0x2c4392dd, __VMLINUX_SYMBOL_STR(ath9k_hw_beaconq_setup) },
	{ 0x27683889, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x15597bd3, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xbe745032, __VMLINUX_SYMBOL_STR(ath9k_hw_name) },
	{ 0x2a821118, __VMLINUX_SYMBOL_STR(ath9k_cmn_spectral_scan_trigger) },
	{ 0xf9272cda, __VMLINUX_SYMBOL_STR(ath9k_hw_init_global_settings) },
	{ 0x2f316960, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xb7c027d4, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0xd1f0a011, __VMLINUX_SYMBOL_STR(usb_kill_anchored_urbs) },
	{ 0xe47bc674, __VMLINUX_SYMBOL_STR(ath9k_hw_settsf64) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xe137de54, __VMLINUX_SYMBOL_STR(wiphy_rfkill_set_hw_state) },
	{ 0x54166c1d, __VMLINUX_SYMBOL_STR(usb_bulk_msg) },
	{ 0x62f2205a, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0x86a4889a, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0x44de3d4c, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x93b5a06a, __VMLINUX_SYMBOL_STR(ath9k_hw_beaconinit) },
	{ 0x8c567761, __VMLINUX_SYMBOL_STR(ieee80211_find_sta) },
	{ 0x9c858c25, __VMLINUX_SYMBOL_STR(ieee80211_get_buffered_bc) },
	{ 0xa9d64a8e, __VMLINUX_SYMBOL_STR(usb_interrupt_msg) },
	{ 0xc87962a4, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_bt_stomp) },
	{ 0xfd1a2de, __VMLINUX_SYMBOL_STR(ath9k_hw_setrxabort) },
	{ 0x605199c0, __VMLINUX_SYMBOL_STR(ath9k_cmn_beacon_config_sta) },
	{ 0xfd1fdf8e, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x2001596a, __VMLINUX_SYMBOL_STR(ath_hw_setbssidmask) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x4577b6af, __VMLINUX_SYMBOL_STR(ath9k_cmn_rx_skb_postprocess) },
	{ 0xfc00efe4, __VMLINUX_SYMBOL_STR(ath9k_hw_phy_disable) },
	{ 0xc1bccd1, __VMLINUX_SYMBOL_STR(__ieee80211_get_radio_led_name) },
	{ 0x1cb0fca8, __VMLINUX_SYMBOL_STR(ieee80211_get_hdrlen_from_skb) },
	{ 0x7cf2c4d9, __VMLINUX_SYMBOL_STR(ath9k_hw_setpower) },
	{ 0xf879f3e6, __VMLINUX_SYMBOL_STR(__ieee80211_create_tpt_led_trigger) },
	{ 0x45d32331, __VMLINUX_SYMBOL_STR(ieee80211_register_hw) },
	{ 0x45c5163c, __VMLINUX_SYMBOL_STR(led_classdev_unregister) },
	{ 0xac1eed7c, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_set_weight) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x83ca91ac, __VMLINUX_SYMBOL_STR(regulatory_hint) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xa447c885, __VMLINUX_SYMBOL_STR(ath9k_hw_setmcastfilter) },
	{ 0x7df02556, __VMLINUX_SYMBOL_STR(ieee80211_start_tx_ba_session) },
	{ 0xd8abd394, __VMLINUX_SYMBOL_STR(ath9k_hw_startpcureceive) },
	{ 0xd3ab3065, __VMLINUX_SYMBOL_STR(ath9k_hw_setuptxqueue) },
	{ 0x58963f53, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x92e3cae0, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0xf3fc1620, __VMLINUX_SYMBOL_STR(ath9k_hw_reset) },
	{ 0x918e3224, __VMLINUX_SYMBOL_STR(ieee80211_free_hw) },
	{ 0x92413bd0, __VMLINUX_SYMBOL_STR(ath9k_cmn_rx_accept) },
	{ 0x714ec84, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0x9f2238f8, __VMLINUX_SYMBOL_STR(usb_ifnum_to_if) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xd4669fad, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x997e4f17, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_init_3wire) },
	{ 0xe5893f9d, __VMLINUX_SYMBOL_STR(ath_key_config) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0xfd8bdc76, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x7cf9099, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0xd90e0f90, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x61aaedf0, __VMLINUX_SYMBOL_STR(ath9k_hw_reset_calvalid) },
	{ 0x33e12395, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x22f9223c, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0xb02435cb, __VMLINUX_SYMBOL_STR(ieee80211_start_tx_ba_cb_irqsafe) },
	{ 0xeda52ea6, __VMLINUX_SYMBOL_STR(usb_anchor_urb) },
	{ 0x9909033d, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mac80211,ath9k_hw,ath9k_common,ath,cfg80211";

MODULE_ALIAS("usb:v0CF3p9271d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p1006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9030d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3A10d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3327d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3328d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3346d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3348d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3349d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3350d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CAp4605d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v040Dp3801d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3pB003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3pB002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp8403d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p209Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p7015d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1668p1200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p7010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9018d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083ApA704d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p017Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0197d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04DAp3904d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p20FFd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "95B3AD6001BFEBA3DD93FB7");
