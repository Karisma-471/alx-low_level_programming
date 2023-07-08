#include <stdio.h>
#include "main.h"

/**
  * flip_bits - A function that returns a number of bits to flip
  * @n: first variable
  * @m: second variable
  *
  * Return: the flpped numbers
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bitDiff = n ^ m;
	unsigned long int flipCount = 0;

	while (bitDiff)
	{
		flipCount += bitDiff & 1;
		bitDiff >>= 1;
	}

	return (flipCount);
}
