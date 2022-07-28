#include "main.h"
#include <stdlib.h>
/**
 * _calloc-main function to create a memory of an array
 *
 * @nmemb:'Array variable'
 * @size:'Integer variable for size of one element'
 *
 * Return:Pointer to a memory allocted for an array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	int *arr;
	size = sizeof(int);

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	arr = malloc(size * nmemb);

	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb; i++)
	{
		arr[i] = 0;
	}
	return (arr);
}
