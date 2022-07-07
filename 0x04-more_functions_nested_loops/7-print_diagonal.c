#include "main.h"
/**
 * print_diagonal-main function for printing diagonal
 *
 * @n:'Integer variable'
 *
 * Return:Character \ n times
 */
void print_diagonal(int c)
{
	int j;
	int i;

	for (j = 0; j < c; j++)
	{

		for (i > 0; i = j; i++)
		{
			_putchar(' ');
		}			
		_putchar('\\');
		_putchar('\n');
	}
	_putchar('\n');
}

