#include <stdio.h>
/**
 * main-Entry point
 *
 * Description:'Printing Alphabets in lowercase in reverse form'
 *
 * Return:Always 0 (Success)
 */
int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	return (0);
}
