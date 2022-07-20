#include "main.h"
/**
 * _pow_recursion-main function to print the x power y
 *
 * @x:'Integer variable1'
 * @y:'Integer variable2'
 *
 * Return:The value of x power y
 */
int _pow_recursion(int x, int y)
{
	if ( y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, (y - 1)));
	}
}
