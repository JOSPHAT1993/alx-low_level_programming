#include "main.h"
/**
 * print_binary-main function to print binary from deci
 *
 * @n:'Variable integer'
 *
 * Return:Binary conversion
 */
void print_binary(unsigned long int n)
{
	unsigned long int x = 1;

	x <<= ((sizeof(x) * 8) - 1);

	if (n == 1)
	{
		_putchar('1');
		return;
	}
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (x > 0)
	{
		if ((x & n) == 0)
		{
			x = x >> 1;
		}
		else
		{
			break;
		}
	}
	while (x > 0)
	{
		if ((x & n) == 0)
		{
			_putchar('0');
		}
		else
		{
			_putchar('1');
		}
		x = x >> 1;
	}
}
