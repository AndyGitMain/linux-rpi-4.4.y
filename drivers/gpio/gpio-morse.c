/*
 * Control GPIO for Raspberry Pi 3
 *
 */
#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/fs.h>

/*
 * Debug option
 */
#define GPIO_MORSE_MODULE_DEBUG

#undef PDEBUG
#ifdef GPIO_MORSE_MODULE_DEBUG
#  ifdef __KERNEL__
#    define PDEBUG(fmt, args...) printk(KERN_DEBUG "[gpio-morse] " fmt, ## args)
#  else
#    define PDEBUG(fmt, args...) fprintf(stderr, fmt, ## args)
#  endif
#else
#  define PDEBUG(fmt, args...)
#endif


#define DEV_MORSE_NAME "gpio-morse"
static int DEV_MORSE_MAJOR_NUMBER = 230;


static int morse_open(struct inode *inode, struct file *filp)
{
	PDEBUG("%s:%d\n", __FUNCTION__, __LINE__);
	return 0;
}


static int morse_release(struct inode *inode, struct file *filp)
{
	PDEBUG("%s:%d\n", __FUNCTION__, __LINE__);
	return 0;
}


/* application can call follwoing functions that are registered to kernel */
static struct file_operations morse_fops = {
	.owner = THIS_MODULE,
	/* call morse_open() when open() is called by applicaiton */
	.open = morse_open,
	/* call morse_release() when close() is called by application */
	.release = morse_release
};

static int morse_init(void)
{
	PDEBUG("%s:%d\n", __FUNCTION__, __LINE__);
	register_chrdev(DEV_MORSE_MAJOR_NUMBER, DEV_MORSE_NAME, &morse_fops);
	return 0;
}

static void morse_exit(void)
{
	PDEBUG("%s:%d\n", __FUNCTION__, __LINE__);
	unregister_chrdev(DEV_MORSE_MAJOR_NUMBER, DEV_MORSE_NAME);
}

module_init(morse_init);
module_exit(morse_exit);
MODULE_LICENSE("Dual BSD/GPL");

