#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name-function to print name of passed
 *
 * @name:'String variable'
 * @f:'Function pointer'
 */
void print_name(char *name, void (*f)(char *))
{
		f(name);
}
