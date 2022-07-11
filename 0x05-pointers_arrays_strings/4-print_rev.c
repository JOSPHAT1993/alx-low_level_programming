#include "main.h"
#include "2-strlen.c"
/**
 * print_rev-main function for printing a string in reverse form
 *
 * @s:'String variable'
 *
 * Return:String in reverse form
 */
void print_rev(char *s)
{
	int i;

	for (i = _strlen(s) - 1; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}

