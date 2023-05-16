#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * alloc_grid - A function that returns a pointer
  * to two dimensional array of integers
  * @width: the input to use
  * @height: the input to use
  *
  * Return: 0 on success
  */
int **alloc_grid(int width, int height)
{
	int **grid;
	int o, p;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = (int **)malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	for (o = 0; o < height; o++)
	{
		grid[o] = (int *)malloc(width * sizeof(int));
		if (grid[o] == NULL)
		{
			for (p = 0; p < o; p++)
				free(grid[p]);
			free(grid);
			return (NULL);
		}

		for (p = 0; p < width; p++)
		grid[o][p] = 0;
	}

	return (grid);
}
