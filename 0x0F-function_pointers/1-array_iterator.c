#include "function_pointers.h"
#include <stdio.h>

/**
  * array_iterator - a function that executes a function
  * as a parameter on an array
  * @size: the size of the array
  * @action: the pointer to the function to be used
  * @array: the array element
  * Return: void
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int n;

	if (array == NULL || action == NULL)
		return;

	for (n = 0; n < size; n++)
	{
		action(array[n]);
	}
}
