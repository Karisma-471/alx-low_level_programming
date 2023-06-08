#include <stdio.h>
#include "main.h"

/**
  * get_bit - A function that returns the value of a bit
  * @n: the value to be used
  * @index: the indext of the bit to be retrieved
  *
  * Return: the value of the bit or -1 if an error occurs
  */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > 63)
		return (-1);

	else
	{
		bit = (n >> index) & 1;
	}

	return (bit);
}
