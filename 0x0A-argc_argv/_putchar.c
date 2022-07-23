#include "main.h"
/**
 * _putchar-main function to print any character entered
 *
 * @c:'Character variable'
 *
 * Return:Write function
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

