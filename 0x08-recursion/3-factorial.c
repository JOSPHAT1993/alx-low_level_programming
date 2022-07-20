#include "main.h"
/**
 * factorial-main function to find factorial of a number
 *
 * @n:'Integer variable'
 *
 * Return:Factorial of a number passed to it
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
