#include <stdio.h>
#include "main.h"
/**
 * print_array-main function for printing elements of an array
 *
 * @a:'Array Variable'
 * @n:'Integer variable representing number of elements'
 *
 * Return:Elements in the array
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
		printf(", ");
		}
	}
	printf("\n");
}
