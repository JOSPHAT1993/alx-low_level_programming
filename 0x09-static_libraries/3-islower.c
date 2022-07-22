#include "main.h"
/**
 * _islower-calling the functions from main.h
 *
 * @c:'The code checks whther an alphabet is lowercase'
 *
 * Returns:1 if true, 0 if false
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
