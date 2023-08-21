#include "main.h"

/**
  * _memcpy - functions that copy memory area
  * @dest: where memory is stored
  * @src: where memory is copied
  * @n: number of bytes
  *
  * Return: value to the destination
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int o;

	for (o = 0; o < n; o++)
	{
		dest[o] = src[o];
	}

	return (dest);
}
