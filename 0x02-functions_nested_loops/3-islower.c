#include "main.h"
/**
 * _islower-calling the functions from main.h
 *
 * Description:'The code checks whther an alphabet is lowercase'
 *
 * Returns:Always a value from the function prototype
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
