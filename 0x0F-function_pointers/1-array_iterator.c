#include <function_pointers.h>
#include <stdlib.h>

/**
 * array_iterator - executes a function given as a parameter oneach element
 * @array: the iterator
 * @size: the size of the array
 * @action: function pointer
 */
void array_iterator(int *array, size_t size, void(*action)(int))
{
	unsigned int x;

	if (!array || !action)
	{
		return;
	}
	for (x = 0; x < size; x++)
	{
		action(array[x]);
	}
}
