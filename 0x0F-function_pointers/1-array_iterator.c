#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator-main function to create iteration
 *
 * @array:'Array variable'
 * @size:'size of array'
 * @action:'Pointer to a function'
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL || action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
	else
	{
		exit(98);
	}
}
