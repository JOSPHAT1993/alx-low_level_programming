#include "main.h"
/**
 * main-Entry point
 *
 * Description:'Printing alphabets from a to z'
 *
 * Return:Always 0 (Success)
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
