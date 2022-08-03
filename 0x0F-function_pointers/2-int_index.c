#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index-main function to print the array
 *
 * @array:'array variable'
 * @size:'Integer variable for size of array'
 * @cmp:'pointer to the array'
 *
 * Return:No of elements found
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}

