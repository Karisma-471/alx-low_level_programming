#include "main.h"

/**
  * _strncpy - a function that copies a string
  * @dest: value to be used
  * @src: value to be used
  * @n: value to be used
  *
  * Return: dest
  */
char *_strncpy(char *dest, char *src, int n)
{
	int o;

	o = 0;
	while (o < n && src[o] != '\0')
	{
		dest[o] = src[o];
		o++;
	}
	while (o < n)
	{
		dest[o] = '\0';
		o++;
	}

	return (dest);
}
