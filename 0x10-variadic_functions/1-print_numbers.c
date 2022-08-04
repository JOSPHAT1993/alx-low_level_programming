#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers-main function to print numbers
 *
 * @seperator:'Const Variable char'
 * @n:'Variable intenger'
 *
 * Return:List of numbers
 */
void print_numbers(const char *seperator, const unsigned int n, ...)
{
	unsigned int i;
	va_list(my_numbers);

	va_start(my_numbers, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(my_numbers, int));
		if (seperator != NULL && i != n-1)
		{
			printf("%s", seperator);
		}
	}
	va_end(my_numbers);
	printf("\n");
}


