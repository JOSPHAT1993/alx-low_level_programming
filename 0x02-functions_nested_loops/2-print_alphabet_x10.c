#include "main.h"
/**
 * print_alphabet_x10-Calling function from main file
 *
 * Description:'Printing a to z 10 times'
 *
 * Return:Returns all the chars
 * */
void print_alphabet_x10(void)
{
	char ch;
	int r;
	
	for (r = 0; r <= 9; r++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}

