#include "main.h"

/**
  * print_rev - print a string in reverse followed by new line
  * @s: the pointer that points to the string
  * Return: void
  */
void print_rev(char *s)
{
	int sum = 0;
	int i;

	while (*s != '\0')
	{
		sum++;
		s++;
	}
	s--;
	for (i = sum; i > 0; i--)
	{
		putchar(*s);
		s--;
	}
	putchar ('\n');
}
