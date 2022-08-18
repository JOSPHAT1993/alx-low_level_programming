#include "main.h"
#include "2-get_bit.c"
/**
 * set_bit-main function to set a bit to 1
 *
 * @n:'Integer variable'
 * @index:'Integer varibale repre position of n'
 *
 * Return:1 if success, and -1 if fails
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
		return (-1);

	(*n) |= 1 << index;
	if (get_bit((*n), index) == 1)
		return (1);
	return (-1);
}
