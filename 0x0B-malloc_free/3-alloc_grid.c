#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - allocate a 2D grid of integer with the
 * specified width and height
 * @width: the width of the grid
 * @height: th height of the grid
 * Return: a pointers to a newly allocated 2D grid
 * of the integer , return NULL on failure.
 */
int **alloc_grid(int width, int height)
{
	int **a;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	a = malloc(sizeof(int *) * height);

	if (a == NULL)
		return (NULL);
	for (i = 0; i < height;i ++)
	{
		a[i] = malloc(sizeof(int) * width);

		if (a[i] == NULL)
		{
			for (; i >= 0; i--)
				free(a[i]);
			free(a);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			a[i][j] = 0;
	}
	return (a);
}
