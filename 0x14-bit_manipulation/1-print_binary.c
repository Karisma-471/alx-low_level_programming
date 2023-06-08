#include <stdio.h>
#include "main.h"

/**
  * print_binary - A function that prints
  * the binary representation of a number
  * @n: the number to be printed
  *
  * Return: void
  */
void print_binary(unsigned long int n)
{
	unsigned int val;
	int a, num = 0;

	for (a = 63; a >= 0; a--)
	{
		val = n >> a;

		if (val & 1)
		{
			_putchar('1');
			num++;
		}
		else if (num)
			_putchar('0');
	}

	if (!num)
		_putchar('0');
}
