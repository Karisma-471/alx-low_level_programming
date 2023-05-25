#include <stdio.h>
#include <stdarg.h>

/**
  * print_strings - a function that print strings
  * @separator: the string used
  * @n: the number of strings used
  *
  * Return: void
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strg;
	char *str;
	unsigned int p;

	va_start(strg, n);

	for (p = 0; p < n; p++)
	{
		str = va_arg(strg, char *);

	if (str == NULL)
	printf("(nil)");

	else
	printf("%s", str);

	if (p != (n - 1) && separator != NULL)
	printf("%s", separator);
	}

	printf("\n");

	va_end(strg);
}
