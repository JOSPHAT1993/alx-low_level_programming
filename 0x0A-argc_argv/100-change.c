#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * main-Entry Function
 *
 * @argc:'Variable of number of arguments'
 * @argv:'Variable of an array'
 *
 * Return:Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int coins = 0;
	int money;
	char *s;

	if (argc == 2)
	{
		s =strchr(argv[argc - 1], '-');
		if (s)
		{
			printf("0\n");
			return (0);
		}
		money = atoi(argv[argc - 1]);

		while (money > 0)
		{
			if (money % 25 == 0)
			{
				money = money - 25;
			}
			else if (money % 10 == 0)
			{
				money = money - 10;
			}
			else if (money % 5 == 0)
			{
				money = money - 5;
			}
			else if (money % 2 == 0)
			{
				money = money - 2;
			}
			else
			{
				money = money - 1;
			}
			coins ++;
		}
		printf("%d\n", coins);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
