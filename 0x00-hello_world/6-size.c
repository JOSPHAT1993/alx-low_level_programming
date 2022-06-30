#include <stdio.h>
/**
 * main - Entry point
 * Description : Printing the sizes of datatypes in Computer
 *
 * return : Always 0 (success)
 */
int main(void)
{
	int IntType;
	char CharType;
	long int LongintType;
	long long int LlongintType;
	float FloatType;

	printf("Size of a char: %lu byte(s)\n", sizeof(CharType));
	printf("Size of an int: %lu byte(s)\n", sizeof(IntType));
	printf("Size of a long int: %lu byte(s)\n", sizeof(LongintType));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(LlongintType));
	printf("Size of a float type: %lu byte(s)\n", sizeof(FloatType));
	return (0);
}
