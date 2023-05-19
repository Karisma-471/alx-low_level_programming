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
	void *new_ptr; 
	unsigned int copy_data_size;

	if (new_size == 0)
	{
		free (ptr);
		return (NULL);
	}

	if (ptr == NULL)
		return malloc(new_size);

	if (new_size == old_size)
		return (ptr);

	new_ptr = malloc(new_size);

	if (new_ptr != NULL)
	{
		unsigned int copy_size = old_size < new_size ? old_size : new_size,
		memcpy(new_ptr, ptr, copy_data_size);
		free (ptr);
	}

	return (new_ptr);
}
