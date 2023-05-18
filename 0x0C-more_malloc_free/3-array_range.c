#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * *array_ranger - function that creates an array of integers
  * @min: the value
  * @max: the value
  *
  * Return: 0 on success
  *
  * Description: This function dynamically allocates an array
  * of integers with values ranging from minimum to maximum
  */
int *array_range(int min, int max)
{
	int *arr;
	int i;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * (max - min + 1));

	if (arr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		arr[i] = min;

	return (arr);
}
