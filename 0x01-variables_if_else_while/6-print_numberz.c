#include <stdio.h>
/**
 * main-Entry point
 *
 * Description:'Program printing all numbers less than ten using putchar'
 *
 * Return:Always 0 (Success)
 */
int main(void)
{
	int n;

	while (n < 10)
	{
		putchar(str(n));
		n++;
	}
	return (0);
}
