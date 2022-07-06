#include "main.h"
/**
 * print_sign-main function
 *
 * @n:'Relates to the character being checked'
 *
 * Return: 1 if greater than zero, 0 if equal to zero, -1 if less
 */
int print_sign(int c)
{
	if (c > 0)
	{
		_putchar('+');
		_putchar(',');
		_putchar(' ');
		return (1);
	}
	else if (c == 0)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		return (0);
	}
	else if (c < 0)
	{
		_putchar('-');
		_putchar(',');
		_putchar(' ');
		return (-1);
	}
	return (0);
}
