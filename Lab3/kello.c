//-----------------------------------------------------------------
//	kello.c
//
//	This kernel module outputs a brief message to the console.
//
//		compile using: $ mmake hello 
//		install using: $ /sbin/insmod hello.ko
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

MODULE_LICENSE("GPL");
module_init(init1);
module_exit(exit1);

