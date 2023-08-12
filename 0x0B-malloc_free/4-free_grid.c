#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - free the memory allocated for a 2D grid of integers
 * @grid: the 2D grid to be freed
 * @height: the height of the grid.
 * Return: 0
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
