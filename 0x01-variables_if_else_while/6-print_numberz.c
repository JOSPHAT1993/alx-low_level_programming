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
	int n = 10;

	while (n < 20)
	{
		putchar(n % 10 + '0');
		n++;
	}
	return (0);
}
