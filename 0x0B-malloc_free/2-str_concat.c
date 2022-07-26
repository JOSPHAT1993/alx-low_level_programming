#include "main.h"
#include <stdlib.h>
/**
 * str_concat-main function to concatenate two strings
 *
 * @s1:'String variable1'
 * @s2:'String variable2'
 *
 * Return:Pointer to concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int i, size1, size2;
	char *conc;

	size1 = 0;
	size2 = 0;
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		size1++;
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		size2++;
	}

	conc = (char *) malloc(sizeof(char) * (size1 + size2 + 1));

	if (conc == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size1; i++)
	{
		conc[i] = s1[i];
	}
	for (i = 0; i < size2; i++)
	{
		conc[i + size1] = s2[i];
	}
	conc[i + size1] = '\0';
	return (conc);
}
