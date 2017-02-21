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
	{ 0x234210, __VMLINUX_SYMBOL_STR(register_netdevice) },
	{ 0x609f1c7e, __VMLINUX_SYMBOL_STR(synchronize_net) },
	{ 0x6d662533, __VMLINUX_SYMBOL_STR(_find_first_bit_le) },
	{ 0x4ca52467, __VMLINUX_SYMBOL_STR(cfg80211_rx_unprot_mlme_mgmt) },
	{ 0xba1bd301, __VMLINUX_SYMBOL_STR(cfg80211_auth_timeout) },
	{ 0x92b57248, __VMLINUX_SYMBOL_STR(flush_work) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x5d4057fc, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0xd6e92e3f, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0xb8b5974, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf75dd4c4, __VMLINUX_SYMBOL_STR(cfg80211_cqm_rssi_notify) },
	{ 0xe6242986, __VMLINUX_SYMBOL_STR(perf_tp_event) },
	{ 0xf88c3301, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0x64fb4eea, __VMLINUX_SYMBOL_STR(wiphy_free) },
	{ 0x4cd3ff7d, __VMLINUX_SYMBOL_STR(cfg80211_unlink_bss) },
	{ 0x595cffdc, __VMLINUX_SYMBOL_STR(__skb_gso_segment) },
	{ 0x966ff54d, __VMLINUX_SYMBOL_STR(ieee80211_ie_split_ric) },
	{ 0x404482a6, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x1494ad7b, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x91eb9b4, __VMLINUX_SYMBOL_STR(round_jiffies) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x6c09c2a4, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0x1879fcbd, __VMLINUX_SYMBOL_STR(bridge_tunnel_header) },
	{ 0xeb6d7c6c, __VMLINUX_SYMBOL_STR(ieee80211_ie_split) },
	{ 0xbfac5b78, __VMLINUX_SYMBOL_STR(cfg80211_radar_event) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xb29a4b39, __VMLINUX_SYMBOL_STR(cfg80211_shutdown_all_interfaces) },
	{ 0xfed77d8, __VMLINUX_SYMBOL_STR(led_trigger_event) },
	{ 0x60a13e90, __VMLINUX_SYMBOL_STR(rcu_barrier) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x9c64fbd, __VMLINUX_SYMBOL_STR(ieee80211_frequency_to_channel) },
	{ 0xa9320d27, __VMLINUX_SYMBOL_STR(ktime_get_seconds) },
	{ 0xf68285c0, __VMLINUX_SYMBOL_STR(register_inetaddr_notifier) },
	{ 0x19f462ab, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0x19e03378, __VMLINUX_SYMBOL_STR(cfg80211_get_p2p_attr) },
	{ 0xd3dbfbc4, __VMLINUX_SYMBOL_STR(_find_first_zero_bit_le) },
	{ 0xf19e9355, __VMLINUX_SYMBOL_STR(cpu_online_mask) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0xa1ee5929, __VMLINUX_SYMBOL_STR(dev_printk) },
	{ 0xa197b1ff, __VMLINUX_SYMBOL_STR(ieee80211_get_mesh_hdrlen) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0x55dc945a, __VMLINUX_SYMBOL_STR(cfg80211_report_wowlan_wakeup) },
	{ 0x8ae92e6f, __VMLINUX_SYMBOL_STR(led_set_brightness) },
	{ 0xefc56354, __VMLINUX_SYMBOL_STR(cfg80211_chandef_create) },
	{ 0xb5198b77, __VMLINUX_SYMBOL_STR(_raw_read_lock) },
	{ 0xab7bc387, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0x5e866d85, __VMLINUX_SYMBOL_STR(prandom_bytes) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xac04a623, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0x7ef39823, __VMLINUX_SYMBOL_STR(ieee80211_hdrlen) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x87b48b4b, __VMLINUX_SYMBOL_STR(skb_copy) },
	{ 0xfa2fea6c, __VMLINUX_SYMBOL_STR(led_trigger_register) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xd3f57a2, __VMLINUX_SYMBOL_STR(_find_next_bit_le) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0x4c48d795, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xae5157e7, __VMLINUX_SYMBOL_STR(led_blink_set) },
	{ 0x60352082, __VMLINUX_SYMBOL_STR(register_inet6addr_notifier) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0xc442f9eb, __VMLINUX_SYMBOL_STR(cfg80211_rx_mgmt) },
	{ 0xa1425906, __VMLINUX_SYMBOL_STR(ieee80211_channel_to_frequency) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x72d771aa, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x4c29dcbf, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x85d23016, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xc63f1b81, __VMLINUX_SYMBOL_STR(ieee80211_radiotap_iterator_next) },
	{ 0xc4d8eb0b, __VMLINUX_SYMBOL_STR(cfg80211_stop_iface) },
	{ 0xb723d4cf, __VMLINUX_SYMBOL_STR(ieee80211_data_to_8023) },
	{ 0x4e0604e4, __VMLINUX_SYMBOL_STR(trace_event_buffer_reserve) },
	{ 0x45dd0d82, __VMLINUX_SYMBOL_STR(cfg80211_probe_status) },
	{ 0xc6c7d551, __VMLINUX_SYMBOL_STR(cfg80211_unregister_wdev) },
	{ 0x7fe1a403, __VMLINUX_SYMBOL_STR(cfg80211_find_ie) },
	{ 0xa192813b, __VMLINUX_SYMBOL_STR(idr_for_each) },
	{ 0x219da9d, __VMLINUX_SYMBOL_STR(rhashtable_insert_slow) },
	{ 0x5da30942, __VMLINUX_SYMBOL_STR(cfg80211_reg_can_beacon) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xc9ec4e21, __VMLINUX_SYMBOL_STR(free_percpu) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0xeee7f22b, __VMLINUX_SYMBOL_STR(cfg80211_check_station_change) },
	{ 0x62ed5a98, __VMLINUX_SYMBOL_STR(cfg80211_ch_switch_started_notify) },
	{ 0x10694b05, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x3c76e5e5, __VMLINUX_SYMBOL_STR(cfg80211_mgmt_tx_status) },
	{ 0x733c3b54, __VMLINUX_SYMBOL_STR(kasprintf) },
	{ 0x164a0770, __VMLINUX_SYMBOL_STR(rhashtable_destroy) },
	{ 0xac36cda1, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x54be2cdd, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0x47bf98c, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x865029ac, __VMLINUX_SYMBOL_STR(__hw_addr_sync) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0x2fe252cc, __VMLINUX_SYMBOL_STR(unregister_inet6addr_notifier) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x1700ab88, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0xd2ca101, __VMLINUX_SYMBOL_STR(cfg80211_cqm_beacon_loss_notify) },
	{ 0x69b18f43, __VMLINUX_SYMBOL_STR(rfc1042_header) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x706d051c, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0xebe816df, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0x1d577825, __VMLINUX_SYMBOL_STR(cfg80211_chandef_usable) },
	{ 0xa2d09977, __VMLINUX_SYMBOL_STR(trace_define_field) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x1528aac3, __VMLINUX_SYMBOL_STR(netif_rx_ni) },
	{ 0x3e8fc0c4, __VMLINUX_SYMBOL_STR(kernel_param_unlock) },
	{ 0x98e68eca, __VMLINUX_SYMBOL_STR(cancel_delayed_work) },
	{ 0x9fdecc31, __VMLINUX_SYMBOL_STR(unregister_netdevice_many) },
	{ 0xf6b1811c, __VMLINUX_SYMBOL_STR(__ieee80211_get_channel) },
	{ 0xff8cbb1f, __VMLINUX_SYMBOL_STR(idr_destroy) },
	{ 0x48301b36, __VMLINUX_SYMBOL_STR(netif_tx_stop_all_queues) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xc2fbe2b9, __VMLINUX_SYMBOL_STR(cfg80211_get_bss) },
	{ 0xc046b811, __VMLINUX_SYMBOL_STR(rhashtable_insert_rehash) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x45f768a8, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xd5e50c63, __VMLINUX_SYMBOL_STR(ethtool_op_get_link) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x19ec08fe, __VMLINUX_SYMBOL_STR(cfg80211_sched_scan_stopped_rtnl) },
	{ 0xffad584c, __VMLINUX_SYMBOL_STR(cfg80211_notify_new_peer_candidate) },
	{ 0x982e6b6d, __VMLINUX_SYMBOL_STR(ieee80211_radiotap_iterator_init) },
	{ 0x9c20be91, __VMLINUX_SYMBOL_STR(led_trigger_unregister) },
	{ 0x3c471b8, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xaf67a8b, __VMLINUX_SYMBOL_STR(wiphy_unregister) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x3feaf038, __VMLINUX_SYMBOL_STR(trace_event_reg) },
	{ 0x2eb6ff32, __VMLINUX_SYMBOL_STR(netif_receive_skb) },
	{ 0x2cebfd74, __VMLINUX_SYMBOL_STR(cfg80211_del_sta_sinfo) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x3d9f7f62, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x6d6cb9ad, __VMLINUX_SYMBOL_STR(ieee80211_operating_class_to_band) },
	{ 0x418f917, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x3934a77b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x6220b4a2, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x9d4171b8, __VMLINUX_SYMBOL_STR(dev_close) },
	{ 0x84a25eb6, __VMLINUX_SYMBOL_STR(cfg80211_cqm_pktloss_notify) },
	{ 0xe87fe504, __VMLINUX_SYMBOL_STR(cfg80211_reg_can_beacon_relax) },
	{ 0xa555804f, __VMLINUX_SYMBOL_STR(cfg80211_michael_mic_failure) },
	{ 0xf1969a8e, __VMLINUX_SYMBOL_STR(__usecs_to_jiffies) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0xc2cdbf1, __VMLINUX_SYMBOL_STR(synchronize_sched) },
	{ 0x16e5c2a, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x1bb31047, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0x8b045644, __VMLINUX_SYMBOL_STR(cfg80211_report_obss_beacon) },
	{ 0xdc3fcbc9, __VMLINUX_SYMBOL_STR(__sw_hweight8) },
	{ 0xd4034828, __VMLINUX_SYMBOL_STR(system_freezable_wq) },
	{ 0xbfbcddf8, __VMLINUX_SYMBOL_STR(idr_alloc) },
	{ 0x8e6cba6c, __VMLINUX_SYMBOL_STR(cfg80211_iter_combinations) },
	{ 0xf25661f7, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x3d470c4d, __VMLINUX_SYMBOL_STR(cfg80211_chandef_compatible) },
	{ 0x39ec3de8, __VMLINUX_SYMBOL_STR(cfg80211_ibss_joined) },
	{ 0x5fbd4084, __VMLINUX_SYMBOL_STR(cfg80211_rx_spurious_frame) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0xdaeb2a19, __VMLINUX_SYMBOL_STR(kernel_param_lock) },
	{ 0x8d790c12, __VMLINUX_SYMBOL_STR(cfg80211_assoc_timeout) },
	{ 0xaf6d3754, __VMLINUX_SYMBOL_STR(crypto_aead_setkey) },
	{ 0x9f46ced8, __VMLINUX_SYMBOL_STR(__sw_hweight64) },
	{ 0x8b38d24, __VMLINUX_SYMBOL_STR(cfg80211_get_drvinfo) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0x32907b91, __VMLINUX_SYMBOL_STR(idr_remove) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0x6c209eab, __VMLINUX_SYMBOL_STR(__alloc_percpu_gfp) },
	{ 0x50214c28, __VMLINUX_SYMBOL_STR(ieee80211_bss_get_ie) },
	{ 0xb9fae1a6, __VMLINUX_SYMBOL_STR(cfg80211_tdls_oper_request) },
	{ 0xc72c9d40, __VMLINUX_SYMBOL_STR(cfg80211_check_combinations) },
	{ 0x565cc1a1, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0x4a3b0c15, __VMLINUX_SYMBOL_STR(skb_copy_expand) },
	{ 0xe31c040b, __VMLINUX_SYMBOL_STR(cfg80211_gtk_rekey_notify) },
	{ 0x6ff3b494, __VMLINUX_SYMBOL_STR(napi_gro_receive) },
	{ 0x27683889, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xbd8fa8f, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xb110adf3, __VMLINUX_SYMBOL_STR(cfg80211_tx_mlme_mgmt) },
	{ 0xb5684e29, __VMLINUX_SYMBOL_STR(idr_find_slowpath) },
	{ 0xac4dbdba, __VMLINUX_SYMBOL_STR(cfg80211_ch_switch_notify) },
	{ 0x60500ce7, __VMLINUX_SYMBOL_STR(cfg80211_put_bss) },
	{ 0x2f316960, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xfe029963, __VMLINUX_SYMBOL_STR(unregister_inetaddr_notifier) },
	{ 0xab8033a9, __VMLINUX_SYMBOL_STR(wiphy_register) },
	{ 0x6a9bdead, __VMLINUX_SYMBOL_STR(trace_event_ignore_this_pid) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x3f616ce2, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x482682f6, __VMLINUX_SYMBOL_STR(cfg80211_rx_mlme_mgmt) },
	{ 0xd3e6f60d, __VMLINUX_SYMBOL_STR(cpu_possible_mask) },
	{ 0xbe79620e, __VMLINUX_SYMBOL_STR(cfg80211_classify8021d) },
	{ 0x42224818, __VMLINUX_SYMBOL_STR(skb_checksum_help) },
	{ 0x44de3d4c, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x240e9669, __VMLINUX_SYMBOL_STR(cfg80211_ready_on_channel) },
	{ 0xabfcb4c3, __VMLINUX_SYMBOL_STR(flush_delayed_work) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x6b8bcb18, __VMLINUX_SYMBOL_STR(wiphy_new_nm) },
	{ 0x9a7b55af, __VMLINUX_SYMBOL_STR(alloc_netdev_mqs) },
	{ 0x618e6f32, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0x6bacd242, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0xb678366f, __VMLINUX_SYMBOL_STR(int_sqrt) },
	{ 0x50fad434, __VMLINUX_SYMBOL_STR(round_jiffies_up) },
	{ 0x495457ff, __VMLINUX_SYMBOL_STR(cfg80211_calculate_bitrate) },
	{ 0xce225efb, __VMLINUX_SYMBOL_STR(trace_event_buffer_commit) },
	{ 0x2060e54e, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0xc1c0d601, __VMLINUX_SYMBOL_STR(ether_setup) },
	{ 0xfd1fdf8e, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x341dbfa3, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x60ad06f2, __VMLINUX_SYMBOL_STR(netdev_set_default_ethtool_ops) },
	{ 0x3186554c, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0xc19158ad, __VMLINUX_SYMBOL_STR(unregister_netdevice_queue) },
	{ 0xfecd66d2, __VMLINUX_SYMBOL_STR(cfg80211_new_sta) },
	{ 0x3e285fec, __VMLINUX_SYMBOL_STR(cfg80211_chandef_valid) },
	{ 0xd087f2e1, __VMLINUX_SYMBOL_STR(event_triggers_call) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x406a42d9, __VMLINUX_SYMBOL_STR(crypto_aead_setauthsize) },
	{ 0xc0056be5, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0x73175cbb, __VMLINUX_SYMBOL_STR(crypto_alloc_aead) },
	{ 0x31b9195c, __VMLINUX_SYMBOL_STR(__local_bh_disable_ip) },
	{ 0x30d39a34, __VMLINUX_SYMBOL_STR(rhashtable_init) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x4c5fc58c, __VMLINUX_SYMBOL_STR(_raw_read_lock_bh) },
	{ 0x4c233a44, __VMLINUX_SYMBOL_STR(_raw_read_unlock_bh) },
	{ 0x1eb9516e, __VMLINUX_SYMBOL_STR(round_jiffies_relative) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xe9103183, __VMLINUX_SYMBOL_STR(trace_event_raw_init) },
	{ 0x643e0ce5, __VMLINUX_SYMBOL_STR(call_rcu_sched) },
	{ 0x80ec3f48, __VMLINUX_SYMBOL_STR(___pskb_trim) },
	{ 0xc42a621c, __VMLINUX_SYMBOL_STR(dev_alloc_name) },
	{ 0x76d9bf11, __VMLINUX_SYMBOL_STR(crc32_be) },
	{ 0xc90fde22, __VMLINUX_SYMBOL_STR(ieee80211_chandef_to_operating_class) },
	{ 0x8a7062a5, __VMLINUX_SYMBOL_STR(ieee80211_mandatory_rates) },
	{ 0x2a14ada7, __VMLINUX_SYMBOL_STR(cfg80211_ref_bss) },
	{ 0x6128b5fc, __VMLINUX_SYMBOL_STR(__printk_ratelimit) },
	{ 0x1ff6c8b8, __VMLINUX_SYMBOL_STR(perf_trace_buf_prepare) },
	{ 0x3e9110fa, __VMLINUX_SYMBOL_STR(__hw_addr_unsync) },
	{ 0xa1d6a1ec, __VMLINUX_SYMBOL_STR(ieee80211_amsdu_to_8023s) },
	{ 0x2f426965, __VMLINUX_SYMBOL_STR(led_trigger_blink_oneshot) },
	{ 0x6ec9ccdb, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0x74c134b9, __VMLINUX_SYMBOL_STR(__sw_hweight32) },
	{ 0x7a4497db, __VMLINUX_SYMBOL_STR(kzfree) },
	{ 0x714ec84, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0x1bf56330, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x582d129, __VMLINUX_SYMBOL_STR(cfg80211_cac_event) },
	{ 0x3ea10c2d, __VMLINUX_SYMBOL_STR(cfg80211_remain_on_channel_expired) },
	{ 0xf7b05d18, __VMLINUX_SYMBOL_STR(netif_wake_subqueue) },
	{ 0xbbb73492, __VMLINUX_SYMBOL_STR(trace_raw_output_prep) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x93eb8b83, __VMLINUX_SYMBOL_STR(skb_clone_sk) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x3c93ea25, __VMLINUX_SYMBOL_STR(trace_seq_printf) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x7de45305, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xb911a16b, __VMLINUX_SYMBOL_STR(cfg80211_sched_scan_stopped) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0x57674fd7, __VMLINUX_SYMBOL_STR(__sw_hweight16) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0xaf22bfb5, __VMLINUX_SYMBOL_STR(cfg80211_scan_done) },
	{ 0x3cd21c4e, __VMLINUX_SYMBOL_STR(cfg80211_chandef_dfs_required) },
	{ 0x528d0c14, __VMLINUX_SYMBOL_STR(idr_init) },
	{ 0xc135a948, __VMLINUX_SYMBOL_STR(dev_queue_xmit) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0xfd8bdc76, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xa7c13f9d, __VMLINUX_SYMBOL_STR(eth_mac_addr) },
	{ 0x69760c4c, __VMLINUX_SYMBOL_STR(crypto_alloc_base) },
	{ 0xc1d80c28, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0x14fbc92c, __VMLINUX_SYMBOL_STR(cfg80211_rx_unexpected_4addr_frame) },
	{ 0xd61e5b7c, __VMLINUX_SYMBOL_STR(cfg80211_rx_assoc_resp) },
	{ 0xf389fe60, __VMLINUX_SYMBOL_STR(__hw_addr_init) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x5ed53519, __VMLINUX_SYMBOL_STR(skb_complete_wifi_ack) },
	{ 0xe7a85d29, __VMLINUX_SYMBOL_STR(cfg80211_sched_scan_results) },
	{ 0xf4bae8ac, __VMLINUX_SYMBOL_STR(cfg80211_inform_bss_frame_data) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cfg80211";


MODULE_INFO(srcversion, "B2FA7C7F393B1DE60BDD32D");
