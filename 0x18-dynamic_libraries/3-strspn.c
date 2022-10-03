#include "main.h"
/**
 * _strspn-main function for getting length of prefix
 *
 * @s:'Array variable'
 * @accept:'Array variable'
 *
 * Return:Prefix length of values where s and accept match
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int r = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				r++;
				break;
			}
		}
		if (s[j] == '\0')
		{
			return (r);
		}
	}
	return (r);
}
