#include "main.h"
/**
 * _memset-main function to allocate memory to an array
 *
 * @s:'Array to pointer'
 * @b:'Integer variable'
 * @n:'Integer variable representing size of array'
 *
 * Return:Assigned values
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
