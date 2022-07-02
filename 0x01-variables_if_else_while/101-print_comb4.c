#include <stdio.h>
/**
 * main-Entry point
 *
 * Description:'Printing all possible combs of three digits'
 *
 * Return:Always 0 (Success)
 */
int main(void)
{
	int p, q, r;

	for (p = 10; p < 20; p++)
	{
		for (q = 10; q < 20; q++)
		{
			for (r = 10; r < 20; r++)
			{
				if (((r % 10) > (q % 10)) && ((q % 10) > (p % 10)))
				{
					putchar((p % 10) + '0');
					putchar((q % 10) + '0');
					putchar((r % 10) + '0');
					if (p != 7 || q != 8 || r != 9)
					{
						putchar(',');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
