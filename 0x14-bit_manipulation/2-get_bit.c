#include <stdio.h>
#include "main.h"

/**
 * get_bit - A function that returns the value of a bit
 * at a given index
 * @n: the value to be used
 * @index: the index of the bit
 *
 * Return: value of the bit or -1 if an error occurs
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bitval;

	if (index > 63)
		return (-1);

	else
	{
		bitval = (n >> index) & 1;
	}

	return (bitval);
}
