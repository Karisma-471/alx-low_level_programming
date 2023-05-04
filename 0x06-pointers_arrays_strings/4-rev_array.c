#include "main.h"

/**
  * reverse_array - a function that reverse array of integers
  * @a: the value to be used
  * @n: number of elements of array
  *
  * Return: 0
  */
void reverse_array(int *a, int n)
{
	int o;
	int p;

	for (o = 0; o < n--; o++)
	{
		p = a[o];
		a[o] = a[n];
		a[n] = p;
	}
}
