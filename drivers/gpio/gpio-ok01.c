/*
 * OK01 - controll GPIO
 */
#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>


/*
 * Debug option
 */
#undef PDEBUG
#ifdef GPIO_OK01_MODULE_DEBUG
#  ifdef __KERNEL__
#    define PDEBUG(fmt, args...) printk(KERN_DEBUG "GPIO-OK01 : " fmt, ## args)
#  else
#    define PDEBUG(fmt, args...) fprintf(stderr, fmt, ## args)
#  endif
#else
#  define PDEBUG(fmt, args...)
#endif


#define DEV_OK01_NAME "gpio-ok01"
static int DEV_OK01_MAJOR_NUMBER 221;


/* Macro for function select */
#define M_INPUT 0
#define M_OUTPUT 1

/* Macro for GPIO status */
#define S_LOW 0
#define S_HIGH 1

/* I/O base address on the virtual memory in kernel */
#define BCM2837_PERI_BASE 0xF2000000

/* GPIO base address on the virtual memory in kernel */
#define GPIO_BASE (BCM2837_PERI_BASE + 0x00200000)

/* return GPIO base address */
static volatile unsigned int *get_gpio_addr()
{
	return (volatile unsigned int *)GPIO_BASE; 
}

static int set_bits(volatile unsigned int *addr
					const unsigned int shift,
					const unsigned int val,
					const unsigned int mask)
{

	return 0;
}











static int ok01_open(struct inode *, struct file *)
{
	PDEBUG("%s:%d\n", __FUNCTION__, __LINE__);
}

static int ok01_release(struct inode *, struct file *)
{
	PDEBUG("%s:%d\n", __FUNCTION__, __LINE__);
}

static ssize_t ok01_read(struct file *, char __user *, size_t, loff_t *)
{
	PDEBUG("%s:%d\n", __FUNCTION__, __LINE__);
}

static ssize_t ok01_write(struct file *, const char __user *, size_t, loff_t *)
{
	PDEBUG("%s:%d\n", __FUNCTION__, __LINE__);
}


static struct file_operations ok01_fops = {
	.owner = THIS_MODULE,
	.open = ok01_open,
	.release = ok01_release,
	.read = ok01_read,
	.write = ok01_write
};

static int ok01_init(void)
{
	PDEBUG("%s:%d\n", __FUNCTION__, __LINE__);
	register_chrdev(DEV_OK01_MAJOR_NUMBER, DEV_OK01_NAME, &ok01_fops);
	return 0;
}

static void ok01_exit(void)
{
	PDEBUG("%s:%d\n", __FUNCTION__, __LINE__);
	unregister_chrdev(DEV_OK01_MAJOR_NUMBER, DEV_OK01_NAME);
}

module_init(ok01_init);
module_exit(ok01_exit);
MODULE_LICENSE("Dual BSD/GPL");

