#include <stdio.h>
/**
 * main-Entry point
 *
 * Description:'Program to print all alphabets except q and e'
 *
 * Return:Always 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'e' || ch == 'q')
		{
			ch++;
		}
		else
		{
			putchar(ch);
		}
	}
	return (0);
}
