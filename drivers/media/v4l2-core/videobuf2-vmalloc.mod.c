#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xf51a0302, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x689f370d, __VMLINUX_SYMBOL_STR(frame_vector_to_pages) },
	{ 0xb8b5974, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x3fd2571, __VMLINUX_SYMBOL_STR(vm_unmap_ram) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x52e96379, __VMLINUX_SYMBOL_STR(vb2_destroy_framevec) },
	{ 0xcda007bd, __VMLINUX_SYMBOL_STR(remap_vmalloc_range) },
	{ 0x1c792a04, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0x246cf362, __VMLINUX_SYMBOL_STR(set_page_dirty_lock) },
	{ 0xd5152710, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x85d23016, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0xab31d65a, __VMLINUX_SYMBOL_STR(vb2_create_framevec) },
	{ 0x6d6104cd, __VMLINUX_SYMBOL_STR(dma_buf_vunmap) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x79c5a9f0, __VMLINUX_SYMBOL_STR(ioremap) },
	{ 0xa8827d3c, __VMLINUX_SYMBOL_STR(vm_map_ram) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x3934a77b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xcdd158d, __VMLINUX_SYMBOL_STR(sg_alloc_table) },
	{ 0x2a4bbd17, __VMLINUX_SYMBOL_STR(dma_buf_export) },
	{ 0x5635a60a, __VMLINUX_SYMBOL_STR(vmalloc_user) },
	{ 0xfcdc14d6, __VMLINUX_SYMBOL_STR(frame_vector_to_pfns) },
	{ 0xfd1fdf8e, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xd24caec5, __VMLINUX_SYMBOL_STR(vb2_common_vm_ops) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0x1db7dc40, __VMLINUX_SYMBOL_STR(pgprot_kernel) },
	{ 0x9cd60539, __VMLINUX_SYMBOL_STR(sg_free_table) },
	{ 0x9da2cd6, __VMLINUX_SYMBOL_STR(vmalloc_to_page) },
	{ 0x8593719e, __VMLINUX_SYMBOL_STR(dma_buf_vmap) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf2-memops";


MODULE_INFO(srcversion, "94D6300CB94D898F1C6C2CD");
