#include <stdio.h>
/**
 * main - Entry point
 *
 * Description : Printing the sizes of datatypes in Computer
 *
 * return : Always 0 (success)
 */
int main(void)
{
	int IntType;
	char CharType;
	double DoubleType;
	float FloatType;

	printf("The size of Int type : %zu bytes\n", sizeof(IntType));
	printf("The size of Char type : %zu bytes\n", sizeof(CharType));
	printf("The size of Double type : %zu bytes\n", sizeof(DoubleType));
	printf("The size of Float type : %zu bytes\n", sizeof(FloatType));
	return(0);
}
