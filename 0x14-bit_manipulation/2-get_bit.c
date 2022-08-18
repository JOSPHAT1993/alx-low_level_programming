#include "main.h"
/**
 * get_bit-main function to get a bit
 *
 * @n:'Integer variable'
 * @index:'Integer variable repre position'
 *
 * Return:Value of num or -1 if it fails
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 32)
		return (-1);
	return (n >> index & 1);
}
