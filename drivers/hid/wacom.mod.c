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
	{ 0x68abb700, __VMLINUX_SYMBOL_STR(kobject_put) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xe998aeda, __VMLINUX_SYMBOL_STR(device_remove_file) },
	{ 0xb8b5974, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x13d1d5ae, __VMLINUX_SYMBOL_STR(hid_open_report) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xa45463a4, __VMLINUX_SYMBOL_STR(power_supply_unregister) },
	{ 0xcae74265, __VMLINUX_SYMBOL_STR(input_alloc_absinfo) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x3eac41f8, __VMLINUX_SYMBOL_STR(sysfs_create_files) },
	{ 0xc3a0665, __VMLINUX_SYMBOL_STR(power_supply_powers) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xba427a30, __VMLINUX_SYMBOL_STR(__hid_request) },
	{ 0x85d23016, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x3995c8b7, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0x4cfa4df3, __VMLINUX_SYMBOL_STR(hid_input_report) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x44b5a2c1, __VMLINUX_SYMBOL_STR(kobject_create_and_add) },
	{ 0xe6214982, __VMLINUX_SYMBOL_STR(input_set_abs_params) },
	{ 0xad830a50, __VMLINUX_SYMBOL_STR(power_supply_changed) },
	{ 0xa5a3b82a, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x5a5a94a6, __VMLINUX_SYMBOL_STR(kstrtou8) },
	{ 0xbd7da979, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xb65f7f3d, __VMLINUX_SYMBOL_STR(power_supply_get_drvdata) },
	{ 0x45f768a8, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x1403bc31, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xc6d91913, __VMLINUX_SYMBOL_STR(input_set_capability) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x3934a77b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x546a599a, __VMLINUX_SYMBOL_STR(hid_disconnect) },
	{ 0x1e6d26a8, __VMLINUX_SYMBOL_STR(strstr) },
	{ 0xb7c712b8, __VMLINUX_SYMBOL_STR(input_mt_init_slots) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x9a623b12, __VMLINUX_SYMBOL_STR(device_create_file) },
	{ 0x27683889, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x9f984513, __VMLINUX_SYMBOL_STR(strrchr) },
	{ 0xcce45ff3, __VMLINUX_SYMBOL_STR(hid_connect) },
	{ 0xcd76c06c, __VMLINUX_SYMBOL_STR(hidinput_calc_abs_res) },
	{ 0x5e3c68ff, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0xdb056ef6, __VMLINUX_SYMBOL_STR(input_free_device) },
	{ 0xb678366f, __VMLINUX_SYMBOL_STR(int_sqrt) },
	{ 0xfd1fdf8e, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x93e0a0da, __VMLINUX_SYMBOL_STR(input_mt_get_slot_by_key) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xa46f2f1b, __VMLINUX_SYMBOL_STR(kstrtouint) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x1a52eeee, __VMLINUX_SYMBOL_STR(input_unregister_device) },
	{ 0xdc9dfbb3, __VMLINUX_SYMBOL_STR(input_mt_report_slot_state) },
	{ 0x5aab954d, __VMLINUX_SYMBOL_STR(__hid_register_driver) },
	{ 0xf9e73082, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0x622797d4, __VMLINUX_SYMBOL_STR(input_mt_sync_frame) },
	{ 0x1bf56330, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x139ba09e, __VMLINUX_SYMBOL_STR(power_supply_register) },
	{ 0x7b6b7ef8, __VMLINUX_SYMBOL_STR(hid_unregister_driver) },
	{ 0xcede96b1, __VMLINUX_SYMBOL_STR(input_allocate_device) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("hid:b0003g0101v0000056Ap00000000");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000003");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000010");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000011");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000012");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000013");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000014");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000015");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000016");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000017");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000018");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000019");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000020");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000021");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000022");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000023");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000024");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000026");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000027");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000028");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000029");
MODULE_ALIAS("hid:b0003g0101v0000056Ap0000002A");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000030");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000031");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000032");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000033");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000034");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000035");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000037");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000038");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000039");
MODULE_ALIAS("hid:b0003g0101v0000056Ap0000003F");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000041");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000042");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000043");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000044");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000045");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000047");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000057");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000059");
MODULE_ALIAS("hid:b0003g0101v0000056Ap0000005B");
MODULE_ALIAS("hid:b0003g0101v0000056Ap0000005D");
MODULE_ALIAS("hid:b0003g0101v0000056Ap0000005E");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000060");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000061");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000062");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000063");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000064");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000065");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000069");
MODULE_ALIAS("hid:b0003g0101v0000056Ap0000006A");
MODULE_ALIAS("hid:b0003g0101v0000056Ap0000006B");
MODULE_ALIAS("hid:b0005g0101v0000056Ap00000081");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000084");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000090");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000093");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000097");
MODULE_ALIAS("hid:b0003g0101v0000056Ap0000009A");
MODULE_ALIAS("hid:b0003g0101v0000056Ap0000009F");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000B0");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000B1");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000B2");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000B3");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000B4");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000B5");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000B7");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000B8");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000B9");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000BA");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000BB");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000BC");
MODULE_ALIAS("hid:b0005g0101v0000056Ap000000BD");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000C0");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000C2");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000C4");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000C5");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000C6");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000C7");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000CC");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000CE");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000D0");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000D1");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000D2");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000D3");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000D4");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000D5");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000D6");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000D7");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000D8");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000DA");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000DB");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000DD");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000DE");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000DF");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000E2");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000E3");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000E5");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000E6");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000EC");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000ED");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000EF");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000F0");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000F4");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000F6");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000F8");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000FA");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000FB");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000100");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000101");
MODULE_ALIAS("hid:b0003g0101v0000056Ap0000010D");
MODULE_ALIAS("hid:b0003g0101v0000056Ap0000010E");
MODULE_ALIAS("hid:b0003g0101v0000056Ap0000010F");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000116");
MODULE_ALIAS("hid:b0003g0101v0000056Ap0000012C");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000300");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000301");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000302");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000303");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000304");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000307");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000309");
MODULE_ALIAS("hid:b0003g0101v0000056Ap0000030A");
MODULE_ALIAS("hid:b0003g0101v0000056Ap0000030C");
MODULE_ALIAS("hid:b0003g0101v0000056Ap0000030E");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000314");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000315");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000317");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000318");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000319");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000323");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000325");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000326");
MODULE_ALIAS("hid:b0003g0101v0000056Ap0000032A");
MODULE_ALIAS("hid:b0003g0101v0000056Ap0000032B");
MODULE_ALIAS("hid:b0003g0101v0000056Ap0000032C");
MODULE_ALIAS("hid:b0003g0101v0000056Ap0000032F");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000331");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000333");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000335");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000336");
MODULE_ALIAS("hid:b0003g0101v0000056Ap0000033B");
MODULE_ALIAS("hid:b0003g0101v0000056Ap0000033C");
MODULE_ALIAS("hid:b0003g0101v0000056Ap0000033D");
MODULE_ALIAS("hid:b0003g0101v0000056Ap0000033E");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000343");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00004001");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00004004");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00005000");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00005002");
MODULE_ALIAS("hid:b0003g*v000017EFp00006004");
MODULE_ALIAS("hid:b0003g0101v0000056Ap*");
MODULE_ALIAS("hid:b0018g0101v0000056Ap*");

MODULE_INFO(srcversion, "2CCBF7388F0C99AB38CB573");
