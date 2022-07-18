#include "main.h"
/**
 * _strchr-main function that locates char in string
 *
 * @s:'String Variable'
 * @c:'Character Variable to be located'
 *
 * Return:The character or null if not located
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (0);
}

