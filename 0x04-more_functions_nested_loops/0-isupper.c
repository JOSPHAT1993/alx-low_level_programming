#include "main.h"
/**
 * _isupper-main function
 *
 * @c:'Integer variable'
 *
 * Return: 1 for supper, 0 
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
