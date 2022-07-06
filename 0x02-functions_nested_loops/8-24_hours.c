#include "main.h"
/**
 * jack_bauer-main function
 *
 * @void:'No value to be declared inside'
 *
 * Return:The value of time
 */
void jack_bauer(void)
{
	int n, j;

	for (n = 0; n <= 23; n++)
	{
		for (j = 0; j <= 59; j++)
		{
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
			_putchar(':');
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar('\n');
		}
	}
}
