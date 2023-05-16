#include <stdlib.h>
#include "main.h"

/**
  * create_array - function that create an array of chars
  * @c: The character used to initialize the array
  * @size: The size of the array
  *
  * Return: 0 on success
  */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int o;

	str = malloc(sizeof(char) * size);

	if (size == 0 || str == NULL)
	{
		return (NULL);
	}

	for (o = 0; o < size; o++)
		str[o] = c;

	return (str);
}
