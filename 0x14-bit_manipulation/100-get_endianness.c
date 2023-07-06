#include "main.h"

/**
 * get_endianness - checks for endianness
 * Return: 0 if big endian else 1 if little endian
 */
int get_endianness(void)
{
	unsigned int z = 1;
	char *e = (char *) &z;

	if (*e)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
