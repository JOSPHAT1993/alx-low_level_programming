#include "main.h"
/**
 * _putchar-main funcntion to return write function
 *
 * @c:'char variable'
 *
 * Return:Write function
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
