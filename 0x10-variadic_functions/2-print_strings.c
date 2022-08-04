#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings-main function to print strings
 *
 * @seperator:'String Variable'
 * @n:'Integer variable'
 *
 * Return:Strings
 */
void print_strings(const char *seperator, const unsigned int n, ...)
{
	unsigned int i;

	va_list (my_string);

	va_start(my_string, n);

	for (i = 0; i < n; i++)
	{
		if (my_string == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", va_arg(my_string, char *));
		}
		if (seperator != NULL && i != n-1)
		{
			printf("%s", seperator);
		}
	}
	va_end(my_string);
	printf("\n");
}


