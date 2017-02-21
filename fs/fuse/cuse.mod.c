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
	{ 0x14058df1, __VMLINUX_SYMBOL_STR(fuse_file_poll) },
	{ 0xf6944d79, __VMLINUX_SYMBOL_STR(noop_llseek) },
	{ 0x255b6fac, __VMLINUX_SYMBOL_STR(misc_deregister) },
	{ 0x198743ca, __VMLINUX_SYMBOL_STR(fuse_dev_operations) },
	{ 0x5a041bb8, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0x238c90c9, __VMLINUX_SYMBOL_STR(misc_register) },
	{ 0xf39cacaa, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xe5e85202, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0x96e8358c, __VMLINUX_SYMBOL_STR(fuse_dev_free) },
	{ 0x6ab5f7c0, __VMLINUX_SYMBOL_STR(fuse_put_request) },
	{ 0xf6326e86, __VMLINUX_SYMBOL_STR(fuse_request_send_background) },
	{ 0x8606ce92, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0x7ccc0096, __VMLINUX_SYMBOL_STR(fuse_get_req_for_background) },
	{ 0xf98f00ab, __VMLINUX_SYMBOL_STR(fuse_dev_alloc) },
	{ 0x732a4828, __VMLINUX_SYMBOL_STR(fuse_conn_init) },
	{ 0xb8b5974, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x404482a6, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xb251528e, __VMLINUX_SYMBOL_STR(kobject_uevent) },
	{ 0xfe96a415, __VMLINUX_SYMBOL_STR(cdev_add) },
	{ 0x456b8897, __VMLINUX_SYMBOL_STR(cdev_alloc) },
	{ 0x9e314d5e, __VMLINUX_SYMBOL_STR(device_add) },
	{ 0x29537c9e, __VMLINUX_SYMBOL_STR(alloc_chrdev_region) },
	{ 0xa3291d10, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0x78b2e9f8, __VMLINUX_SYMBOL_STR(dev_set_name) },
	{ 0x4a0ff26f, __VMLINUX_SYMBOL_STR(device_initialize) },
	{ 0xfd1fdf8e, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xd8e484f0, __VMLINUX_SYMBOL_STR(register_chrdev_region) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x77bc13a0, __VMLINUX_SYMBOL_STR(strim) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x939648d0, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0xebf041a9, __VMLINUX_SYMBOL_STR(fuse_direct_io) },
	{ 0xaeac730c, __VMLINUX_SYMBOL_STR(fuse_do_ioctl) },
	{ 0x2a20e667, __VMLINUX_SYMBOL_STR(fuse_do_open) },
	{ 0xacabfdf2, __VMLINUX_SYMBOL_STR(fuse_conn_get) },
	{ 0xd3a05dc6, __VMLINUX_SYMBOL_STR(fuse_sync_release) },
	{ 0x19f462ab, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xad2a2b31, __VMLINUX_SYMBOL_STR(fuse_dev_release) },
	{ 0x92f59f1a, __VMLINUX_SYMBOL_STR(fuse_conn_put) },
	{ 0xd022cd81, __VMLINUX_SYMBOL_STR(cdev_del) },
	{ 0x7485e15e, __VMLINUX_SYMBOL_STR(unregister_chrdev_region) },
	{ 0x5897abf3, __VMLINUX_SYMBOL_STR(device_unregister) },
	{ 0x85d23016, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x3934a77b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xf68181b0, __VMLINUX_SYMBOL_STR(fuse_abort_conn) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=fuse";


MODULE_INFO(srcversion, "787F1E2FFC67670DBA1811A");
