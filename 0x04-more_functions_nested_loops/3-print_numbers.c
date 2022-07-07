#include "main.h"
/**
 * print_numbers-main Function for printing numbers
 *
 * @void:'Printing null'
 *
 * Return:Values of integers from 0 to 9
 */
void print_numbers(void)
{
	int i = '0';

	while (i <= '9')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}

