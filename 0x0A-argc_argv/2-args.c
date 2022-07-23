#include <stdio.h>
#include <string.h>
/**
 * main-Entry function
 *
 * @argc:'Variable for number of arguments'
 * @argv:'Array variable'
 *
 * Return:Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
