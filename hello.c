#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Rifa'i Sopyan");
MODULE_DESCRIPTION("Modul Kernel Hello World Sederhana");
MODULE_VERSION("2.0");

int init_module(void) {
    printk(KERN_INFO "Hello Rifa'i Sopyan Syauri \n");
    return 0;
}

void cleanup_module(void) {
    printk(KERN_INFO "Goodbye, Rifa'i Sopyan Syauri \n");
}


