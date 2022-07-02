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
	unsigned char n;
	char ch;

	for (n = '0'; n < 10; n++)
	{
		putchar(n);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
