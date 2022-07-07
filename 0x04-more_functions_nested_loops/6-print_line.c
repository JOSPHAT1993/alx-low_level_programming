#include "main.h"
/**
 * print_line-main function for printing line
 *
 * @n:'Integer variable'
 *
 * Return:Line n times
 */
void print_line(int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
