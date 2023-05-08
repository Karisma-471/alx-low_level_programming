#include <stdio.h>
#include "main.h"

/**
  * print_diagsums - Function that prints the sum of two diagonals
  * @a: the value
  * @size: the size of the value
  *
  * Return: Always 0
  */
void print_diagsums(int *a, int size)
{
	int o, sum1 = 0, sum2 = 0;

	for (o = 0; o < size; o++)
	{
		sum1 += *(a + o * size + o);
		sum2 += *(a + o * size + (size - o - 1));
	}

	printf("%d, %d\n", sum1, sum2);
}
