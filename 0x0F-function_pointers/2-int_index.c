#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - searches for an integer
 * @array: the array
 * @size: size of the array
 * @cmp: function pointer
 * Return: -1 if no match is found or negative else 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array && cmp)
	{
		for (a = 0; a < size; a++)
		{
			if (cmp(array[a]) != 0)
			{
				return (a);
			}
		}
	}
	return (-1);
}
