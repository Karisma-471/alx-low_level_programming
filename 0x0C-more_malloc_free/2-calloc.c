#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
  * _calloc - function that allocates memory for an array
  * @nmemb: number for array
  * @size: size of bytes
  *
  * Return: 0 on success
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr != NULL)
		memset(ptr, 0, nmemb * size);

	return (ptr);
}
