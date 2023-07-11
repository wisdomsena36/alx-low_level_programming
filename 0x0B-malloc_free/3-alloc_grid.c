#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - It creates a 2-dimensional array of integers.
 * @width: The width of grid.
 * @height: The height of the grid.
 *
 * Return: NULL if width or height is 0 or memory allocation fails
 * Otherwise a poiter to the 2-dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
	int **g;
	int i;
	int j;

	if (width <= 0 || height <= 0)
		return (NULL);

	g = malloc(sizeof(int *) * height);
	if (g == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		g[i] = malloc(sizeof(int) * width);
		if (g[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(g[j]);
			free(g);
			return (NULL);
		}

		j = 0;
		while (j < width)
		{
			g[i][j] = 0;
			j++;
		}
	}

	return (g);
}
