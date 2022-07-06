#include <unistd.h>

/**
 * _putchar printing char c
 *
 * @c:the character to print
 *
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
