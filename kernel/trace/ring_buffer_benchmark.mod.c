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
	{ 0x2bb3cf94, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xc7691094, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x7279c1e9, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x838b13e7, __VMLINUX_SYMBOL_STR(ring_buffer_free) },
	{ 0xee437ad4, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0x26d7dccc, __VMLINUX_SYMBOL_STR(set_user_nice) },
	{ 0x9c9018e2, __VMLINUX_SYMBOL_STR(sched_setscheduler) },
	{ 0x1f7c4329, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0xf4fc2d6c, __VMLINUX_SYMBOL_STR(__ring_buffer_alloc) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x7b0f1ab3, __VMLINUX_SYMBOL_STR(ring_buffer_free_read_page) },
	{ 0x9d8331c0, __VMLINUX_SYMBOL_STR(ring_buffer_read_page) },
	{ 0x4aadeb9a, __VMLINUX_SYMBOL_STR(ring_buffer_alloc_read_page) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0x2d37342e, __VMLINUX_SYMBOL_STR(cpu_online_mask) },
	{ 0x9062c322, __VMLINUX_SYMBOL_STR(ring_buffer_consume) },
	{ 0xb2d5a552, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0xc72e1233, __VMLINUX_SYMBOL_STR(__trace_bprintk) },
	{ 0xd9ecb670, __VMLINUX_SYMBOL_STR(ring_buffer_overruns) },
	{ 0x4e109192, __VMLINUX_SYMBOL_STR(ring_buffer_entries) },
	{ 0x918ad429, __VMLINUX_SYMBOL_STR(ring_buffer_lock_reserve) },
	{ 0xd87601cc, __VMLINUX_SYMBOL_STR(ring_buffer_unlock_commit) },
	{ 0x7a2af7b4, __VMLINUX_SYMBOL_STR(cpu_number) },
	{ 0x9621849f, __VMLINUX_SYMBOL_STR(ring_buffer_event_data) },
	{ 0xc87c1f84, __VMLINUX_SYMBOL_STR(ktime_get) },
	{ 0xb1e25684, __VMLINUX_SYMBOL_STR(__trace_bputs) },
	{ 0x64ab0e98, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x87043067, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0xddd58dc0, __VMLINUX_SYMBOL_STR(ring_buffer_reset) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0x4292364c, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xea4357be, __VMLINUX_SYMBOL_STR(current_task) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

