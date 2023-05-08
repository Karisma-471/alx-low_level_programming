#include "main.h"

/**
  * _memset - fill memory with a specific value
  * @s: address of memory to be filled
  * @b: the value
  * @n: number of value to fill
  *
  * Return: The new value for n bytes
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int o;

	for (o = 0; o < n; o++)
		s[o] = b;

	return (s);
}
