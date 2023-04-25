#include "main.h"
/**
  * print_last_digit - print the last digit
  *
  * @n: input number as an integer
  *
  * Return: The value of the last digit
  */
int print_last_digit(int n)
{
	int ld;

	if (n < 0)
		n *= -1;

	ld = n % 10;

	_putchar(ld + '0');

	return (ld);
}
