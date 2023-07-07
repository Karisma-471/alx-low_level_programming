#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * binary_to_uint - A function that converts a binary number
 * to an unsigned int
 * @b: pointer that points to the string to be used
 *
 * Return: the converted value or 0 if null
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int value = 0;
	unsigned int p = 0;

	if (b == NULL)
		return (0);

	for (p = 0; b[p] != '\0'; p++)
	{
		if (b[p] != '0' && b[p] != '1')
			return (0);
		value = (value << 1) + (b[p] - '0');
	}

	return (value);
}
