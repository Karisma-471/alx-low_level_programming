#include "main.h"
#include <stdio.h>

/**
  * main - A program that prints all argument it receives
  * @argc: the argument count
  * @argv: the argument variable
  *
  * Return: Always 0
  */
int main(int argc, char *argv[])
{
	int o;

	for (o = 0; o < argc; o++)
	{
		printf("%s\n", argv[o]);
	}
	return (0);
}
