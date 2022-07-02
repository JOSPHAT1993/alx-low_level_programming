#include <stdio.h>
/**
 * main-Entry point
 *
 * Description:'Printing numbers hexadecimals from zero to sixteen'
 *
 * Return:Always 0 (Success)
 */
int main(void)
{
	int n;
	char ch;

	for (n = 10; n <=90; n=n+10)
	{
		putchar(n % 10, '0');
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
