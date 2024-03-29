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

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	array = malloc(sizeof(int *) * height);
	if (array == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < height; x++)
	{
		array[x] = malloc(sizeof(int) * width);
		if (array[x] == NULL)
		{
			for (x = x - 1; x >= 0; x--)
			{
				free(array[x]);
			}
			free(array);
			return (NULL);
		}
	}
	for (x = 0; y < width; y++)
		array[x][y] = 0;
	return (array);
}



