#include "main.h"
/**
 * leet-main function for leetify
 *
 * @s:'String Variable'
 *
 * Return:Leatified text
 */
char *leet(char *s)
{
	char myarray[] = "a4A4e3E3o0O0t7T7l1L1";
	int i;
	int k;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (k = 0; myarray[k] != '\0'; k++)
		{
			if (s[i] == myarray[k])
			{
				s[i] = myarray[k + 1];
				break;
			}
		}
	}
	return (s);
}
