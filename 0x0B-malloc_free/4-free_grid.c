#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * free_grid - A function that free two dimensional grid
  * @grid: input to be used
  * @height: input to be used
  *
  * Return: 0 on success
  */
void free_grid(int **grid, int height)
{
	int o;

	if (grid == NULL)
		return;

	for (o = 0; o < height; o++)
	{
		free(grid[o]);
	}

	free(grid);
}
