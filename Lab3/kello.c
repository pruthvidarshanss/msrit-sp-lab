//-----------------------------------------------------------------
//	kello.c
//
//	This kernel module outputs a brief message to the console.
//
//		compile using: $ make 
//		install using: $ sudo insmod hello.ko
//
//-----------------------------------------------------------------

#include <linux/module.h>		// for printk()

int init1( void )
{
	printk( "\n   Kello, everybody! \n\n" );

	return	0;
}

void exit1(void )
{
	printk( "\n   Goodbye now... \n\n" );
}

module_exit(exit1);
module_init(init1);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Name");
MODULE_DESCRIPTION("Printing messages in kernel");
