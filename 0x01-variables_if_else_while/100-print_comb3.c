#include <stdio.h>
/**
 * main-Entry point
 *
 * Description:'Printing possible combinations of two digits nos'
 *
 * Return:Always 0 (Success)
 */
int main(void)
{
	int n, j;

	for (n = 10; n < 20; n++)
	{
		for (j = 10; j < 20; j++)
		{
			if ((n % 10) > (j % 10))
			{
				putchar((n % 10) + '0');
				putchar((j % 10) + '0');
				if (n != 18 || j != 19)
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
