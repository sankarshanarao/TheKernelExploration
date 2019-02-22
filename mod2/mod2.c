#include <linux/module.h>
#include <linux/kernel.h>

static int print_num_cpus(void) 
{





	printk(KERN_INFO "THe number of cpu  %d",
				num_online_cpus());
	return 0;
}

static int init_mod2(void)
{
	printk(KERN_INFO "Hello world!\n");
	return 0;
}

static void exit_mod2(void) 
{
	printk(KERN_INFO "Bye World!\n");
}


module_init(init_mod2);
module_exit(exit_mod2);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Sankarshana Rao");
//MODULE_INFO("My first kernel (-_-!)");
