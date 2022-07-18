#include "main.h"
/**
 * print_chessboard-main function to print chessboard
 *
 * @a:'Array variable'
 *
 * Return:Char in 2 dimensional array form
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}

