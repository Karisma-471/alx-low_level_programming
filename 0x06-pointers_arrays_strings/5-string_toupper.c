#include "main.h"

/**
  * string_toupper - changes all lowercase characters of a string to uppercase
  * @n: value to be checked
  * Return: pointer to the converted string
  */
char *string_toupper(char *n)
{
	int o;

	o = 0;
	while (n[o] != '\0')
	{
		if (n[o] >= 'a' && n[o] <= 'z')
			n[o] = n[o] - 32;
		o++;
	}
	return (n);
}
