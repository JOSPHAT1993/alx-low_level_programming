#include "main.h"
/**
 * _puts_recursion-main function to print a string
 *
 * @s:'String Variable'
 *
 * Return:String passed as output.
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	_putchar('\n');
}
