
#include <linux/module.h>
#include <linux/init.h>

MODULE_LICENSE("GPL");  // Correct macro spelling


static int first_module_init(void) {
    printk(KERN_INFO "Hello World from KUMAR\n");
    return 0;
}

static void first_module_exit(void) {
    printk(KERN_INFO "GOOD BYE KUMAR\n");
}

module_init(first_module_init);
module_exit(first_module_exit);
