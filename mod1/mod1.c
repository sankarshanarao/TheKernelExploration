#include <linux/module.h>
#include <linux/kernel.h>


extern int print_num_cpus(void);
static int init_mod1(void)
{
	printk(KERN_INFO "Hello world!\n");
	print_num_cpus();
	return 0;
}

static void exit_mod1(void) 
{
	printk(KERN_INFO "Bye World!\n");
}

module_init(init_mod1);
module_exit(exit_mod1);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Sankarshana Rao");
//MODULE_INFO("My first kernel (-_-!)");
