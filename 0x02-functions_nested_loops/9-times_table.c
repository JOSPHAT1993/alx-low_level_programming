#include "main.h"
/**
 * times_table-main function
 *
 * @void:'No Variable used with the function'
 *
 * Return:Multiples of Integers from 0 to 9
 */
void times_table(void)
{
	int r, p;
	
	for (r = 0; r <= 9; r++)
	{
		for (p = 0; p <= 9; p++)
		{
			int prod = r * p;

			if (p == 0)
			{
				_putchar('0');
			}
			else if (prod <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(prod + '0');
			} else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(prod / 10 + '0');
				_putchar(prod % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
