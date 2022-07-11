#include "main.h"
/**
 * swap_int-main function for swapping values of variables
 *
 * @a:'Integer Variable for use'
 * @b:'Integer Variable used in the function'
 *
 * Return:Swapped values of the variable
 */
void swap_int(int *a, int *b)
{
	int p = *a;
	*a = *b;
	*b = p;
}

