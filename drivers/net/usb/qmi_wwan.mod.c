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
	{ 0x563d3c83, __VMLINUX_SYMBOL_STR(usbnet_disconnect) },
	{ 0xc654194e, __VMLINUX_SYMBOL_STR(usbnet_tx_timeout) },
	{ 0x77e4d9e, __VMLINUX_SYMBOL_STR(usbnet_change_mtu) },
	{ 0x56804d49, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x33b3f1ed, __VMLINUX_SYMBOL_STR(usbnet_start_xmit) },
	{ 0x2da6846e, __VMLINUX_SYMBOL_STR(usbnet_stop) },
	{ 0x5724e936, __VMLINUX_SYMBOL_STR(usbnet_open) },
	{ 0xa4bc8397, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x58963f53, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x418f917, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xa48fc907, __VMLINUX_SYMBOL_STR(usbnet_probe) },
	{ 0xec71637d, __VMLINUX_SYMBOL_STR(usbnet_suspend) },
	{ 0xc492bfab, __VMLINUX_SYMBOL_STR(usbnet_resume) },
	{ 0xbd7da979, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0x1fba23aa, __VMLINUX_SYMBOL_STR(usb_cdc_wdm_register) },
	{ 0x791eaa34, __VMLINUX_SYMBOL_STR(usbnet_get_endpoints) },
	{ 0xdaff39d5, __VMLINUX_SYMBOL_STR(usb_driver_claim_interface) },
	{ 0xf902f702, __VMLINUX_SYMBOL_STR(usbnet_get_ethernet_addr) },
	{ 0x9f2238f8, __VMLINUX_SYMBOL_STR(usb_ifnum_to_if) },
	{ 0x339dd873, __VMLINUX_SYMBOL_STR(cdc_parse_cdc_header) },
	{ 0x79de4489, __VMLINUX_SYMBOL_STR(eth_commit_mac_addr_change) },
	{ 0x49767c4b, __VMLINUX_SYMBOL_STR(eth_prepare_mac_addr_change) },
	{ 0xd8866b2e, __VMLINUX_SYMBOL_STR(usb_driver_release_interface) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x295f82c9, __VMLINUX_SYMBOL_STR(usb_autopm_put_interface) },
	{ 0xa6d37fb9, __VMLINUX_SYMBOL_STR(usb_autopm_get_interface) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cdc-wdm";

MODULE_ALIAS("usb:v12D1p*d*dc*dsc*dp*icFFisc01ip09in*");
MODULE_ALIAS("usb:v12D1p*d*dc*dsc*dp*icFFisc01ip39in*");
MODULE_ALIAS("usb:v12D1p*d*dc*dsc*dp*icFFisc01ip69in*");
MODULE_ALIAS("usb:v12D1p*d*dc*dsc*dp*icFFisc01ip07in*");
MODULE_ALIAS("usb:v12D1p*d*dc*dsc*dp*icFFisc01ip11in*");
MODULE_ALIAS("usb:v12D1p*d*dc*dsc*dp*icFFisc01ip37in*");
MODULE_ALIAS("usb:v12D1p*d*dc*dsc*dp*icFFisc01ip67in*");
MODULE_ALIAS("usb:v106Cp*d*dc*dsc*dp*icFFiscF0ipFFin*");
MODULE_ALIAS("usb:v106Cp*d*dc*dsc*dp*icFFiscF1ipFFin*");
MODULE_ALIAS("usb:v1410pB001d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v1410p9010d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v1410p9011d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v413Cp8195d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v413Cp8196d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v413Cp819Bd*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v16D5p650Ad*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v03F0p581Dd*dc*dsc*dp*icFFisc01ip07in*");
MODULE_ALIAS("usb:v0408pEA42d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v05C6p6001d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v05C6p7000d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v05C6p7001d*dc*dsc*dp*ic*isc*ip*in01*");
MODULE_ALIAS("usb:v05C6p7002d*dc*dsc*dp*ic*isc*ip*in01*");
MODULE_ALIAS("usb:v05C6p7101d*dc*dsc*dp*ic*isc*ip*in01*");
MODULE_ALIAS("usb:v05C6p7101d*dc*dsc*dp*ic*isc*ip*in02*");
MODULE_ALIAS("usb:v05C6p7101d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v05C6p7102d*dc*dsc*dp*ic*isc*ip*in01*");
MODULE_ALIAS("usb:v05C6p7102d*dc*dsc*dp*ic*isc*ip*in02*");
MODULE_ALIAS("usb:v05C6p7102d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v05C6p8000d*dc*dsc*dp*ic*isc*ip*in07*");
MODULE_ALIAS("usb:v05C6p8001d*dc*dsc*dp*ic*isc*ip*in06*");
MODULE_ALIAS("usb:v05C6p9000d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v05C6p9003d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v05C6p9005d*dc*dsc*dp*ic*isc*ip*in02*");
MODULE_ALIAS("usb:v05C6p900Ad*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v05C6p900Bd*dc*dsc*dp*ic*isc*ip*in02*");
MODULE_ALIAS("usb:v05C6p900Cd*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v05C6p900Cd*dc*dsc*dp*ic*isc*ip*in05*");
MODULE_ALIAS("usb:v05C6p900Cd*dc*dsc*dp*ic*isc*ip*in06*");
MODULE_ALIAS("usb:v05C6p900Dd*dc*dsc*dp*ic*isc*ip*in05*");
MODULE_ALIAS("usb:v05C6p900Fd*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v05C6p900Fd*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v05C6p900Fd*dc*dsc*dp*ic*isc*ip*in05*");
MODULE_ALIAS("usb:v05C6p9010d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v05C6p9010d*dc*dsc*dp*ic*isc*ip*in05*");
MODULE_ALIAS("usb:v05C6p9011d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v05C6p9011d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v05C6p9021d*dc*dsc*dp*ic*isc*ip*in01*");
MODULE_ALIAS("usb:v05C6p9022d*dc*dsc*dp*ic*isc*ip*in02*");
MODULE_ALIAS("usb:v05C6p9025d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v05C6p9026d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v05C6p902Ed*dc*dsc*dp*ic*isc*ip*in05*");
MODULE_ALIAS("usb:v05C6p9031d*dc*dsc*dp*ic*isc*ip*in05*");
MODULE_ALIAS("usb:v05C6p9032d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v05C6p9033d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v05C6p9033d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v05C6p9033d*dc*dsc*dp*ic*isc*ip*in05*");
MODULE_ALIAS("usb:v05C6p9033d*dc*dsc*dp*ic*isc*ip*in06*");
MODULE_ALIAS("usb:v05C6p9034d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v05C6p9034d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v05C6p9034d*dc*dsc*dp*ic*isc*ip*in05*");
MODULE_ALIAS("usb:v05C6p9034d*dc*dsc*dp*ic*isc*ip*in06*");
MODULE_ALIAS("usb:v05C6p9034d*dc*dsc*dp*ic*isc*ip*in07*");
MODULE_ALIAS("usb:v05C6p9035d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v05C6p9036d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v05C6p9037d*dc*dsc*dp*ic*isc*ip*in05*");
MODULE_ALIAS("usb:v05C6p9038d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v05C6p903Bd*dc*dsc*dp*ic*isc*ip*in07*");
MODULE_ALIAS("usb:v05C6p903Cd*dc*dsc*dp*ic*isc*ip*in06*");
MODULE_ALIAS("usb:v05C6p903Dd*dc*dsc*dp*ic*isc*ip*in06*");
MODULE_ALIAS("usb:v05C6p903Ed*dc*dsc*dp*ic*isc*ip*in05*");
MODULE_ALIAS("usb:v05C6p9043d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v05C6p9046d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v05C6p9046d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v05C6p9046d*dc*dsc*dp*ic*isc*ip*in05*");
MODULE_ALIAS("usb:v05C6p9047d*dc*dsc*dp*ic*isc*ip*in02*");
MODULE_ALIAS("usb:v05C6p9047d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v05C6p9047d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v05C6p9048d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v05C6p9048d*dc*dsc*dp*ic*isc*ip*in05*");
MODULE_ALIAS("usb:v05C6p9048d*dc*dsc*dp*ic*isc*ip*in06*");
MODULE_ALIAS("usb:v05C6p9048d*dc*dsc*dp*ic*isc*ip*in07*");
MODULE_ALIAS("usb:v05C6p9048d*dc*dsc*dp*ic*isc*ip*in08*");
MODULE_ALIAS("usb:v05C6p904Cd*dc*dsc*dp*ic*isc*ip*in05*");
MODULE_ALIAS("usb:v05C6p904Cd*dc*dsc*dp*ic*isc*ip*in06*");
MODULE_ALIAS("usb:v05C6p904Cd*dc*dsc*dp*ic*isc*ip*in07*");
MODULE_ALIAS("usb:v05C6p904Cd*dc*dsc*dp*ic*isc*ip*in08*");
MODULE_ALIAS("usb:v05C6p9050d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v05C6p9052d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v05C6p9053d*dc*dsc*dp*ic*isc*ip*in06*");
MODULE_ALIAS("usb:v05C6p9053d*dc*dsc*dp*ic*isc*ip*in07*");
MODULE_ALIAS("usb:v05C6p9054d*dc*dsc*dp*ic*isc*ip*in05*");
MODULE_ALIAS("usb:v05C6p9054d*dc*dsc*dp*ic*isc*ip*in06*");
MODULE_ALIAS("usb:v05C6p9055d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v05C6p9055d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v05C6p9055d*dc*dsc*dp*ic*isc*ip*in05*");
MODULE_ALIAS("usb:v05C6p9055d*dc*dsc*dp*ic*isc*ip*in06*");
MODULE_ALIAS("usb:v05C6p9055d*dc*dsc*dp*ic*isc*ip*in07*");
MODULE_ALIAS("usb:v05C6p9056d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v05C6p9062d*dc*dsc*dp*ic*isc*ip*in02*");
MODULE_ALIAS("usb:v05C6p9062d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v05C6p9062d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v05C6p9062d*dc*dsc*dp*ic*isc*ip*in05*");
MODULE_ALIAS("usb:v05C6p9062d*dc*dsc*dp*ic*isc*ip*in06*");
MODULE_ALIAS("usb:v05C6p9062d*dc*dsc*dp*ic*isc*ip*in07*");
MODULE_ALIAS("usb:v05C6p9062d*dc*dsc*dp*ic*isc*ip*in08*");
MODULE_ALIAS("usb:v05C6p9062d*dc*dsc*dp*ic*isc*ip*in09*");
MODULE_ALIAS("usb:v05C6p9064d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v05C6p9065d*dc*dsc*dp*ic*isc*ip*in06*");
MODULE_ALIAS("usb:v05C6p9065d*dc*dsc*dp*ic*isc*ip*in07*");
MODULE_ALIAS("usb:v05C6p9066d*dc*dsc*dp*ic*isc*ip*in05*");
MODULE_ALIAS("usb:v05C6p9066d*dc*dsc*dp*ic*isc*ip*in06*");
MODULE_ALIAS("usb:v05C6p9067d*dc*dsc*dp*ic*isc*ip*in01*");
MODULE_ALIAS("usb:v05C6p9068d*dc*dsc*dp*ic*isc*ip*in02*");
MODULE_ALIAS("usb:v05C6p9068d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v05C6p9068d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v05C6p9068d*dc*dsc*dp*ic*isc*ip*in05*");
MODULE_ALIAS("usb:v05C6p9068d*dc*dsc*dp*ic*isc*ip*in06*");
MODULE_ALIAS("usb:v05C6p9068d*dc*dsc*dp*ic*isc*ip*in07*");
MODULE_ALIAS("usb:v05C6p9069d*dc*dsc*dp*ic*isc*ip*in05*");
MODULE_ALIAS("usb:v05C6p9069d*dc*dsc*dp*ic*isc*ip*in06*");
MODULE_ALIAS("usb:v05C6p9069d*dc*dsc*dp*ic*isc*ip*in07*");
MODULE_ALIAS("usb:v05C6p9069d*dc*dsc*dp*ic*isc*ip*in08*");
MODULE_ALIAS("usb:v05C6p9070d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v05C6p9070d*dc*dsc*dp*ic*isc*ip*in05*");
MODULE_ALIAS("usb:v05C6p9075d*dc*dsc*dp*ic*isc*ip*in05*");
MODULE_ALIAS("usb:v05C6p9076d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v05C6p9076d*dc*dsc*dp*ic*isc*ip*in05*");
MODULE_ALIAS("usb:v05C6p9076d*dc*dsc*dp*ic*isc*ip*in06*");
MODULE_ALIAS("usb:v05C6p9076d*dc*dsc*dp*ic*isc*ip*in07*");
MODULE_ALIAS("usb:v05C6p9076d*dc*dsc*dp*ic*isc*ip*in08*");
MODULE_ALIAS("usb:v05C6p9077d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v05C6p9077d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v05C6p9077d*dc*dsc*dp*ic*isc*ip*in05*");
MODULE_ALIAS("usb:v05C6p9077d*dc*dsc*dp*ic*isc*ip*in06*");
MODULE_ALIAS("usb:v05C6p9078d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v05C6p9079d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v05C6p9079d*dc*dsc*dp*ic*isc*ip*in05*");
MODULE_ALIAS("usb:v05C6p9079d*dc*dsc*dp*ic*isc*ip*in06*");
MODULE_ALIAS("usb:v05C6p9079d*dc*dsc*dp*ic*isc*ip*in07*");
MODULE_ALIAS("usb:v05C6p9079d*dc*dsc*dp*ic*isc*ip*in08*");
MODULE_ALIAS("usb:v05C6p9080d*dc*dsc*dp*ic*isc*ip*in05*");
MODULE_ALIAS("usb:v05C6p9080d*dc*dsc*dp*ic*isc*ip*in06*");
MODULE_ALIAS("usb:v05C6p9080d*dc*dsc*dp*ic*isc*ip*in07*");
MODULE_ALIAS("usb:v05C6p9080d*dc*dsc*dp*ic*isc*ip*in08*");
MODULE_ALIAS("usb:v05C6p9083d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v05C6p9084d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v05C6p920Dd*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v05C6p920Dd*dc*dsc*dp*ic*isc*ip*in05*");
MODULE_ALIAS("usb:v0846p68A2d*dc*dsc*dp*ic*isc*ip*in08*");
MODULE_ALIAS("usb:v12D1p140Cd*dc*dsc*dp*ic*isc*ip*in01*");
MODULE_ALIAS("usb:v12D1p14ACd*dc*dsc*dp*ic*isc*ip*in01*");
MODULE_ALIAS("usb:v16D8p6003d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v16D8p6007d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v16D8p6008d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v16D8p6280d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v16D8p7001d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v16D8p7002d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v16D8p7003d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v16D8p7004d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v16D8p7006d*dc*dsc*dp*ic*isc*ip*in05*");
MODULE_ALIAS("usb:v16D8p700Ad*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v16D8p7211d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v16D8p7212d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v16D8p7213d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v16D8p7251d*dc*dsc*dp*ic*isc*ip*in01*");
MODULE_ALIAS("usb:v16D8p7252d*dc*dsc*dp*ic*isc*ip*in01*");
MODULE_ALIAS("usb:v16D8p7253d*dc*dsc*dp*ic*isc*ip*in01*");
MODULE_ALIAS("usb:v19D2p0002d*dc*dsc*dp*ic*isc*ip*in01*");
MODULE_ALIAS("usb:v19D2p0012d*dc*dsc*dp*ic*isc*ip*in01*");
MODULE_ALIAS("usb:v19D2p0017d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v19D2p0019d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v19D2p0021d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v19D2p0025d*dc*dsc*dp*ic*isc*ip*in01*");
MODULE_ALIAS("usb:v19D2p0031d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v19D2p0042d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v19D2p0049d*dc*dsc*dp*ic*isc*ip*in05*");
MODULE_ALIAS("usb:v19D2p0052d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v19D2p0055d*dc*dsc*dp*ic*isc*ip*in01*");
MODULE_ALIAS("usb:v19D2p0058d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v19D2p0063d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v19D2p0104d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v19D2p0113d*dc*dsc*dp*ic*isc*ip*in05*");
MODULE_ALIAS("usb:v19D2p0118d*dc*dsc*dp*ic*isc*ip*in05*");
MODULE_ALIAS("usb:v19D2p0121d*dc*dsc*dp*ic*isc*ip*in05*");
MODULE_ALIAS("usb:v19D2p0123d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v19D2p0124d*dc*dsc*dp*ic*isc*ip*in05*");
MODULE_ALIAS("usb:v19D2p0125d*dc*dsc*dp*ic*isc*ip*in06*");
MODULE_ALIAS("usb:v19D2p0126d*dc*dsc*dp*ic*isc*ip*in05*");
MODULE_ALIAS("usb:v19D2p0130d*dc*dsc*dp*ic*isc*ip*in01*");
MODULE_ALIAS("usb:v19D2p0133d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v19D2p0141d*dc*dsc*dp*ic*isc*ip*in05*");
MODULE_ALIAS("usb:v19D2p0157d*dc*dsc*dp*ic*isc*ip*in05*");
MODULE_ALIAS("usb:v19D2p0158d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v19D2p0167d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v19D2p0168d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v19D2p0176d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v19D2p0178d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v19D2p0191d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v19D2p0199d*dc*dsc*dp*ic*isc*ip*in01*");
MODULE_ALIAS("usb:v19D2p0200d*dc*dsc*dp*ic*isc*ip*in01*");
MODULE_ALIAS("usb:v19D2p0257d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v19D2p0265d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v19D2p0284d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v19D2p0326d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v19D2p0412d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v19D2p1008d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v19D2p1010d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v19D2p1012d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v19D2p1018d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v19D2p1021d*dc*dsc*dp*ic*isc*ip*in02*");
MODULE_ALIAS("usb:v19D2p1245d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v19D2p1247d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v19D2p1252d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v19D2p1254d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v19D2p1255d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v19D2p1255d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v19D2p1256d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v19D2p1270d*dc*dsc*dp*ic*isc*ip*in05*");
MODULE_ALIAS("usb:v19D2p1401d*dc*dsc*dp*ic*isc*ip*in02*");
MODULE_ALIAS("usb:v19D2p1402d*dc*dsc*dp*ic*isc*ip*in02*");
MODULE_ALIAS("usb:v19D2p1424d*dc*dsc*dp*ic*isc*ip*in02*");
MODULE_ALIAS("usb:v19D2p1425d*dc*dsc*dp*ic*isc*ip*in02*");
MODULE_ALIAS("usb:v19D2p1426d*dc*dsc*dp*ic*isc*ip*in02*");
MODULE_ALIAS("usb:v19D2p1428d*dc*dsc*dp*ic*isc*ip*in02*");
MODULE_ALIAS("usb:v19D2p2002d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v2001p7E19d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v0F3Dp68A2d*dc*dsc*dp*ic*isc*ip*in08*");
MODULE_ALIAS("usb:v114Fp68A2d*dc*dsc*dp*ic*isc*ip*in08*");
MODULE_ALIAS("usb:v1199p68A2d*dc*dsc*dp*ic*isc*ip*in08*");
MODULE_ALIAS("usb:v1199p68A2d*dc*dsc*dp*ic*isc*ip*in13*");
MODULE_ALIAS("usb:v1199p68C0d*dc*dsc*dp*ic*isc*ip*in08*");
MODULE_ALIAS("usb:v1199p68C0d*dc*dsc*dp*ic*isc*ip*in0A*");
MODULE_ALIAS("usb:v1199p901Cd*dc*dsc*dp*ic*isc*ip*in08*");
MODULE_ALIAS("usb:v1199p901Fd*dc*dsc*dp*ic*isc*ip*in08*");
MODULE_ALIAS("usb:v1199p9041d*dc*dsc*dp*ic*isc*ip*in08*");
MODULE_ALIAS("usb:v1199p9041d*dc*dsc*dp*ic*isc*ip*in0A*");
MODULE_ALIAS("usb:v1199p9051d*dc*dsc*dp*ic*isc*ip*in08*");
MODULE_ALIAS("usb:v1199p9053d*dc*dsc*dp*ic*isc*ip*in08*");
MODULE_ALIAS("usb:v1199p9054d*dc*dsc*dp*ic*isc*ip*in08*");
MODULE_ALIAS("usb:v1199p9055d*dc*dsc*dp*ic*isc*ip*in08*");
MODULE_ALIAS("usb:v1199p9056d*dc*dsc*dp*ic*isc*ip*in08*");
MODULE_ALIAS("usb:v1199p9057d*dc*dsc*dp*ic*isc*ip*in08*");
MODULE_ALIAS("usb:v1199p9061d*dc*dsc*dp*ic*isc*ip*in08*");
MODULE_ALIAS("usb:v1199p9070d*dc*dsc*dp*ic*isc*ip*in08*");
MODULE_ALIAS("usb:v1199p9070d*dc*dsc*dp*ic*isc*ip*in0A*");
MODULE_ALIAS("usb:v1199p9071d*dc*dsc*dp*ic*isc*ip*in08*");
MODULE_ALIAS("usb:v1199p9071d*dc*dsc*dp*ic*isc*ip*in0A*");
MODULE_ALIAS("usb:v1199p9079d*dc*dsc*dp*ic*isc*ip*in08*");
MODULE_ALIAS("usb:v1199p9079d*dc*dsc*dp*ic*isc*ip*in0A*");
MODULE_ALIAS("usb:v1BBBp011Ed*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v1BBBp0203d*dc*dsc*dp*ic*isc*ip*in02*");
MODULE_ALIAS("usb:v2357p0201d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v2357p9000d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v1BC7p1200d*dc*dsc*dp*ic*isc*ip*in05*");
MODULE_ALIAS("usb:v1BC7p1201d*dc*dsc*dp*ic*isc*ip*in02*");
MODULE_ALIAS("usb:v1C9Ep9B01d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v0B3CpC000d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v0B3CpC001d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v0B3CpC002d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v0B3CpC004d*dc*dsc*dp*ic*isc*ip*in06*");
MODULE_ALIAS("usb:v0B3CpC005d*dc*dsc*dp*ic*isc*ip*in06*");
MODULE_ALIAS("usb:v0B3CpC00Ad*dc*dsc*dp*ic*isc*ip*in06*");
MODULE_ALIAS("usb:v0B3CpC00Bd*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v1E2Dp0060d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v1E2Dp0053d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v413Cp81A2d*dc*dsc*dp*ic*isc*ip*in08*");
MODULE_ALIAS("usb:v413Cp81A3d*dc*dsc*dp*ic*isc*ip*in08*");
MODULE_ALIAS("usb:v413Cp81A4d*dc*dsc*dp*ic*isc*ip*in08*");
MODULE_ALIAS("usb:v413Cp81A8d*dc*dsc*dp*ic*isc*ip*in08*");
MODULE_ALIAS("usb:v413Cp81A9d*dc*dsc*dp*ic*isc*ip*in08*");
MODULE_ALIAS("usb:v413Cp81B1d*dc*dsc*dp*ic*isc*ip*in08*");
MODULE_ALIAS("usb:v03F0p4E1Dd*dc*dsc*dp*ic*isc*ip*in08*");
MODULE_ALIAS("usb:v22DEp9061d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v05C6p9212d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v03F0p1F1Dd*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v04DAp250Dd*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v413Cp8172d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v1410pA001d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v1410pA002d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v1410pA003d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v1410pA004d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v1410pA005d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v1410pA006d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v1410pA007d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v0B05p1776d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v19D2pFFF3d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v05C6p9001d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v05C6p9002d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v05C6p9202d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v05C6p9203d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v05C6p9222d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v05C6p9009d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v413Cp8186d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v413Cp8194d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v05C6p920Bd*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v05C6p9225d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v05C6p9245d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v03F0p251Dd*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v05C6p9215d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v05C6p9215d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v05C6p9265d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v05C6p9235d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v05C6p9275d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v0AF0p8120d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v1199p68A5d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v1199p68A9d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v1199p9001d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v1199p9002d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v1199p9003d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v1199p9004d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v1199p9005d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v1199p9006d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v1199p9007d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v1199p9008d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v1199p9009d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v1199p900Ad*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v1199p9011d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v16D8p8002d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v05C6p9205d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v1199p9013d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v03F0p371Dd*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v1199p9015d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v1199p9019d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v1199p901Bd*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v12D1p14F1d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v1410pA021d*dc*dsc*dp*ic*isc*ip*in00*");

MODULE_INFO(srcversion, "386DE210C9301F5748A6F02");
