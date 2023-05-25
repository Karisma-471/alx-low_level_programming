#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
  * print_numbers - print numbers followed by a new line
  * @separator: the string to be printed
  * @n: the number of integers to be used
  *
  * Return: void
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numb;
	unsigned int j;

	va_start(numb, n);

	for (j = 0; j < n; j++)
	{
		printf("%d", va_arg(numb, int));

		if (j != (n - 1) && separator != NULL)
		printf("%s", separator);
	}

	printf("\n");

	va_end(numb);
}
