#include <stdio.h>
/**
 * main-Entry point
 *
 * Description:'Program to print characters from a to z both in lowercase and uppercase'
 *
 * Return:Always 0 (Success)
 */
int main(void)
{
	char ch;
	char cp;	
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (cp = 'A'; cp <= 'Z'; cp++)
	{
		putchar(cp);
	}
	return (0);
}

