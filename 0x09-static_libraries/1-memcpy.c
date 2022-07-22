#include "main.h"
/**
 * _memcpy-main function for assigning a memory area
 *
 * @dest:'Array variable'
 * @src:'Array variable'
 * @n:'Integer variable for size of the array or string'
 *
 * Return:Assigned memory of src to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
