#include "main.h"
/**
 * binary_to_uint-main function to change binary to uint
 *
 * @b:'Character variable'
 *
 * Return:Decimal value of the binary code
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int x = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (*b)
	{
		if (*b == '1')
		{
			x = (x << 1) | 1;
		}
		else if (*b == '0')
		{
			x <<= 1;
		}
		else
		{
			return (0);
		}
		b++;
	}
	return (x);
}

