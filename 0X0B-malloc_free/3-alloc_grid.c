#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to two dim arr
 * @width: first dimension
 * @height: second dim arr
 * Return: pointer else NULL
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int x, y;

	if (height <= 0 || width <= 0)
		return (NULL);
	for (x = 0; x < height; x++)
	{
		array[x] = (int *) malloc(sizeof(int) * width);
		if (array[x] == NULL)
		{
			free(array);
			for (y = 0; y <= x; x++)
				free(array[y]);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
		araay[x][y] = 0;
	return (array);
}



