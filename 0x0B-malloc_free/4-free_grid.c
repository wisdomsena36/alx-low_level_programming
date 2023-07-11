#include "main.h"
#include <stdlib.h>

/**
 * free_grid - It frees a 2 dimensional array of integers.
 * @grid: The grid to be freed.
 * @height: The height of the grid.
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
		return;

	i = 0;
	while (i < height)
	{
		free(grid[i]);
		i++;
	}

	free(grid);
}
