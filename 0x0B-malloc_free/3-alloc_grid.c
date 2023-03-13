/*
 * File: 3-alloc_grid.c
 * Auth: Abdulsamad.
 */

#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to a
 *		2 dimensional array of integers.
 * @width: width of the grid.
 * @height: height of the grid.
 *
 * Return: on failure - NULL
 *	Otherwise - pointer to a 2 dimensional array of integers
 */

int **alloc_grid(int width, int height)
{
	int i, j, **grid;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = (int **)malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(sizeof(int) * width);

		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(grid[j]);

			free(grid);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}

	return (grid);
}
