#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat-main function to concat strings
 *
 * @s1:'String variable1'
 * @s2:'String variable2'
 * @n:'Integer variable for size of string'
 *
 * Return:Concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, size1, size2;
	char *arr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	size1 = 0;
	size2 = 0;
	for (i = 0; s1[i] != '\0'; i++)
	{
		size1++;
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		size2++;
	}

	if (n >= size2)
	{
		n = size2;
	}
	arr = malloc(sizeof(char) * n + size1 + 1);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size1; i++)
	{
		arr[i] = s1[i];
	}
	for (i = 0; i < n; i++)
	{
		arr[i + size1] = s2[i];
	}
	arr[i + size1] = '\0';

	return (arr);
}

