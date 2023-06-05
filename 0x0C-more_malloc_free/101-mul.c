#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


/**
  * main - a function that multiplies two positive numbers
  * @argc: number of arguments
  * @argv: array of argument
  *
  * Return: 0 if successful or 98 if there's an error
  */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	int m, n;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	for (m = 1; m < argc; m++)
	{
		for (n = 0; argv[m][n] != '\0'; n++)
		{
			if (!isdigit(argv[m][n]))
			{
				printf("Error\n");
				return (98);
			}
		}
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	result = num1 * num2;
	printf("%d\n", result);

	return (0);
}
