#include "unistd.h"
/**
 * _putchar-main function for allowing _putchar
 *
 * @c:'Character variable'
 *
 * Return:Write function result
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}


