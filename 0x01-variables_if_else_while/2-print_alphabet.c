#include <stdio.h>
/**
 * main-Entry point
 *
 * Description:'Program to print all characters in lowercase'
 *
 * Return:Always 0 (Success)
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	return (0);
}
