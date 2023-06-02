#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  * _realloc - function that reallocate a memory block
  * using malloc and free
  * @ptr: pointer which points the memory
  * @old_size: size of space
  * @new_size: new size of the memory block
  *
  * Return: 0 on success
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	unsigned int j;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);

		if (new_ptr == NULL)
			return (NULL);

		return (new_ptr);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
		return (NULL);

	for (j = 0; j < old_size && j < new_size; j++)
	{
		new_ptr[j] = ((char *) ptr)[j];
	}

	free(ptr);
	return (new_ptr);
}
