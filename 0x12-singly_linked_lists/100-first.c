#include "lists.h"
#include <stdio.h>
/**
 * first_print-main function before the main function
 *
 * @void:'Return void'
 *
 * Return:String before the main function
 */
void first_print(void) __attribute__((constructor));
void first_print(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
