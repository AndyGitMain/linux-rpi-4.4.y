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
	{ 0xb8b5974, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x184fda65, __VMLINUX_SYMBOL_STR(vb2_core_streamoff) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x8026c27d, __VMLINUX_SYMBOL_STR(vb2_core_dqbuf) },
	{ 0x596e1ad6, __VMLINUX_SYMBOL_STR(vb2_mmap) },
	{ 0x908782ae, __VMLINUX_SYMBOL_STR(vb2_core_qbuf) },
	{ 0xc53ddac9, __VMLINUX_SYMBOL_STR(vb2_core_querybuf) },
	{ 0x7ab88a45, __VMLINUX_SYMBOL_STR(system_freezing_cnt) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0x2d328655, __VMLINUX_SYMBOL_STR(vb2_debug) },
	{ 0x85d23016, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x66d8d454, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0xbcb8ec5b, __VMLINUX_SYMBOL_STR(vb2_core_streamon) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x748399d0, __VMLINUX_SYMBOL_STR(vb2_core_prepare_buf) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xe1927216, __VMLINUX_SYMBOL_STR(freezing_slow_path) },
	{ 0x5fb7e91b, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xf9964443, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0xc5cb1089, __VMLINUX_SYMBOL_STR(v4l2_event_pending) },
	{ 0xa1276b0e, __VMLINUX_SYMBOL_STR(vb2_plane_vaddr) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x3934a77b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x3c622007, __VMLINUX_SYMBOL_STR(v4l2_fh_release) },
	{ 0x50574d65, __VMLINUX_SYMBOL_STR(vb2_core_queue_release) },
	{ 0x2e767fd6, __VMLINUX_SYMBOL_STR(vb2_queue_error) },
	{ 0xe89580bd, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x4482cdb, __VMLINUX_SYMBOL_STR(__refrigerator) },
	{ 0xf511fcb6, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0xfd1fdf8e, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9e61bb05, __VMLINUX_SYMBOL_STR(set_freezable) },
	{ 0xb5d4f565, __VMLINUX_SYMBOL_STR(vb2_core_create_bufs) },
	{ 0x7152d8f3, __VMLINUX_SYMBOL_STR(vb2_core_expbuf) },
	{ 0xa3f52946, __VMLINUX_SYMBOL_STR(vb2_core_reqbufs) },
	{ 0xae8205c0, __VMLINUX_SYMBOL_STR(vb2_verify_memory_type) },
	{ 0xaa42f3a6, __VMLINUX_SYMBOL_STR(vb2_core_queue_init) },
	{ 0x98af34f8, __VMLINUX_SYMBOL_STR(vb2_buffer_in_use) },
	{ 0x1c483a9, __VMLINUX_SYMBOL_STR(v4l2_get_timestamp) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf2-core,videodev,v4l2-common";


MODULE_INFO(srcversion, "4E01A603F43F1069826E81A");
