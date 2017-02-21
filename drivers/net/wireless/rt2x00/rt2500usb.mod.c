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
	{ 0xad7ce9b0, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0xb66cc8c4, __VMLINUX_SYMBOL_STR(rt2x00usb_resume) },
	{ 0x7eae00de, __VMLINUX_SYMBOL_STR(rt2x00usb_suspend) },
	{ 0xaf7d7a5c, __VMLINUX_SYMBOL_STR(rt2x00usb_disconnect) },
	{ 0xacbe76aa, __VMLINUX_SYMBOL_STR(rt2x00mac_tx_frames_pending) },
	{ 0xe4f43294, __VMLINUX_SYMBOL_STR(rt2x00mac_get_ringparam) },
	{ 0x59ded12c, __VMLINUX_SYMBOL_STR(rt2x00mac_get_antenna) },
	{ 0x7f3f129, __VMLINUX_SYMBOL_STR(rt2x00mac_set_antenna) },
	{ 0x94476314, __VMLINUX_SYMBOL_STR(rt2x00mac_flush) },
	{ 0xb5714aa, __VMLINUX_SYMBOL_STR(rt2x00mac_rfkill_poll) },
	{ 0x31d3582f, __VMLINUX_SYMBOL_STR(rt2x00mac_conf_tx) },
	{ 0x96008d6c, __VMLINUX_SYMBOL_STR(rt2x00mac_get_stats) },
	{ 0xff64a3c5, __VMLINUX_SYMBOL_STR(rt2x00mac_sw_scan_complete) },
	{ 0xeed99e23, __VMLINUX_SYMBOL_STR(rt2x00mac_sw_scan_start) },
	{ 0x303530fb, __VMLINUX_SYMBOL_STR(rt2x00mac_set_key) },
	{ 0x2bccbafe, __VMLINUX_SYMBOL_STR(rt2x00mac_set_tim) },
	{ 0xb8af9dd6, __VMLINUX_SYMBOL_STR(rt2x00mac_configure_filter) },
	{ 0x7edcf56f, __VMLINUX_SYMBOL_STR(rt2x00mac_bss_info_changed) },
	{ 0x77798bf1, __VMLINUX_SYMBOL_STR(rt2x00mac_config) },
	{ 0xcec36fed, __VMLINUX_SYMBOL_STR(rt2x00mac_remove_interface) },
	{ 0x35c0fa60, __VMLINUX_SYMBOL_STR(rt2x00mac_add_interface) },
	{ 0x5d340857, __VMLINUX_SYMBOL_STR(rt2x00mac_stop) },
	{ 0xbb96c27f, __VMLINUX_SYMBOL_STR(rt2x00mac_start) },
	{ 0xfffa7273, __VMLINUX_SYMBOL_STR(rt2x00mac_tx) },
	{ 0x79925f47, __VMLINUX_SYMBOL_STR(rt2x00usb_flush_queue) },
	{ 0xa98156c2, __VMLINUX_SYMBOL_STR(rt2x00usb_kick_queue) },
	{ 0x2d727283, __VMLINUX_SYMBOL_STR(rt2x00usb_watchdog) },
	{ 0xfd066af5, __VMLINUX_SYMBOL_STR(rt2x00usb_clear_entry) },
	{ 0x9d3f6f21, __VMLINUX_SYMBOL_STR(rt2x00usb_uninitialize) },
	{ 0xdefa688e, __VMLINUX_SYMBOL_STR(rt2x00usb_initialize) },
	{ 0xa4bc8397, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x58963f53, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0x27683889, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xc19f46bc, __VMLINUX_SYMBOL_STR(rt2x00usb_vendor_request) },
	{ 0xbd327cdb, __VMLINUX_SYMBOL_STR(rt2x00usb_disable_radio) },
	{ 0x85d23016, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x3934a77b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0xbd7da979, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xdbe19340, __VMLINUX_SYMBOL_STR(rt2x00usb_vendor_req_buff_lock) },
	{ 0x7de45305, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x15597bd3, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x418f917, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x10694b05, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x9cfce35b, __VMLINUX_SYMBOL_STR(rt2x00usb_vendor_request_buff) },
	{ 0x476d12b7, __VMLINUX_SYMBOL_STR(rt2x00usb_probe) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rt2x00usb,rt2x00lib";

MODULE_ALIAS("usb:v0B05p1706d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p1707d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp7050d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp7051d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p000Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p0011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p001Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14B2p3C02d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3C00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p8001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p8007d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06F8pE000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p005Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0066d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0067d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p008Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0097d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6861d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6865d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6869d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp1706d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp2570d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp9020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v079Bp004Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0681p3C06d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0707pEE13d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v114Bp0110d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0769p11F3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0EB0p9020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0F88p3012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v5A57p0260d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "6B90FF814E9ED16BAB14799");
