#include <stdio.h>
/**
 * print_to_98-main function
 *
 * @n:Integer variable
 *
 * Return:List of numbers to from n to 98
 */
void print_to_98(int n)
{
	int j;

	if (n > 98)
	{
		for (j = n; j >=98; j--)
		{
			printf("%d", j);
			if (j != 98)
			{
				printf(",");
				printf(" ");
			}
		}
	}
	else if (n == 98)
	{
		printf("%d", n);
	}
	else
	{
		for (j = n; j <= 98; j++)
		{
			printf("%d", j);
			if (j != 98)
			{
				printf(",");
				printf(" ");
			}
		}
	}
	printf("\n");
}

