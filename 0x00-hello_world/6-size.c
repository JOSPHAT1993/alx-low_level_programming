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

	printf("Size of char:", sizeof(CharType), "byte(s)\n");
	printf("Size of int:", sizeof(IntType), "byte(s)\n");
	printf("Size of long int:", sizeof(LongintType), "byte(s)\n");
	printf("Size of long long int:", sizeof(LlongintType), "byte(s)\n");
	printf("Size of float type:", sizeof(FloatType), "byte(s)\n");
	return (0);
}
