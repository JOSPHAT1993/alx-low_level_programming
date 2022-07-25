#include "main.h"
#include <stdlib.h>
/**
 * _strdup-main fuction to duplicate string
 *
 * @str:'String variable'
 *
 * Return:Pointer to duplicated string
 */
char *_strdup(char *str)
{
	char *dup;
	int c = 0;
	int i = 0;

	if (str == NULL)
		return (NULL);
	while (str[c] != '\0')
	{
		c++;
	}
	dup = (char *) malloc(sizeof(char) * c + 1);

	if (!dup)
	{
		return (NULL);
	}
	for (i = 0; i < c; i++)
	{
		dup[i] = str[i];
	}
	return (dup);
}
