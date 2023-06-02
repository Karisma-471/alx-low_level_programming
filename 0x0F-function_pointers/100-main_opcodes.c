#include <stdio.h>
#include <stdlib.h>

/**
  * main - a function that prints opcodes
  * @argc: the number of arguments to be checked
  * @argv: the arguments
  *
  * Return: Always 0 on success
  */
int main(int argc, char *argv[])
{
	int bytes, m;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arr = (char *)main;

	for (m = 0; m < bytes; m++)
	{
		if (m == bytes - 1)
		{
			printf("%02hhx\n", arr[m]);
			break;
		}
		printf("%02hhx ", arr[m]);
	}

	return (0);
}
