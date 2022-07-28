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
	int i, n;
	int *arr;

	if (min > max)
	{
		return (NULL);
	}

	n = 0;
	for (i = min; i <= max; i++)
	{
		n++;
	}
	arr = malloc(sizeof(int) * n);

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = min; i < n; i++)
	{
		arr[i] = min;
		min++;
	}
	return (arr);
}

