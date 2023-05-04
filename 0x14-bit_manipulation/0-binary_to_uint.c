#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: pointer to string on 0 and 1 chars
 * Return: unsigned integer
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int unint = 0;
	int i;

	if (b == NULL)
	{
		return (0);
	}
	for (i = 0; b[i]; i++)
	{
		if (b[i] > '1' || b[i] < '0')
		{
			return (0);
		}
		unint = 2 * unint + (b[i] - '0');
	}
	return (unint);
}
