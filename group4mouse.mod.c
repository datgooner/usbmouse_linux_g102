#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(.gnu.linkonce.this_module) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x9de7765d, "module_layout" },
	{ 0x3bd5c9b1, "usb_deregister" },
	{ 0x1a62a191, "usb_register_driver" },
	{ 0x1cc8e120, "input_free_device" },
	{ 0xf6d07d4, "input_register_device" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x5792f848, "strlcpy" },
	{ 0x37f1375c, "usb_alloc_urb" },
	{ 0x890b2231, "usb_alloc_coherent" },
	{ 0xf6bdf445, "input_allocate_device" },
	{ 0xb5f17439, "kmem_cache_alloc_trace" },
	{ 0xcbf895e0, "kmalloc_caches" },
	{ 0x43388a0b, "_dev_err" },
	{ 0xb0d9a8a7, "input_event" },
	{ 0x4e83d079, "usb_submit_urb" },
	{ 0x37a0cba, "kfree" },
	{ 0x51846891, "usb_free_coherent" },
	{ 0x115d4056, "usb_free_urb" },
	{ 0x378a81c2, "input_unregister_device" },
	{ 0xde1a3fdb, "usb_kill_urb" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic03isc01ip02in*");

MODULE_INFO(srcversion, "741DB294FF4E72A8AD09AE9");
