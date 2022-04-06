#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - Frees a 2 dimensional grid,
 * previously created by your alloc_grid function.
 *
 * @grid: The grid.
 * @height: The height of the grid.
 * Return: Void.
 **/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}

