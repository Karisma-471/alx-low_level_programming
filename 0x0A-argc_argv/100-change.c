#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * main - A program that prints a minimum number of coins
  * @argc: the argument count
  * @argv: the argument variable
  *
  * Return: 0 on success
  */
int main(int argc, char *argv[])
{
	int cents, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	while (cents > 0)
	{
		if (cents >= 25)
		{
			coins++;
			cents -= 25;
		}
		else if (cents >= 10)
		{
			coins++;
			cents -= 10;
		}
		else if (cents >= 5)
		{
			coins++;
			cents -= 5;
		}
		else
		{
			coins++;
			cents--;
		}
	}

	printf("%d\n", coins);

	return (0);
}
