#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  * string_nconcat - function that concatenates two strings
  * @s1: string one
  * @s2: string two
  * @n: number of bytes
  *
  * Return: 0 on success
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = strlen(s1);
	unsigned int len2 = strlen(s2);
	char *ptr;

	if (n >= len2)
		n = len2;

	ptr = malloc(sizeof(char) * (len1 + n + 1));

	if (!ptr)
		return (NULL);

	strcpy(ptr, s1);
	strncat(ptr, s2, n);


	return (ptr);
}
