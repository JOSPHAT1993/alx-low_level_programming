#include "main.h"
/**
 * _print_rev_recursion-main function to print a reverse of a string
 *
 * @s:'String Variable'
 *
 * Return:Reversed string passed to the function
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
