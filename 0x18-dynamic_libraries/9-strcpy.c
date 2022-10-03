#include <stdio.h>
#include "main.h"
/**
 * _strcpy-main function for copying a string to another variable
 *
 * @dest:'String Variable'
 * @src:'String variable'
 *
 * Return:Copy of string from another variable src to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i <= _strlen(src); i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
