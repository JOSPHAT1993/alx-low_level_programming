#include "main.h"
#include <stdlib.h>
/**
 * free_grid-main function to free a grid
 *
 * @grid:'2D Array variable'
 * @height:'Integer variable for column size'
 *
 * Return:freed 2D memory
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
