#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
  * print_all - write a function that prints anything
  * @format: the value to be used
  *
  * Return: void
  */
void print_all(const char * const format, ...)
{
	unsigned int j;
	va_list args;
	char *s, *separator;

	va_start(args, format);

	separator = "";

	j = 0;
	while (format && format[j])
	{
		switch (format[j])
		{
			case 'c':
				printf("%s%c", separator, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(args, int));
			case 'f':
				printf("%s%f", separator, va_arg(args, double));
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s%s", separator, s);
			default:
				j++;
				continue;
		}
		separator = ", ";
		j++;
	}

	printf("\n");
	va_end(args);
}
