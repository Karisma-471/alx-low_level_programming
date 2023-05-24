#include <stdio.h>
#include "function_pointers.h"

/**
  * int_index - a function that searches for an integer
  * @array: a pointer to an array of integers
  * @size: the number of elements in the array
  * @cmp: a pointer to the function used to compare values
  * Return: 0 else -1
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int n;

	if (size <= 0)
		return (-1);

	for (n = 0; n < size; n++)
	{
		if (cmp(array[n]) != 0)
			return (n);
	}

	return (-1);
}
