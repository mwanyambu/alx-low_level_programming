#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: 0 if big endian else 1 if little endian
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *en = (char *) &x;

	if (*en)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
