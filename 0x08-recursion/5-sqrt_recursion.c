#include "main.h"
/**
 * _helper-function to help the main function in calculating he sqrt
 *
 * @m:'Integer variable1'
 * @n:'Integer variable2'
 *
 * Return:Value of root
 */
int _helper(int m, int n)
{
	int k;

	if (m * m != n)
	{
		if (m > n)
		{
			return (-1);
		}
		else
		{
			k = _helper(m + 1, n);
			return (k + 1);
		}
	}
	return (0);
}
/**
 * _sqrt_recursion-main function to return the root to the user
 *
 * @n:'Integer variable'
 *
 * Return:The square root of n
 */
int _sqrt_recursion(int n)
{
	int s = 0;

	if (_helper(s, n) == n && n != 1)
	{
		return (-1);
	}
	return (_helper(s, n));
}

