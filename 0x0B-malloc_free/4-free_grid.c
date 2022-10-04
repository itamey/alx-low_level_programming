#include "main.h"

/**
 * free_grid - frees up memory occupied by already existing grid
 * @grid: grid to be freed drom memory
 * @height: height of the grid
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
