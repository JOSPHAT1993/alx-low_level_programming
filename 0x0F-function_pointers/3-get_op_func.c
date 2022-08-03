#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * get_op_func-function to the the operators
 *
 * @s:'function pointer variable'
 *
 * Return:Integer values
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;

	while (ops[i].f != NULL)
	{
		if (*s == *(ops[i].op) && s[i] == '\0')
		{
			return (ops[i].f);
		}
		i++;
	}
	printf("Error\n");
	exit(98);
}

