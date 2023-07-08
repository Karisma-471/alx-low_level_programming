#include <stdio.h>
#include "main.h"

/**
 * clear_bit - A functiohat sets the value of a bit
 * @n: the pointer
 * @index: the index to be used
 *
 * Return: 1 or -1 if an error occurs
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	else
	{
		*n &= ~(1UL << index);
	}

	return (1);
}
