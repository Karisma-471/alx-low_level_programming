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

	if (size == 0)
		return (NULL);

	str = calloc(size, sizeof(char));

	if (str == NULL)
		return (NULL);

	for (unsigned int i = 0; i < size; i++)
		str[i] = c;

	return (str);
}
