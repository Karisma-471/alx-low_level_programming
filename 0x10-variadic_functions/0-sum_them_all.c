#include "variadic_functions.h"
#include <stdarg.h>

/**
  * sum_them_all - calculates the sum of all its parameters
  * @n: the number of parameters
  *
  * Return: The sum of the parameters or 0
  */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int x, sum = 0;

	va_start(args, n);

	for (x = 0; x < n; x++)
	sum += va_arg(args, int);

	va_end(args);

	return (sum);
}
