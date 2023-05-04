#include "main.h"

/**
 * get_endianness - checks for endianness
 * Return: 0 if big endian else 1
 */

int get_endianness(void)
{
	unsigned int j  = 1;
	char *endian = (char *) &j;

	if (*endian)
		return (1);
	else
		return (0);
}
