#include "main.h"
#include <stdlib.h>

/**
  * free_grid - frees the 2D grid created in the alloc_grid function
  * @grid: to to be freed
  * @height: height of the grid
  */

void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
		free(grid[x]);

	free(grid);
}
