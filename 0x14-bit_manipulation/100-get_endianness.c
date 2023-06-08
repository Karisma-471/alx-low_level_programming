#include <stdio.h>
#include "main.h"

/**
  * get_endianness - A function that checks the endianness
  *
  * Return: 0 if it is big endian or 1 if it is little
  */
int get_endianness(void)
{
	unsigned int j = 0;
	char *c = (char *)&j;

	if (*c == 1)
		return (0);

	else
	{
		return (1);
	}
}
