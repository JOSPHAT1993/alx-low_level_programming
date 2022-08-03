#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main-Entry point
 *
 * @argc:'number of arguments'
 * @argv:'Array variable of args'
 *
 * Return:Values for functions
 */
int main(int argc, int *argv[])
{
	if (argc == 4)
	{
		int a;
		int b;

		int (*func)(int, int);

		a = atoi(argv[1]);
		b = atoi(argv[3]);

		func = get_op_func(argv[2]);

		if ((*argv[2] == '%' || *argv[2] == '/') && b == 0)
		{
			printf("Error\n");
			exit(100);
		}
		printf("%d\n", func(a, b));
		return (0);
	}
	printf("Error\m");
	exit(98);
}
