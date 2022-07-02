#include <stdio.h>
/**
 * main-Entry point
 *
 * Description:'Printing all possible combinations of numbers less that 10'
 *
 * Return:Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 10; n < 20; n++)
	{
		putchar((n % 10) + '0');
		if (n != 19)
		{
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}


