#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * @array: pointer to first element of searched array
 * @size: number of elements in array
 * @value: value being searched for in array
 * Return: -1 if array is null
 */

int binary_search(int *array, size_t size, int value)
{
	size_t x, center;
	size_t left = 0;
	size_t right = size - 1;

	if (array == NULL)
	{
		return (-1);
	}

	while (left <= right)
	{
		center = left + (right - left) / 2;

		printf("Searching in array: ");
		for (x = left; x <= right; x++)
		{
			printf("%d", array[x]);
			if (x < right)
			{
				printf(", ");
			}
		}
		printf("\n");

		if (array[center] == value)
		{
			return (center);
		}
		else if (array[center] < value)
		{
			left = center + 1;
		}
		else
		{
			right = center - 1;
		}
	}
	return (-1);
}
