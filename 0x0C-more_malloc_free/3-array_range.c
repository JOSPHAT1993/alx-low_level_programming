#include "main.h"
#include <stdlib.h>
/**
 * array_range-main function to create memory of array
 *
 * @min:'Integer value to repre lowest value'
 * @max:'Integer value to repre gretest value'
 *
 * Return:Array ordered from min to max
 */
int *array_range(int min, int max)
{
	int i;
	int *arr;

	if (min > max)
	{
		return (NULL);
	}
	
	arr = malloc(sizeof(int) * max + 1);
	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= max; i++)
	{
		arr[i] = min;
		min++;
	}
	return (arr);
}

