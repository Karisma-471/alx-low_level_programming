#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * main - A program that adds positive numbers
  * @argc: the argument count
  * @argv: the argument variable
  *
  * Return: Always 0
  */
int main(int argc, char *argv[])
{
	int o, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (o = 1; o < argc; o++)
	{
		int p, num = 0, len = 0;

		while (argv[o][len] != '\0')
			len++;

		p = 0;

		while (p < len)
		{
			if (argv[o][p] >= '0' && argv[o][p] <= '9')
			{
				num = num * 10 + (argv[o][p] - '0');
				p++;
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += num;
	}

	printf("%d\n", sum);

	return (0);
}
