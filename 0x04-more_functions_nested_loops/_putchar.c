#include <unistd.h>
/**
 * _putchar-main function allowing reading of chars
 *
 * @c:'Character variable
 *
 * Return:Characters for the standard input to output
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}

