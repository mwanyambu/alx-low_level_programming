#include"main.h"
/**
 * binary_to_uint - function that converts binary to int
 * @b: pointer to a string of zeros and ones
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int y = 0;
	int a;

	if (b == NULL)
	{
		return (0);
	}
	for (a = 0; b[a]; a++)
	{
		if (b[a] > '1' || b[a] < '0')
		{
			return (0);
		}
		y = 2 * y + (b[a] - '0');
	}
	return (y);
}
