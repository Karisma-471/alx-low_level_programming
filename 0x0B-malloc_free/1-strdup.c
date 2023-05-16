#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * _strdup - A function that returns a pointer
  * to newly allocated space in memory
  * @str: the character to be used
  *
  * Return: 0 on success
  */
char *_strdup(char *str)
{
	int o, m = 0;

	char *zz;

	if (str == NULL)
		return (NULL);

	o = 0;

	while (str[o] != '\0')
		o++;

	zz = malloc(sizeof(char) * (o + 1));

	if (zz == NULL)
		return (NULL);

	for (m = 0; str[m]; m++)
		zz[m] = str[m];

	return (zz);
}

