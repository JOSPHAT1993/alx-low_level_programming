#include "main.h"
/**
 * _indexof-returns boolean if special character
 *
 * @a:'Character variable'
 *
 * Return:True or False
 */
int _indexof(char a);
/**
 * cap_string-main function for capitalizing the strings
 *
 * Return:Capitalized string
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (_indexof(s[i]))
		{
			continue;
		}
		if (s[i] >= 'a' && s[i] <= 'z' && (_indexof(s[i - 1]) || i == 0))
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
}

int _indexof(char a)
{
	int i;

	char array[13] = {'\n', '\t', ' ', '.', ';', '!', '"', '?', '(', ')', '{', '}', ','};

	for (i = 0; i <= 12; i++)
	{
		if (array[i] == a)
		{
			return (1);
		}
	}
	return (0);
}
