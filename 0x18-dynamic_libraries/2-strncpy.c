#include "main.h"
/**
 * _strncpy-main function for copying a string
 *
 * @dest:'String variable pointer'
 * @src:'String variable pointer'
 * @n:'Integer varibale'
 *
 * Return:Copied text through dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int m, k;

	for (m = 0; m <= dest[m]; m++)
	{
	}
	for (k = 0; k < n && src[k] != '\0'; k++)
	{
		dest[m] = src[k];
	}
	for (; m < n; m++)
	{
		dest[m] = '\0';
	}
	return (dest);
}
