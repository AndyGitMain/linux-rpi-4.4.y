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
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xd75a0258, __VMLINUX_SYMBOL_STR(unregister_net_sysctl_table) },
	{ 0xf7953420, __VMLINUX_SYMBOL_STR(ip_do_fragment) },
	{ 0xe43274bc, __VMLINUX_SYMBOL_STR(proc_dointvec) },
	{ 0xd6197f1, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0x610dcb5b, __VMLINUX_SYMBOL_STR(__vlan_find_dev_deep_rcu) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x78b2d897, __VMLINUX_SYMBOL_STR(neigh_destroy) },
	{ 0xc8276a79, __VMLINUX_SYMBOL_STR(nf_hooks_needed) },
	{ 0xab43ae67, __VMLINUX_SYMBOL_STR(nf_hook_slow) },
	{ 0x47bf98c, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5ea43e36, __VMLINUX_SYMBOL_STR(br_dev_queue_push_xmit) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x418f917, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xf25661f7, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xdf1f7a49, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x3d155eae, __VMLINUX_SYMBOL_STR(nf_unregister_hooks) },
	{ 0xa0c5a8eb, __VMLINUX_SYMBOL_STR(br_forward_finish) },
	{ 0x4ebb8e7e, __VMLINUX_SYMBOL_STR(ip_route_input_noref) },
	{ 0x58e27cce, __VMLINUX_SYMBOL_STR(nf_ipv6_ops) },
	{ 0x44de3d4c, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x2060e54e, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0xfd1fdf8e, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xf9b23496, __VMLINUX_SYMBOL_STR(skb_pull_rcsum) },
	{ 0x3dad1589, __VMLINUX_SYMBOL_STR(ip_route_output_flow) },
	{ 0x31b9195c, __VMLINUX_SYMBOL_STR(__local_bh_disable_ip) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x80ec3f48, __VMLINUX_SYMBOL_STR(___pskb_trim) },
	{ 0xf4bf757d, __VMLINUX_SYMBOL_STR(nf_br_ops) },
	{ 0xf4cdb2cf, __VMLINUX_SYMBOL_STR(nf_register_hooks) },
	{ 0xd761f726, __VMLINUX_SYMBOL_STR(br_handle_frame_finish) },
	{ 0x162a4dee, __VMLINUX_SYMBOL_STR(register_net_sysctl) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=bridge";


MODULE_INFO(srcversion, "96CA697766FA5E4BE938D19");
