#include <unistd.h>
/**
 * _putchar-main function to print a char
 *
 * @c:'Caharacter variable'
 *
 * Return:Write function to accept character from std input
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

			
