#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - function free the grid
 * @grid: grid of memories
 * @height: int
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
