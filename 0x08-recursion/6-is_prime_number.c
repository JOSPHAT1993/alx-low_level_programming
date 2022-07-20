#include "main.h"

int make_use_of(int m, int n);
/**
 * is_prime_number-main function to check for prime nums
 *
 * @n:'Integer variable'
 *
 * Return:Integer 1 for prim number and 0 for non prime
 */
int is_prime_number(int n)
{
	int i = 2;

	if (n < 2)
	{
		return (0);
	}
	else
	{
		return (make_use_of(i, n));
	}
}
/**
 * make_use_of-function to help print the prime nums
 *
 * @m:'Integer variable1'
 * @n:'Integer variable2'
 *
 * Return:Prime numbers
 */
int make_use_of(int m, int n)
{
	if (n % m == 0 && n != m)
	{
		return (0);
	}
	else if (n % m != 0 && m < n)
	{
		return (make_use_of(m + 1, n));
	}
	else
	{
		return (1);
	}
}
