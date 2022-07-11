#include "main.h"
/**
 * _puts-main function for printing a string
 *
 * @str:'String Variable for use'
 *
 * Return:String of Characters
 */
void _puts(char *str)
{
	int i;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
