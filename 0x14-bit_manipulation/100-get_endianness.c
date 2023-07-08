#include <stdio.h>
#include "main.h"

/**
 * get_endianness - A function that check the endianness
 *
 * Return: 0 if it is big endian or 1 if it is little
 */
int get_endianness(void)
{
	unsigned int a = 0;
	char *c = (char *)&a;

	if (*c == 1)
		return (0);

	else
	{
		return (1);
	}
}
