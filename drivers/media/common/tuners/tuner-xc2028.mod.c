#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x5c461b1c, "module_layout" },
	{ 0x941695f9, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x15692c87, "param_ops_int" },
	{ 0x2f69b4b0, "i2c_transfer" },
	{ 0xd3109990, "mutex_unlock" },
	{ 0xc499ae1e, "kstrdup" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x4d405db8, "param_ops_string" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x3567d6b5, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x5db35a67, "mutex_lock" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x663361b3, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x8626c3a4, "request_firmware" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x5ad7d526, "release_firmware" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

