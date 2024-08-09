#include <linux/module.h>
#include <linux/init.h>

/* Meta Information*/
MODULE_LICENSE("MIT");
MODULE_AUTHOR("Patrick Seitz");
MODULE_DESCRIPTION("LKM Hello World");

static int __init ModuleInit(void)
{
	printk("Hello, kernel!\n");
	return 0;
}

static void __exit ModuleExit(void)
{
	printk("Goodbye, kernel!\n");
}

module_init(ModuleInit);
module_exit(ModuleExit);
