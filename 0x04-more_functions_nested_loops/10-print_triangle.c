#include "main.h"
/**
 * print_triangle-main function to print the chars
 *
 * @size:'Integer variable to print the character'
 *
 * Return:Symbols # in a triangular pattern
 */
void print_triangle(int size)
{
	int i;
	int j;
	int k;

	for (i = 0; i <= size; i++)
	{
		for (j = i; j <= size; j++)
		{
			_putchar(' ');
		}
			for (k = 1; k <= i; k++)
			{
				_putchar('#');
			}
			_putchar('\n');

	}
}
