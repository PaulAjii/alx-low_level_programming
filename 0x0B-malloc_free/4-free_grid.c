#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees the memory allocated for the grid
 * created by alloc_grid()
 * @grid: grid to free
 * @height: height of the grid
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == NULL || height == 0)
		return;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}

	free(grid);
}
