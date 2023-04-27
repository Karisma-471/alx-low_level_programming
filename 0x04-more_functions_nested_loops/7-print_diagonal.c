#include "main.h"

/**
  * print_diagonal - print a diagonal line
  * end with a new line
  * @n: number of times
  *
  * Return: 0
  */
void print_diagonal(int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		_putchar('\\');
	}
	_putchar('\n');
}
