#include "main.h"
/**
 * free_grid - frees a space and allocates a grid
 * @grid: 2d grid
 * @height: height dimension of grid
 * Return: free grid
 *
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

