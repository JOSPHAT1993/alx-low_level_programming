#include "main.h"
/**
 * more_numbers-main function printing ten times integers
 *
 * @void:'Printing null'
 *
 * Return:Integers 10 times from 0 to 14
 */
void more_numbers(void)
{
	int i;
	int j = 0;

	while ( j <= 9 )
	{
		i = 0;

		while (i <= 14)
		{
			if (i > 9)
			{
				_putchar('1');
				_putchar((i % 10) + '0');
			}
			else
			{
				_putchar(i % 10 + '0');
			}
			i++;	
		}
		_putchar('\n');
		j++;
	}

}
