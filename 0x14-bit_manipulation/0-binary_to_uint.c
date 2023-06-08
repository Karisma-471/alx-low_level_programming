#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * binary_to_uint - A function that converts a binary number
  * to an unsigned int
  * @b: pointer that points to the string to be used
  *
  * Return: the converted value or 0 if null or have more characters
  * in string
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int value = 0;
	unsigned int m = 0;

	if (b == NULL)
		return (0);

	while (b[m] != '\0')
	{
		if (b[m] != '0' && b[m] != '1')
			return (0);

		else
		{
			value = (value << 1) + (b[m] - '0');
		}
		m++;
	}

	return (value);
}
