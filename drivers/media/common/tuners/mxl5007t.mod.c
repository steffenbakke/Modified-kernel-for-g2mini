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
	{ 0xf9a482f9, "msleep" },
	{ 0x15692c87, "param_ops_int" },
	{ 0x2f69b4b0, "i2c_transfer" },
	{ 0xd3109990, "mutex_unlock" },
	{ 0x3567d6b5, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0x5db35a67, "mutex_lock" },
	{ 0xe6b3b90a, "arm_delay_ops" },
	{ 0x663361b3, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "66814C9520EEBD50A7ED749");
