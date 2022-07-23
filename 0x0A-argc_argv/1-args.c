#include <stdio.h>
#include <string.h>
/**
 * main-Entry function
 *
 * @argc:'Argument length varibale'
 * @argv:'Array of arguments'
 *
 * Return:Always 0 (Success)
 */
int main(int argc, __attribute__((unused)) char* argv[])
{
	printf("%d", argc - 1);
	return (0);
}
