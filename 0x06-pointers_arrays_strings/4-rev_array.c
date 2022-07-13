#include "main.h"
/**
 * reverse_array-main function for reversing an array
 *
 * @a:'Array declaration'
 * @n:'Integer Variable repre no of values on the aaray'
 *
 * Return:A reversed Array values
 */
void reverse_array(int *a, int n)
{
	int i;
	int r;

	for (i = 0; i < (n /2); i++)
	{
		r = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = r;
	}
}
