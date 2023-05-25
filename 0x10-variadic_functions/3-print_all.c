#include <stdio.h>
#include <stdarg.h>

/**
  * print_all - A function that prints anything
  * @format: the list of types of arguments to be used
  *
  * Return: void
  */
void print_char(char c)
{
	printf("%c", c);
}

void print_int(int i)
{
	printf("%d", i);
}

void print_float(float f)
{
	printf("%f", f);
}

void print_string(char *s)
{
	if (s == NULL)
	{
		printf("(nil)");
	}
	else
	{
		printf("%s", s);
	}
}

void print_all(const char * const format, ...)
{
	va_list arg;
	const char *ptr;

	va_start(arg, format);
	ptr = format;

	while (*ptr != '\0')
	{
		if (*ptr == 'c')
		{
			char c = (char)va_arg(arg, int);
			print_char(c);
		}
		else if (*ptr == 'i')
		{
			int i = va_arg(arg, int);
			print_int(i);
		}
		else if (*ptr == 'f')
		{
			float f = (float)va_arg(arg, double);
			print_float(f);
		}
		else if (*ptr == 's')
		{
			char *s = va_arg(arg, char *);
			print_string(s);
		}


		ptr++;
		if (*ptr != '\0' && (*ptr == 'c' ||
			*ptr == 'i' ||
			*ptr == 'f' ||
			*ptr == 's'))
		{
			printf(", ");
		}
	}

	va_end(arg);
	printf("\n");
}
