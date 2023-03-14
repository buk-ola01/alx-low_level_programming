/*
 * File : 4-free_grid.c
 * Auth: Abdulsamad.
 */

#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function that frees a 2 dimensional grid.
 * @grid: grid to be freed.
 * @height: height of grid.
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
