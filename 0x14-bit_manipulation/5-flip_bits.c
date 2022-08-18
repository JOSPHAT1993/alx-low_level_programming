#include "main.h"
/**
 * flip_bits-main function to flip bits
 *
 * @n:'Integer variable'
 * @m:'Integer varibal'
 *
 * Return:Flipped bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int var, count = 0;

	var = n ^ m;

	while (var > 0)
	{
		count += var & 1;
		var >>= 1;
	}
	return (count);
}
