#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * typechecker-main fuction to check data type
 *
 * @s:'String variable'
 *
 * Return:1 success and 0 for failure
 */
int typechecker(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (!isdigit(s[i]))
		{
			return (0);
		}
	}
 	return (1);
}
/**
 * main-Entry function
 *
 * @argc:'Number of arguments passed'
 * @argv:'Array Variable'
 *
 * Return:Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;
	int sum;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (typechecker(argv[i]))
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("%d\n", 0);
	}
	return (0);
}
