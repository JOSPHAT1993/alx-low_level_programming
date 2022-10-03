#include "main.h"
/**
 * _isdigit-main function to test for digits
 *
 * @c:'Integer Variable'
 *
 * Return:1 for integer, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

