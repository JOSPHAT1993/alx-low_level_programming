#include <stdio.h>
/**
 * main-Entry point
 *
 * Description:'Printing all possible two by two combs of ints'
 *
 * Return:Always 0 (Success)
 */
int main(void)
{
	int a, b, c, d;

	for (a = 10; a < 20; a++)
	{
		for (b = 10; b < 20; b++)
		{
			while (((a % 10) == 0) && ((b % 10) == 0) && ((c % 10) > (d % 10)))
			{
				putchar((a % 10) + '0');
				putchar((b % 10) + '0');
				putchar(' ');
				putchar((c % 10) + '0');
				putchar((d % 10) + '0');
				c++;
				d++;
				if ((c % 10) != 8)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
