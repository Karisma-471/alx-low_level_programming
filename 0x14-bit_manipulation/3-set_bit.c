#include <stdio.h>
#include "main.h"

/**
 * set_bit - A function that sets the value of a bit at a given index
 * @n: the value to be used
 * @index: the index of the value to be set
 *
 * Return: 1 or -1 when an error occurs
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	else
	{
		*n |= (1UL << index);
	}

	return (1);
}
