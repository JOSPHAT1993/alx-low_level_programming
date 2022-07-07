#include "main.h"
/**
 * _isupper-main function
 *
 * @c:'Character variable'
 *
 * Return:1 for upper, 0 for lower 
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
