#include <unistd.h>
/**
 * _putchar-main function to accept chars
 *
 * @c:'Character variable'
 *
 * Return:Write function
 */
int _putchar(int c)
{
	return(write(1, &c, 1));
}
