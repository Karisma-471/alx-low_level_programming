#include "main.h"

/**
  * print_numbers - print numbers from 0 to 9
  * followed by a new line
  * Return: Always 0
  */
void print_numbers(void)
{
	char j;

	for (j = '0'; j <= '9'; j++)
		_putchar(j);
	_putchar('\n');
}
