#include <stdio.h>
#include "main.h"

/**
 * print_binary - A function that prints a binary rep of a num
 * @n: the number to be printed
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned int value;
	int i, numb = 0;

	for (i = 63; i >= 0; i--)
	{
		value = n >> i;

		if (value & 1)
		{
			_putchar('1');
				numb++;
		}
		else if (numb)
			_putchar('0');
	}
	if (!numb)
		_putchar('0');
}
