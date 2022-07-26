#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid-main function to create a two dim array using malloc
 *
 * @width:'Integer variable for row size'
 * @height:'Integer variable repre column size'
 *
 * Return:Pointer to a 2D Array initialized to 0
 */
int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **arr;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	arr = (int **) malloc(width * sizeof(int *));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < width; i++)
	{
		arr[i] = (int *) malloc(height * sizeof(int));
		if (arr[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(arr[j]);
			}
			free(arr);
		}

	}
	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);
}
