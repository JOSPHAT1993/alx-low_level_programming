#include <stdio.h>
#include "main.h"
/**
 * print_diagsums-main function for printing sums
 *
 * @a:'Array variable declaration'
 * @size:'Integer variable to repr size of array a'
 *
 * Return:Sums of the diagonals of an array
 */
void print_diagsums(int *a, int size)
{
	int i, j;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if ( i == j)
			{
				sum1 = sum1 + a[((i * size) + i)];
			}
		}
	}
	printf("\n");
	for (i = 0; i < size; i++)
	{
		for (j = size; j >= 0; j--)
		{
			if ((i + j) == size)
			{
				sum2 = sum2 + a[((j * size) - j)];
			}
		}
	}
	printf("%d, %d", sum1, sum2);
}


