#include <stdio.h>
/**
 * main-Entry function
 *
 * @void:'Printing null'
 *
 * Return:Always 0 (Success)
 */
int main(void)
{
	int n = 1;

	while (n <= 100)
	{
		if ((n % 15) == 0)
		{
			printf("FizzBuzz");
			printf(" ");
			n++;
		}
		else if ((n % 5) == 0)
		{
			printf("Buzz");
			printf(" ");
			n++;
		}
		else if ((n % 3) == 0)
		{
			printf("Fizz");
			printf(" ");
			n++;
		}
		else
		{
			printf("%d", n);
			printf(" ");
			n++;
		}
	}
	printf("\n");
	return (0);
}

