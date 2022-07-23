#include <stdio.h>
#include <stdlib.h>
/**
 * main-Entry function
 *
 * @argc:'Variable for length of args'
 * @argv:'Variable array'
 *
 * Return:Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i, a, b;
	int prod = 0;

	for (i = 0; i < argc; i++)
	{
		if (argc == 3)
		{
			a = atoi(argv[1]);
			b = atoi(argv[2]);
			prod = a * b;
			printf("%d\n", prod);
			break;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	return (0);
}


