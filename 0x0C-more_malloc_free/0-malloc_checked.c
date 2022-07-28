#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked-main function to allocate a memory using malloc
 *
 * @b:'Integer Variable for size of malloc array'
 *
 * Return:Pointer to the malloc allocate memory
 */
void *malloc_checked(unsigned int b)
{
	void *arr;

	arr = malloc(b);

	if (arr == NULL)
	{
		exit(98);
	}

	return (arr);
}
