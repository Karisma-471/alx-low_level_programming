#include <stdio.h>
#include <stdlib.h>

/**
  * main - A program that prints a minimum number of coins
  * @argc: the argument count
  * @argv: the argument variable
  *
  * Return: 0 on success
  */
int main(int argc, char **argv)
{
	int money = atoi(argv[1]);
	int count = 0;
	int i;
	int cents[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	else if (money < 0)
	{
		printf("0\n");
	}
	else
	{
		for (i = 0; i < 5; i++)
		{
			if (cents[i] <= money)
			{
				count += money / cents[i];
				money %= cents[i];
				if (money == 0)
				{
					break;
				}
			}
		}
		printf("%d\n", count);
	}
	return (0);
}
