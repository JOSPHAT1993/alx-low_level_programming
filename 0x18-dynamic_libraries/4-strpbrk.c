#include "main.h"
/**
 * _strpbrk-main function for searching a string
 *
 * @s:'Array variable'
 * @accept:'Array variable'
 *
 * Return:Character that resemble in the strings
 */
char *_strpbrk(char *s, char *accept)
{
	int i,j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return (0);
}

