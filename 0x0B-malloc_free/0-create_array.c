#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array-main function to create an array of chars
 *
 * @size:'Integer variable for size'
 * @c:'Character variable'
 *
 * Return:Array created and a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;

	if (size == 0)
	{
		return (0);
	}
	p = (char *) malloc(size * sizeof(char));

	if (p == NULL)
	{
		return (0);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			p[i] = c;
		}
		return (p);
	}
}
