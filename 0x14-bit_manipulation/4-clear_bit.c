#include <stdio.h>
#include "main.h"

/**
  * clear_bit - A function that sets the value of a bit to 0
  * at a given index
  * @n: the pointer to be used
  * @index: the index of the bit
  *
  * Return: 1 if it worked -1 if an error occurs
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	else
	{
		*n = *n & ~(1UL << index);
	}

	return (1);
}
