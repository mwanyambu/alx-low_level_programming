#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointer to a string of 0 and 1 chars
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int uint = 0;
	int x;

	if (b == NULL)
	{
		return (0);
	}
	for (x = 0; b[x]; x++)
	{
		if (b[x] > '1' || b[x] < '0')
		{
			return (0);
		}
		uint = 2 * uint + (b[x] - '0');
	}
	return (uint);
}
