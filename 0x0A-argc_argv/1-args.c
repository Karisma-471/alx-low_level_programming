#include "main.h"
#include <stdio.h>

/**
  * main - A program that prints the number of argument
  * passed into it
  * @argc: the argument count
  * @argv: the argument variable
  *
  * Return: Always 0
  */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
