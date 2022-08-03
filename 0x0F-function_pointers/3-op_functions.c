#include <stdio.h>
#include "3-calc.h"
/**
 * op_add-main function to add values
 * op_sub-main function to subtract values
 * op_mul-main function to multiply values
 * op_div-main function to divide vaules
 * op_mod-main function to find modulus of values
 *
 * @a:'Integer variable'
 * @b:'Integer varibale'
 *
 * Return:addition, subtraction, multplication, division and modulus of numbers
 */
int op_add(int a, int b)
{
	return (a + b);
}
int op_sub(int a, int b)
{
	return (a - b);
}
int op_mul(int a, int b)
{
	return (a * b);
}
int op_div(int a, int b)
{
	return (a / b);
}
int op_mod(int a, int b)
{
	return (a % b);
}

