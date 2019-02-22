#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/moduleparam.h>

static char* mod_insert_name = "aCoderHasNoName";

module_param(mod_insert_name, charp, 0000);
MODULE_PARM_DESC(mod_insert_name, "Name of user");

static int init_mod(void)
{
	printk(KERN_INFO "Hello %s!\n", mod_insert_name);
	return 0;
}

static void exit_mod(void)
{
	printk(KERN_INFO "Bye %s!\n", mod_insert_name);
}

module_init(init_mod);
module_exit(exit_mod);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Sankarshana Rao");
