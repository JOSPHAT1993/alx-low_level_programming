#include "main.h"
/**
 * _strncat-main function for concatenating strings
 *
 * @dest:'String Variable used'
 * @src:'String Variable used'
 * @n:'Integer Variable used to count number of bytes in a string'
 *
 * Return:Concatenated String
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j, l;

	for (i = 0; i <= dest[i]; i++)
	{}
	for (l = 0; j <= src[l]; l++)
	{
		for (j = 0; j <= n; i++)
		{
			dest[i + l] = src[l];
		}
	}
	dest[i + l] = '\0';

	return (dest);
}
