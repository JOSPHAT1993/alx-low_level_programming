#include "main.h"
#include "2-strlen.c"
/**
 * puts_half-main function for printing half of a string
 *
 * @str:'String variable'
 *
 * Return:String output but half of it
 */
void puts_half(char *str)
{
	int i;
	int p = 0;

	if (_strlen(str) % 2 != 0)
	{
		p++;
	}
	for (i = (_strlen(str) + p) / 2; i < _strlen(str); i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
